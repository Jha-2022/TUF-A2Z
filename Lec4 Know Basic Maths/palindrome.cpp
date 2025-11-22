#include <iostream>
using namespace std;

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int dupl = n; 
    int revNum = 0;
    while(n > 0){
        int ld  = n % 10;
        revNum = (revNum*10) + ld;
        n = n/10;
    }
    
    cout<<revNum<<endl;
    
    if(revNum == dupl){
        cout<<"palindrome";
    }
    
    else{
        cout<<"Not a palindrome";
    }
    return 0;    
}
