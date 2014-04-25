#define N 4
#include<stdio.h>
    int d[N][N];//discoverd
    int f[N][N];//finished
    int pred[N][N];//previous
    int color[N][N];
    int counter;
    int s[N][N];//graph
    int i,j;
    /*
    for(i=0;i<N;i++){      //build gra
        for(j=0;j<N;j++){
            s[i][j]=-1;
        }
    }
    */

void main(){
    for(i=0;i<N;i++){      //build gra
        for(j=0;j<N;j++){
            color[i][j]=-1;
        }
    }


   color[0][1]=0;              //assegement 
   color[0][3]=0;
   color[2][0]=0;
   color[3][1]=0;
   /*
   a[0][1]=0;              //assegement 
   a[0][3]=0;
   a[2][0]=0;
   a[3][1]=0;
   */


/*-------echo color[][]----------*/
   printf(">this is color:");
   for(i=0;i<N;i++){      //print check
       printf( "\n" );
       for(j=0;j<N;j++){
           printf( "%+d\t"  ,color[i][j]);
       }
   }


   printf( "\n" );
/*------------- fx init---------------------*/
   for(i=0;i<4;i++){      
       for(j=0;j<4;j++){      
           d[i][j]=-1;
           f[i][j]=-1;
           pred[i][j]=-1;
       }
   }

   counter=0;

   dfs_visit(0,0);

   for(i=0;i<N;i++){
       for(j=0;j<N;j++){
           if(color[i][j]==0)
               dfs_visit(i,j);
       }
   }

/*-------echo pred[][]----------*/
       printf("\n");
       printf(">this is pred:");
   for(i=0;i<N;i++){
       printf("\n");
       for(j=0;j<N;j++){
           printf("%d\t",pred[i][j]);
       }
   }
       printf("\n");
}

/*-------fx  dfs_visit---------*/
dfs_visit(int x,int y){
    int k;
    color[x][y]=1;
    d[x][y]=++counter;

    for(k=0;k<N;k++){
        if(color[j][k]==0){
            pred[j][k]=x*10+y;
            dfs_visit(j,k);
        }
    }


    color[x][y]=2;
    f[x][y]=++counter;

}



