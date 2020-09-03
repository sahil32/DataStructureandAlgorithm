#include<bits/stdc++.h>
using namespace std;
int count(int num)
{
	int c=0;
	while(num)
	{
		n/10;
		c++;
	}
	return c;
}
int main()
{
	int n;
	cin>>n;
	vector <int> vec(n);
	for(size_t m=0;m<n;m++)
	{
		cin>>vec.at(m);
	}
	vector <int> bits(n);
	for(auto x: vec)
	{
		int a=x%10;
		x=x/10;
		int b=x%10;
		x=x/10;
		int c=x%10;
		x=x/10;
		int largest=a>b?a:b;
		largest=c>largest?c:largest;
		int smallest=a>b?b:a;
		smallest=c>smallest?smallest:c;
		int score=largest*11+smallest*7;
		score=score%100;
		bits.push_back(score);
	}
	
}
