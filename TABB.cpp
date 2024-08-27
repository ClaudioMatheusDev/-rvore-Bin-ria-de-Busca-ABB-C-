#include "TABB.h"
#include <iostream>

using namespace std;

void TABB::Init(){


Raiz = NULL;
}

bool TABB::IsEmpty(){
	return Raiz == NULL;
}

TABB::TNo* TABB::GetRaiz(){
	return Raiz;
}


TABB::TABB(){
	Init();
} // Construtor

void TABB::print_caminhamento_em_pre_ordem(TNo *no){
	 cout << no->dado << " ";//PROCESSANDO A IMPRESSÃO DO ELEMENTO
	print_caminhamento_em_pre_ordem(no->esq);
	print_caminhamento_em_pre_ordem(no->dir);
}


void TABB::print_caminhamento_em_in_ordem(TNo *no){
	if (no != NULL){
	 print_caminhamento_em_in_ordem(no->esq);
	 print_caminhamento_em_in_ordem(no->dir);
	 cout << no->dado << " "; //PROCESSANDO A IMPRESSÃO DO ELEMENTO
	}
}

void TABB::print_caminhamento_em_pos_ordem(TNo *no){
	if (no != NULL){
		print_caminhamento_em_in_ordem(no->esq);
		print_caminhamento_em_in_ordem(no->dir)
		cout << no->dado << " ";//PROCESSANDO A IMPRESSÃO DO ELEMENTO
	}
}

void TABB::InserirNo(TNo *&No, TInfo valor){
	if(No != NULL){
		InserirNo(No -> esq, valor);
	}else{
			InserirNo(No -> dir, valor);
	}else{
		No = new No;
		No -> dado = valor;
		No -> esq = NULL;
		No -> dir = NULL;
	}
} //Inserir no NO

void TABB::TNo* LocalizarNo(TNo *No, TInfo valor){
	if (No != NULL){
		
		if (valor == No->dado){
			return No;
		} 
		else if (valor <No-> dado){
			return LocalizarNo(No->esq, valor);
		}else{
			return LocalizarNo(No->dir, valor);
		} //SEGUNDO IF
	
	}else{
		return NULL;
	}
}//Localizar no No

