#include <bits/stdc++.h>
using namespace std;
int Kthsmallest(const vector<int> &A, int B) {
    int lo = *min_element(A.begin(),A.end());
    int hi = *max_element(A.begin(),A.end());

    while(lo <= hi){
        int mi = (lo + hi)/2;
        int countLess = 0;
        int countEqual = 0;
        for(int i = 0; i < A.size(); i++){
            if(A[i] < mi) countLess++;
            else if(A[i] == mi) countEqual++;
        }
        if(countLess < B && countLess + countEqual >=B) return mi;
        else if (countLess >= B) hi = mi - 1;
        else lo = mi + 1;
    }
    return 0;
}

int main(){
    const vector<int> A{2, 1, 4, 3, 2};
    int B = 3;
    int ans = Kthsmallest(A,B);
    cout << ans;
}
