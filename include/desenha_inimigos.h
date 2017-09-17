void Desenha_Inimigos(float x, float y,int tamanho,int id_inimigo)
{
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    if(id_inimigo==1)
    {
        gs=.3771428271428571;
        sg=.4285714285714286;
    }
    if(id_inimigo==0)
    {
        gs=.5;
        sg=.5614285714;
    }
    if(id_inimigo==2)
    {
        gs=.2402857142857143;
        sg=.318714285714285;
    }
    if(id_inimigo==0)
            pi1=0;
    glBindTexture(GL_TEXTURE_2D, texturaboss);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pi1,gs);       glVertex2d(x, y);
    glTexCoord2d(pi1+.0625,gs); glVertex2d(x+tamanho, y);
    glTexCoord2d(pi1+.0625,sg); glVertex2d(x+tamanho, y+tamanho);
    glTexCoord2d(pi1,sg);       glVertex2d(x, y+tamanho);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%4==0)
    {
        pi1+=.0625;
        if(id_inimigo>=1&&pi1>=.3125)
            pi1=0;
    }
}
