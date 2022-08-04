/*#pragma startup and #pragma exit: These directives help us to specify the functions that are needed to run
 before program startup (before the control passes to main()) and just before program exit 
 (just before the control returns from main()). */

#include <iostream>
using namespace std;
 
void func1();
void func2();
 
void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();
 
void func1()
{
    printf("Inside func1()\n");
}
 
void func2()
{
    printf("Inside func2()\n");
}
 
// Driver code
int main()
{
    printf("Inside main()\n");
 
    return 0;
}