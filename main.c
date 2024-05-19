#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int valor, c, d, u;
  char centena[20] = "", dezena[20] = "", unidade[20] = "", numext[60] = "";
  printf("Digite um valor entre 0 e 999: ");
  scanf("%i", &valor);
  getchar();
  while (valor < 0 || valor > 999) {
    printf("Valor inválido, digite novamente: ");
    scanf("%i", &valor);
    getchar();
  } //Escreve inválido
  c = valor / 100;
  d = (valor % 100) / 10;
  u = (valor % 10);
  switch (c) {
  case 1:
    if (d != 0 || u != 0) {
      strcpy(centena, "cento e ");
    } else {
      strcpy(centena, "cem");
    }
    break;
  case 2:
    if (d != 0 || u != 0) {
      strcpy(centena, "duzentos e ");
    } else {
      strcpy(centena, "duzentos");
    }
    break;
  case 3:
    if (d != 0 || u != 0) {
      strcpy(centena, "trezentos e");
    } else {
      strcpy(centena, "trezentos");
    }
    break;
  case 4:
    if (d != 0 || u != 0) {
      strcpy(centena, "quatrocentos e ");
    } else {
      strcpy(centena, "quatrocentos");
    }
    break;
  case 5:
    if (d != 0 || u != 0) {
      strcpy(centena, "quinhentos e ");
    } else {
      strcpy(centena, "quinhentos");
    }
    break;
  case 6:
    if (d != 0 || u != 0) {
      strcpy(centena, "seiscentos e ");
    } else {
      strcpy(centena, "seiscentos");
    }
    break;
  case 7:
    if (d != 0 || u != 0) {
      strcpy(centena, "setecentos e ");
    } else {
      strcpy(centena, "setecentos");
    }
    break;
  case 8:
    if (d != 0 || u != 0) {
      strcpy(centena, "oitocentos e ");
    } else {
      strcpy(centena, "oitocentos");
    }
    break;
  case 9:
    if (d != 0 || u != 0) {
      strcpy(centena, "novecentos e ");
    } else {
      strcpy(centena, "novecentos");
    }
    break;
  } // Escreve centena
  switch (d) {
  case 1:
    switch (u) {
    case 0:
      strcpy(dezena, "dez");
      break;
    case 1:
      strcpy(dezena, "onze");
      break;
    case 2:
      strcpy(dezena, "doze");
      break;
    case 3:
      strcpy(dezena, "treze");
      break;
    case 4:
      strcpy(dezena, "quatroze");
      break;
    case 5:
      strcpy(dezena, "quinze");
      break;
    case 6:
      strcpy(dezena, "dezeseis");
      break;
    case 7:
      strcpy(dezena, "dezessete");
      break;
    case 8:
      strcpy(dezena, "dezoito");
      break;
    case 9:
      strcpy(dezena, "dezenove");
      break;
    } //Escreve se for de 10 a 19
    break;
  case 2:
    if (d != 0 && u != 0) {
      strcpy(dezena, "vinte e ");
    } else {
      strcpy(dezena, "vinte");
    }
    break;
  case 3:
    if (d != 0 && u != 0) {
      strcpy(dezena, "trinta e ");
    } else {
      strcpy(dezena, "trinta");
    }
    break;
  case 4:
    if (d != 0 && u != 0) {
      strcpy(dezena, "quarenta e ");
    } else {
      strcpy(dezena, "quarenta");
    }
    break;
  case 5:
    if (d != 0 && u != 0) {
      strcpy(dezena, "cinquenta e ");
    } else {
      strcpy(dezena, "cinquenta");
    }
    break;
  case 6:
    if (d != 0 && u != 0) {
      strcpy(dezena, "sessenta e ");
    } else {
      strcpy(dezena, "sessenta");
    }
    break;
  case 7:
    if (d != 0 && u != 0) {
      strcpy(dezena, "setenta e ");
    } else {
      strcpy(dezena, "setenta");
    }
    break;
  case 8:
    if (d != 0 && u != 0) {
      strcpy(dezena, "oitenta e ");
    } else {
      strcpy(dezena, "oitenta");
    }
    break;
  case 9:
    if (d != 0 && u != 0) {
      strcpy(dezena, "noventa e ");
    } else {
      strcpy(dezena, "noventa");
    }
    break;
  } // Escreve dezena
  if (d != 1) {
    switch (u) {
    case 0:
      strcpy(unidade, "zero");
      break;
    case 1:
      strcpy(unidade, "um");
      break;
    case 2:
      strcpy(unidade, "dois");
      break;
    case 3:
      strcpy(unidade, "três");
      break;
    case 4:
      strcpy(unidade, "quatro");
      break;
    case 5:
      strcpy(unidade, "cinco");
      break;
    case 6:
      strcpy(unidade, "seis");
      break;
    case 7:
      strcpy(unidade, "sete");
      break;
    case 8:
      strcpy(unidade, "oito");
      break;
    case 9:
      strcpy(unidade, "nove");
      break;
    }
  } //Escreve unidade se for maior q 19 ou menor q 10
  strcpy(numext, centena);
  strcat(numext, dezena);
  strcat(numext, unidade);
  printf("Número por extenso: %s", numext);
  getchar();
}