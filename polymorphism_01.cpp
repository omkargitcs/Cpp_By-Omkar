//ability of objects/method to take diffrent forms 
/*function over loading = define a number of functions with same function name they perform differnertly 
as to the arguments passed 
*/
#include<iostream>
using namespace std;

class sum{
public:
    void add(int x,int y){
        int sum = x+y;
        cout<<sum<<endl;
    }

     void add(int x,int y,int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

     void add(float x,float y){
        float sum = x+y;
        cout<<sum<<endl;
    }

    void add(double x, double y){
    double sum = x + y;
    cout << sum << endl;
}



};
int main(){
    sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(2.4,0.1);
    s.add(234.45,567.8);
    return 0;


} 