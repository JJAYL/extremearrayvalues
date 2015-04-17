#include <iostream>
#include <array>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"Element\tValue\n";
	int Max= INT_MIN;
	int Min= INT_MAX;
	array<int,10>n={5,14,5,3,5,6,8,65,32,10};
	for(int c=0;c<10;c++)
	{
		if(Max<=n[c])
		{
				Max= n[c];
		}
		if(Min >= n[c])
		{
				Min=n[c];
		}
	}
	
	cout<<"Maximum Value \n"<<Max<<endl;
	cout<<"Minimum Value \n"<<Min<<endl;
	return 0;
}
