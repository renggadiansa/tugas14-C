#include <stdio.h>

//2
void fibonacci(int n);

//3
#define maxcol 10
#define maxrow 10

int mA[maxrow][maxcol];
int mB[maxrow][maxcol];
int mC[maxrow][maxcol];

void inputmatriksA(int row, int col);

void inputmatriksB(int nrow, int ncol);

void cetakmatriks(int a[maxrow][maxcol], int row, int col);

//4
#define MAKS 9999

int main() {

    //1
    int angka[5];

    for (int i = 0; i < 5; i++) {
        angka[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    //2
//    int n;
//
//    printf("Masukkan jumlah deret: ");
//    scanf("%d", &n);
//    fibonacci (n);
//    printf("\n");

    //3
    int nrow, ncol;
    int i,j;
    nrow = 2;
    ncol = 2;

    printf("Masukkan Matriks A : \n");

    inputmatriksA(nrow,ncol);
    printf("\nMasukkan Matriks B: \n");

    inputmatriksB(nrow,ncol);
    printf("\nCetak Matriks A: \n");

    cetakmatriks(mA,nrow,ncol);
    printf("\nCetak Matriks B: \n");

    cetakmatriks(mB,nrow,ncol);
    printf("\nPenjumlahan Matriks A + B: \n");

    for(i=0;i<nrow;i++){
        for(j=0;j<ncol;j++){
            mC[i][j] = mA[i][j] + mB[i][j];
            printf(" %d ",mC[i][j]);
        }
        printf("\n");
    }


    //4
    int n, x, max, nilai[MAKS];

    printf("Masukkan jumlah data= ");
    scanf("%d",&n);

    for(x=1;x<=n;x++) {
        printf("Masukkan data ke-%d : ",x);
        scanf("%d",&nilai[x]);

        if (x==1)
            max=nilai[1];
        else {
            if(max<=nilai[x])
                max=nilai[x];
        }
    }

    printf("\nNilai Maksimumnya adalah %d", max);

    return 0;
}

//2
void fibonacci(int n) {

    int i,a[100];

    for(i=0;i<n;i++){
        if(i==0){
            a[i]=0;
            printf("0\t");
        }
        else if(i==1){
            a[i]=1;
            printf("1\t");
        }
        else{
            a[i]=a[i-1]+a[i-2];
            printf("%d\t",a[i]);
        }
    }
}

//3
void inputmatriksA(int row, int col) {

    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("matriks A[%d, %d] = ",i,j);
            scanf("%d",&mA[i][j]);
        }
    }
}

void inputmatriksB(int row, int col) {

    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("matriks B[%d, %d] = ",i,j);
            scanf("%d",&mB[i][j]);
        }
    }
}

void cetakmatriks(int a[maxrow][maxcol], int row, int col) {

    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}



