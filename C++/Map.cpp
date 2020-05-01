// Implementing hashmap in c++ using stl
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m.insert(pair<int,string>(1,"Rohan"));
	m.insert(pair<int,string>(2,"Madhavi"));
	m.insert(pair<int,string>(3,"Suresh"));
	map<int,string>::iterator i;
	for(i=m.begin();i!=m.end();i++)
		cout<<i->first<<" "<<i->second<<endl;
}

