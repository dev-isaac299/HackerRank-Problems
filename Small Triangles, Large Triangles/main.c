
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area_cal(int a,int b,int c){
    double s;
    double p;
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));

    return s;
}

void sort_by_area(triangle* tr, int n) {

    int i,j;
	    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(area_cal(tr[i].a,tr[i].b,tr[i].c)>area_cal(tr[j].a,tr[j].b,tr[j].c)){
                    triangle temp;
                    temp.a=tr[i].a;
                    temp.b=tr[i].b;
                    temp.c=tr[i].c;

                    tr[i].a=tr[j].a;
                    tr[i].b=tr[j].b;
                    tr[i].c=tr[j].c;

                    tr[j].a=temp.a;
                    tr[j].b=temp.b;
                    tr[j].c=temp.c;
                }
            }
    }



}





/*

void sort_data(int values[],int n){
    int i,j,a;

    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(values[i]>values[j]){
                    int temp=values[i];
                    values[i]=values[j];
                    values[j]=temp;
                }
            }
    }

    for(a=0;a<n;a++){
        printf("%d \r\n",values[a]);
    }
}

*/
int main()
{


 //int data[10]={9,8,7,6,5,4,3,2,1,0};
 //int data1[5]={3,2,1,6,8};
 //int data3[10]={1,0,0,0,0,0,0,0,0,1};
 //int data4[5]={1,2,3,4,5};

// sort_data(data4,sizeof(data4)/sizeof(int));


	int n;

	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}



	return 0;
}




