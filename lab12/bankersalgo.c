#include<stdio.h>
#include<conio.h>
void main() {
    int k=0,output_1503[10],d_1503=0,t=0,ins_1503[5],i,avail[5],allocated_1503[10][5],need[10][5],MAX[10][5],pno_1503,P[10],j,rz_1503, count=0;
    printf("\n Enter number of resources : ");
    scanf("%d", &rz_1503);
    printf("\n enter max instances of each resources\n");
    for (i=0;i<rz_1503;i++) {
        avail[i]=0;
        printf("%c= ",(i+97));
        scanf("%d",&ins_1503[i]);
    }
    printf("\n Enter the number of processes : ");
    scanf("%d", &pno_1503);
    printf("\n Enter the allocation matrix \n     ");
    for (i=0;i<rz_1503;i++)
    printf(" %c",(i+97));
    printf("\n");
    for (i=0;i <pno_1503;i++) {
        P[i]=i;
        printf("P[%d]  ",P[i]);
        for (j=0;j<rz_1503;j++) {
            scanf("%d",&allocated_1503[i][j]);
            avail[j]+=allocated_1503[i][j];
        }
    }
    printf("\nEnter the max matrix \n     ");
    for (i=0;i<rz_1503;i++) {
        printf(" %c",(i+97));
        avail[i]=ins_1503[i]-avail[i];
    }
    printf("\n");
    for (i=0;i <pno_1503;i++) {
        printf("P[%d]  ",i);
        for (j=0;j<rz_1503;j++)
         scanf("%d", &MAX[i][j]);
    }
    printf("\n");
    A: d_1503=-1;
    for (i=0;i <pno_1503;i++) {
        count=0;
        t=P[i];
        for (j=0;j<rz_1503;j++) {
            need[t][j] = MAX[t][j]-allocated_1503[t][j];
            if(need[t][j]<=avail[j])
             count++;
        }
        if(count==rz_1503) {
            output_1503[k++]=P[i];
            for (j=0;j<rz_1503;j++)
            avail[j]+=allocated_1503[t][j];
        } else
         P[++d_1503]=P[i];
    }
    if(d_1503!=-1) {
        pno_1503=d_1503+1;
        goto A;
    }
    printf("The safe sequence is :-");
    printf("\t <");
    for (i=0;i<k;i++)
    printf(" P[%d] ",output_1503[i]);
    printf(">");
    getch();
}