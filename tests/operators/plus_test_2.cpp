#include<iostream>
#include<cassert>
#include<random>
#include<bigint.hpp>

int main()
{  
    libbig::largeInt a,b;

    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(-2147483648, 2147483647); // define the range 32bit int

    for(int i=0;i<100;i++)
    {
        // 64 bits var to prevent overflow at integer sum
        int64_t i1 = distr(gen);
        int64_t i2 = distr(gen);
        a = i1;
        b = i2;
        std::cout << std::endl;
        assert((a+b) == (i1+i2));
    }
}