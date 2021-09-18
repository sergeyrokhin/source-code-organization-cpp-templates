#include <iostream>
#include "Test.h"

//Точно такой же текст в файле Test.cpp
// но он при сборке не подключается. в результате сборка не выполняется из-за неразрешенной ссылки

// Ошибка	LNK2019	ссылка на неразрешенный внешний символ "public: 
// __thiscall Test<int>::Test<int>(int)" (? ? 0 ? $Test@H@@QAE@H@Z) в функции _main.Test	
//C : \Users\User\source\repos\Test\Test\TestMain.obj	1

// 
// 
//template <class T>
//Test<T>::Test(T t)
//{
//    m_t = t;
//    std::cout << "TestMain.cpp set t = " << t << std::endl;
//
//}

int main()
{
    Test<int> t(2);
    std::cout << "Hello World!\n";
}