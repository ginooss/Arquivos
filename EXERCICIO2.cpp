#include <iostream>

int **mat1;
int **mat2;

void inserirvalor_matriz(){
	
	mat1 = new int*[3];
	for(int i=0; i<3; ++i)
	{
		mat1[i] = new int[3];
		for(int j=0; j<3; ++j)
	    {
	    	std::cout << "Digite o valor da posicao " << i << ", " << j << " :" << std::endl;
	    	std::cin >> mat1[i][j];
	    }
	    
	}
	
	mat2 = new int*[3];
	for(int i=0; i<3; ++i)
	{
		mat2[i] = new int[3];
		for(int j=0; j<3; ++j)
	    {
	    	std::cout << "Digite o valor da posicao " << i << ", " << j << " :" << std::endl;
	    	std::cin >> mat2[i][j];
	    }
	    
	}
}
	
void exibir_matriz(){	
	
	for(int i=0; i<3; ++i)
	{
	    for(int j=0; j<3; ++j)
	    {
            std::cout << mat1[i][j] << " | ";
		}
		std::cout << std::endl; 
	}

	std::cout << std::endl;
	
	for(int i=0; i<3; ++i)
	{
	    for(int j=0; j<3; ++j)
	    {
            std::cout << mat2[i][j] << " | ";
		}
	   	std::cout << std::endl;
	}
	std::cout << std::endl;
}

void comparar_matriz(){
	
	int cont = 0;
	
	for(int i=0; i<3; ++i)
	{
	    for(int j=0; j<3; ++j)
	    {
            if (mat1[i][j] == mat2[i][j])
			{
				cont++;
			}
		}
	}
	std::cout << cont << std::endl;
	if (cont == 9)
	{
		std::cout << "As matrizes são identicas" << std::endl;
	}
	
}

int main(int argc, char** argv)
{   
	inserirvalor_matriz();
	
	exibir_matriz();
	
	comparar_matriz();
}