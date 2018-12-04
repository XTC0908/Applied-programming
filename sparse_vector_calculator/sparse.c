/* Template Program for Sparse Vectors 			     */
/* Demo of dynamic data structures in C                      */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FALSE 0
#define NULL 0

struct el {
    int index;	 
    float data;
    struct el *  elements;
} ;

typedef struct el eltype;

struct svector {
    int size;
    eltype *  elements;
} ;

struct svector vector_array[100];
struct svector temp;
int index1[100]= {0};
void printVector (struct svector *x, int p);
void readVector (struct svector *x);
void printVectortemp (struct svector *x,int p);




// void PlusV (struct svector *x,int p1,int p2){

// 	//printf("v%d is:",p1);
// 	eltype * current_x1 = vector_array[p1].elements;
// 	eltype * current_x2 = vector_array[p2].elements;
	
// 	int a=index1[p1]>index1[p2]?index1[p1]:index1[p2];
// 	//int arrayplus[a];
// // 	if(index1[p1]>index1[p2]){
// // 		for(int j=0;j<index1[p2]-index1[p1]){
// // ；
// // 		}
	
// 	printf("a is %d \n",a);
	
// 	//temp2.size=a;
	
// 	for(int i=1; i <= a; i++)
// 	{	
// 		// arrayplus[i]=current_x1->data+current_x2->data;
// 		// current_x1 = current_x1->elements;
// 		// current_x2 = current_x2->elements;
// 		// //printf("%d ",arrayplus[i]);


// 			if( ((current_x1 == NULL) && (current_x2==NULL)) || ((current_x1->index > i) && (current_x2->index>i)))
// 			printf("0 ");
// 		else if(((current_x1 == NULL) && (current_x2!=NULL)) || ((current_x1->index > i) && (current_x2->index==i)))
// 		{
// 			printf("%d ", current_x2->data);
// 			//current_x1 = current_x1->elements;
// 			current_x2 = current_x2->elements;
// 		}
// 		else if (((current_x1 != NULL) && (current_x2==NULL)) || ((current_x1->index == i) && (current_x2->index>i)))
// 		{
// 				printf("%d ", current_x1->data);
// 			current_x1 = current_x1->elements;
// 			//current_x2 = current_x2->elements;
// 		}
// 		else{
// 			printf("%d ", current_x1->data+current_x2->data);
// 			current_x1 = current_x1->elements;
// 			current_x2 = current_x2->elements;
// 		}

	
// }}

