#include <stdio.h>


void shellSort(int array[], int n) {
  int gap,i,j,temp;
  for ( gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i += 1)
     {
          temp = array[i];
      for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
        array[j] = array[j - gap];
      }
      array[j] = temp;
    }
  }
}

int main() {
  int size,i;
  scanf("%d",&size);
  int a[size];
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  shellSort(a, size);
  for(i=0;i<size;i++)
  printf("%d ",a[i]);
}