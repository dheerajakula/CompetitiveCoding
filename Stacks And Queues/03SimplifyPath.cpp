/*
Given a string A representing an absolute path for a file (Unix-style).

Return the string A after simplifying the absolute path.

Note:

Absolute path always begin with ’/’ ( root directory ).

Path will not have whitespace characters.



Input Format

The only argument given is string A.
Output Format

Return a string denoting the simplified absolue path for a file (Unix-style).
For Example

Input 1:
    A = "/home/"
Output 1:
    "/home"

Input 2:
    A = "/a/./b/../../c/"
Output 2:
    "/c"
*/a;

string simplifyPath(string A) {
    stack<string> st;
    string dir;
    string res;
    res.append("/");
    int size = A.length();
    for(int i = 0; i < size; i++){
        dir.clear();
        while(A[i] == '/')
            i++;
        while( i < size && A[i]!='/'){
            dir.push_back(A[i]);
            i++;
        }
        if(dir.compare("..") == 0){
            if(!st.empty()) st.pop();
        }
        else if (dir.compare(".") == 0) continue;
        else if (dir.length() != 0){
            st.push(dir);
        }

    }

    stack<string> st1;
    while (!st.empty()) {
        st1.push(st.top());
        st.pop();
    }


    while (!st1.empty()) {
        string temp = st1.top();

        if (st1.size() != 1)
            res.append(temp + "/");
        else
            res.append(temp);

        st1.pop();
    }

    return res;

}
