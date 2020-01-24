/*
Kuldeep Kumar
19HCS4028
C++ PROGRAM TO COMPUTE PERMUTATON AND COMBINATION BY RECURSION
*/
#include<iostream>
using namespace std;
int permutation(int n, int r)
{
	if(r==0)
  return 1;
  else 
  return n*permutation((n - 1),(r-1));
}
int combination(int n, int r)
{
	if(r==0)
  return 1;
  else
  return (n*combination((n - 1),(r-1)))/r;
}

int main()
{
	int n,r;
	int p,c;
	cout<<"Enter two numbers"<<endl;
	cin>>n;
	cin>>r;
	if(n<0||r<0||n<r)
	{
	cout<<"INVALID NUMBERS "<<endl;
  	return 0;
	}
	else if(r==0)
	{
		p=1;
		c=1;
	}
	else
	{
	p=permutation(n,r);
	c=combination(n,(n-r));
}
	cout<<"The permutation of ("<<n<<","<<r<<") is = "<<p<<endl;
	cout<<"The combination of ("<<n<<","<<r<<") is = "<<c<<endl;
}
