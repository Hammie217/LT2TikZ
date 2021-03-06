#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>
#include <errno.h>
#include <stdio.h>
#include <gtk/gtk.h>

	char *first, *second, *third, *fourth, *fivth;
	char *first2, *second2, *third2, *fourth2, *fivth2;
	char *fileName ="";
	FILE *fp;
	char line[255];
	char line2[255];
	int min =1000, max=0;
	int rotated;
	int transistorCount =0;


GtkWidget *
create_filechooser_dialog(char *init_path, GtkFileChooserAction action)
{
  GtkWidget *wdg = NULL;

  switch (action) {
    case GTK_FILE_CHOOSER_ACTION_SAVE:
      wdg = gtk_file_chooser_dialog_new("Save file", NULL, action,
        "Cancel", GTK_RESPONSE_CANCEL,
        "Save", GTK_RESPONSE_OK,
        NULL);
      break;

    case GTK_FILE_CHOOSER_ACTION_OPEN:
      wdg = gtk_file_chooser_dialog_new("Open file", NULL, action,
        "Cancel", GTK_RESPONSE_CANCEL,
        "Open", GTK_RESPONSE_OK,
        NULL);
      break;

    case GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER:
    case GTK_FILE_CHOOSER_ACTION_CREATE_FOLDER:
      break;
  }

  return wdg;
}

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

	void diodeLine(){
	printf("\\draw(%f,-%f)\nto[D] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16))/4,((float)((strtoimax(third,NULL,10)+32)/16)-1)/4,((float)(strtoimax(fourth,NULL,10)/16)+4)/4);
	}

	void diode90Line(){
		printf("\\draw(%f,-%f)\nto[D] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4,((float)((strtoimax(third,NULL,10)+32)/16)-6)/4,((float)(strtoimax(fourth,NULL,10)/16)+1)/4);
	}

	void diode180Line(){
		printf("\\draw(%f,-%f)\nto[D] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-0)/4,((float)((strtoimax(third,NULL,10)+32)/16)-3)/4,((float)(strtoimax(fourth,NULL,10)/16)-4)/4);
	}

	void diode270Line(){
		printf("\\draw(%f,-%f)\nto[D] (%f,-%f);\n",((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4,((float)((strtoimax(third,NULL,10)+32)/16)+2)/4,((float)(strtoimax(fourth,NULL,10)/16)-1)/4);
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

	void npn(){
		printf("\\draw (%f,-%f) node[npn](npn%d) {};\n",((float)((strtoimax(third,NULL,10)+32)/16)+2)/4,((float)(strtoimax(fourth,NULL,10)/16)+3)/4,transistorCount);
		printf("\\draw (npn%d.B) to[short](%f,-%f);",transistorCount,((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)+3)/4);
	}

	void npn90(){
		printf("\\draw (%f,-%f) node[npn,rotate=-90](npn%d) {};\n",((float)((strtoimax(third,NULL,10)+32)/16)-5)/4,((float)(strtoimax(fourth,NULL,10)/16)+4)/4,transistorCount);
		printf("\\draw (npn%d.B) to[short](%f,-%f);",transistorCount,((float)((strtoimax(third,NULL,10)+32)/16)-5)/4,((float)(strtoimax(fourth,NULL,10)/16)+0)/4);
	}

	void npn180(){
		printf("\\draw (%f,-%f) node[npn,rotate=180](npn%d) {};\n",((float)((strtoimax(third,NULL,10)+32)/16)-6)/4,((float)(strtoimax(fourth,NULL,10)/16)-3)/4,transistorCount);
		printf("\\draw (npn%d.B) to[short](%f,-%f);",transistorCount,((float)((strtoimax(third,NULL,10)+32)/16)-2)/4,((float)(strtoimax(fourth,NULL,10)/16)-3)/4);
	}

	void npn270(){
		printf("\\draw (%f,-%f) node[npn,rotate=90](npn%d) {};\n",((float)((strtoimax(third,NULL,10)+32)/16)+1)/4,((float)(strtoimax(fourth,NULL,10)/16)-4)/4,transistorCount);
		printf("\\draw (npn%d.B) to[short](%f,-%f);",transistorCount,((float)((strtoimax(third,NULL,10)+32)/16)+1)/4,((float)(strtoimax(fourth,NULL,10)/16)+0)/4);
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
	else if(strcmp(second,"diode")==0){
		fgets(line2,sizeof(line2),fp);
		first2 = strtok(line2," ");
		second2 = strtok(NULL," ");
		third2 = strtok(NULL," ");
		fourth2 = strtok(NULL," ");
		fivth2 = strtok(NULL," ");
		if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VBottom")==0)){
			diode90Line();
		}
		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"VTop")==0)){
			diode270Line();
		}

		else if((strcmp(first2,"WINDOW")==0) && (strcmp(fivth2,"Left")==0)){
			diode180Line();
		}
		else{
			diodeLine();
		}
	}
	else if(strcmp(second,"npn")==0){
		transistorCount++;
		if((strcmp(fivth,"R90\n")==0)){
			npn90();
		}
		else if((strcmp(fivth,"R270\n")==0)){
			npn270();
		}

		else if((strcmp(fivth,"R180\n")==0)){
			npn180();
		}
		else{
			npn();
		}
	}
	else{
		printf("Unknown\n");
	}
	}



int main(int argc, char *argv[])
{
  GtkWidget *wdg;
 

  if (argc == 2)
    fileName = argv[1];

  gtk_init(&argc, &argv);

  wdg = create_filechooser_dialog(fileName, GTK_FILE_CHOOSER_ACTION_OPEN);
  if (gtk_dialog_run(GTK_DIALOG(wdg)) == GTK_RESPONSE_OK) {
    fileName = gtk_file_chooser_get_filename(GTK_FILE_CHOOSER(wdg));
    
  } else  
    return (1);


	//fileName = (char *) malloc(255);
	//printf("Input File path and name:  ");
	//scanf("%s",fileName);
	//printf("Length:%u\n",(unsigned)strlen(fileName));
	//fileName = (char *) realloc(fileName,(unsigned)strlen(fileName));
	//printf("string: %s\n",fileName);
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
	//printf("Min: %d\nMax: %d\n", min,max);
	rewind(fp);
	printf("%s","\\begin{circuitikz}[american, european resistors]\n");
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
	printf("%s","\\end{circuitikz}\n");

	fclose(fp);
	return 0;
}
