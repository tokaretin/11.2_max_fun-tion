#include <iostream>

int max2(int a, int b) {

    // тернарный оператор
    return a > b ? a : b;
        // 3 > 2 ? 3 : 2;

// выше написанно с помощью тернарного оператора
/*if (a > b) {
    return a;
}
else {
    return b;
}*/

}

int max3(int a, int b, int c) {
    // короткая запись с использованием функции max(a, b);
    return max2(max2(a, b), c);

    /*return a > b ? (a > c ? a : c) : (b > c ? b : c);
          // 3 > 2 ? (3 > 1 ? 3 : 1) : (2 > 1 ? 2 : 1);*/
}


int main()
{
    int a = 3;
    int b = 5;

    int c = 9;

    std::cout << "Maximum number of two = " << max2(a, b) << '\n';
    std::cout << "Maximum number of three = " << max3(a, b, c) << '\n';
}
