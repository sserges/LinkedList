// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Queue.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1);

    Queue<int> queue;

    queue.PushBack(34);
    queue.PushBack(4);
    queue.PushBack(8);

    std::cout << "\n\n";
    system("pause");
    return 0;
}
