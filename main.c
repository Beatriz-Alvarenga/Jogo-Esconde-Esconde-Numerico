#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVAS 10

void jogarEscondeEsconde(int escondido, int tentativas){
    
    int palpite;

    printf("\n[Tentativa %d de %d] Onde ele esta escondido? (0 a 50): ", tentativas, MAX_TENTATIVAS);
    scanf("%d", &palpite);
    
    int distancia = abs(palpite - escondido);

    if (distancia == 0){
        printf("\nACHOOOOOU! Você encontrou o número %d em %d tentativa(s)!\n", escondido, tentativas);
        return;
    }

    if (tentativas >= MAX_TENTATIVAS){
        printf("\nFIM DE JOGO! Voce não conseguiu encontrar o número em %d tentativas.\n", MAX_TENTATIVAS);
        printf("O Número Escondido era: %d\n", escondido);
        return;
    }

    if (distancia <= 5) {
        printf("🟩 Tá do lado! Dá pra ouvir até a respiração!");
    } else if (distancia <= 10) {
        printf("🟨 Tá bem perto!");
    } else if (distancia <= 15) {
        printf("🟧 Perto, continue procurando nessa área.");
    } else if (distancia <= 20) {
        printf("🟥️ Um pouco longe...");
    } else if (distancia <= 25) {
        printf("🟪 Muito longe!");
    } else {
        printf("⬛️ Passou longe! Nem sinal por aqui.");
    }
    
    jogarEscondeEsconde(escondido, tentativas + 1);
}

int main(){
    
    srand(time(NULL));

    int escondido = rand() % 51;

    printf("=======================================================\n");
    printf("|           JOGO DO ESCONDE-ESCONDE (0 a 50)          |\n");
    printf("|   Encontre o Número escondido em até %d tentativas! |\n", MAX_TENTATIVAS);
    printf("=======================================================\n");

    jogarEscondeEsconde(escondido, 1);

    return 0;
}