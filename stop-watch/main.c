#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void stop_watch() {
  char time_format[] = "%02d:%02d:%02d\n";
  time_t curr_time = 0;

  initscr();

  while (1) {
    struct tm *filtered_time = localtime(&curr_time);
    sleep(1);
    clear();
    curr_time++;
    mvprintw(LINES / 2, COLS / 2 - 3, time_format, filtered_time->tm_hour - 16,
             filtered_time->tm_min, filtered_time->tm_sec);
    refresh();
  }

  getch();
  endwin();
}

int main() {
  stop_watch();
  return 0;
}
