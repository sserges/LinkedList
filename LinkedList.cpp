// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Queue.h"
#include "String.h"
#include "Person.h"

// Generate a random name
std::string RandomName();

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1);

    srand(unsigned int(time(nullptr)));

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
   
    for (int i = 0; i < 20; i++)
        std::cout << RandomName() << '\n';

#endif
    std::cout << "\n\n";
    system("pause");
    return 0;
}

// Generate a random name
std::string RandomName() {
    std::string name;
    int len = rand() % 6 + 3; // 3 - 8 value
    bool startsWithVowel = rand() % 2;

    std::string consonants = "bcdfghjklmnpqrstvwyz";
    std::string vowels = "aeiou";

    // Fill in the name
    for (int i = 0; i < len; i++) {
        // Vowels as first letter
        if (startsWithVowel) {
            if (i % 2 == 0)
                name += vowels[rand() % vowels.size()];
            else
                name += consonants[rand() % consonants.size()];
        }
        // Consonant as first letter
        else {
            if (i % 2 == 0)
                name += consonants[rand() % consonants.size()];
            else
                name += vowels[rand() % vowels.size()];
        }
    }

    // Uppercase the first letter
    name[0] = toupper(name[0]);

    return name;
}