void tela_de_pause()
{
    if(pause==-1){
    if(opcao==1)
        op_menu=.125;
    if(opcao==2)
        op_menu=.25;
    if(opcao==3)
        op_menu=.375;
    if(opcao==4)
        op_menu=.5;
    if(opcao==5)
        op_menu=.625;
    if(opcao==6)
        op_menu=.75;
    if(opcao==7)
        op_menu=.875;
    if(opcao==8)
        op_menu=1;
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturapause);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(op_menu-.125,0); glVertex2d(0, 0);
    glTexCoord2d(op_menu,0);                   glVertex2d(100, 0);
    glTexCoord2d(op_menu,1);                   glVertex2d(100, 100);
    glTexCoord2d(op_menu-.125,1); glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}}
