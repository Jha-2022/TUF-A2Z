#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dup = n;
    int sum = 0;
    int digits = 0;
    
    while(n>0){
        int ld = n % 10;
        digits++;
        n = n/10;
    }
    
    sum += pow(ld, digits);
    
    if(sum == dup ){
        cout<< "Armstrong Number";
    }
    
    else{
        cout<<"It's not an Armstrong Number";
    }
    
    return 0;
}
