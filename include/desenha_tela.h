void DesenhaTela()
{
    glClear(GL_COLOR_BUFFER_BIT);
    if(zerou==1){
        fim();
    }
    else {
    if(direita){
     if(pause==1&&gameover==0&&title==0){
		if (xi < 100-largura_personagem&&rageon==0)
			xi +=1;
        if(xi<100-largura_personagem&&rageon==1)
            xi+=.6;
    }}
    if(esquerda){
     if(pause==1&&gameover==0&&title==0)
        {
            if (xi > 0&&rageon==0)
                xi -=1;
            if(xi>0&&rageon==1)
                xi-=.6;
        }}
        if(cima){
        if(pause==1&&title==0&&gameover==0)
        {
            if (yi+largura_personagem < 100)
                yi += .6;
        }
        }
        if(baixo){
        if(pause==1&&title==0&&gameover==0)
        {
            if (yi >= 0)
                yi -=.6;
        }}
        if(tiroon){
        if(pause==1&&title==0&&cont%6==0&&gameover==0)
            {
                if(tiro<=maxtiros)
                {
                    xproj[tiro]=yi+largura_personagem;
                    xe[tiro]=xi+largura_personagem/2 -1;
                    tiro++;
                }
            }}

    if(title==1&&gameover==0&&pause==1)
    {
        tela_titulo();
    }
    if(gameover==1&&title==0&&pause==1){
        tela_gameover();
    }
        if(pause==-1&&gameover==0&&title==0)
        {
            tela_de_pause();
        }
        if(pause==1&&gameover==0&&title==0)
        {
            Background();
            Personagem();
            Quadrados();
            Inimigo_1();
            Inimigo_2();
            Inimigo_3();
            Inimigo_4();
            Colisoes();
            Boss();
            barra_de_progresso();
            cria_ult();
            imagem_vidas();
        }
        if((rageon==1&&pause==1&&gameover==0&&title==0)||rage==1){
        ultimate();
        }}

    glutSwapBuffers();
}
