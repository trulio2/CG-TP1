void tela_gameover()
{
    if(gameover==1){
    if(opcao==1)
    {
        op_menu=.2;
    }
    if(opcao==2)
    {
        op_menu=.4;
    }
    if(opcao==3)
    {
        op_menu=.6;
    }
    if(opcao==4)
    {
        op_menu=.8;
    }
    if(opcao==5)
    {
        op_menu=1;
    }
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturagameover);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(op_menu-.2,0); glVertex2d(0, 0);
    glTexCoord2d(op_menu,0);                   glVertex2d(100, 0);
    glTexCoord2d(op_menu,1);                   glVertex2d(100, 100);
    glTexCoord2d(op_menu-.2,1); glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}}
