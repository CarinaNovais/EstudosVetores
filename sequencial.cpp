#include <iostream>

using namespace std;

int main (){
    bool achou = false;
    int numero, i=0, busca;
    int vetor[100];
    do{
        cin>>numero;
        if(numero!=-1){
            vetor[i]=numero;
            i++;
        }
        
    }while(numero!=-1);
    
    cin>>busca;
    
    for(i=0; i<100; i++){
        if(busca == vetor[i]){
            achou = true;
            break;
        }
    }
    if(achou==true){
        cout<<busca<<" encontrado na posicao "<<(i+1);
    }
    
    
    return 0;
}