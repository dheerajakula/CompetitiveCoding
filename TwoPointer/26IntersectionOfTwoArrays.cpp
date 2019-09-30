vector<int> Solution(const vector<int> &A, const vector<int> &B) {
    vector<int> C;
    int i = 0;
    int j = 0;
    int i_max = A.size();
    int j_max = B.size();
    while(true){
        if(A[i] < B[j]){
            i++;
        }
        else if (A[i] > B[j]){
            j++;
        }
        else if (A[i] == B[j]){
            C.push_back(A[i]);
            i++;
            j++;
        }
        if (i == i_max || j == j_max) break;
    }
    return C;
}
