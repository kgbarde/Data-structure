#include<iostream>

using namespace std;

int main(){

 int mark[5]={75,85,45,95,65};

  for(int i=0;i<=4;i++){
  for(int j=0;j<=4;j++){

    if(mark[i] > mark[j]){

       int temp = mark[i];
        mark[i] = mark[j];
        mark[j] = temp;

      }
 
    }

 }

for(int i=0;i<=4;i++){ cout<<mark[i]<<" ";

}

return 0;

}