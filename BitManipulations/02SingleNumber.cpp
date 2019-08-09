// CPP program to find the element that appears once in an array
// where every other element appears twice
#include <iostream>
using namespace std;
int findSingle(int ar[] ,int ar_size){
    int res = ar[0];
    for(int i = 1; i<ar_size ;i++)
        res = res ^ ar[i];
    return res;
}
int main(){
    int ar[] = {2,3,5,2,3,4,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    cout << findSingle(ar,n);
    return 0;
}
