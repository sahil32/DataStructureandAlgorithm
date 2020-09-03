#include<map>
#include<iostream>
using namespace std;
int row[]={0,1,0,-1};
int col[]={1,0,-1,0};
int T[10][8];

int isvalid(int i,int j)
{
	if(i==3 && (j==0 || j==2))
	return 0;
	
	return (i>=0 && i<=3 && j>=0 && j<=2);
}
void FillMap(multimap<int,int>&keypad)
{
	char key[4][3]={{'1','2','3'},
					{'4','5','6'},
					{'7','8','9'},
					{'*','0','#'}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		
		{
			for(int k=0;k<4;k++)
			{
				int r=i+row[k];
				int c=j+col[k];
				
				if(isvalid(i,j) && isvalid(r,c))
				keypad.insert(make_pair(key[i][j]-'0',key[r][c]-'0'));		
			}			
		}
	}
}
int GetCount(multimap<int,int>keypad,int i,int n)
{
	if(n==1)
	return 1;
	
	if(T[i][n]==0)
	{
		T[i][n]=GetCount(keypad,i,n-1);
		
		for(auto it=keypad.find(i);(it!=keypad.end() &&  it->first==i);it++)
		{
			T[i][n]+=GetCount(keypad,it->second,n-1);
		}
	}
	return T[i][n];
}
int main()
{
	int n=2;
	multimap<int,int>keypad;
	FillMap(keypad);
	
	/*for(auto it=keypad.find(0);it!=keypad.end();it++)
	cout<<it->first<<" "<<it->second<<endl;*/
	
	int count=0;
	for(int i=0;i<=9;i++)
	{
		count+=GetCount(keypad,i,n);
	}
	cout<<count<<endl;

}
