#include<stdio.h>
#include<string.h>

int main(){
	int flag;
	char username[5][60];
	char password[5][60];	
	char name[20], pass[20];

	for(int i=0 ; i<5 ; i++ ){

		printf(" Register \n");
		printf("username: \n");
		scanf("%s", username[i]);
		printf("password\n");
		scanf("%s", password[i]);

		printf(" Login \n");
		printf("username: \n");
		scanf("%s", name);
		printf("password\n");
		scanf("%s", pass);

		if(strcmp(name, username[i]) == 0 && strcmp(pass, password[i]) == 0)
			printf("login successful\n");
		else
			printf("invalid username or password\n");
		
		break;
	}
	return 0;
}