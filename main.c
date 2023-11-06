#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
// 02.
int main() {
    int n, *vet,*vet2, x, i, j, y, c;
    printf("n = ");
    scanf("%d", &n);
    vet = (int *)malloc(n * sizeof(int));
    for (i = 0 ; i < n ; i++)
        scanf("%d", &vet[i]);
    for (i = 0 ; i < n ; i++)
        printf("%d ", vet[i]);
    printf("\nx = ");
    scanf("%d", &x);
    for (i = 0 ; i < n ; i++){
        if (vet[i] == x) {
            for (j = i ; j < n-1 ; j++){
                vet[j] = vet[j+1];
            }
            n--;
        }
        }
    for (i = 0 ; i < n ; i++){
        printf("%d ", vet[i]);
    }
    printf("\ny = ");
    scanf("%d",&y);
    for(i=0;i<n;i++){
        if(y==vet[i]){
            c=0;
            break;
        }
        else c++;
    }
    if (c>0){
        n+=1;
        vet2 = (int *)malloc(n * sizeof(int));
        for (i = 0 ; i < n-1 ; i++){
            vet2[i]=vet[i];
    }
        vet2[n-1]=y;
        for (i = 0 ; i < n ; i++){
            printf("%d ", vet2[i]);
    }
    }
    else  for (i = 0 ; i < n ; i++){
        printf("%d ", vet[i]);
    }
return 0;

}
*/
/*
// 03.
int main() {
    int n, *vet1, *vet2, *vet3, i, extra, soma;
    printf("n = ");
    scanf("%d", &n);
    vet1 = (int *)malloc(n * sizeof(int));
    vet2 = (int *)malloc(n * sizeof(int));
    vet3 = (int *)malloc((n+1) * sizeof(int));
    printf("Vetor 1:\n");
    for (i = 0 ; i < n ; i++) {
        do {
            printf("Valor: ");
            scanf("%d", &vet1[i]);
        } while(vet1[i] < 0 || vet1[i] > 9);
    }
    printf("Vetor 2:\n");
    for (i = 0 ; i < n ; i++)
        scanf("%d", &vet2[i]);
    printf("\n");
    for (i = 0 ; i < n ; i++)
        printf("%d ", vet1[i]);
    printf("\n");
    for (i = 0 ; i < n ; i++)
        printf("%d ", vet2[i]);
    printf("\n");
    extra = 0;
    for (i = n-1 ; i >= 0 ; i--) {
        soma = vet1[i] + vet2[i] + extra;
        extra = soma/10;
        soma = soma % 10;
        vet3[i+1] = soma;
    }
    vet3[0] = extra;
    for (i = 0 ; i < n+1 ; i++)
        if (i != 0 || vet3[i] != 0)
            printf("%d ", vet3[i]);
    return 0;
}
*/
// 05.
/*
// n <- 6324, tam <- 4, vet <- 0x10
void preencher(int n, int tam, int *v) {
    int i;
    for (i = tam-1 ; i >= 0 ; i--) {
        v[i] = n % 10; // *(v+i) = n % 10;
        n = n / 10;
    }
}

int palindromo(int *vet, int tam) {
    int i;
    // tam = 10 : 0,9 ; 1,8 ; 2,7 ; ... ; 4,5.
    for (i = 0 ; i < tam/2 ; i++) {
        if (vet[i] != vet[tam-1-i])
            return 0;
    }
    return 1;
}

int main () {
    int i, n, aux, *vet, tam;
    printf("n = ");
    scanf("%d", &n);
    tam = 0;
    aux = n;
    while (aux > 0) {
        aux = aux / 10;
        tam++;
    }
    vet = (int *)malloc(tam * sizeof(int));
    preencher(n,tam,vet);
    for (i = 0 ; i < tam ; i++)
        printf("%d ",vet[i]);
    if (palindromo(vet,tam))
        printf("Eh palindromo");
    else
        printf("Nao eh palindromo");
}
*/
/*
int main(){
    int x,*y;
    x=10;
    y=&x;
    *y=30;
    //*y*5=y;
//printf("%d",y);
printf("%d",x);
}
*/
/*
void swap(int *x,int *y){
int z=0;
 z = *x;
*x = *y;
*y = z;
return x,y;
}
int main(){
int x, y;
printf("Digite:");
scanf("%d",&x);
printf("Digite:");
scanf("%d",&y);
swap(&x,&y);
printf("%d , %d",x ,y);
return 0;
}
*/
/*
void func (int a, int b, int *soma){
    *soma=a+b;
}
int main(){
int a, b, *soma;
scanf("%d",&a);
scanf("%d",&b);
func(a,b,&soma);
printf("%d",soma);
return 0;
}
*/
/*
int criarVet(int n){
    int *vet=(int*)malloc(n*sizeof(int));
    return vet;
}
int main(){
int n;
scanf("%d",&n);
criarVet(n);
for(int i=0;i<n;i++){
    printf("\n%d",n);
}
return 0;
}
*/
/*
int** criarMatriz(int n){
    int **matriz=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        matriz[i]=(int*)malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
          if(i==j){
            matriz[i][j]=1;
          }
          else matriz[i][j]=0;
        }
    }
    return matriz;
}
int main(){
int n;
printf("digite:");
scanf("%d",&n);
int **identidade=criarMatriz(n);
for(int i=0;i<n;i++){
    printf("\n");
    for (int j=0;j<n;j++){
        printf("%d",identidade[i][j]);
    }
}
return 0;
}
*/
/*
void invert(int *vet,int tam){
    int temp;
    for (int i=0;i<tam/2;i++){
        temp=vet[i];
        vet[i]=vet[tam-1-i];
        vet[tam-1-i]=temp;
    }

}
int main(){
int n, *vet;
printf("Digite o N:");
scanf("%d",&n);
vet=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++){
    scanf("%d",&vet[i]);
}
invert(vet,n);
for(int i=0;i<n;i++){
    printf("%d",vet[i]);
}
return 0;
}
*/
/*
int palavras(char text[]){
int cont=1;
for (int i=0;i<strlen(text);i++){
    if (text[i]==' ')
        cont++;
}
return cont;
}


int main(){
char text[5000];
printf("Digite o texto:");
fgets(text,sizeof(text),stdin);
printf("%d",palavras(text));
return 0;

}



}

*/
/*
// Função para verificar se um elemento está presente em um vetor
int estaNoVetor(int elemento, const int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

// Função para calcular a interseção de dois vetores
int* intersecaoDeVetores(const int vetor1[], int tamanho1, const int vetor2[], int tamanho2, int *tamanhoResultado) {
    // Determina o tamanho máximo possível da interseção (o menor tamanho entre os dois vetores)
    int tamanhoMaximo = (tamanho1 < tamanho2) ? tamanho1 : tamanho2;

    // Aloca dinamicamente memória para o vetor de resultado
    int *resultado = (int*)malloc(tamanhoMaximo * sizeof(int));

    if (resultado == NULL) {
        perror("Erro na alocação de memória");
        exit(EXIT_FAILURE);
    }

    int contadorResultado = 0; // Contador para o tamanho do vetor de resultado

    // Itera através do primeiro vetor
    for (int i = 0; i < tamanho1; i++) {
        // Verifica se o elemento atual do vetor1 está presente no vetor2
        if (estaNoVetor(vetor1[i], vetor2, tamanho2)) {
            resultado[contadorResultado] = vetor1[i];
            contadorResultado++;
        }
    }

    // Define o tamanho do vetor de resultado
    *tamanhoResultado = contadorResultado;

    return resultado;
}

int main() {
    int vetor1[] = {1, 2, 3, 4, 5};
    int tamanho1 = sizeof(vetor1) / sizeof(vetor1[0]);

    int vetor2[] = {3, 4, 5, 6, 7};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);

    int tamanhoResultado;
    int *resultado = intersecaoDeVetores(vetor1, tamanho1, vetor2, tamanho2, &tamanhoResultado);

    printf("Interseção dos vetores: ");
    for (int i = 0; i < tamanhoResultado; i++) {
        printf("%d ", resultado[i]);
    }

    // Libera a memória alocada para o vetor de resultado
    free(resultado);

    return 0;
}
*/
/*
int** criarMatriz(int n,int m){
    int **matriz=(int**)malloc(n*sizeof(int*));
        for(int i=0;i<n;i++){
        matriz[i]=(int*)malloc(m*sizeof(int));
        }
    return matriz;
        }

int main(){
int n, m;
scanf("%d",&n);
scanf("%d",&m);
int **matriz=criarMatriz(n,m);
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d",&matriz[i][j]);
            }
}
for(int i=0;i<n;i++){
        printf("\n");
    for(int j=0;j<m;j++){
        printf("|%d",matriz[i][j]);
    printf("|");
}
}
return 0;
}
/*






































