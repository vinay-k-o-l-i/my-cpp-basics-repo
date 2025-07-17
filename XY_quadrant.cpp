#include<iostream>
 using namespace std;
 int main() {
    int X,Y;
    cout<<"enter the X value :";
    cin>>X;
    cout<<"enter the Y value :";
    cin>>Y;
    if(X>0,Y>0){
        cout<<" it is in 1 :";
        cin>>X,Y;
    }
    else if(X<0,Y>0){
        cout<<"it lies in 2 :";
        cin>>X,Y;
    }
    else if (X<0,Y<0){
        cout<<"it is in 3:";
        cin>>X,Y;
    }
    else if(X>0,Y<0){
        cout<<"lies in 4 :";
        cin>>X,Y;
    }
    else if (Y==0){
        cout<<"it is on x axis:";
        cin>>Y;
    
    }
    else if(X==0){
        cout<<"it lies on y axis :";
    }
    else if(X=0,Y=0){
        cout<<"it is the senter :";
        cin>>X,Y; 
    }
    
 }
/*
PS C:\Users\CL301_11\Downloads\entc-2-vinay-133> cd "c:\Users\CL301_11\Downloads\entc-2-vinay-133\" ; if ($?) { g++ vinay.c++ -o vinay } ; if ($?) { .\vinay }
enter the X value :22
enter the Y value :34
 it is in 1 :1*/
