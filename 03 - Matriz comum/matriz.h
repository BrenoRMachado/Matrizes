class Matriz
{
    private:

    int p = 0 , f = 0;
    // p = tamanho do vetor de ponteiros
    // f = tamanho dos vetores filhos

    float ** mat; //ponteiro para o vetor de ponteiros

    public:

    // Construtores e destrutor ------------------------------------------

    Matriz(int tamp, int tamf);
    ~Matriz();

    // tamp = Tamanho do vetor de ponteiros
    // tamf = tamanho dos vetores filhos

    // -------------------------------------------------------------------


};