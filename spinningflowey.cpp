#include <iostream>
#include <chrono>
#include <thread>
#include<math.h>

int main()
{
    int x = 10;
    int y = 10;
    int r = 5;

    while (true)
    {
        std::cout << "\033[2J\033[1;1H"; // clear screen
        std::cout << "\033[33m"; // yellow color
        for (int i = 0; i < 360; i += 30)
        {
            float rad = i * 3.14159 / 180;
            int x1 = x + r * cos(rad);
            int y1 = y + r * sin(rad);
            std::cout << "\033[" << y1 << ";" << x1 << "H*";
        }
        std::cout << "\033[0m"; // reset color
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    return 0;
}