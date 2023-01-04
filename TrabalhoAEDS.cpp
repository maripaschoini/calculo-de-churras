
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main ()
{
    setlocale (LC_ALL,"portuguese");

    int r;
    int op,pessoas,bebem; int i=0;
    string produto[16]={"CERVEJA (LATA)","REFRIGERANTE (1L)","REFRIGERANTE DIET (1L)","CARNE DE VACA (KG)",
    "LINGUIÇA TOSCANA (KG)","LINGUIÇA DE FRANGO (KG)","LIMÃO (KG)","TOMATE (KG)","CEBOLA (KG)","VINAGRE (UN)",
    "PÃO (UN)","CARVÃO (UN)","SAL GROSSO (UN)","DETERGENTE (UN)","ESPONJA (UN)","PAPEL HIGIÊNICO (UN)"};
    float preco[16] ={0};
    float quantidade[16] = {0};
    float total[16] = {0};
    float valor_final=0,naochapa=0,quemchapa=0,valorchapa=0,valornaochapa=0;
    int casoum=0,casodois=0,casotres=0;



    while (op != 5)
   {cout << "------------------------------------------"<<endl;
    cout<<  "|\t     MENU DE OPÇÕES \t \t |"<<endl;
    cout << "------------------------------------------"<<endl;
    cout << "|| 1 |\t Cadastro de participantes \t |"<<endl;
    cout << "|| 2 |\t Cadastro de preços \t         |"<<endl;
    cout << "|| 3 |\t Tabela de preços e quantidades  |"<<endl;
    cout << "|| 4 |\t Custeamento \t                 |"<<endl;
    cout << "|| 5 |\t Sair \t                         |"<<endl;
    cout << "------------------------------------------"<<endl;
    cin >> op;

    switch (op){

        case 1:
            system("cls");
            cout << "---------------------------------------\n";
            cout << "|     CADASTRO DE PARTICIPANTES       |\n";
            cout << "---------------------------------------\n";
            cout << "Quantas pessoas vão ao churrasco?:";
            cin>> pessoas;
            cout << "Das "<<pessoas<<" que vão, quantas vão beber?:";
            cin>> bebem;
            while ((pessoas<0)||(bebem<0))
                    {cout << "Você digitou um número negativo. Por favor, digite apenas números positivos"<<endl;
                     cout << ""<<endl;
                     cout << "---------------------------------------\n";
                     cout << "|     CADASTRO DE PARTICIPANTES       |\n";
                     cout << "---------------------------------------\n";
                     cout << "Quantas pessoas vão ao churrasco?:";
                     cin>> pessoas;
                     cout << "Das "<<pessoas<<" que vão, quantas vão beber?:";
                     cin>> bebem;}
            casoum=1;
            while (bebem>pessoas){
                cout << "  "<<endl;
                cout << "O número de pessoas que bebem é maior que o número total de participantes. Por favor, corriga os dados."<<endl;
                cout << "  "<<endl;

                cout << "---------------------------------------\n";
                cout << "|     CADASTRO DE PARTICIPANTES       |\n";
                cout << "---------------------------------------\n";
                cout << "Quantas pessoas vão ao churrasco?:";
                cin>> pessoas;
                cout << "Das "<<pessoas<<" que vão, quantas vão beber?:";
                cin>> bebem;}
        break;


        case 2:
            system("cls");
            {cout << "---------------------------------------\n";
             cout << "|         CADASTRO DE PREÇOS          |\n";
             cout << "---------------------------------------\n";

                for (int i=0;i<16;i++)
                    {cout << "Valor do produto: "<<produto[i]<<":";
                     cin >> preco[i];
                     while (preco[i] < 0)
                     {cout << "O número que você digitou é negativo. Por favor, confirme sua resposta\n.";
                      cout << "Valor do produto: "<<produto[i]<<":";
                      cin >> preco[i];}}}
                      casodois=2;
                      cout << "Deseja alterar sua resposta? ([1] sim/[2] nao):";
                      cin >> r;
                        while (r == 1)
                            {system("cls");
                            {cout << "CADASTRO DE PREÇOS: "<< endl;
                                for (int i=0;i<16;i++)
                                    {cout << "Valor do produto: "<<produto[i]<<":";
                                     cin >> preco[i];}
                                     cout << "Deseja alterar sua resposta? ([1] sim/[2] nao):";
                                     cin >> r;}}
      system("cls");
      break;


      system("cls");

      case 3:

        if ((casoum == 1) && (casodois == 2)) {

        system("cls");
        cout << "----------------------------------------------------------------------\n";
        cout << "|                TABELA DE PREÇOS E QUANTIDADES                      |\n";
        cout << "----------------------------------------------------------------------\n";

            quantidade[0] = 6*bebem;
            total[0] = preco[0]*quantidade[0]; //1º cerveja

                quantidade[1] = ((0.3*bebem)+(1*(pessoas-bebem)));
                quantidade[1]= ceil(quantidade[1]);
                total[1] = preco[1]*quantidade[1];//2º refri normal

                    quantidade[2] = 0.2*pessoas;
                    quantidade[2]=ceil(quantidade[2]);
                    total[2] = preco[2]*quantidade[2];    //3º refri diet

                        quantidade[3] = 0.25*pessoas;
                        total[3] = preco[3]*quantidade[3]; //4º carne de vaca

                            quantidade[4] = 0.05*pessoas;
                            total[4] = preco[4]*quantidade[4]; //5º linguiça toscana

                                quantidade[5] = 0.05*pessoas;
                                total[5] = preco[5]*quantidade[5]; //6º linguiça de frango

                                    quantidade[6] = 0.05*pessoas;
                                    total[6] = preco[6]*quantidade[6]; //7º limão

                                        quantidade[7] = 0.05*pessoas;
                                        total[7] = preco[7]*quantidade[7]; //8º tomate

                                            quantidade[8] = 0.01*pessoas;
                                            total[8] = preco[8]*quantidade[8]; //9º cebola

                                                quantidade[9] = 1;
                                                total[9] = preco[9]*quantidade[9]; //10º vinagre

                                                    quantidade[10] = 3*pessoas;
                                                    total[10] = preco[10]*quantidade[10];//11º pão

                                                        quantidade[11] = 0.02*pessoas;
                                                        quantidade[11]=ceil(quantidade[11]);
                                                        total[11] = preco[11]*quantidade[11]; //12º carvão

                                                            quantidade[12] = 0.02*pessoas;
                                                            quantidade[12]=ceil(quantidade[12]);
                                                            total[12] = preco[12]*quantidade[12]; //13º sal grosso

                                                                quantidade[13] = 1;
                                                                total[13] = preco[13]*quantidade[13]; //14º detergente

                                                                    quantidade[14] = 1;
                                                                    total[14] = preco[14]; //15º esponja de pia

                                                                        quantidade[15] = 0.25*pessoas;
                                                                        quantidade[15]=ceil(quantidade[15]);
                                                                        total[15] = preco[15]*quantidade[15]; //16º papel higiênico


        cout <<  "PRODUTO"<< setw(32)<< "QUANTIDADE" << setw(24) << "VALOR TOTAL\n";
        cout << "----------------------------------------------------------------------\n";


        for (int i=0;i<16;i++)
          cout << setw(32)<<left<<produto[i]<<setw(18)<<quantidade[i]<<setw(4)<< "R$"<<setw(18)<<setprecision(4)<<total[i]<<"|"<<endl;
          cout << "----------------------------------------------------------------------\n";
             casotres=3; }
        else
        cout << "Realize os passos 1 e 2 primeiro. Obrigado."<<endl;
        break;


        case 4:
             system("cls");
            if (casotres == 3) {
                for (int i=0;i<16;i++)
                 valor_final+=total[i];
                 valor_final= valor_final+(valor_final*0.05);

            naochapa= (pessoas-bebem);
            quemchapa=bebem;

            if ((pessoas==0) && (bebem==0))
                {valorchapa=0;
                 valornaochapa=0;}
            else
                if ((pessoas-bebem)==0)
                    {valornaochapa=0;
                     valorchapa = valor_final/bebem;}
            else
                if (bebem==0)
                {valorchapa=0;
                 valornaochapa= valor_final/(pessoas-bebem);}
            else{
            valorchapa = valor_final / (quemchapa+(0.75 * naochapa));
            valornaochapa = valorchapa*0.75;}




            cout << "------------------------------------------\n";
            cout << "|          VALOR FINAL A PAGAR           |\n";
            cout << "------------------------------------------\n";
            cout << "VALOR TOTAL:   R$ "<<valor_final<<endl;
            cout << "QUEM BEBE:     R$ "<<valorchapa<<endl;
            cout << "QUEM NÃO BEBE: R$ "<<valornaochapa<<endl;
            cout << "------------------------------------------\n";}

            else
                if (casotres!=3){
                    cout << "  "<<endl;
                    cout << "Realize os passos 1,2 e 3 primeiro. Obrigado."<<endl;
                    cout << "  "<<endl;
                    cout << "  "<<endl;}
            break;

            case 5:
            break;

            default:
            cout << "OPÇÃO INVÁLIDA. ESCOLHA UMAS DAS OPÇÕES APRESENTADAS NO MENU A CIMA."<<endl;
                break;

    }}
    return 0;
}
