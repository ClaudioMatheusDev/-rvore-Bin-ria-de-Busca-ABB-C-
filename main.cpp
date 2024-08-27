#include <iostream>
#include "TABB.h"

using namespace std;

int main(int argc, char** argv) {
	TABB arvore;
	TABB::TNo* no;
	TABB::TInfo n;
	
	arvore.InserirNo(arvore.Raiz, 8);
	arvore.InserirNo(arvore.Raiz, 3);
	arvore.InserirNo(arvore.Raiz, 1);
	arvore.InserirNo(arvore.Raiz, 5);
	arvore.InserirNo(arvore.Raiz, 11);
	arvore.InserirNo(arvore.Raiz, 9);
	arvore.InserirNo(arvore.Raiz, 10);
	arvore.InserirNo(arvore.Raiz, 14);
	
	
	
	arvore.print_caminhamento_em_pre_ordem(arvore.GetRaiz() );
	
	cout << "Informe algum numero para ser pesquisado: ";
	cin >> n;
	no = arvore.LocalizarNo(arvore.Raiz, n);
	
	if (no != NULL){
		cout << "Numero encontrado!";
	}else{
		cout << "Numero nao encontrado!";
	}
	
}
