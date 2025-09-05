#include "Simulator.h"

Simulator& Simulator::get_instance()
{
    static Simulator simulator;
    return simulator;
}

void Simulator::incepeMeci(Echipa& gazda, Echipa& oaspete)
{
    echipa_gazda = &gazda;
    echipa_cu_posesia = &gazda;
    scor_posesie = &scor_gazda;
    echipa_oaspete = &oaspete;
    scor_gazda = 0;
    scor_oaspete = 0;
    // 
    ruleazaSimularea();
}

void Simulator::ruleazaSimularea()
{
    while (scor_gazda < 11 && scor_oaspete < 11)
    {
        // mai trebuie aici logica
        int tipul_aruncarii = rand() % 2 + 2;
        if (tipul_aruncarii == 2)
            (*scor_posesie) += (echipa_cu_posesia->alege_jucator()->incearcaAruncare2Puncte()?2:0);
        else
            (*scor_posesie) += (echipa_cu_posesia->alege_jucator()->incearcaAruncare3Puncte() ? 3 : 0);
        schimbaPosesia();
    }
    if (scor_gazda >= 11)
        std::cout << echipa_gazda->get_nume_echipa() << " a castigat cu scorul "<<scor_gazda<<"\n";
    else
        std::cout << echipa_oaspete->get_nume_echipa() << " a castigat cu scorul " << scor_oaspete << "\n";
}

void Simulator::schimbaPosesia()
{
    if (echipa_cu_posesia == echipa_gazda)
    {
        echipa_cu_posesia = echipa_oaspete;
        scor_posesie = &scor_oaspete;
    }
    else
    {
        echipa_cu_posesia = echipa_gazda;
        scor_posesie = &scor_gazda;
    }
}
