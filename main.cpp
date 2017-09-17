#include "include\setup.h"
int faseaux;
void setas(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_RIGHT:
        if(title==1&&gameover==0&&pause==1&&selecao==1){
            if(opcao==1){
                opcao=2;
            break;
            }
        }
        if(pause==1&&gameover==0)
        direita=true;
         if(title==1&&(cheat==4||cheat==6)){
          cheat++;
          break;
         }
                else{
                        if(cheat!=10)
                        cheat=0;
                }
        break;
    case GLUT_KEY_LEFT:
        if(title==1&&gameover==0&&pause==1&&selecao==1){
            if(opcao==2){
                opcao=1;
            break;
            }
        }
        if(title==1&&(cheat==5||cheat==7))
                cheat++;
                else{
                        if(cheat!=10)
                        cheat=0;
                }
        if(pause==1&&gameover==0)
            esquerda=true;
        break;
    case GLUT_KEY_UP:
         if(title==1&&gameover==0&&pause==1&&selecao==1){
            if(opcao==3)
                opcao=1;
            break;
        }
        if(zerou==1){
            if(opcao==2)
                opcao=1;
                break;
        }
        if(title==1&&pause==1&&gameover==0&&selecao==0)
        {
            if(cheat==0||cheat==1)
            cheat+=1;
            else if(cheat!=10) cheat=1;
            if(opcao>1&&opcao!=4)
                opcao-=1;
                break;
        }
        if(title==0&&gameover==0&&pause==1&&selecao==0)
        cima=true;
        if(gameover==1&&title==0&&pause==1){
            if(opcao>1&&opcao!=4)
                opcao-=1;
                break;
        }
        if(pause==-1&&gameover==0&&title==0&&selecao==0){
            if(opcao>1&&opcao!=5&&opcao!=7)
                opcao-=1;
        }
        break;
    case GLUT_KEY_DOWN:
        if(title==1&&gameover==0&&pause==1&&selecao==1){
            if(opcao==1||opcao==2)
                opcao=3;
            break;
        }
        if(zerou==1){
            if(opcao==1)
                opcao=2;
                break;
        }
    if(title==1&&pause==1&&gameover==0&&selecao==0)
        {
            if(title==1&&(cheat==2||cheat==3))
                cheat++;
                else{
                    if(cheat!=10)
                    cheat=0;
                }
            if(opcao<3||opcao==4)
                opcao+=1;
        }
        if(title==0&&gameover==0&&selecao==0)
        baixo=true;
        if(gameover==1&&title==0&&selecao==0){
            if(opcao<3||opcao==4)
                opcao+=1;
        }
        if(pause==-1&&title==0&&gameover==0&&selecao==0){
            if(opcao<4||opcao==5||opcao==7)
                opcao+=1;
        }
        break;
    default:
        break;
    }
}
void setas2(int key, int x, int y)
{
    switch (key)
    {

    case GLUT_KEY_RIGHT:
        direita=false;
        break;
    case GLUT_KEY_LEFT:
       esquerda=false;
        break;
    case GLUT_KEY_UP:
       cima=false;
        break;
    case GLUT_KEY_DOWN:
        baixo=false;
        break;
    default:
        break;
    }
}
void redimensionada(int width, int height)
{   glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(width>height) glViewport((width-height)/2, 0, height, height);
    if(height>width) glViewport(0, (height-width)/2, width, width);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0, 100.0, 0.0, 100.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);

}
void teclaPressionada(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'x':
        if(title==0&&pause==1&&gameover==0&&rage==1){
         larg_ult=100;
         rageon=1;
         cont_rage=cont;
         rage=0;
        }
    case 'a':
        if(title==1&&cheat==9){
                cheat++;
                PlaySound("Audio/ding.wav", NULL, SND_ASYNC|SND_FILENAME);
                break;
        }
                else{
                  if(cheat!=10)
                    cheat=0;
                }
            break;
    case 'b':
        if(title==1&&cheat==8){
                cheat++;
                break;
        }
        else{
                if(cheat!=10)
                cheat=0;
        }
            break;
    case 27:
        if(title==1&&selecao==1){
            opcao=1;
            selecao=0;
            break;
        }
        if(title==0&&pause==1&&gameover==0){
            pause=-1;
            opcao=7;
        }
        break;
    case 32:
        if(pause==1&&title==0)
        {
            if (yi==0)
                yi += 1;

            break;
        case 'p':
            if(title==0&&gameover==0){
            pause*=-1;
            if(pause==-1)
                opcao=1;
            }
            break;
        case 13:
            if(zerou==1&&title==0){
                if(opcao==1){
                    zerou=0;
                    title=1;
                }
                if(opcao==2)
                    exit(0);
            }
            if(title==1&&gameover==0&&pause==1&&selecao==0)
            {
                if(opcao==1)
                {
                    op_menu=0;
                    selecao=1;
                    break;
                }
                if(opcao==2){
                    opcao=4;
                    break; }
                if(opcao==3)
                    exit(0);
                if(opcao==4){
                    facil=1;
                    hard=0;
                    title=1;
                    opcao=1;
                    break;
                }
                if(opcao==5)
                    facil=0;
                    hard=1;
                    title=1;
                    opcao=1;

            }
            if(selecao==1){
                if(opcao==1){
                    carregar_variaveis();
                    fase=1;
                    if(cheat==10){
                        vidas=-1;
                    }
                    title=0;
                    selecao=0;
                    personagem=1;
                    cheat=0;
                    break;
                }
                if(opcao==2){
                    carregar_variaveis();
                    fase=1;
                    if(cheat==10){
                        vidas=-1;
                    }
                    title=0;
                    selecao=0;
                    personagem=2;
                    cheat=0;
                    break;
                }
                if(opcao==3){
                    opcao=1;
                    title=1;
                    selecao=0;
                }
            }
            if(gameover==1&&title==0&&pause==1){
                if(opcao==1)
                {
                    carregar_variaveis();
                    break;
                }
                if(opcao==2){
                    title=1;
                    opcao=1;
                    gameover=0;
                    break;
                }
                if(opcao==3){
                    opcao=4;
                    break;
                }
                if(opcao==4){
                    exit(0);
                }
                if(opcao==5)
                    opcao=1;
                    break;
            }
            if(pause==-1&&title==0&&gameover==0){
                if(opcao==1)
                {
                    pause*=-1;
                    break;
                }
                if(opcao==2){
                    faseaux=fase;
                    carregar_variaveis();
                    fase=faseaux;
                    break;
                }
                if(opcao==3){
                    opcao=5;
                    break;
                }
                if(opcao==4){
                    opcao=7;
                    break;
                }
                if(opcao==5){
                    PlaySound(NULL, 0, 0);
                    title=1;
                    opcao=1;
                    pause=1;
                    break;
                }
                if(opcao==6){
                    opcao=1;
                    break;
                }
                if(opcao==7){
                    exit(0);
                }
                if(opcao==8){
                    opcao=1;
                    break;
                }

            }
            break;
            case 'z':
            if(title==0)
                tiroon=true;
            break;
        default:
            break;
        }
    }
}
void tiroativo(unsigned char key, int x, int y)
{
    switch (key){
    case 'z':
tiroon=false;
    break;
    default:
        break;
}
}
int main(int argc, char** argv)
{
    facil=1;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tchaguin exe");
    srand(time(0));
    setup();
    glutSpecialFunc(setas);
    glutSpecialUpFunc(setas2);
    glutDisplayFunc(DesenhaTela);
    glutReshapeFunc(redimensionada);
    glutKeyboardFunc(teclaPressionada);
    glutKeyboardUpFunc(tiroativo);
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
    return 0;
}
