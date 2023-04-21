#include<iostream>
#include<string>

using namespace std;

void replaceString(string s, string s1, string s2){
    int pos = -1;
    int found;
    while ((found = s.find(s1, pos + 1)) != string::npos){
        pos = found;
    }
    if (pos == -1 || s1 == ""){
        cout << s;
    }
    else{
        s = s.replace(s.begin()+pos, s.begin()+pos+s1.length(), s2);
        cout << s;
    }
}

///OLD
// void replaceString(string s, string s1, string s2){
//     size_t found = -1;
//     int i = -1;
    
//     while (1){
//         found = s.find(s1, found + 1);

//         if (found != string::npos){
//             i = found;
//         }
//         else break;
//     }

//     if (i == -1 || s1 == "") cout << s;
//     else cout << s.replace (i, s1.length(), s2);
// }

void deleteWord(string s, string s1){
    
    int found;
    while ((found = s.find(s1)) != string::npos){
        s = s.erase(found, s1.length());
       
    }
     cout << s;
}


int main(){
    // string s = "Truong Dai hoc Bach Khoa, Sai Gon";
    // string s1 = "ai";
    // string s2 = "ong";
    // replaceString(s, s1, s2);

    // string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    // string s1 = "ai ";
    // deleteWord(s, s1);

    string st; cin >> st;
    char current = st[0];
    int len = 1, maxlen = 1;
    for (int i = 1; i < st.length(); ++i){
        if (current != st[i]){
            current = st[i];
            len = 1;
        }
        else{
            len++;
        }
        maxlen = max(maxlen, len);
    }
    cout << maxlen;
    
    return 0;
}