int main () {
  
int p2,p1,p3;
    for(int i=0; i < 100; i++){
	vector_array[i].elements= NULL;
	vector_array[i].size= 0;
    }

	struct el *p01;
	struct el *p02;
	struct el *p03;

    temp.elements = NULL;
    temp.size = 0;

	readVector(&temp);
	printf("database read\n");

	while(1){
		char ch,dh,eh,fh,gh,hh,ih,jh,kh;
	if ((jh=getchar())=='v')
	{
		scanf("%d",&p1);
		//scanf("%d",&p2);
		//plusV(vector_array[p1].elements,vector_array[p2].elements,p1);
		 if((ch=getchar())=='\n')
		 {
		 printVector(&temp,p1); 
		 
		 continue;  //end1
		}
		//ugetc(ch,stdin);

		else ungetc(ch,stdin);
		if((dh=getchar())=='='){
			if((eh=getchar())=='v'){
				scanf("%d",&p2);
				if((fh=getchar())=='.'){
					if((gh=getchar())=='v')
					{
						scanf("%d",&p3); //p3=p2
						struct el * p02=vector_array[p2].elements;
						float res=0;
						float a=0;
						while(p02!=NULL){
							a=(p02->data)*(p02->data);
							res=res+a;
							p02=p02->elements;
						}
						//printVector(&temp,p2);
						printf("%f\n",res);
						continue;
					}
					ungetc(gh,stdin);
					scanf("%d",&p3);    //p3 is a constant
					if(getchar()=='\n'){
						struct el * p02 = vector_array[p2].elements;
						while(p02!=NULL){
							p02->data=(p02->data)*p3;
							p02=p02->elements;
						}
						printVector(&temp,p2);
						continue;
							}
				}
			
			else ungetc(fh,stdin);
			if (getchar()=='+')
		{

			//scanf()
			getchar();
			scanf("%d",&p3);
			if(getchar()=='\n'){
		
			struct el * p02 = vector_array[p2].elements;
			struct el * p01 = vector_array[p1].elements;
			struct el * p03 = vector_array[p3].elements;
			int a=index1[p2]>index1[p3]?index1[p2]:index1[p3];
			int b = index1[p2];
			struct el * p04=vector_array[p2].elements;
			struct el * p05=vector_array[p3].elements;
		
			eltype * tem=NULL;
			eltype * last_tem=NULL;
			index1[p1]=a;
			for(int n=1;n<=a;n++){	
				if((p02!=NULL)&&(p03!=NULL))
				{
					if(p02->index==p03->index){
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data+p03->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						p02=p02->elements;
						p03=p03->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data+p03->data;
						last_tem->index=p02->index;
						p02=p02->elements;
						p03=p03->elements;
					}
				}
				else if (p02->index > p03->index){
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						last_tem->elements=NULL;
						
						p03=p03->elements;
						//index[p1]=a;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						p03=p03->elements;
					}
				}
				else if (p02->index < p03->index){
					//index1[p1]=a;
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						
						p02=p02->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						p02=p02->elements;
					}
				}
				
				
				}
				if(p02==NULL && p03!=NULL)
				{
						if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						last_tem->elements=NULL;
						
						p03=p03->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						p03=p03->elements;
					}
				}
				else if(p02!=NULL && p03==NULL)
				{
						if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						
						p02=p02->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						p02=p02->elements;
					}
				}
				}
				vector_array[p1].elements=tem;
				printVector(&temp,p1);
				continue;
				}
	
	}}}}
	ungetc(jh,stdin);
	if ((kh=getchar())=='t') {
		getchar();
		getchar();
		getchar(); //temp
		eltype * temp_last=NULL;
		eltype * t=temp.elements;
		int len=0;
		//ugetc(ch,stdin);
		if((hh=getchar())=='\n'){
			 printVectortemp(&temp,len); 
		 
		 continue;  //end1
		}
		ungetc(hh,stdin);
		//else ungetc(ch,stdin);
		if((dh=getchar())=='='){
			if((eh=getchar())=='v'){
				scanf("%d",&p2);
				if((fh=getchar())=='.'){
					if((gh=getchar())=='v')
					{
						scanf("%d",&p3); //p3=p2
						struct el * p02=vector_array[p2].elements;
						float res=0;
						float a=0;
						while(p02!=NULL){
								a=(p02->data)*(p02->data);
								res=res+a;
								p02=p02->elements;
							
							// p02->data=(p02->data)*(p02->data);
							// res=res+p02->data;
							// p02=p02->elements;
						}
						//len=p2;
						t=(eltype*)malloc(sizeof(eltype));
						t->data=res;
						t->index=1; //temp
						//len=1;
						//printVector(&temp,p2);
						printf("temp is:");
						printf("%f\n",res);
						continue;
					}
					ungetc(gh,stdin);
					scanf("%d",&p3); 
					//getchar();   //p3 is a constant
					if(getchar()=='\n'){
						struct el * p02 = vector_array[p2].elements;
						while(p02!=NULL){
							p02->data=(p02->data)*p3;
							p02=p02->elements;
							//len++;
						}
						temp.elements=vector_array[p2].elements;
						len=p2;
						printVectortemp (&temp,p2);
						continue;
							}
				
						
				}
			
			else ungetc(fh,stdin);
			if (getchar()=='+')
		{

			//scanf()
			getchar();
			scanf("%d",&p3);
			getchar();
			if(getchar()=='\n'){
		
			struct el * p02 = vector_array[p2].elements;
			struct el * p01 = vector_array[p1].elements;
			struct el * p03 = vector_array[p3].elements;
			int a=index1[p2]>index1[p3]?index1[p2]:index1[p3];
			int b = index1[p2];
			struct el * p04=vector_array[p2].elements;
			struct el * p05=vector_array[p3].elements;
		
			eltype * tem=NULL;
			eltype * last_tem=NULL;
			index1[p1]=a;
			for(int n=1;n<=a;n++){	
				if((p02!=NULL)&&(p03!=NULL))
				{
					if(p02->index==p03->index){
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data+p03->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						p02=p02->elements;
						p03=p03->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data+p03->data;
						last_tem->index=p02->index;
						p02=p02->elements;
						p03=p03->elements;
					}
				}
				else if (p02->index > p03->index){
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						last_tem->elements=NULL;
						
						p03=p03->elements;
						//index[p1]=a;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						p03=p03->elements;
					}
				}
				else if (p02->index < p03->index){
					//index1[p1]=a;
					if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						
						p02=p02->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						p02=p02->elements;
					}
				}
				
				
				}
				if(p02==NULL && p03!=NULL)
				{
						if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						last_tem->elements=NULL;
						
						p03=p03->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p03->data;
						last_tem->index=p03->index;
						p03=p03->elements;
					}
				}
				else if(p02!=NULL && p03==NULL)
				{
						if(last_tem==NULL){
						last_tem=(eltype*)malloc(sizeof(eltype));
						tem=last_tem;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						last_tem->elements=NULL;
						
						p02=p02->elements;
					}
					else{
						//last_tem=(eltype*)malloc(sizeof(eltype));
						last_tem->elements=(eltype*)malloc(sizeof(eltype));
						last_tem=last_tem->elements;
						last_tem->elements=NULL;
						last_tem->data=p02->data;
						last_tem->index=p02->index;
						p02=p02->elements;
					}
				}
				}
				//vector_array[p1].elements=tem;
				temp.elements=tem;
				len=p1;
				printVectortemp(&temp,p1);
				continue;
			}

	} 
	//continue;
	}}}
	ungetc(kh,stdin);
	if(getchar()=='q')
	{
		int l=0;
		for(l=0;l<100;l++)
		free(vector_array[l].elements);
		break;
	}
	}

		
	return 0;		
}

