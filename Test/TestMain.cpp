#pragma once

#include <iostream>
#include "Test.h"

//https://docs.microsoft.com/ru-ru/cpp/cpp/source-code-organization-cpp-templates

int main()
{
    std::cout << "Hello World!\n";
    Test<float> t(2.222222);
    PrintTest(t);
    init("TestMain.cpp");
}