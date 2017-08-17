#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

	FILE *fp;
	char *line = NULL;
	char read;
	size_t len = 0; 
	char  *path;
	char c;
	char str[50];
	int i=0;
	char key1[50] = "Image";
	
	int counterImages = 0;

	printf("LINES:%d\n", argc);
	
	for(int i = 0; i < argc; i++){
	
		printf("%s\n", argv[i]);
		
	}
	
	path = argv[1];
	
	printf("%s started on ", argv[0]);
	fflush(stdout);
	system("date");
	printf("\n");

	printf("Input file: %s\n", path);
	
	fp = fopen(path, "r");
	
	if(fp == NULL){
	printf("File does not exist");
	}else{
	
	while((read = getline(&line, &len, fp)) != -1){
		
		i = 0;	
		while((c=fgetc(fp))!= ' ' ){
		str[i] = c;
		i++;	
		} 
		if(strcmp(str,key1)== 0)
		{
			counterImages++;

		}

		printf("Images %d", counterImages);
	}	

	}
}

