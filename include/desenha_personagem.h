void Desenha_Personagem()
{
    if(direita){
        move_personagem=.435;
     if(pp==.875)
            pp=.375;
    }
    else if(esquerda){
        move_personagem=.61;
        if(pp==.875)
            pp=.375;
    }
    else
        move_personagem=.8;
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    if(personagem==1)
    glBindTexture(GL_TEXTURE_2D, texturapersonagem);
    if(personagem==2)
    glBindTexture(GL_TEXTURE_2D, texturapersonagem2);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pp,move_personagem);         glVertex2d(xi, yi);
    glTexCoord2d(pp+.125,move_personagem);    glVertex2d(largura_personagem+xi, yi);
    glTexCoord2d(pp+.125,move_personagem+.2); glVertex2d(largura_personagem+xi, largura_personagem+yi);
    glTexCoord2d(pp,move_personagem+.2);      glVertex2d(xi, largura_personagem+yi);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%4==0&&pause==1)
    {
        pp+=.125;
        if(pp>=1)
            pp=0;
    }
    if(pis==-1&&cont%3==0)
        pp=-.125;

}