//struct el * vPlus()



void printVectortemp (struct svector *x,int p){

	printf("temp is:");
	eltype * current_x = temp.elements;
	
	for(int i=1; i <= index1[p]; i++)
	{
		if( current_x == NULL || current_x->index > i)
			printf("0.00 ");
		else {
			printf("%0.2f ", current_x->data);
			current_x = current_x->elements;
		}

	}
	printf("\n");
	}

void printVector (struct svector *x,int p){

	printf("v%d is:",p);
	eltype * current_x = vector_array[p].elements;
	
	for(int i=1; i <= index1[p]; i++)
	{
		if( current_x == NULL || current_x->index > i)
			printf("0.00 ");
		else {
			printf("%0.2f ", current_x->data);
			current_x = current_x->elements;
		}

	}

	printf("\n");
	
}


void readVector (struct svector *x)
{
/* last_x will always point to the last element in the link list*/ 
   float array1[10000];
   FILE * file;
   int i=0, j=0, q=0, m=0;
   char  temp;
   char mytemp;
	
   int sum=0;
   file = fopen("test1.txt", "r");

     while (!feof(file)){
       if ((mytemp= fgetc(file)) != '\n'){
       		ungetc(mytemp,file);	
          index1[j]++;
          sum++;
       		fscanf(file, "%f", &array1[i]);
       		i++;
       }
       else {    									//put all elements in a array;
         j++;
  
     }}
	 j=j+1;    
     fclose(file);
    
	eltype * last_x = NULL;
	int index=0;
	int n=0;
	
	
		/* if there is a non-zero element to add */
		for(int p=0;p<j;p++)
		{	
			int signal=0;
		for(int k=0;k<index1[p];k++)
		

		{				 //j:lines 0f svector
			index++;
			if(array1[k+n] != 0)
			{
				signal=1;
			/* if the list is empty */
			if(last_x == NULL) { 
				
				 last_x = (eltype *) malloc(sizeof(eltype));		
				 x->elements = last_x;
				 last_x->data = array1[n+k];
				 last_x->index = index;
				 last_x->elements = NULL;
				
			}
			else{
				
				last_x->elements = (eltype *) malloc(sizeof(eltype));
				last_x = last_x->elements;
				last_x->data = array1[n+k];
                last_x->index = index;
                last_x->elements = NULL;
				
			}
			
		}

		
		}
		if (signal==0){
			last_x = (eltype *) malloc(sizeof(eltype));		
				 x->elements = last_x;
				 last_x->data=0;
				 last_x->elements=NULL;
				 last_x->index=1;
				 vector_array[p]=*x;
		}
		vector_array[p]=*x;


		x->size = index1[p];
		n=n+index1[p]; 
		last_x = NULL;
		index=0;

		
		}
			
		
	} 

/* the size of the vector is equal to the index of the last element */ 
	






