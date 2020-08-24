#include <stdio.h>

#define SIZE 100

int readString(char buff[]);

int main(){
	char buff[SIZE];
	int noChars = 0;

	noChars=readString(buff);
	printf("String: %s\n",buff);
	printf("length: %d\n",noChars);
	return 0;
}

int readString(char buff[]){
	int index=0;
	buff[index] = getchar();
	/*must PREINCREMENT in this while loop!!  ++index and not index++ */
	while(buff[index]!= '\n'){
		buff[++index] = getchar();
	}
	buff[index]='\0';
	return index;
}
