#include <iostream>

using namespace std;


void Funcao(int y, int*num){
  int *max,*min;
  
  max = &num[0];
  min = &num[0];

  for(int i=1;i<y;i++){

    if(num[i]>*max){
      max = &num[i];
    }
    if(num[i]<*min){
      min = &num[i];
    }
  }
  cout << "numeros dos seus vetores" <<endl;
  for(int x=0; x<y;x++){
    cout << num[x]<< ", ";
  }
  cout << endl;
  cout << "O maior valor eh: " << *max <<endl;
  cout << "O menor valor eh: " << *min <<endl;
}



int main() {
  int x;

  cout<<"Quantos numeros deseja digitar?" << endl;
  cin >> x;

  int vet[x];

  cout << "Digite os numeros em seguencia" <<endl;

  for(int i=0; i<x;i++){
    cin >> vet[i];
  }
  
  Funcao(x, vet);

}