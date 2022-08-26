/*Name: Shruti Beladia 
roll no.:2010991409 
set no.:4
question no.2*/


#include<bits/stdc++.h>
using namespace std;

bool checkCons(int arr[],int n){
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  if(checkCons(arr,n)==true){
    cout<<"The array contains consecutive integers";
  }
  else
    cout<<"The array does not contain consecutive integers";

    return 0;
}
