#include "iostream"

using namespace std;    

#define low_limit 1
#define up_limit 100

int main(){
    int num1, num2, num3, vero = 1;
    char operazione;
    do{
        cout<<"\n\nInserire tre valori per la calcolatrice(compresi tra "<<low_limit<<" e "<<up_limit<<")";
        do{
            cout<<"\nA: ";
            cin>>num1;
        }while(num1 < low_limit || num1 > up_limit);
        do{
            cout<<"\nB: ";
            cin>>num2;
        }while(num2 < low_limit || num2 > up_limit);
        do{
            cout<<"\nC: ";
            cin>>num3;
        }while(num3 < low_limit || num3 > up_limit);
        cout<<"Per scegliere l'operazione da eseguire inserire il carattere corrispondente\nA - somma tra "<<num1<<", "<<num2<<" e "<<num3;
        cout<<"\nB - prodotto tra "<<num1<< " e "<<num2;
        cout<<"\nC - sottrazione tra "<<num3<< " e "<<num1;
        cout<<"\nD - divisione tra "<<num2<< " e "<<num3;
        cout<<"\nX - uscire dal programma\n";
        cout<<"\nInserire l'operazione da eseguire: ";
        cin>>operazione;
        switch (operazione){
        case 'A': case 'a':
            cout<<endl<<num1<<"+"<<num2<<"+"<<num3<<"="<<num1+num2+num3<<endl;
            break;
        case 'B': case 'b':
            cout<<endl<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
            break;
        case 'C': case 'c':
            cout<<endl<<num3<<"-"<<num1<<"="<<num3-num1<<endl;
            break;
        case 'D': case 'd':
            cout<<endl<<num2<<"/"<<num3<<"="<<(double)num2/num3<<endl;
            break;
        case 'X': case 'x': 
            vero = 0;
            break;
        }
    }while(vero == 1);
    return 0;
}
