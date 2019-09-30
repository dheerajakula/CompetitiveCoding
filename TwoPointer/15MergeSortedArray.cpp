void Solution(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int i = 0;
    int j = 0;
    int i_max = A.size();
    int j_max = B.size();
    while(true){
        if(A[i] < B[j]){
            C.push_back(A[i]);
            i++;
        }
        else{
            C.push_back(B[j]);
            j++;
        }
        if( i == i_max && j == j_max){
            break;
        }
        else if (i == i_max){
            A[i] = INT_MAX;
        }
        else if (j == j_max){
            B[j] = INT_MAX;
        }
    }
    A = C;
}
