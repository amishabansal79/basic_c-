#include<iostream>
#include<math.h>
#include<vector>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(1);
   v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<endl;
    }
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
      cout<<*it<<endl;
    }
    for(auto element : v){
      cout<<element<<endl;
    }
    v.pop_back();
    vector<int>v2(3,50);
    swap(v,v2);
    for(auto element:v){
      cout<<element<<endl;
    }
    for(auto element : v2){
      cout<<element<<endl;
    }
    vector<int>v1{4,10,20,30,1};
    sort(v1.begin(),v1.end());
    for(auto element : v1){
      cout<<element<<endl;
    }
}