#include <iostream>
#include "../CPPLibDLL/lifecycle.h"
using namespace std;


void before();
bool frame();
void after();

int main()
{
    cout << "Hello World!\n";

    before();

    bool next;
    do
    {
        next = frame();
    }
    while (next);

    after();
}


void before()
{
    lifecycle_before();
}

bool frame()
{
    return lifecycle_frame();
}

void after()
{
    lifecycle_after();
}
