class VetFlex 
{
    private:
        int n; //tamanho do vetor
        float* vet; //vai permitir alocar um vetor
        int start, end; // vai nreceber o indici inicial e o final

        int detind(int indice);//converte o indice (intervalo) para indice (padrão)

    public:

        VetFlex(int a, int b);
        ~VetFlex();

        float get(int indice);
        void set(int indice, float valor);
        

};