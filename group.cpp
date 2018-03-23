//FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Roman Numerals.cpp
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: Nada Nasser Al-Said .......20170369........G.14
// Author2 and ID and Group: Hanan Mohamed Abdelrahim.........20170375........G.14
// Teaching Assistant: Enh. Dosoki
// Purpose:..........

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"2hlan ya user ya 7abibi 😀 "<<endl;

    bool nT=true;
    string roman[15]={"M"  ,"CM" ,"D" , "CD" ,"C"  , "XC","L" , "XL","XIX","X" , "IX" ,"IV","V" , "I","0"};
    int  date[15] = {1000  , 900 ,500 , 400  , 100 ,  90 , 50 ,  40  , 19  ,10 ,   9  , 4  , 5  ,  1 , 0 };
    int year,d1,d2,d3,d4;

    cout<<"Write the year = ";
///لازم يكون السنه بين ال1000و 3000:
    while (true){
        cin>>year;
        if (year>=1000 && year<=3000 ){
            break;
        }
        else{
            cout<<"invalid year write a new one : "<<endl;}
     }
///3shan nfsl 2l digits kl wa7d lw7do::-
    d1=(year/1000)*1000;
    d2=((year/100)*100)-d1;
    d3=((year/10)*10)-d1-d2;
    d4=year-(d1+d2+d3);
    cout<<"The Date in Roman Numerals = ";


/// d1 in Roman:    (  بس (d)كلهم نفس الكود بس كل مره بغير ال خانه )
    nT=true;
    int i=0,j=0,k=0,l=0,m=0;
    for (int i=0;i<15;i++){
        if(date[i]==d1){
            cout<<roman[i];
            j=100;
            k=100;
            l=100;
            m=100;
            nT=false;
            break;
        }
        for(int j = 0 ;j< 15; j++){
            if(date[i]+date[j]==d1){
                cout<<roman[i]<<roman[j];
                i=100;
                j=100;
                k=100;
                l=100;
                m=100;
                nT=false;
                break;}
            for (int k=0; k<15;k++){
                if(date[i]+date[j]+date[k]==d1){
                    cout<<roman[i]<<roman[j]<<roman[k];
                    i=100;
                    j=100;
                    k=100;
                    l=100;
                    m=100;
                    nT=false;
                    break;}
                for (int l=0;l<15;l++){
                    if(date[i]+date[j]+date[k]+date[l]==d1){
                        cout<<roman[i]<<roman[j]<<roman[k]<<roman[l];
                        i=100;
                        j=100;
                        k=100;
                        l=100;
                        m=100;
                        nT=false;
                        break;}
                     for (int m=0; m<15;m++){
                        if(date[i]+date[j]+date[k]+date[l]+date[m]==d1){
                            cout<<roman[i]<<roman[j]<<roman[k]<<roman[l]<<roman[m];
                            i=100;
                            j=100;
                            k=100;
                            l=100;
                            m=100;
                            nT=false;
                            break;}
                     }
                }
            }
        }
    }

///d2 in roman:
    nT=true;
    i=0;j=0;k=0;l=0;m=0;
    for (int i=0;i<15;i++){
        if(date[i]==d2){
            cout<<roman[i];
            j=100;
            k=100;
            l=100;
            m=100;
            nT=false;
            break;
        }
        for(int j = 0 ;j< 15; j++){
            if(date[i]+date[j]==d2){
                cout<<roman[i]<<roman[j];
                i=100;
                j=100;
                k=100;
                l=100;
                m=100;
                nT=false;
                break;}
            for (int k=0; k<15;k++){
                if(date[i]+date[j]+date[k]==d2){
                    cout<<roman[i]<<roman[j]<<roman[k];
                    i=100;
                    j=100;
                    k=100;
                    l=100;
                    m=100;
                    nT=false;
                    break;}
                for (int l=0;l<15;l++){
                    if(date[i]+date[j]+date[k]+date[l]==d2){
                        cout<<roman[i]<<roman[j]<<roman[k]<<roman[l];
                        i=100;
                        j=100;
                        k=100;
                        l=100;
                        m=100;
                        nT=false;
                        break;}
                     for (int m=0; m<15;m++){
                        if(date[i]+date[j]+date[k]+date[l]+date[m]==d2){
                            cout<<roman[i]<<roman[j]<<roman[k]<<roman[l]<<roman[m];
                            i=100;
                            j=100;
                            k=100;
                            l=100;
                            m=100;
                            nT=false;
                            break;}
                     }
                }
            }
        }
    }

///d3 in roman:-
    nT=true;
    i=0;j=0;k=0;l=0;m=0;
    for (int i=0;i<15;i++){
        if(date[i]==d3){
            cout<<roman[i];
            j=100;
            k=100;
            l=100;
            m=100;
            nT=false;
            break;
        }
        for(int j = 0 ;j< 15; j++){
            if(date[i]+date[j]==d3){
                cout<<roman[i]<<roman[j];
                i=100;
                j=100;
                k=100;
                l=100;
                m=100;
                nT=false;
                break;}
            for (int k=0; k<15;k++){
                if(date[i]+date[j]+date[k]==d3){
                    cout<<roman[i]<<roman[j]<<roman[k];
                    i=100;
                    j=100;
                    k=100;
                    l=100;
                    m=100;
                    nT=false;
                    break;}
                for (int l=0;l<15;l++){
                    if(date[i]+date[j]+date[k]+date[l]==d3){
                        cout<<roman[i]<<roman[j]<<roman[k]<<roman[l];
                        i=100;
                        j=100;
                        k=100;
                        l=100;
                        m=100;
                        nT=false;
                        break;}
                     for (int m=0; m<15;m++){
                        if(date[i]+date[j]+date[k]+date[l]+date[m]==d3){
                            cout<<roman[i]<<roman[j]<<roman[k]<<roman[l]<<roman[m];
                            i=100;
                            j=100;
                            k=100;
                            l=100;
                            m=100;
                            nT=false;
                            break;}
                     }
                }
            }
        }
    }

///d4 in roman:-
    nT=true;
    i=0;j=0;k=0;l=0;m=0;
    for (int i=0;i<15;i++){
        if(date[i]==d4){
            cout<<roman[i];
            j=10;
            k=10;
            l=10;
            m=10;
            nT=false;
            break;
        }
        for(int j = 0 ;j< 15; j++){
            if(date[i]+date[j]==d4){
                cout<<roman[i]<<roman[j];
                i=100;
                j=100;
                k=100;
                l=100;
                m=100;
                nT=false;
                break;}
            for (int k=0; k<15;k++){
                if(date[i]+date[j]+date[k]==d4){
                    cout<<roman[i]<<roman[j]<<roman[k];
                    i=100;
                    j=100;
                    k=100;
                    l=100;
                    m=100;
                    nT=false;
                    break;}
                for (int l=0;l<15;l++){
                    if(date[i]+date[j]+date[k]+date[l]==d4){
                        cout<<roman[i]<<roman[j]<<roman[k]<<roman[l];
                        i=100;
                        j=100;
                        k=100;
                        l=100;
                        m=100;
                        nT=false;
                        break;}
                     for (int m=0; m<15;m++){
                        if(date[i]+date[j]+date[k]+date[l]+date[m]==d4){
                            cout<<roman[i]<<roman[j]<<roman[k]<<roman[l]<<roman[m];
                            i=100;
                            j=100;
                            k=100;
                            l=100;
                            m=100;
                            nT=false;
                            break;}
                     }
                }
            }
        }
    }
}
