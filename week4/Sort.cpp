#include "Sort.h"
#include <cstdlib>
#include <cstring>
#include <stdarg.h>
#include <stdio.h>
#include <time.h>

Sort::Sort(int count, int min, int max) {
  nr = count;
  v = new int[nr];
  srand(time(NULL));
  for (int i = 0; i < nr; i++) {
    int val = rand() % max + min;
    v[i] = val;
  }
}

Sort::Sort() : v(new int[4]{8, 3, 12, 7}) { this->nr = 4; }

Sort::Sort(int *x, int count) {
  nr = count;
  v = new int[nr];
  for (int i = 0; i < nr; i++) {
    v[i] = x[i];
  }
}

Sort::Sort(int count, ...) {
  nr = count;
  v = new int[nr];
  va_list ptr;
  va_start(ptr, nr);
  for (int i = 0; i < nr; i++)
    v[i] = va_arg(ptr, int);

  va_end(ptr);
}

Sort::Sort(char *ch) {
  int count = 0;
  for (int i = 0; i < strlen(ch); i++)
    if (ch[i] == ',')
      count++;
  nr = count + 1;
  v = new int[nr];
  char *p;
  char elem[256];
  strcpy(elem, ch);
  p = strtok(elem, ",");
  int j = 0;
  while (p != NULL) {
    v[j] = atoi(p);
    j++;
    p = strtok(NULL, ",");
  }
}

void Sort::InsertSort(bool ascendent) {
  int key, i, j;
  for (i = 1; i < nr; i++) {
    key = v[i];
    j = i - 1;
    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = key;
  }
}
void swap(int &a, int &b) {
  int val;
  val = a;
  a = b;
  b = val;
}
int partition(int a[], int l, int h) {
  int pivot = a[h];
  int i = l - 1;
  for (int j = l; j <= h - 1; j++) {
    if (a[j] < pivot) {
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i + 1], a[h]);
  return (i + 1);
}
void qs(int a[], int l, int h) {
  if (l < h) {
    int val = partition(a, l, h);
    qs(a, l, val - 1);
    qs(a, val + 1, h);
  }
}
void Sort::QuickSort(bool ascendent) { qs(v, 0, nr - 1); }

void Sort::Print() {
  for (int i = 0; i < nr; i++)
    printf("%d ", v[i]);
}

void Sort::BubbleSort(bool ascedent) {
  for (int i = 0; i < nr; i++)
    for (int j = 0; j < nr - i - 1; j++)
      if (v[j] > v[j + 1])
        swap(v[j], v[j + 1]);
}

int Sort::GetElementsCount() const { return nr; }

int Sort::GetElementFromIndex(int index) const { return v[index - 1]; }
