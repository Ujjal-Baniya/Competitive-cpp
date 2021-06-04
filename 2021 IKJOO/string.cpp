#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1;

    cout <<"Original String: "<< s1;

    string s3(s1, 1, 4);
    s2 = s1.substr(1,4);
    if(s2.compare(s3)==0){
        cout << "\nEqual\n";
        cout << s2;
    }
}
