#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct intro {
	char name[30];
	char country[30];
	int population;
}Intro;

int main() {
	printf("Input three cities: \n");
	Intro infor[3];

	for (int i = 0; i < 3; i++) {
		printf("name> ");
		fgets(infor[i].name, sizeof(infor[i].name), stdin);
		infor[i].name[strlen(infor[i].name) - 1] = '\0';

		printf("Country> ");
		fgets(infor[i].country, sizeof(infor[i].country), stdin);
		infor[i].country[strlen(infor[i].country) - 1] = '\0';

		printf("Population> ");
		scanf("%d", &infor[i].population);
		while(getchar() != '\n');
	}
	
	printf("\n");
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people \n", i+1, infor[i].name, infor[i].country, infor[i].population);
	}



	return 0;
}