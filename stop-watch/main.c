#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void stop_watch() {
  time_t curr_time = 0;

  while (1) {
    struct tm *filtered_time = localtime(&curr_time);
    sleep(1);
    system("clear");
    curr_time++;
    printf("%02d:%02d:%02d\n", filtered_time->tm_hour - 16,
           filtered_time->tm_min, filtered_time->tm_sec);
  }
}

int main() {
  stop_watch();
  return 0;
}
