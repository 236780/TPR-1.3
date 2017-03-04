#include <math.h>

bool prime(int);

int main()
{
    
	return 0;
}

bool prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
		if (n%i == 0)
			return false;
	return true;
}

