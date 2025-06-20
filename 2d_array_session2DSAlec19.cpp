#include<iostream>
#include<vector>
/*3 x 4 = 12 
0111
0011
0001
*/
using namespace std;
int maximumonesrow(vector<vector<int>>&v){
    int maxOnes=INT_FAST32_MIN;
    int maxOnesrow= -1;
    int cols= v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberones = cols-j;//***** */
                if(numberones>maxOnes){
                   maxOnes=numberones;
                   maxOnesrow=i;
                }
                break;
            }
        }
    }
    return maxOnesrow;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maximumonesrow(vec);
    cout<<res<<endl;

}