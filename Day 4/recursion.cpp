#include <bits/stdc++.h> 
using namespace std;

void printname(string s, int i, int n) {
    if (i > n) {
        return;
    }
    cout << s << endl;
    printname(s,i+1,n);
}

void OnetoN(int i, int n) {
    if (i > n) {
        return;
    }
    cout << i << endl;
    OnetoN(i+1,n);
}

void NtoOne(int i, int n) {
    if (i < n) {
        return;
    }
    cout << i << endl;
    NtoOne(i-1,n);
}

int main() {
    printname("Drashti", 1, 5);
    OnetoN(1,5);
    NtoOne(5,1);
}