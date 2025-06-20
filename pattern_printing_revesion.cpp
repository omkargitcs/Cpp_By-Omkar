//loops revesion
#include<iostream>
using namespace std;
int main(){

    //alphabet pattern diamond
    //whenever a character is strored in c++ the char is stores in ascii
    //int x=98;
    //char ch = (char)x;
    //cout<<ch;

    
    /*char c = 'a';
    int x= c+1;
    cout<<(char)x<<"\n";
    */
   


    int n=5;
    for(int line=0;line<=n;line++){//does some work on each line 

        //below loop gives spaces 
        int spaces=(n-line);
        for(int k=0;k<=spaces;k++){
            cout<<" ";
        }
        //below loop prints char for each line 
        int no_of_chars=2*line-1;
        for(int j=0;j<no_of_chars;j++){
            cout<<(char)('A'+j);
    
        }
        cout<<"\n";

        
    }
    for(int line=n+1;line<=2*n-1;line++){
        int no_of_spaces=(line-n);
        for(int k=0;k<no_of_spaces;k++){
            cout<<" ";

        }
        int no_of_chars = 2*(2*n-line)-1;
        for(int j=0;j<no_of_chars;j++){
            cout<<(char)('A'+j);
        }
        cout<<"\n";
    }
    return 0;




   



   

}