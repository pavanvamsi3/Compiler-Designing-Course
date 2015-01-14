#include <iostream>
using namespace std;
class a
{
	public:
	void fun(int arr[],int k)
	{
		for(int i=0;i<k;i++)
			arr[i]=arr[i]*arr[i];
	}
};
int main()
{
	int arr[5]={3,2,1,5,6};
	a b;
	b.fun(arr,5);
	return 0;
}
