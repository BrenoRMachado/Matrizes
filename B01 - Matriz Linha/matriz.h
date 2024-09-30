class MatrizLin
{
    private:
    int mm, nn;
    float *vet; //vetor vai ter o tamanho m*n
    
    int detInd(int linha, int coluna);
    

    public:
    MatrizLin(int m, int n);
    // m = numero de linhas
    // n = numero de colunas
    ~MatrizLin();

    float get(int i, int j);
    // i = indice linha
    // j = indice coluna
    void set(int i, int j, float valor);
};