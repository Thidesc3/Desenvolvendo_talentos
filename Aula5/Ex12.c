/* 12. Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá permitir que o usuário
escolha o código de uma mesa (100 a 129) e forneça a quantidade de lugares desejados. O programa
deverá informar se foi possível realizar a reserva e atualizar a reserva. Se não for possível, o programa
deverá emitir uma mensagem. O programa deve terminar quando o usuário digitar o código 0 (zero) para
uma mesa ou quando todos os 150 lugares estiverem ocupados. */

#include <stdio.h>

int main() {
    int mesas[30] = {0};
    int codigo, lugares, total_ocupados = 0;

    while (1) {
        printf("Digite o código da mesa (100 a 129) ou 0 para sair: ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        if (codigo < 100 || codigo > 129) {
            printf("Código de mesa inválido. Por favor, digite um código entre 100 e 129.\n");
            continue;
        }

        printf("Digite a quantidade de lugares desejados: ");
        scanf("%d", &lugares);

        int indice = codigo - 100;
        if (mesas[indice] + lugares <= 5) {
            mesas[indice] += lugares;
            total_ocupados += lugares;
            printf("Reserva efetuada com sucesso! Mesa %d agora tem %d lugares ocupados.\n", codigo, mesas[indice]);
        } else {
            printf("Não foi possível realizar a reserva. Lugares insuficientes na mesa %d.\n", codigo);
        }

        if (total_ocupados == 150) {
            printf("Todos os 150 lugares estão ocupados. O programa será encerrado.\n");
            break;
        }
    }

    return 0;
}
