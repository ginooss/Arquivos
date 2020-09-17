#include <iostream>
#include <string>
#include <time.h> 
using namespace std;

//João Vitor Santa Rosa Gino
//cb3005488

class Data
{
	private: 	
	   int dia;
	   int mes;
	   int ano;
	   int idade;
    public:
    	Data(int dia, int mes, int ano)
		{
			this->dia = dia;
			this->mes = mes;
			this->ano = ano;
		}
		Data()
		{
			this->dia = 0;
			this->mes = 0;
			this->ano = 0;
		}
    	void setDia(int dia)
    	{
			this->dia = dia;
		}
		void setMes(int mes)
    	{
			this->mes = mes;
		}
		void setAno(int ano)
    	{
			this->ano = ano;
		}
		void setIdade(int idadeTemp, int diaTemp, int mesTemp, int anoTemp){
			this->dia = diaTemp;
			this->mes = mesTemp;
			this->ano = anoTemp;
			this->idade = idadeTemp;
		};
		int getDia()
		{
			return this->dia;
		}
		int getMes()
		{
			return this->mes;
		}
		int getAno()
		{
			return this->ano;
		}

		string getData()
		{
		    return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
		}
};

class Contato
{		
	private: 		
		string nome;
		string email;
		string telefone;
		int idade;
		Data data2;
		
	public:
		
		void setData(Data data2){
			this->data2=data2;
		}
				
		void setNome(string nomeTemp){
			this->nome = nomeTemp;
		};
		void setEmail(string emailTemp){
			this->email = emailTemp;
		};
		void setTelefone(string telefoneTemp){
			this->telefone = telefoneTemp;
		};

		string getNome(){
			return this->nome;	
		};
		string getEmail(){
			return this->email;	
		};
		string getTelefone(){
			return this->telefone;	
		};
		
		int getIdade(){

        Data *idade=&data2;
        
		if((idade->getDia()>15)&(idade->getMes()>=9))
		{
    		return this->idade=(2020-idade->getAno())-1;
		}
		else{
			return this->idade=2020-idade->getAno();
		}	
		};

};

int main(int argc, char** argv)
{   

	string nome[10];
	string email[10];
	string telefone[10];
	int dia[10];
	int mes[10];
	int ano[10];
	int idade[10];
    double soma =0;
    double media=0;
    int cont2=0;
    int maisvelho = 0;
	
		
	Contato *cont = new Contato[10];
	Data *hoje = new Data(17, 9, 2020);
	Data *nasc = new Data[10];
	Data nasc2[10];
	
	for(int i =0; i<10;i++)
	{
		cout << "Digite o seu nome: ";
		cin >> nome[i];
		cont[i].setNome(nome[i]);
		
		cout << "Digite o seu e-mail: ";
		cin >> email[i];
		cont[i].setEmail(email[i]);
		
		cout << "Digite o seu telefone: ";
		cin >> telefone[i];
		cont[i].setTelefone(telefone[i]);
		
		cout << "Digite sua data de nascimento: " << endl;
		cout << "Dia: "; 
		cin >> dia[i];
		nasc[i].setDia(dia[i]);
		
		cout << "Mes: "; 
		cin >> mes[i];
		nasc[i].setMes(mes[i]);
		
		cout << "Ano: "; 
		cin >> ano[i];
		nasc[i].setAno(ano[i]);
		
		nasc2[i]=nasc[i];
		cont[i].setData(nasc2[i]);
		
		idade[i]=cont[i].getIdade();
	}
	
	cout<< endl;
	
	for(int i =0;i<10;i++)
	{
		cout << "---" <<hoje->getData()<< "---" << endl;
		cout << "-----------------------" << endl;
		cout << "Nome: " <<cont[i].getNome() << endl;
		cout << "E-mail:" <<cont[i].getEmail() << endl;
		cout << "Telefone: " <<cont[i].getTelefone() << endl;
		cout << "Data de Nascimento: " <<nasc[i].getData() << endl;
		cout << "Idade: " << idade[i] << endl;
		
		soma+=idade[i];
	}
	
	media=soma/10;
	
	cout<< endl;
	
	cout << "A mï¿½dia da idade dos contatos ï¿½ igual: " << media << endl;
	
	cout<< endl;
	
	cout << "Contato com idade maior que a mï¿½dia: " << endl;
	
	for(int i=0;i<10;i++)
	{
		if(idade[i]>media)
		{
			cout << cont[i].getNome() << endl; 
		}
		if(idade[i]>18)
		{
			cont2++;
		}
		if(idade[i]>maisvelho)
		{
			maisvelho=idade[i];
		}
	}
	
	cout<< endl;
	
	cout << "Quantidade de contatos maiores de idade: " << cont2 << endl;
	
	cout<< endl;
	
	cout << "O contato mais velho ï¿½: ";
	for(int i=0;i<10;i++)
	{
		if(idade[i]==maisvelho)
		{
			cout << cont[i].getNome() << " " << cont[i].getEmail() << " " << cont[i].getTelefone();
		}	
	}
	
	cout<< endl;

}