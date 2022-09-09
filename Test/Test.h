#pragma once
template <class T>
class Test
{
public:
	T m_t;
	Test(T t);
};

template <class T>
void PrintTest(Test<T> t);

void init(std::string k);
