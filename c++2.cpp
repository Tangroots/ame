#include <iostream>
using namespace std;
class obj{
public:
	int n;
	void ask();
};
void obj::ask()
{
	int i=0,arr1[100]={0},arr2[100],j,k;
	for(j=0;j<100;j++)
	{
	   	arr1[i]=n%2;
	   	if(arr1[i]==1)
		   {
		   	arr2[i]=j;
			i++;		   	
		   }
		n=n/2;
		if(n==0)
		{
			break;
		}
	}
	for(k=i;k>0;k--)
	{   
	    if(arr1[k]==1){
		   printf("2^%d+",arr2[k]);
		} 
		
	}
	printf("2^%d",arr2[0]);	
}


int main()
{
	obj obj1;
	cin >> obj1.n;
	printf("%d=",obj1.n);
	obj1.ask();
	return 0;
}

