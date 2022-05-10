// homework11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {

};
class Quadrilateral :protected Figure {

};
class Rhombus : protected Quadrilateral {

};
class Rectangle : protected Quadrilateral {

};

int main()
{
    std::cout << "Hello World!\n";
}

