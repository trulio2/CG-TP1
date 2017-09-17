void Desenha_Projeteis(float x,float y,float tamanho,int id_tiro)
{
    float sg,gs;
    if(id_tiro==1)
    {
        sg=.375;
        gs=.5614285714;

    }
    if(id_tiro==2)
    {
        sg=.5;
        gs=.5614285714;

    }
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturaboss);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(sg,gs);            glVertex2d(x, y);
    glTexCoord2d(sg+.0625,gs);      glVertex2d(x+tamanho, y);
    glTexCoord2d(sg+.0625,gs+.071); glVertex2d(x+tamanho, y+tamanho+1);
    glTexCoord2d(sg,gs+.071);       glVertex2d(x, y+tamanho+1);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}
