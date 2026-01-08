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
  for (time_t time;; time++) {
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

int main() {
  char time_format[] = "%02d:%02d:%02d\n";
  time_t saved_time = stop_watch(time_format);
  struct tm *filter_saved_time = localtime(&saved_time);

  printf(time_format, filter_saved_time->tm_hour - 16,
         filter_saved_time->tm_min, filter_saved_time->tm_sec);
  return 0;
}
