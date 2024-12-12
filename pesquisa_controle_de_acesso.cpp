#include <iostream>

using namespace std;

int binaria(int vetor[], int tamanho, int x){
    
    int baixo,meio,alto;
    
    baixo = 0;
    alto = tamanho-1;
    
    while(baixo <= alto){
        meio = (baixo + alto)/2;
        
        if(x<vetor[meio]){
            alto = meio -1;
            
        }else{
            if(x>vetor[meio]){
                baixo = meio+1;
                
            }else{
                return  meio;
            }
        }
    }
    return -1;
}

int main (){
    int vetor[20];
    int n, x,res,i=0;
    
    int tamanho = 0;
    
    while (tamanho < 20) {
        cin >> n;
        if (n == -1) {
            break;
        }
        vetor[i] = n;
        tamanho++;
        i++;
    }
    cin>>x;
    
    res = binaria(vetor,tamanho,x);
    if(res==-1){
        cout<<"n possui acesso";
    }else{
        cout<<"possui acesso";
    }
}