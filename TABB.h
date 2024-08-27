#ifndef TABB_H
#define TABB_H
#include <iostream>

using namespace std;


class TABB
{	
	public:
		typedef int TInfo;
		
		struct TNo{
			TInfo dado;
			TNo *esq,  *dir;
		};
		
		TNo *Raiz;
		
		bool IsEmpty();
		
		TNo* GetRaiz();
		
		void print_caminhamento_em_pre_ordem(TNo *no);
	    void print_caminhamento_em_in_ordem(TNo *no);
		void print_caminhamento_em_pos_ordem(TNo *no);

	TABB(); //construtor
	~TABB();// Destrutor
	
	void InserirNo(TNo *&No, TInfo valor);
	TNo* LocalizarNo(TNo *No, TInfo valor);
	
	
	//------------------------------------------------------------------------------
	protected:
		void Init();

	private:

}; //TABB

#endif
