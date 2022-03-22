#ifndef SORT_H
#define SORT_H

class Sort {
  // add data members
  int *v;
  int nr;

public:
  // add constuctors
  Sort(int count, int min, int max); // ex 1
  Sort();                            // ex2
  Sort(int *x, int count);           // ex 3
  Sort(int count, ...);              // ex4
  Sort(char *ch);                    // ex5

  void InsertSort(bool ascendent = false);
  void QuickSort(bool ascendent = false);
  void BubbleSort(bool ascendent = false);
  void Print();
  int GetElementsCount() const;
  int GetElementFromIndex(int index) const;
};

#endif // SORT_H
