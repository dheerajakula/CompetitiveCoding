// CPP program to find the element that appears once in an array
// where every other element appears thrice
#include <iostream>
using namespace std;
#define INT_SIZE 32
int findSingle(int ar[] ,int ar_size){
    int res = 0;
    int x,sum;
    for(int i = 0; i < INT_SIZE ;i++){
        sum = 0;
        x = (1<<i);
        for(int j = 0; j < ar_size;j++){
            if(ar[j]&x)
                sum++;
        }
        if(sum%3)
            res = res|x;
    }
    return res;


}
int main(){
    int ar[] = {2,3,5,2,3,4,3,2,4,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    cout << findSingle(ar,n);
    return 0;
}
