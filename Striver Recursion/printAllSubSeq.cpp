#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        

        
*/      
void printSubseq(vector<int> &arr, vector<int> &subseq, int idx)     {
    if (idx == arr.size()) {
        for (int i = 0; i < subseq.size(); i++)
            cout << subseq[i] << " ";
        cout << endl;
        return;
    }

    subseq.push_back(arr[idx]);
    printSubseq(arr, subseq, idx + 1);
    subseq.pop_back();

    printSubseq(arr, subseq, idx + 1);
}
int main(){
    vector<int> arr = {3, 1, 2};

    vector<int> subseq;

    printSubseq(arr, subseq, 0);
    
    return 0;
}