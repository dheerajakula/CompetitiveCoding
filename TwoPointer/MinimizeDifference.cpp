int Solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    int i = A.size() - 1;
    int j = B.size() - 1;
    int k = C.size() - 1;
    int ans = INT_MAX;
    while(i != -1 && j!=-1 && k!=-1){

        int max_element = std::max(std::max(A[i],B[j]),C[k]);
        int min_element = std::min(std::min(A[i],B[j]),C[k]);

        int delta = max_element - min_element;
        if(delta < ans) ans = delta;
        if( A[i] == max_element ) i--;
        else if( B[j] == max_element) j--;
        else k -= 1;
    }
    return ans;
}
