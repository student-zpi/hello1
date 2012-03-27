#include <cstdio>
#include <cstdlib>

void lista_pytan() {


}

void menu() {
	char choice = 1;
	//const int max_choice=2;
	while(choice!='K' && choice!='k') {
		system("clear");
		printf("Pytania i odpowiedzi\n====================\n");
		printf("P - Pokaz liste pytan\n");
		printf("K - koniec programu\n");
		//scanf("%i", &choice);
		choice = getchar();
		//fflush(stdin);
		//if(choice<0 || choice>max_choice) choice=1;
	}
}

int main() {
	printf("Hello world\n");
	menu();
	return 0;
}

