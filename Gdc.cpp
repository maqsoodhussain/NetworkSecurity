
//The largest integer which can be perfectly divide two integers. 
// 4 and 10 , 2 is largest integer that can divide both 4 and 10
#include<iostream>
using namespace std;

int main(){

        int n1, n2, hcf;
        cout<<"Enter two integers: ";
        cin>>n1>>n2;

        //swaping two inters 
        if(n2>n1){
            int temp = n2;
                n2 = n1 ;
                n1= temp;
        }

        for(int i=1; i<=n2; i++){
            if(n1 % i==0 && n2 % i==0){
                hcf = i;
            }
        }

        cout<<"HCF = "<<hcf;
    return 0;
}