#define TRIANGLE_PERIMETR(A, B, C)(A + B + C)
#define HALF_PERIMETR(A, B, C)((A+B+C)/2)

#include <iostream>
using namespace std;
int main()
{
    cout << HALF_PERIMETR(4, 5, 6);
}

