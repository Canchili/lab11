#include <stdarg.h>
#include <stdio.h>
#include <limits.h> 

int sum(int count, ...) {
  va_list ap;
  int sum = 0;

  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    sum += va_arg(ap, int);
  }
  va_end(ap);

  return sum;
}


int max(int count, ...) {
  va_list ap;
  int max_value = INT_MIN;

  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    int current_value = va_arg(ap, int);
    if (current_value > max_value) {
      max_value = current_value;
    }
  }
  va_end(ap);

  return max_value;
}

int min(int count, ...) {
  va_list ap;
  int min_value = INT_MAX; 

  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    int current_value = va_arg(ap, int);
    if (current_value < min_value) {
      min_value = current_value;
    }
  }
  va_end(ap);

  return min_value;
}


double average(int count, ...) {
  va_list ap;
  int sum = 0;

  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    sum += va_arg(ap, int);
  }
  va_end(ap);

  return (double)sum / count; 
}

int main() {
  printf("Сумма: %d\n", sum(5, 1, 2, 3, 4, 5));
  printf("Максимум: %d\n", max(5, 1, 2, 3, 4, 5));
  printf("Минимум: %d\n", min(5, 1, 2, 3, 4, 5));
  printf("Среднее: %.2f\n", average(5, 1, 2, 3, 4, 5));

  return 0;
}

