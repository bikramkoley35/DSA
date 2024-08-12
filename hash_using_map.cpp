#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];// for number hashing
    //string s;// for char hashing
    //cin>>s; 
    //pre-compute
    unordered_map<long, long> mpp; // for number hashing
    //map<char, long> mpp; // for char hashing
    for(int i=0;i<n;i++){
        cin>>arr[i];     // for number hashing
        mpp[arr[i]]++;    //same thing if we take another for loop like line no. 15 
        //mpp[s[i]]++; //for char hashing
        }
    
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    //iterate in the map
    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<mpp[num]<<endl; 
    }

    return 0;
}