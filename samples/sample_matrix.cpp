// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
    setlocale(LC_ALL, "ru");
    int size;
    std::cout << "Введите порядок квадратной матрицы: ";
    std::cin >> size;
    TMatrix<int> A(size), B(size), C(size);

    std::cout << "Введите первую матрицу построчно: " << std::endl;
    std::cin >> A;
    std::cout << "Первая матрица:" << std::endl;
    std::cout << A << std::endl;

    std::cout << "Введите вторую матрицу построчно: " << std::endl;
    std::cin >> B;
    std::cout << "Вторая матрица:" << std::endl;
    std::cout << B << std::endl;

    C = A + B;
    std::cout << "Сумма матриц: " << std::endl;
    std::cout << C << std::endl;

    C = A - B;
    std::cout << "Разность матриц: " << std::endl;
    std::cout << C << std::endl;

  /*TMatrix<int> a(5), b(5), c(5);
  int i, j;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  for (i = 0; i < 5; i++)
    for (j = i; j < 5; j++ )
    {
      a[i][j] =  i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;*/
}
//---------------------------------------------------------------------------
