//rand inbuilt
# include <iostream>
# include <cstdlib
#include<time.h>
using namespace std;

int main()
{
srand(time(0))
int r = rand() % 100 + 1;
cout << r ;

return 0;

}