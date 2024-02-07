#include <iostream>
using namespace std;

int main()
{
    //Вариант 7
    // Узнать значение i-ого бита числа, используя сдвиг, но не используя маски.
    /*
    int i;
    std::cin >> i;
    unsigned char x;
    std::cin >> x;
    unsigned char q = (x << (8 - (i + 1)));
    std::cout << (q >> 7) << std::endl;

    //ДОПЫ
    unsigned char x;
    std::cin >> x;
    std::cout << (x ^ 255);

    int i, j;
    std::cin >> i >> j;
    unsigned char x = 156;
    // 156 = 1001 1100
    int q = ((((x >> i) & 1) << j) | (((x >> j) & 1) << i)); //узнаем значение i и j битов и меняем их местами
    int p = (~(1 << i)) & (~(1 << j)); //маска с нулями на i и j битах
    std::cout << ((x & p) | q);
    */

    unsigned char x = 256;
    // 156 = 1001 1100, 0011 1001 = 57
    unsigned char r = 255; //заготовка результата
    int i = 7; //номер бита
    while (i >= 0)
    {
        int n = (x % 2);//значение i-ого бита
        unsigned char s = (~(1 << i));//маска для обнуления значения i-того бита
        r = (r & s) | (n << i);
        x = (x >> 1);
        i--;
    }
    std::cout << int(r);
}