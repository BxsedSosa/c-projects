#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

time_t stop_watch(char format[]) {
  WINDOW *w;
  time_t saved_time = 0;

  w = initscr();
  if (w == NULL) {
    return -1;
  }

  timeout(1000);
  mvprintw(LINES / 2, COLS / 2 - 3, format, 00, 00, 00);
  noecho();
  for (time_t time = 0;; time++) {
    int c;
    struct tm *filtered_time = localtime(&time);
    mvprintw(LINES / 2, COLS / 2 - 3, format, filtered_time->tm_hour - 16,
             filtered_time->tm_min, filtered_time->tm_sec);
    c = getch();
    if (c == ' ') {
      saved_time = time;
      break;
    }
  }

  endwin();
  return saved_time;
}

void save_time(time_t saved_time, char format[]) {
  FILE *fptr;
  struct tm *filtered_time = localtime(&saved_time);

  fptr = fopen("timestamps.txt", "a");
  fprintf(fptr, format, filtered_time->tm_hour - 16, filtered_time->tm_min,
          filtered_time->tm_sec);
  fclose(fptr);
  printf("Saved Time\n");
}

int main() {
  char time_format[] = "%02d:%02d:%02d\n";
  time_t saved_time = stop_watch(time_format);
  save_time(saved_time, time_format);
  return 0;
}
