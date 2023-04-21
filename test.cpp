#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#define scii(a,b) scanf("%d%d",&a,&b)
#define sci(a) scanf("%d",&a)
#define fto(i,a,b) for (int i = a; i <= b; ++i)
#define vi vector<int>
#define ii pair<int,int>
#define ll long long
#define oo 1000000009
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define EPS 0.000000001


#define maxN 1007
using namespace std;

int customSize(char *st){
    return strlen(st);
}

int main(){
    char st[] = "blablabla";
    st[sizeof(st)] = 0;
    cout << customSize(st);


    return 0;
}