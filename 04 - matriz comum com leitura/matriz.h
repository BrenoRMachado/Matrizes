class Matriz
{
    private:

    int p = 0 , f = 0;
    // p = tamanho do vetor de ponteiros
    // f = tamanho dos vetores filhos

    float ** mat; //ponteiro para o vetor de ponteiros

    //função que verifica os indices
    bool verificaIndices ( int tamp, int tamf);

    public:

    // Construtores e destrutor ------------------------------------------

    Matriz(int tamp, int tamf);
    ~Matriz();

    // tamp = Tamanho do vetor de ponteiros
    // tamf = tamanho dos vetores filhos

    // -------------------------------------------------------------------

    // getters e setters -------------------------------------------------

    float get(int indi, int indj);
    void set(int indi, int indj, float valor);

    // -------------------------------------------------------------------


};