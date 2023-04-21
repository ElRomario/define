#define TRIANGLE_PERIMETR(A, B, C)(A + B + C)
#define P(A, B, C)((A+B+C)/2)//Halfe perimetr
#define LEGIT_TRIANGLE(A,B,C)(A+B>C || B+C>A || A+C>B) ? true : false
#define TRIANGLE_AREA(A,B,C)((sqrt(P(A,B,C)*(P(A,B,C)-A)*(P(A,B,C)-b)*(P(A,B,C)-C))))
#define DISCREMINANT(b, a, c)(pow(b, 2)- 4*a*c)
#define ROOT(a, b, c)((a + 2 == 5)?a:(b + 2 ==5)? b :(c+ 2==5)?c:0)
#include <iostream>
using namespace std;
int main()
{
	int result = ROOT(1, 2, 3);
	if (result == 0) cout << "No roots were found"; else cout << "result = " << result;
}
