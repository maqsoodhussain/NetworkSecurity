

// Sieve Of Erotosthenes 
//source :  https://byjus.com/maths/sieve-of-eratosthenes/

#include<iostream>
using namespace std;

int main(){
      //dry run it first min value 5 or 10
    int n;
   //creating array of 5 elements to shows prime numbers from 1 - 5
   cout<<"Enter Number till you want to generate Prime numbers: ";
   cin>>n;


   //first we set all elements to 0
   int arr[n] = {0};


//this segment of code puts 1 to all not prime locations so prime are set to 0
   for(int i = 2 ; i<=n; i++){
        for(int j = i*i; j<=n ; j = j+i){
            arr[j-1]= 1;
        }
   }

//this segment prints those values whoses values are set to 0 means prime number 
   for(int i = 2; i<=n; i++){
        if(arr[i-1]==0){
            cout<<i<<" ";
        }
   }


   

    return 0;
}