#include<iostream>
#include <set>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter"<<endl;
cin>>a>>b>>c>>d;
int max =a;
set<int> val ={a,b,c,d};
for (int i : val){
if(max-i<0){
  max=i;
}
cout<<max;
return 0;
}}