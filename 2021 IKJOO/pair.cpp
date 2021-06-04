#include<iostream>
#include<utility>

using namespace std;

int main(){
    pair <int, char> p;
    p = make_pair(1,'c');
    p = make_pair(2,'d');
    cout<<p.first<<"-->"<<p.second;
}
