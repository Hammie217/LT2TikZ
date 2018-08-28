#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>

	char *first, *second, *third, *fourth, *fivth;
	char *first2, *second2, *third2, *fourth2, *fivth2;
	char *fileName;
	FILE *fp;
	char line[255];
	char line2[255];
	int min =1000, max=0;
	int rotated;
	void wireLine(){
	printf("\\draw(%f,-%f)\nto[short] (%lf,-%f);\n",((float)strtoimax(second,NULL,10)/16)/4,((float)strtoimax(third,NULL,10)/16)/4,((float)strtoimax(fourth,NULL,10)/16)/4,((float)strtoimax(fivth,NULL,10)/16)/4);
	}
	void resLine(){
		printf("\\draw(%f,-%f)\nto[R] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+6)/4);
	}

	void res90Line(){
		printf("\\draw(%f,-%f)\nto[R] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-8)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4);
	}

	void res180Line(){
		printf("\\draw(%f,-%f)\nto[R] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-6)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void res270Line(){
		printf("\\draw(%f,-%f)\nto[R] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4,((float)((strtoimax(third,NULL,10)+32)/16)+4)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void capLine(){
	printf("\\draw(%f,-%f)\nto[C] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16))/4,((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+4)/4);
	}

	void cap90Line(){
		printf("\\draw(%f,-%f)\nto[C] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-6)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4);
	}

	void cap180Line(){
		printf("\\draw(%f,-%f)\nto[C] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-4)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-0)/4);
	}

	void cap270Line(){
		printf("\\draw(%f,-%f)\nto[C] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4,((float)((strtoimax(third,NULL,10)+32)/16)+2)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void indLine(){
		printf("\\draw(%f,-%f)\nto[L] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+6)/4);
	}

	void ind90Line(){
		printf("\\draw(%f,-%f)\nto[L] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-8)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4);
	}

	void ind180Line(){
		printf("\\draw(%f,-%f)\nto[L] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-6)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void ind270Line(){
		printf("\\draw(%f,-%f)\nto[L] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4,((float)((strtoimax(third,NULL,10)+32)/16)+4)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void voltageLine(){
		printf("\\draw(%f,-%f)\nto[V] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)+6)/4);
	}

	void volt90Line(){
		printf("\\draw(%f,-%f)\nto[V] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-8)/4,((float)(strtoimax(fourth,NULL,10)/16)+0)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)+0)/4);
	}

	void volt180Line(){
		printf("\\draw(%f,-%f)\nto[V] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)-6)/4,((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
	}

	void volt270Line(){
		printf("\\draw(%f,-%f)\nto[V] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)-0)/4,((float)((strtoimax(third,NULL,10)+32)/16)+4)/4,((float)(strtoimax(fourth,NULL,10)/16)-0)/4);
	}



	void SymbolLine(){
	//printf("Symbol: ");

	// if next line = window then rotated
	// bottom first then 90 degrees
	// top first the 270 degrees
	if(strcmp(second,"res")==0){
		fgets(line2,sizeof(line2),fp);
		first2 = strtok(line2," ");
		second2 = strtok(NULL," ");
		third2 = strtok(NULL," ");
		fourth2 = strtok(NULL," ");
		fivth2 = strtok(NULL," ");
		if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VBottom")==0)){
			res90Line();
		}
		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VTop")==0)){
			res270Line();
		}

		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"Left")==0)){
			res180Line();
		}
		else{
			resLine();
		}
	}

	else if(strcmp(second,"cap")==0){
		fgets(line2,sizeof(line2),fp);
		first2 = strtok(line2," ");
		second2 = strtok(NULL," ");
		third2 = strtok(NULL," ");
		fourth2 = strtok(NULL," ");
		fivth2 = strtok(NULL," ");
		if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VBottom")==0)){
			cap90Line();
		}
		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VTop")==0)){
			cap270Line();
		}

		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"Left")==0)){
			cap180Line();
		}
		else{
			capLine();
		}
	}
	else if(strcmp(second,"voltage")==0){
		fgets(line2,sizeof(line2),fp);
		first2 = strtok(line2," ");
		second2 = strtok(NULL," ");
		third2 = strtok(NULL," ");
		fourth2 = strtok(NULL," ");
		fivth2 = strtok(NULL," ");
		if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VBottom")==0)){
			volt90Line();
		}
		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VTop")==0)){
			volt270Line();
		}

		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"Left")==0)){
			volt180Line();
		}
		else{
			voltageLine();
		}
	}
	else if(strcmp(second,"ind")==0){
		fgets(line2,sizeof(line2),fp);
		first2 = strtok(line2," ");
		second2 = strtok(NULL," ");
		third2 = strtok(NULL," ");
		fourth2 = strtok(NULL," ");
		fivth2 = strtok(NULL," ");
		if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VBottom")==0)){
			ind90Line();
		}
		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VTop")==0)){
			ind270Line();
		}

		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"Left")==0)){
			ind180Line();
		}
		else{
			indLine();
		}
	}
	else{
		printf("Unknown\n");
	}
	}



int main(){


	fileName = (char *) malloc(255);
	printf("Input File path and name:  ");
	scanf("%s",fileName);
	printf("Length:%u\n",(unsigned)strlen(fileName));
	fileName = (char *) realloc(fileName,(unsigned)strlen(fileName));
	printf("string: %s\n",fileName);
	fp = fopen(fileName,"r");
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
