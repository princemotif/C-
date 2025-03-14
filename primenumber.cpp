/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num, flag = 1;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) flag = 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
    }

    cout << (flag ? "Prime" : "Not Prime");
    return 0;
}

