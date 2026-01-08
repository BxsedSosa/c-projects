#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void stop_watch() {
  time_t curr_time = 0;

  initscr();

  struct tm *filtered_time = localtime(&curr_time);
  sleep(1);
  clear();
  curr_time++;
  mvprintw(LINES / 2, COLS / 2, "%02d:%02d:%02d\n", filtered_time->tm_hour - 16,
           filtered_time->tm_min, filtered_time->tm_sec);
  refresh();

  getch();
  endwin();
}

int main() {
  stop_watch();
  return 0;
}
