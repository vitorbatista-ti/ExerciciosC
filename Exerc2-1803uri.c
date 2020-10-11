 #include<stdio.h>
  #include<stdlib.h>

  long int cycle(long int x){
      long int cont;

      cont=1;
      while(x!=1){
          cont++;
          if(x % 2 ==1)
             x=3*x+1;
          else
              x=x/2;
      }
  return cont;
  }

    int main(void){
      long int i,j,k,tam, ini, fim;
      while(scanf("%ld %ld", &i, &j)==2){
          if(i<=j){
              ini=i;
             fim=j;
          }
          else{
              ini=j;
              fim=i;
          }
          tam=0;
          for(k=ini; k<=fim; k++){
              if(cycle(k)>tam)
                  tam=cycle(k);
          }
         printf("%ld %ld %ld\n", i, j, tam);
      }
  return 0;
  }
