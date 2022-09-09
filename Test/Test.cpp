#include <iostream>
#include "Test.h"
//https://docs.microsoft.com/ru-ru/cpp/cpp/source-code-organization-cpp-templates
//как подключить этот модуль при сборке проекта?


//template class Test<int>; // создает описания класса по шаблону. И решает проблему сборки


template <class T>
Test<T>::Test(T t)
{
	m_t = t;
	std::cout << "Test.cpp set t = " << t << std::endl;
}



template <class T>
void PrintTest(Test<T> t) {
	std::cout << "PrintTest = " << t.m_t << std::endl;
}



void init(std::string k) {
	std::cout << "welcom " << k << std::endl;
	Test<std::string> t(k);
	Test<int> l(2);
	std::cout << "bye " << k << std::endl;
}

//используется в main, поэтому нужно, чтоб были скомпилированы сооттветствующие функции
template Test<float>;

//не требуется, они уже есть в этом модуле, будут скомпилированы соответствующие экземпляры функций
//template Test<std::string>;
//template Test<int>;

//используется в main, поэтому нужно, чтоб были скомпилированы сооттветствующие функции
template void PrintTest(Test<float> t);
