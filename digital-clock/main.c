#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
  while (1) {
    system("clear");
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    printf("Date: %02d-%02d-%04d\nTime: %02d:%02d:%02d\n", local->tm_mon + 1,
           local->tm_mday, local->tm_year + 1900, local->tm_hour, local->tm_min,
           local->tm_sec);
    sleep(1);
  }
  return 0;
}
