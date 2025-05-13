/// Gestão de Frotas de Veículos
// Contexto: Sua Squad foi contratada por uma locadora de veículos que precisa de uma aplicação C para gerenciar rapidamente a frota disponível. Cada veículo tem:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct veiculo
{
  char placa[8]; // placa do veículo
  char modelo[50]; // modelo do veículo
  int tipo; // 1 = Carro, 2 = Moto, 3 = Caminhão
  float consumo; // Km/litro
};

// Controller: Preenche as informações do Veículo a partir da entrada d usuário.

void cadastrarVeiculo(struct veiculo * d)
{
  printf("Placa: ");
  scanf(" %[^\n]", d->placa);

  printf("Modelo: ");
  scanf(" %[^\n]", d->modelo);

  printf("Tipo de Veículo (Carro: 1, Moto:2, Caminhão:3): ");
  scanf("%d", &d->tipo);

  printf("Consumo (Kwh): ");
  scanf("%f", &d->consumo);
}

// View: exibe um dispositivo, com mensagens condicionais
void exibirVeiculo(struct veiculo d)
{
  printf("\nPlaca: %s", d.placa);
  printf("\nModelo: %s", d.modelo);
  printf("\nConsumo: %2.f Kwh", d.consumo);
  printf("\nTipo: ");
  // lógica adaptativa com if/else
  if(d.tipo == 1)
  {
    printf("CARRO");
  }
  else if(d.tipo == 2)
  {
    printf("MOTO");
  }
  else(d.tipo == 3);
  {
    printf("CAMINHÃO");
  }
}

// salva 'quantidade' de veículos em 'NomeArquivo'
void salvarVeiculos(struct veiculo *lista, int quantidade, const char *lista_veic)
{
  FILE *fp = fopen(lista_veic, "w");
  if (fp == NULL)
  {
    printf("Erro ao abrir %s para escrita\n", lista_veic)
    return;
  }
  for (int i = 0; i < quantidade; i++)
  {
    fprintf(fp, "%s;%s;%d;%f", lista[i].placa, lista[i].modelo, lista[i].tipo, lista[i].consumo)


  }

}
