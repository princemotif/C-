#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int start, end;
    cout << "Enter range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++)
        if (isArmstrong(i)) cout << i << " ";

    return 0;
}










