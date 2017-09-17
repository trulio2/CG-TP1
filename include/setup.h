#include <glew.h>
#include <freeglut.h>
#include <SOIL.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <mmsystem.h>
#include "variaveis.h"
#include "desenha_personagem.h"
#include "tela_de_pause.h"
#include "desenha_boss.h"
#include "desenha_inimigos.h"
#include "desenha_projeteis.h"
#include "titulo.h"
#include "gameover.h"
#include "fim.h"
#include "background.h"
#include "ultimate.c"
#include "desenha_ult.c"
#include "criault.c"
#include "personagem.h""
#include "timer.h"
#include "quadrados.h"
#include "inimigo_1.h"
#include "inimigo_2.h"
#include "inimigo_3.h"
#include "inimigo_4.h"
#include "boss.h"
#include "colisoes.h"
#include "progresso.h"
#include "vidas.h"
#include "desenha_tela.h"

void setup(void){
    glClearColor(0, 0, 0, 0);
    texturapersonagem = SOIL_load_OGL_texture(
                       "imagem\\personagem.png",
                       SOIL_LOAD_AUTO,
                       SOIL_CREATE_NEW_ID,
                       SOIL_FLAG_INVERT_Y
                   );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturapersonagem == 0) {
        printf("1Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    texturapersonagem2 = SOIL_load_OGL_texture(
                       "imagem\\personagem2.png",
                       SOIL_LOAD_AUTO,
                       SOIL_CREATE_NEW_ID,
                       SOIL_FLAG_INVERT_Y
                   );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturapersonagem2 == 0) {
        printf("2Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    texturaboss = SOIL_load_OGL_texture(
                      "imagem\\enemy.png",
                      SOIL_LOAD_AUTO,
                      SOIL_CREATE_NEW_ID,
                      SOIL_FLAG_INVERT_Y
                  );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaboss == 0) {
        printf("3Erro do SOIL: '%s'\n", SOIL_last_result());
    }

      texturaboss2 = SOIL_load_OGL_texture(
                      "imagem\\boss2.png",
                      SOIL_LOAD_AUTO,
                      SOIL_CREATE_NEW_ID,
                      SOIL_FLAG_INVERT_Y
                  );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaboss2 == 0) {
        printf("3Erro do SOIL: '%s'\n", SOIL_last_result());
    }



    texturafundo = SOIL_load_OGL_texture(
                       "imagem\\fundo.jpg",
                       SOIL_LOAD_AUTO,
                       SOIL_CREATE_NEW_ID,
                       SOIL_FLAG_INVERT_Y
                   );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturafundo == 0) {
        printf("4Erro do SOIL: '%s'\n", SOIL_last_result());
    }
    texturafundo2 = SOIL_load_OGL_texture(
                       "imagem\\fundo2.jpg",
                       SOIL_LOAD_AUTO,
                       SOIL_CREATE_NEW_ID,
                       SOIL_FLAG_INVERT_Y
                   );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturafundo2 == 0) {
        printf("5Erro do SOIL: '%s'\n", SOIL_last_result());
    }


    texturapause = SOIL_load_OGL_texture(
                       "imagem\\pause.jpg",
                       SOIL_LOAD_AUTO,
                       SOIL_CREATE_NEW_ID,
                       SOIL_FLAG_INVERT_Y
                   );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturapause == 0) {
        printf("6Erro do SOIL: '%s'\n", SOIL_last_result());
    }
    texturatitulo1 = SOIL_load_OGL_texture(
                         "imagem\\title.jpg",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturatitulo1 == 0) {
        printf("7Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    texturagameover = SOIL_load_OGL_texture(
                         "imagem\\gameover.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturagameover == 0) {
        printf("8Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    texturavida = SOIL_load_OGL_texture(
                         "imagem\\vidas.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturavida == 0) {
        printf("9Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    texturaselecao = SOIL_load_OGL_texture(
                         "imagem\\selecao.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaselecao == 0) {
        printf("10Erro do SOIL: '%s'\n", SOIL_last_result());
    }
    texturarrow = SOIL_load_OGL_texture(
                         "imagem\\arrow.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturarrow == 0) {
        printf("11Erro do SOIL: '%s'\n", SOIL_last_result());
    }

     texturaultimate = SOIL_load_OGL_texture(
                         "imagem\\ultimate.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturaultimate == 0) {
        printf("12Erro do SOIL: '%s'\n", SOIL_last_result());
    }
     texturault = SOIL_load_OGL_texture(
                         "imagem\\ult.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturault == 0) {
        printf("13Erro do SOIL: '%s'\n", SOIL_last_result());
    }
     texturafim = SOIL_load_OGL_texture(
                         "imagem\\fim.png",
                         SOIL_LOAD_AUTO,
                         SOIL_CREATE_NEW_ID,
                         SOIL_FLAG_INVERT_Y
                     );
    glEnable( GL_BLEND );
    glBlendFunc( GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA );

    if (texturafim == 0) {
        printf("13Erro do SOIL: '%s'\n", SOIL_last_result());
    }
}
