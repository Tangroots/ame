#include <iostream>
using namespace std;
class obj{
public:
  int n;
  void ask();	
};
void obj::ask()
{
	int arr[4],m=0,sum=0,i;
	m=n;
	for(i=0;i<4;i++)
	{
	   arr[i] = m % 10;
	   m = m / 10;
	   sum = sum + arr[i]*arr[i];	
	}
	printf("%d",sum);	
}
int main()
{
	obj obj1;
	cin >> obj1.n;
	obj1.ask();
	return 0; 
}
