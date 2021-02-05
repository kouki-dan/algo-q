void path(int *d, int n) {
  for (int k = 0; k < n; k++){
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (d[i*n +j] > d[i*n +k] + d[k*n +j]) {
          d[i*n +j] = d[i*n +k] + d[k*n +j];
        }
      }
    }
  }
}

#include<stdio.h>
int main(void) {
  int d[4][4] = {
    { 0,   4,  10, 3},
    { 3,   0, 100, 7},
    { 100, 2,   0, 9},
    { 100, 7,  10, 0},
  };

  path((int *)d, 4);
  
  for(int i = 0; i < 4; i++) {
    printf("%3d, %3d, %3d, %3d\n", d[i][0], d[i][1], d[i][2], d[i][3]);
  }
}