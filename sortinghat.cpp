#include <iostream>

int main() {
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0, max = 0;
  int aswer1, aswer2, aswer3, aswer4;
  std::string house;
  
  std::cout << "O teste do Chapéu Seletor! \n";

  std::cout << "Q1) Quando eu morrer, Quero que as pessoas se lembrem de mim como:\n" << "1) O Bom\n" << "2) O Grande\n" << "3) O Sábio\n" << "4) O Ousado\n";

  std::cin >> aswer1;

  switch(aswer1){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

  std::cout << "Q2) Amanhecer ou Escuridão?\n" << "1) Amanhecer\n" << "2) Escuridão\n";
  std::cin >> aswer2;

  switch(aswer2){
    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      hufflepuff++;
      slytherin++;
      break;
    default:
      std::cout << "Invalid Input.\n";
      break;
  }

  std::cout << "Q3) Qual instrumento mais agrada aos seus ouvidos?\n" << "1) Um Violino\n" << "2) Um Trompete\n" << "3) Um piano\n" << "4) Uma Bateria\n";
  std::cin >> aswer3;

  switch(aswer3){
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }
  
  std::cout << "Q4) Qual estrada mais te tenta?\n" << "1) A larga e ensolarada pista gramada\n" << "2) O beco estreito, escuro e iluminado por lanternas\n" << "3) O caminho sinuoso e coberto de folhas pela floresta\n" << "4) A rua de pedra repleta de edifícios antigos\n";
  std::cin >> aswer4;

  switch(aswer4){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input.\n";
      break;
  }

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}

if (hufflepuff > max) {
  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";

}