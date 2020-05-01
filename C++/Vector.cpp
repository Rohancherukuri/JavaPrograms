// C++ program to illustrate the 
// iterators in vector 
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v={1,2,3,4,5};
	v.push_back(6);
	v.push_back(7);
	vector<int>::iterator i;
	cout<<"Using Iterator class: "<<endl;
	for(i=v.begin();i!=v.end();i++)
		cout<<*i<<" ";
	cout<<endl;
	return 0;
} 

