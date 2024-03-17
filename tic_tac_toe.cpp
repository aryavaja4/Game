#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="0123456789";
    string m1="----------";
    string m2="|";
    int x;

    cout<<s[1]<<" "<<m2<<" "<<s[2]<<" "<<m2<<" "<<s[3]<<"\n";
    cout<<m1<<"\n";
    cout<<s[4]<<" "<<m2<<" "<<s[5]<<" "<<m2<<" "<<s[6]<<"\n";
    cout<<m1<<"\n";
    cout<<s[7]<<" "<<m2<<" "<<s[8]<<" "<<m2<<" "<<s[9]<<"\n";


    for(int i=1;i<=9;i++){
        if(i%2==1){
            cout<<"enter value player 1"<<"\n";
        }
        if(i%2==0){
            cout<<"enter value player 2"<<"\n";
        }

        cin>>x;
        
        if(i%2==1){
            s[x]='X';
        }
        else{
            s[x]='O';
        }

        cout<<s[1]<<" "<<m2<<" "<<s[2]<<" "<<m2<<" "<<s[3]<<"\n";
        cout<<m1<<"\n";
        cout<<s[4]<<" "<<m2<<" "<<s[5]<<" "<<m2<<" "<<s[6]<<"\n";
        cout<<m1<<"\n";
        cout<<s[7]<<" "<<m2<<" "<<s[8]<<" "<<m2<<" "<<s[9]<<"\n";

        if(s[1]==s[2] && s[2]==s[3]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[4]==s[5] && s[5]==s[6]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[7]==s[8] && s[8]==s[9]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[1]==s[4] && s[4]==s[7]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1"<<"\n";
            }
            if(i%2==0){
                cout<<" PLAYER 2"<<"\n";
            }
            break;
        }

        if(s[2]==s[5] && s[5]==s[8]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[3]==s[6] && s[6]==s[9]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[1]==s[5] && s[5]==s[9]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }

        if(s[3]==s[5] && s[5]==s[7]){
            cout<<"WIN";
            if(i%2==1){
            cout<<" PLAYER 1";
            }
            if(i%2==0){
                cout<<" PLAYER 2";
            }
            break;
        }  
    }
}