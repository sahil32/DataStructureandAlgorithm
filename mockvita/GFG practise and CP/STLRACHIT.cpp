#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<limits.h>
#include<map>
#include<unordered_map>
using namespace std;

bool f(int x,int y)
{
return x>y;
	}
void vector_demo()
{
	 vector<int> A = {11,2,3,14};
	 cout<<A[1]<<endl;
	 sort(A.begin(),A.end());//O(NlogN)
	 bool present = binary_search(A.begin(),A.end(),4);//false
	 present = binary_search(A.begin(),A.end(),3);//false
	 A.push_back(100);
	 present = binary_search(A.begin(),A.end(),100);
	 A.push_back(100);
	 A.push_back(100);A.push_back(100);A.push_back(100);
	 A.push_back(123);
	//2,3,11,14,100,100,100,100,100,123
	
	
	//can also use auto it
	vector<int>::iterator it = lower_bound(A.begin(),A.end(),100);//pointer to 1st element>=100
	vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);//pointer to 1st element> 100
	
	
	cout<<*it<<" "<<*it2<<endl;
	cout<<it2 - it<<endl; //5
	
	
	sort(A.begin(),A.end(),f);
	vector<int>:: iterator it3;
	for(it3 = A.begin(); it3 != A.end(); it3++)
	{
		cout<<*it3<<" ";
		}
		cout<<endl;
		for(auto x: A)
		{x++;
			cout<<x<<" ";}//doesn't affect the original vector
			cout<< endl;
			for(int &x: A)
			{
				x++;
				}//does affect the original vector
				for(int x: A)
				{
					cout<<x<<" " ;
					}
					cout<<endl;
			
	}
	
	void set_demo()
	{
		set<int> S;
		S.insert(1);
		S.insert(2);
		S.insert(3);
		S.insert(4);
		S.insert(-1);
		for(auto x:S)
		cout<<x<<" ";
		cout<<endl;
		
		auto it = S.find(-1);
		if(it == S.end())
		{
			cout<<"notPresent\n";
			}
			else
			cout<<"present\n"<<"\n";
			auto it5  = S.lower_bound(1); 
			auto it2 = S.upper_bound(2);
			auto it3 = S.upper_bound(-1);
			
			cout<<*it2<<"  "<<*it3<<endl;
			
			auto it6 = S.upper_bound(4);
			if(it6==S.end())
			{
				cout<<"oops lol not found\n";}
				//erasing and inserting takes log N time in set
					}
					
					

void map_demo()
{
	map<int,int> A;
	A[1]=100;
	A[2]=90;
	A[4]=-1;
	A[3]=1000;
	A[90]=-28943;
	map<char,int> cnt;
   string x = "Sahil Subnani";
   for(char s: x)
   {
	   cnt[s]++;
	   }
	   cout<<cnt['a']<<" "<<cnt['z']<<endl;
	   //logN time takes in insertion deletion and searching in map
	   
	   
		}
	
void pair_demo()
{
	//[x,y]
	/*add[2,3]
	 add[10,20]
	 * add[30,400]
	 * add[401,450]
	 * give me the interval of 401
	 */
	 set< pair<int,int>> S;
	 S.insert({401,450});
	 S.insert({10,20});
	 S.insert({2,3});
	S.insert({30,400});
	//2,3
	//10,20
	//30 ,400
	//401, 450
	
	int point = 50;
	auto it = S.upper_bound({point, INT_MAX});
	it--;
	pair<int,int> current = *it;
	if(current.first <= point && point <= current.second){
		cout<<"yes it is present\n"<<current.first<<" " <<current.second<<endl;
	}
	else
		cout<<"not found sorry\n";
	//every acction was performed in log N time 	
	}	
	
	
int main()
{
	
	
	map_demo();
map<char,int> M;
unordered_map<char,int> U;
string s = "Sahil Subnani";
 for(char c: s) M[c]++;//O(NlogN) where  N=|s|
 for(char c: s) U[c]++;//O(N)
	
	
	}
	
