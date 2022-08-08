#include <stdio.h>
#include <stdlib.h>

int main()
{ float T [15];
    int i,c ;
    int maj,dr ;
    for (i=0 ; i<15 ; i++){
    printf("entrer les notes des etudiants %d" ,i+1);
    scanf("%f",&T[i]);
}
    dr=0 ;
    maj=0;
    c=0 ;

    for (i=0; i<15;i++){
        if (T[i] > T[maj]){
            maj = i ;
            maj = T[maj] ;

        }

       if (T[i] < T[dr]){
            dr = i ;
            dr = T[dr] ;
        }
        c=0;
       if (T[i]>= 10){
        c+=1 ;
       }

       }

    printf("la note de le majorante est %d \n",maj );
      printf("la note derniere est %d \n",dr);
        printf("la note superieure ou egale 10 est %d \n",c );

        return 0;

  }


