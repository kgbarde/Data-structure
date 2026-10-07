// wriite cpp program to store 5 cancelled order numbers in a stack and display cancelled order starting from the most recent cancelled order 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int stack[5];
    int top = -1;

    for(int i =0; i<5;i++){
        cout<<"Enter your cancelled order number "<<i+1<<": ";
        cin>>stack[++top];
    }

    cout<<"\n Orders removing\n";

    while(top >= 0){
        cout<< stack[top]<< endl;
        top--;
    }
    return 0;
}