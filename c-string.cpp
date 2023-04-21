#include<iostream>
#include<cstring>

using namespace std;

// Student may implement another function as need

void printFirstRepeatedWord(char str[]) {

    char current[strlen(str)];
    int size = 0;
    for (int i = 0; i <= strlen(str); ++i){
        if (str[i] == ' ' || i == strlen(str)){
            char* strTemp = new char;
            strTemp = str+i;
            char* p = strpbrk(current, strTemp);

            delete strTemp;

            if (p != NULL){
                cout << current;
                return;
            }
            for (int i = 0; i < strlen(str); ++i){
                current[i] = '\0';
            }
        }
        else{
            current[size++] = str[i];
        }
    }
}    

int main(){
    char str[] = "car taxi bike bike car taxi" ;
    printFirstRepeatedWord(str);

    return 0;
}