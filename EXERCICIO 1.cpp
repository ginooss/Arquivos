#include <iostream>
#include <iomanip>


using namespace std;


void alimenta_array(int p[])
{
    for(int i=0; i<10; ++i)
	{
		std:cout << "Digite um valor: ";
		std::cin >> *p;
		p++;
	}
	std::cout << std::endl;
	
}

void mostra_array2(int p[])
{
    for(int i=0; i<10; ++i)
	{
		std::cout << "Posição " << i << ": " << *p << std::endl;
		p++;
	}
	std::cout << std::endl;
	
}

int media;
int cont;

int media_aritmetica (int p[])
{	
	
	for (int i=0;i<10;++i)
	{
		
		media += *p;
		p++;
		
	}
	
	return media = media / 5;
		
}

int verifica_array (int p[])
{
	for (int i=0;i<10;++i)
	{
		
		if (*p > media){
			cont++;
			cout << "entrou" << endl;
		}
		
		p++;
	}
	
	cout << "A quantidade de elementos maiores do que a média aritmética são: " << cont;
	
}

int main(int argc, char** argv)
{   
	
    int a[10];

    alimenta_array(a);

    mostra_array2(a);

	media_aritmetica(a);
	
	verifica_array(a);
	
	return 0;
}



