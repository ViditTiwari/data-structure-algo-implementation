#include <iostream>

using namespace std;

void printPowerset (int n){
    int stack[n+1],k;

    stack[0]=0; /* 0 is not considered as part of the set */
    k = 0;

    while(1){
        if (stack[k]<n){
            stack[k+1] = stack[k] + 1;
            k++;
        }

        else{
            stack[k-1]++;
            k--;
        }

        if (k==0)
            break;
        ctr++;
        printSet(stack,k);
    }


    return;
}
int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    printPowerset(n);

    return 0;
}
