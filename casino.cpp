#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int random(int num){
    srand(time(0));
    int x = rand() % num;
    return x;
}
void won() {
    
}
int casino() {
    int life = 3;
    int n;
    int range;
    cout<<"ENTER YOUR RANGE : ";cin>>range;
    system("cls");
    cout<<"RANGE = "<<range<<endl;
    int rand_int = random(range);
    cout<<"Enter your guess : ";cin>>n;
    if(n>range){
        if(n==rand_int){
            
        }
    }
}


int main() {
   system("cls");
}