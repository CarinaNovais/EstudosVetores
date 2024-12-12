#include <iostream>
 
using namespace std;

struct mat{
    int matricula;
    string nome;
    string curso;
};

int main (){
    int n;
    
    do{
        cin>>n;
    }while(n<1 || n>10000);
    
    mat estudante[n];
    
    cin.ignore();
    for(int i=0; i<n;i++){
        getline(cin,estudante[i].nome);
        getline(cin,estudante[i].curso);
        cin>>estudante[i].matricula;
        cin.ignore();
    }
    bool achou = false;
    string busca;
    getline(cin,busca);
    for(int j = 0; j<n;j++){
        if(busca== estudante[j].nome){
            cout<<estudante[j].nome<<endl<<estudante[j].curso<<endl<<estudante[j].matricula<<endl;
            achou = true;
            break;
        }
        
    }
    if(achou == false){
        cout<<"Aluno nao localizado";
    }
}