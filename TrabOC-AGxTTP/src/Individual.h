
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class Individual
{
    public:


        Individual();
        virtual ~Individual();


        std::String GetCchromosome();
        float       GetFitness();

        float       CheckFitness();     // Verifica / Calcula o valor da funcao fitness;

    protected:
    private:

        std::String chromosome;         // Representacao da solucao
        float       fitness;            // Valor do fitness, Representa o resultado da funcao de fitness aplicada a instancia (cromossomo)

};

#endif // INDIVIDUAL_H