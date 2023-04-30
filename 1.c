#include <stdio.h>
#include <stdlib.h>

int main() 
{
  system("clear");
  int n;
  printf("arrayni olchovini kiriting: ");
  scanf("%d", &n);
  int *arr = calloc(n, sizeof(int)); 
  if (arr == NULL) {
    printf("xatolik yuz berdi\n");
    return -1;
  }
  printf("elemntlarini kiriting: ");
  for (int i = 0; i < n; i++)
    scanf("%d", arr + i);

  printf("birinchi xolat: ");
  for (int i = 0; i < n; i++)
    printf("%d ", *(arr + i));
  printf("\n");
  int h;
  printf("uchirilishi kerak bulgan sondi indexini kiriting: ");
  scanf("%d",&h);
  printf("uchiriladigan index, arr[h] = %d.\n", arr[h]);
  for (int i = 1; i < n; i++)
    arr[i - 1] = arr[i];
  arr = realloc(arr,(n-1)*sizeof(int));

  printf("natijadan keyin: ");
  for (int i = 0; i < n - 1; i++)
    printf("%d ", arr[i]);
  printf("\n");

  free(arr);
  return 0;
}
