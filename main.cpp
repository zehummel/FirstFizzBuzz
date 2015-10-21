#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int x, y, n, i;
    string buffer;
    ifstream input("inputsample.txt");//select file for input
    ofstream output("outputsample.txt");//select file for output
    while (!input.eof()){
            while(getline(input,buffer)){
                stringstream(buffer) >> x >> y >> n;
                i = 0;
                while(i<n){
                    i++;
                    if(i%x==0&&i%y==0){
                        cout<<"FB";
                        output<<"FB";
                    }else if(i%x==0){
                        cout<<"F";
                        output<<"F";
                    }else if(i%y==0){
                        cout<<"B";
                        output<<"B";
                    }else{
                        cout<< i;
                        output<< i;
                    }
                    if(i<n){
                        cout<<" ";
                        output<<" ";
                    }
                }
              cout<<"\n";
              output<<"\n";
            }
        input.close();
    }
    output.close();
    return 0;
}
