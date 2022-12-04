#include <stdio.h>

int main() {
  int n, t;
  printf("Enter the number of equations: ");
  scanf("%d", & n);
  float arr[n][n + 1];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 1; j++) {
      scanf("%f", & arr[i][j]);
    }
  }
  printf("\nInput Matrix:: \n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + 1; j++) {
      if (j == n) printf(" | ");
      printf("%.2lf ", arr[i][j]);
    }
    printf("\n");
  }
  float ans[n];
  for (int i = 0; i < n; i++) {
    ans[i] = 0;
  }
  printf("Enter the value of iterations : ");
  scanf("%d", & t);
  for (int c = 0; c < t; c++) {
    for (int i = 0; i < n; i++) {
      float temp = arr[i][n];
      for (int j = 0; j < n; j++) {
        if (j == i) continue;
        temp -= arr[i][j] * ans[j];
      }
      ans[i] = temp / arr[i][i];
    }
  }
  for (int i = 0; i < n; i++)
    printf("x%d: %f \n", i + 1, ans[i]);
  return 0;
}