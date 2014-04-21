#include <iostream>
using namespace std;

bool prime(int n, int divisior)
{
    if(divisior == n)
        return true;

    else if(n % divisior == 0)
        return false;

    else
        prime(n, ++divisior);
}

// This program prints all prime numbers between 2 and 60
int main()
{

     for (int i = 2; i<=60; i++)
     {
         if (prime(i,2))
         cout << i << " is a prime" << endl;
     }

     return 0;
}

