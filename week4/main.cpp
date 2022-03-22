#include "Sort.h"
#include <iostream>

int main() {
  // ex1
  Sort elem1(10, -50, 50);
  elem1.Print();
  std::cout << std::endl;
  std::cout << "Vectorul sortat (bubbleSort): " << std::endl;
  elem1.BubbleSort();
  elem1.Print();
  std::cout << std::endl;
  ;
  std::cout << "Nr de elem este: " << std::endl;
  printf("%d", elem1.GetElementsCount());
  std::cout << std::endl;
  std::cout << "Elem de la pozitia 3 (din vectorul sortat) este:" << std::endl;
  printf("%d", elem1.GetElementFromIndex(3));
  std::cout << std::endl << std::endl;

  // ex2
  Sort elem2;
  elem2.Print();
  std::cout << std::endl;
  std::cout << "Vectorul sortat (quickSort): " << std::endl;
  elem2.QuickSort();
  elem2.Print();
  std::cout << std::endl << std::endl;

  // ex3
  int x[] = {123, 13, 65745, -2432, 345, 234, 130, -2323, 135};
  int nr_el = sizeof(x) / sizeof(int);
  Sort elem3(x, nr_el);
  elem3.Print();
  std::cout << std::endl;
  std::cout << "Vectorul sortat (quickSort): " << std::endl;
  elem3.QuickSort();
  elem3.Print();
  std::cout << std::endl << std::endl;

  // ex4
  Sort elem4(10, 223, 43524, 12, 43, -123, 768, 345, 247, 676, 345);
  elem4.Print();
  std::cout << std::endl;
  std::cout << "Vectorul sortat (inserionSort): " << std::endl;
  elem4.InsertSort();
  elem4.Print();
  std::cout << std::endl << std::endl;

  // ex5
  char sir[] = "10,40,100,5,70";
  Sort elem5(sir);
  elem5.Print();
  std::cout << std::endl;
  std::cout << "Vectorul sortat (inserionSort): " << std::endl;
  elem5.InsertSort();
  elem5.Print();
  std::cout << std::endl << std::endl;
}
