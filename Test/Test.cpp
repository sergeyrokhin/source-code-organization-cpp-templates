#include <iostream>
#include "Test.h"
//https://docs.microsoft.com/ru-ru/cpp/cpp/source-code-organization-cpp-templates
//��� ���������� ���� ������ ��� ������ �������?


//template class Test<int>; // ������� �������� ������ �� �������. � ������ �������� ������


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

//������������ � main, ������� �����, ���� ���� �������������� ���������������� �������
template Test<float>;

//�� ���������, ��� ��� ���� � ���� ������, ����� �������������� ��������������� ���������� �������
//template Test<std::string>;
//template Test<int>;

//������������ � main, ������� �����, ���� ���� �������������� ���������������� �������
template void PrintTest(Test<float> t);
