/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{

    double sehirler[3][3]={
     {150,10,0.01},
     {300,35,0.10},
     {100,70,0.02}
    };
    
    int rezerv;
    int tuketim;
    int yagis;
    double buharlasma;
    double GNT;
    double SDS;
    
    GNT=tuketim-yagis+(rezerv*buharlasma);
    SDS=rezerv/GNT;
    cout<<"rezerv miktarını girin"<<endl;
    cin>>rezerv;
    if(rezerv>=100){
        cout<<"rezerv miktarı 100 den büyük olamaz"<<endl;
    }
    else if(rezerv>=70){
        cout<<"normal mod: günlük tüketim değişmeyecek"<<endl;
    }
    else if(rezerv<=70 & rezerv>=30){
        cout<<"tasarruf modu: tüketim yüzde 20 azaltırılacak"<<endl;
        tuketim=(tuketim*20/100);
        cout<<tuketim;
    }
    else if(rezerv<=30){
        cout<<"acil durum modu: tüketim yüzde 40 azaltırılacaktır"<<endl;
        tuketim=(tuketim*40/100);
        cout<<tuketim;
    }
    else{
        cout<<"hatalı giriş"<<endl;;
    }
    cout<<"yazılan rakamı gir"<<endl;
    
    ofstream dosya("sehirler.txt",ios::out);
    for(int i=0;i<1;i++){
        string sehirler;
        cin>>sehirler;
        dosya<<sehirler<<endl;
    }
    dosya.close();
    return 0;
}
