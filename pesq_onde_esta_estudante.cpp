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
                return meio;
            }
        }
    }
    return -1;
}

int main (){
    int vetor[20];
    int n,m,x,res;
    
    do{
        cin>>n;    
    }while(n<1 || n>10000);
    
    
    for(int i=0; i<n; i++){
        cin>> m;
        vetor[i]=m;
    }
    
    cin>>x;
    
    res = binaria(vetor, n,x);
    
    if(res==-1){
        cout<<"nao localizado";
    }else{
        cout<<"corredor "<<res<<endl;
    }
    
}