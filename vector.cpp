#include<iostream>
#include<vector>

using namespace std;

int main()
{
vector <int> vect;

for(int i=0;i<4;i++)
{
vect.push_back(i);
cout<<i;
}
cout<<"Capacity"<<vect.capacity();
cout<<"Max size:"<<vect.max_size();
cout<<"Size:"<<vect.size();
for(int i=0;i<4;i++)
{
cout<<"Element at i"<<vect.at(i);
}



}