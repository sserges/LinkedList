// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Queue.h"
#include "String.h"
#include "Person.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1);

#if 0
    Queue<int> queue;

    queue.PushBack(34);
    queue.PushBack(4);
    queue.PushBack(8);

#endif

#if 0

    String hello("Hello world");

    for (String::Iterator iter = hello.Begin(); iter != hello.End(); iter++)
        std::cout << *iter;

#endif

#if 1
    Person p("Bill", 42);
    p.Display();
#endif
    std::cout << "\n\n";
    system("pause");
    return 0;
}
