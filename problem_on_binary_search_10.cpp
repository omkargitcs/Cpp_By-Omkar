#include<iostream>
#include<vector>
using namespace std;

bool canplacestudents(vector<int> &pos,int s,int mid){
    int studentreqd=1;
    int lastplaced = pos[0];
    for(int i=1;i<pos.size();i++){
        if(pos[i]-lastplaced >=mid){
            studentreqd ++ ;
            lastplaced = pos[i];
            if(studentreqd == s){
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &pos,int s){
    int n=pos.size();
    int lo =1 ;
    int hi = pos[n-1]-pos[0];
    int ans =-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2 ;
        if(canplacestudents(pos,s,mid)){
            ans=mid;
            lo = mid+1;
        }
        else{
            hi = mid -1;
        }
    }
    return ans;
}
/*space com = o(1)
time comp = o(nlog(xn-x1))*/
int main(){
int n;
cin>>n;
vector<int> pos;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    pos.push_back(x);
}
int s;
cin>>s;
cout<<race(pos,s)<<"\n";
return 0;
}