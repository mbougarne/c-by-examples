#include <stdio.h>
#include <time.h>
#include <stdbool.h>

bool is_leap(int year);

int main(void) {
  int years[29] = {2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022, 2023, 2024, 2025, 2026, 2027, 2028};

  for (int i = 0; i < 29; i++) {
    if(is_leap(years[i])) {
      printf("%d is leap year\n", years[i]);
    } else {
      printf("%d is not a leap year\n", years[i]);
    }
  }

  return 0;
}

bool is_leap(int year) {
  if ((year % 4 != 0) && (year % 100 != 0)) {
    return false;
  } else {
    return true;
  }
}
