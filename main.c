#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>

	char *first, *second, *third, *fourth, *fivth;
	void wireLine(){
	printf("\\draw(%ld,%ld)\nto[short] (%ld,%ld);\n",strtoimax(second,NULL,10)/16,strtoimax(third,NULL,10)/16,strtoimax(fourth,NULL,10)/16,strtoimax(fivth,NULL,10)/16);
	}
	void resLine(){
		printf("\\draw(%ld,%ld)\nto[R] (%ld,%ld);\n",((strtoimax(third,NULL,10)+32)/16)-1,(strtoimax(fourth,NULL,10)/16)+1,((strtoimax(third,NULL,10)+32)/16)-1,(strtoimax(fourth,NULL,10)/16)+6);
	}

	void capLine(){
	printf("\\draw(%ld,%ld)\nto[C] (%ld,%ld);\n",((strtoimax(third,NULL,10)+32)/16)-1,(strtoimax(fourth,NULL,10)/16)-1,((strtoimax(third,NULL,10)+32)/16)-1,(strtoimax(fourth,NULL,10)/16)+4);
	}

	void voltageLine(){
		printf("\\draw(%ld,%ld)\nto[V] (%ld,%ld);\n",((strtoimax(third,NULL,10)+32)/16)-2,(strtoimax(fourth,NULL,10)/16)+1,((strtoimax(third,NULL,10)+32)/16)-2,(strtoimax(fourth,NULL,10)/16)+6);
	}

	void SymbolLine(){
	//printf("Symbol: ");
	if(strcmp(second,"res")==0){
		resLine();
	}
	else if(strcmp(second,"cap")==0){
		capLine();
	}
	else if(strcmp(second,"voltage")==0){
		voltageLine();
	}
	else{
		printf("Unkown\n");
	}
	}



int main(){

	char *fileName;
	fileName = (char *) malloc(255);
	printf("Input File path and name:  ");
	scanf("%s",fileName);
	printf("Length:%u\n",(unsigned)strlen(fileName));
	fileName = (char *) realloc(fileName,(unsigned)strlen(fileName));
	printf("string: %s\n",fileName);
	FILE *fp;
	char line[255];
	fp = fopen(fileName,"r");
	int min =1000, max=0;
	while(fgets(line,sizeof(line),fp)!=NULL){
		first = strtok(line," ");
		second = strtok(NULL," ");
		third = strtok(NULL," ");
		fourth = strtok(NULL," ");
		fivth = strtok(NULL," ");
		if(strcmp(first,"WIRE")==0){
			//min max on 2,3,4,5
			if(strtoimax(second,NULL,10)>max){
				max=(strtoimax(second,NULL,10));
			}
			if(strtoimax(third,NULL,10)>max){
				max=(strtoimax(third,NULL,10));
			}
			if(strtoimax(fourth,NULL,10)>max){
				max=(strtoimax(fourth,NULL,10));
			}
			if(strtoimax(fivth,NULL,10)>max){
				max=(strtoimax(fivth,NULL,10));
			}
			if(strtoimax(second,NULL,10)<min){
			min=(strtoimax(second,NULL,10));
			}
			if(strtoimax(third,NULL,10)<min){
				min=(strtoimax(third,NULL,10));
			}
			if(strtoimax(fourth,NULL,10)<min){
				min=(strtoimax(fourth,NULL,10));
			}
			if(strtoimax(fivth,NULL,10)<min){
				min=(strtoimax(fivth,NULL,10));
			}
		}
		else if(strcmp(first,"SYMBOL")==0){
			//min max on 3,4
		}
	}
	printf("Min: %d\nMax: %d\n", min,max);
	rewind(fp);
	while(fgets(line,sizeof(line),fp)!=NULL){
		first = strtok(line," ");
		second = strtok(NULL," ");
		third = strtok(NULL," ");
		fourth = strtok(NULL," ");
		fivth = strtok(NULL," ");
		if(strcmp(first,"WIRE")==0){
			wireLine();
		}
		else if(strcmp(first,"SYMBOL")==0){
			SymbolLine();
		}
	}
	fclose(fp);
	return 0;
}
