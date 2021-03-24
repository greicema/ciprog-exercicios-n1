#include <iostream>
#include <string>
using namespace std;

int main() {
string nome, playlist1, playlist2, playlist3, playlist4, playlist5;
char resposta;
int alternativa, sair, pontos1 = 0, pontos2 = 0, pontos3 = 0, pontos4 = 0;

do{
cout << " ===== QUAL PLAYLIST GIRL POWER É VOCÊ? ♀ =====\n";
cout << " \n" << "MENU\n";
cout << "1 - Faça o teste e descubra!" << endl;
cout << "2 - Instruções" << endl;
cout << "3 - Sobre o programa" << endl;
cout << "4 - Sair\n " << endl;
cin >> alternativa;

switch (alternativa){
case 1:
cout << "Qual playlist GRL PWR é você?\n" << endl;
cin.get();
cout << "Diga pra gente o seu nome!\n" << endl;
cin >> nome;

cout << "\nCerto, " << nome << ", vamos começar?\n" << endl;
cin.get();

do{
cout << "1. Chegou o fim de semana, qual o programa perfeito?" << endl;
cout << "a. Ir a programas culturais na cidade" << endl;
cout << "b. Ficar em casa com o boy/girl" << endl;
cout << "c. Passar o dia na praia" << endl;
cout << "d. Balada" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos1++;
  
  if (resposta == 'b')
  pontos2++;

  if (resposta == 'c')
  pontos3++;

  if (resposta == 'd')
  pontos4++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "2. Qual atividade física ideal para você?" << endl;
cout << "a. Stand up paddle (esportes calmos)" << endl;
cout << "b. Lutas" << endl;
cout << "c. Dança (fit dance)" << endl;
cout << "d. Nenhuma" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos3++;

  if (resposta == 'b')
  pontos1++;

  if (resposta == 'c')
  pontos4++;

  if (resposta == 'd')
  pontos2++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{  
cout << "3. O que você gosta/gostava de fazer na escola?" << endl;
cout << "a. Estudar" << endl;
cout << "b. Paquerar" << endl;
cout << "c. Intervalo (comer)" << endl;
cout << "d. Educação física, física, matemática" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos1++;

  if (resposta == 'b')
  pontos2++;

  if (resposta == 'c')
  pontos3++;

  if (resposta == 'd')
  pontos4++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "4. Sua melhor amiga está triste. O que você faz?" << endl;
cout << "a. Busca levantar a autoestima dela(e)" << endl;
cout << "b. Chama para sair e se divertir" << endl;
cout << "c. Chama para uma praia relaxar" << endl;
cout << "d. Assiste um filme triste e chora bastante com ela(e)" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos1++;

  if (resposta == 'b')
  pontos4++;

  if (resposta == 'c')
  pontos3++;

  if (resposta == 'd')
  pontos2++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "5. Qual é o seu tipo de lugar favorito?" << endl;
cout << "a. Um lugar onde dê para ler e escrever" << endl;
cout << "b. Lugar para meditar" << endl;
cout << "c. Lugar para curtir e fazer amigos" << endl;
cout << "d. Lugar para explorar e conhecer a história por trás" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos2++;

  if (resposta == 'b')
  pontos3++;

  if (resposta == 'c')
  pontos4++;

  if (resposta == 'd')
  pontos1++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "6. O dia é só seu, o que gostaria de fazer?" << endl;
cout << "a. Chegar em casa, colocar o pijama e ver um filme ou série" << endl;
cout << "b. Colocar uma música bem alta e dançar bastante" << endl;
cout << "c. Acender uns incensos e relaxar" << endl;
cout << "d. Assistir documentários sobre fatos históricos" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos2++;

  if (resposta == 'b')
  pontos4++;

  if (resposta == 'c')
  pontos3++;

  if (resposta == 'd')
  pontos1++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "7. Acordei! Qual ritual não pode faltar antes de começar o dia?" << endl;
cout << "a. Responder a mensagem da(o) crush" << endl;
cout << "b. Alongar" << endl;
cout << "c. Ouvir uma música bem animada" << endl;
cout << "d. Ler/assistir ao jornal para saber das últimas notícias" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos2++;

  if (resposta == 'b')
  pontos3++;

  if (resposta == 'c')
  pontos4++;

  if (resposta == 'd')
  pontos1++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "8. O que te deixa triste?" << endl;
cout << "a. Dias nublados e chuvosos" << endl;
cout << "b. Não ter ninguém para sair no fim de semana" << endl;
cout << "c. Ler comentários na internet" << endl;
cout << "d. Mensagem visualizada e não respondida" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos3++;

  if (resposta == 'b')
  pontos4++;

  if (resposta == 'c')
  pontos1++;

  if (resposta == 'd')
  pontos2++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "9. Qual dessas alternativas melhor te descreve?" << endl;
cout << "a. 'Vamo? Vamo!'" << endl;
cout << "b. 'Arrasou, mana!'" << endl;
cout << "c. 'Sonhei com você'" << endl;
cout << "d. 'Gratidão'" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos4++;

  if (resposta == 'b')
  pontos1++;

  if (resposta == 'c')
  pontos2++;

  if (resposta == 'd')
  pontos3++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

do{
cout << "10. Como você se define?" << endl;
cout << "a. Tranquila" << endl;
cout << "b. Determinada" << endl;
cout << "c. Inquieta" << endl;
cout << "d. Sonhadora" << endl;
cin >> resposta;

  if (resposta == 'a')
  pontos3++;

  if (resposta == 'b')
  pontos1++;

  if (resposta == 'c')
  pontos4++;

  if (resposta == 'd')
  pontos2++;

}while (resposta != 'a' && resposta != 'b' && resposta != 'c' && resposta != 'd');

playlist1 = "ATIVISTA";
playlist2 = "ROMÂNTICA";
playlist3 = "GOOD VIBES";
playlist4 = "FESTEIRA";
playlist5 = "ECLÉTICA";

  if ((pontos1 > pontos2) && (pontos1 > pontos3) && (pontos1 > pontos4)){
     cout << "\n" << nome << ", sua playlist é " << playlist1 << "!" << "\nVocê é uma grande admiradora de mulheres fortes e que muito fizeram e ainda fazem ao longo da nossa história. Você não se importa com o que as pessoas pensam e acredita fortemente naquilo que é certo. Aproveite sua playlist para se inspirar ainda mais!\n" << endl;
     cout << "\nPitty - Me adora\nElza Soares - O que se cala\nKarol Conká - Lalá\nAriana Grande - God is a Woman\nBeyoncé - Formation\nLetrux - Que estrago\nIZA - Dona de mim\nRouge - Dona da minha vida\nXênia França - Pra Que Me Chamas?\nLuedji Luna - Um Corpo no Mundo\nAlice Caymmi - Louca\nJade Baraldo - Brasa\nLinn da Quebrada - Bixa Preta\n\nYouTube: https://bit.ly/2RiI433\n\nSpotify: https://spoti.fi/2AvCJy2" << endl << endl;
  }

  else if ((pontos2 > pontos1) && (pontos2 > pontos3) && (pontos2 > pontos4)){
     cout << "\n" << nome << ", sua playlist é " << playlist2 << "!" << "\nVocê é uma fã incorrigível dos mais variados clichês românticos. Acredita demais no amor verdadeiro e em tudo que mais de incrível isso pode trazer. Curta bastante essa playlist para ouvir juntinho do crush!\n";
     cout << "\nAnaVitória - Cor de marte\nDuda Beat - Bixinho\nPitty (Agridoce) - Dançando\nLiniker - Tua\nGal Costa - Quando Você Olha Pra Ela\nMaria Gadú - Quando Fui Chuva\nMaria Bethânia - Cheiro de Amor\nMarisa Monte - Beija Eu\nAdriana Calcanhotto - Depois de Ter Você\nCéu - Malemolência\nTiê - Torrada e Café\nAvril Lavigne - I’m with you\nAdele - Sweetest Devotion\n\nYouTube: https://bit.ly/2DQpbkm\n\nSpotify: https://spoti.fi/2ArC3Kh" << endl << endl;
  }

  else if ((pontos3 > pontos1) && (pontos3 > pontos2) && (pontos3 > pontos4)){
     cout << "\n" << nome << ", sua playlist é " << playlist3 << "!" << "\nVocê é uma apreciadora da natureza e busca levar a vida mais leve possível. Está rodeada de pessoas e lugares que você acredita que passem boas vibrações, além de sempre pensar positivo. Use esta playlist nas suas viagens ou até mesmo para aqueles momentos de meditação!\n" << endl;
     cout << "\nSZA - The Weekend\nMahmundi - Eu Quero Ser o Mar\nPra Me Refazer - Sandy e AnaVitória\nVanessa Da Mata - Segue o Som\nTranquila - Mariana Coelho\nChimarruts - Do Lado de Cá\nFrase certa (708km) - Ana Gabriela\nAluga-se - Bárbara Dias\nÁguas de Março - Elis Regina\nEsquadros - Adriana Calcanhotto\nAs Bahias e Cozinha Mineira - Fumaça\nCatedral - Zélia Duncan\nNão é comum mas é normal - Lan Lanh e Nanda Costa\n\nYouTube: https://bit.ly/2P3cIvj\n\nSpotify: https://spoti.fi/2r9SVRn" << endl << endl;
  }

  else if ((pontos4 > pontos1) && (pontos4 > pontos2) && (pontos4 > pontos3)){
     cout << "\n" << nome << ", sua playlist é " << playlist4 << "!" << "\nVocê é muito animada e não dispensa uma festa. Seja qual for o rolê, você costuma ser o centro das atenções principalmente por sua empolgação. Escute esta playlist e aproveita pra compartilhar com as amigas!\n" << endl;
     cout << "\nLady Gaga - G.U.Y (Girl Under You)\nDua Lipa - Want to\nCamila Cabello - Havana\nLittle Mix e Nicki Minaj - Woman Like Me\nIZA - Bateu\nAriana Grande - Break Free\nSia - Cheap Thrills\nCarly Rae Jepsen - Emotion\nJulia Michaels - Pink\nRihanna - Only Girl\nBritney - Womanizer \nMadonna - Vogue\nShakira - Me Enamoré\n\nYouTube: https://bit.ly/2RjphVt\n\nSpotify: https://spoti.fi/2FLNH8O" << endl << endl;
  }

 else{
     cout << nome << ", sua playlist é " << playlist5 << "!" << "\nVocê é uma mistura de diferentes perfis. O que é ótimo! Significa que você tem uma facilidade para se relacionar com o mais diversos tipos de pessoas. Esperamos que você goste da sua playlist!\n" << endl;
     cout << "\nAnaVitória - Cor de marte\nIZA - Bateu\nXênia França - Pra Que Me Chamas?\nMahmundi - Eu Quero Ser o Mar\nGal Costa - Quando Você Olha Pra Ela\nLady Gaga - G.U.Y (Girl Under You)\nJade Baraldo - Brasa\nSZA - The Weekend\nDuda Beat - Bixinho\nShakira - Me Enamoré\nÁguas de Março - Elis Regina\nLetrux - Que estrago\nElza Soares - O que se cala\n\nYouTube: https://bit.ly/2r7dM81\n\nSpotify: https://spoti.fi/2DOTuri" << endl << endl;
 }
break;

case 2:
cout << "\nDado início ao teste, você responderá a 10 perguntas, cada uma contendo 4 alternativas de ‘a’, ‘b’, ‘c’ ou ‘d’. Responda, com apenas uma alternativa, de acordo com o que julgar que mais se aproxime de sua personalidade em cada situação. Em caso de resposta diferente de ‘a’, ‘b’, ‘c’ ou ‘d’ a pergunta se repetirá. Ao final, há quatro possíveis personalidades que as suas respostas podem direcionar.\n" << endl;
break;

case 3:
cout << "\nO programa é um teste de personalidade no qual, a partir de combinações das respostas dadas no quiz, irá gerar um playlist que conta apenas com artistas mulheres.\n";
cout << "\nEste programa é resultado do trabalho final do Curso de Iniciação à Programação, turma 1 do projeto Meninas Digitais, oferecido pelo Onda Digital, programa de extensão da UFBA. Foi desenvolvido em conjunto pelas estudantes Greice Mara e Rafaela Rey a partir dos conteúdos aprendidos ao longo do curso. \n" << endl;
break;

case 4:
 break;

default:
 cout << "\aOpção inválida!\n" << endl;
 sair;
}

}while(alternativa !=4);

return 0;
}
