#include <iostream>// biblioteca padrao de entrada e saida de c++
#include <cstdlib>//biblioteca de conversao
#include <locale> //biblioteca de acentuação
#include <math.h> // matematica
#define MAX 5


using namespace std;
struct cadastro{
	char cid[MAX];
	char bairro[MAX];
	char escola[MAX];
	char sala[MAX];
	char prof[MAX];
	char materia[MAX];
	int op; 	
}cad;

int main(){
	
	char cid[MAX];
	char bairro[MAX];
	char escola[MAX];
	char sala[MAX];
	char prof[MAX];
	char materia[MAX];
	int i,op; 	
	
for (i=0;i<MAX;i++){
cout <<"\nESCOLHA A OPCAO DESEJADA\n";	
cout <<"\n1-cadastrar\n2-buscar\n3-excluir\n4-sair\n";
cin  >>op;
 
 switch(op){	
 	case 1:
  system("cls");
 cout << "nome da cidade:"<< endl;
 cin  >> cad.cid;
 cout << "Nome do bairro "<< endl;
 cin >> cad.bairro;
 cout << "Nome do colegio "<< endl;
 cin >> cad.escola;
 cout << "Numero da sala "<< endl;
 cin >> cad.sala; 	
 cout << "professor:"<< endl;
 cin  >> cad.prof;
 cout << "materia:"<< endl;
 cin  >> cad.materia;
 break;
 case 2:
 	break;
 case 3:
    break;	
 case 4:
    exit(0);
	default:
	system("pause");	 		
 }
 system("cls"); 
 cout << "\n\nCadastro feito"<< endl;
 cout <<cad.cid << endl;
 cout <<cad.bairro << endl;
 cout <<cad.escola << endl;
 cout <<cad.sala << endl;
 cout <<cad.prof<< endl;
 cout <<cad.materia << endl;
  
  system("pause");
  return 0;
  }
}


