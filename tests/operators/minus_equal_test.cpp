#include<iostream>
#include<cassert>
#include<random>
#include<bigint.hpp>

int main()
{  
    libbig::largeInt a,b;
<<<<<<< HEAD
    //64 bits var to prevent overflow at sum between i1 and i2
=======
>>>>>>> d9160befc499c431dbd10adfcc612c9826abccfc
    int64_t i1, i2;

    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(-2147483648, 2147483647); // define the range

    for(int i=0;i<100;i++)
    {
        i1 = distr(gen), i2 = distr(gen);
        a = i1, b = i2;
        i1 -= i2;
        a -= b;
        assert(a == i1);
    }

    return 0;
}