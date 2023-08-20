#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v ={2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"-";
    }cout<<endl;
    vector <int>::iterator a=v.begin();
    for(a=v.begin();a!=v.end()-1;a++){
        cout<<*(a)<<endl;
    }cout<<endl;
    //to declare a pair in the same
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    cout<<"way 1"<<endl;
    vector<pair<int,int>> ::iterator it;
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<"{"<<(*it).first<<","<<(*it).second<<"} ";    
    }
    cout<<endl;
    cout<<"way 2"<<endl;
    for(auto it:v_p){
         cout<<"{"<<it.first<<","<<it.second<<"} "; 
    }cout<<endl;
    cout<<"way 3"<<endl;
    for(auto it=v_p.begin();it!=v_p.end();it++){
        cout<<"{"<<(it)->first<<","<<(it)->second<<"} ";    
    }
}