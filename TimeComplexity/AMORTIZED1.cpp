//What is the time complexity of the following code :

int j = 0;
for(int i = 0; i < n; ++i) {
    while(j < n && arr[i] < arr[j]) {
        j++;
    }
}

// time complexity is O(n)
/*
Note that the variable j is not initialized for each value of variable i.
Hence, the inner j++ will be executed at most n times.
The i loop also runs n times.
So, the whole thing runs for O(n) times.
*/
