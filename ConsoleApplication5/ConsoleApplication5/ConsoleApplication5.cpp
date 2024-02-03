// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
//zadanie1
#define y 2
#define t (5.0 / (1 + y*y))
#define z 4
#define x (2*y + 3*t - z)


//zadanie2
//#define W(x, y) (sqrt(x) * sin(y))
//#define F(x, y, z) ((y + (x * atan(z))) / (y + (x * x)))

//zadanie 3
//double Zadanie3(double a)
//{
//    double sin2a = sin(2 * a);
//    double sin3a = sin(3 * a);
//    double sin5a = sin(5 * a);
//    double cosa = cos(a);
//    double cos3a = cos(3 * a);
//    double cos5a = cos(5 * a);
//    return (sin2a + sin5a - sin3a) / (cosa - cos3a + cos5a);
//}


int main()
{
    setlocale(LC_ALL, "rus");
    //zadanie1
    double result = x;
    std::cout << "Значение функции при y = " << y << ", t = " << t << ", z = " << z << " равно: " << result << std::endl;
    return 0;

    //zadanie2
    /*#define x 0.12
    #define y -8.75
    double z = W(x, y);
    double b = F(x, y, z);
    std::cout << "b = " << b << std::endl;
    return 0;*/

    //zadanie3
    //double a;
    //std::cout << "Введите значение а: ";
    //std::cin >> a;
    //double result = Zadanie3(a);
    //std::cout << "Результат: " << result << std::endl;
    //return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
