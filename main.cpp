#include <iostream>

using namespace std;

//Função que recebe o vetor como ponteiro
void Funcao(int *y, int*num){

  //Criação de duas variaveis para maximo e minimo como ponteiro
  int *max,*min;
  
  //inicializando os valores das variaveis com o primeiro numero do vetor
  max = &num[0];
  min = &num[0];

  for(int i=1;i<*y;i++){

    if(num[i]>*max){
      max = &num[i];
    }
    if(num[i]<*min){
      min = &num[i];
    }
  }
  cout << "numeros dos seus vetores" <<endl;
  for(int x=0; x<*y;x++){
    cout << num[x]<< ", ";
  }
  cout << endl;
  cout << "O maior valor eh: " << *max <<endl;
  cout << "O menor valor eh: " << *min <<endl;
}



int main() {
  int x;

  // Solicitando a quantidade de numeros para o usuario

  cout<<"Quantos numeros deseja digitar?" << endl;
  cin >> x;

  int vet[x];

  //Solicitando os numeros 

  cout << "Digite os numeros em seguencia" <<endl;

  for(int i=0; i<x;i++){
    cin >> vet[i];
  }
  
  //Função void, onde envia o vetor e a quantidade de numeros.
  Funcao(&x, vet);

}