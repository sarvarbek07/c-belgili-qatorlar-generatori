#include <iostream>

using namespace std;
int main() {
    int row;
    int colum;
    char belgi;
    
    cout <<"bir qatorda nechta bo`lsin:";
    cin >>colum;
    cout <<"necha qator bo`lsin:";
    cin >>row;
    cout <<"qanday belgi bo`lsin:";
    cin >>belgi;
    
    
for(int i=1;i<=row;i++){
    for (int a=1;a<=colum;a++){
        cout <<belgi<<' ';
    }
    cout <<'\n';
}

    return 0;
}