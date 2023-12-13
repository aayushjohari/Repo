#include<iostream>
#include<vector>

using namespace std;
int main() {
    vector<int>v;

    v.push_back(4);
    v.push_back(2);
    v.push_back(12);
    v.push_back(6);
    v.push_back(18);
    v.push_back(10);
    v.push_back(6);
    v.push_back(18);
    v.push_back(10);
    cout<<endl<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0; i<v.size(); i++)
       cout<<v[i]<<" ";
                 cout<<endl<<endl<<"pop:";
                 v.pop_back();
                 v.pop_back();
                 v.pop_back();
                 cout<<endl;
                 for(auto i:v)
                 {
                    cout<<i<<" ";
                 }
   
}