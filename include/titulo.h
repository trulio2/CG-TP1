void tela_titulo()
{
    if(title==1&&selecao==0){
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
    glBindTexture(GL_TEXTURE_2D, texturatitulo1);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(op_menu-.2,0); glVertex2d(0, 0);
    glTexCoord2d(op_menu,0);                   glVertex2d(100, 0);
    glTexCoord2d(op_menu,1);                   glVertex2d(100, 100);
    glTexCoord2d(op_menu-.2,1); glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}
if(selecao==1&&title==1){
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturaselecao);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(op_menu+.03125,0);            glVertex2d(0, 0);
    glTexCoord2d(op_menu,0);                   glVertex2d(100, 0);
    glTexCoord2d(op_menu,1);                   glVertex2d(100, 100);
    glTexCoord2d(op_menu+.03125,1);            glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%2==0){
    op_menu+=.03125;
    if(op_menu>=1)
     op_menu=0;
    }
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturapersonagem);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pp,.8);         glVertex2d(30, 35);
    glTexCoord2d(pp+.125,.8);    glVertex2d(45, 35);
    glTexCoord2d(pp+.125,1); glVertex2d(45, 50);
    glTexCoord2d(pp,1);      glVertex2d(30, 50);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(opcao==1){
    if(cont%4==0){
    pp+=.125;
    if(pp>=1)
    pp=0;
    }}
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturapersonagem2);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pp2,.8);         glVertex2d(55, 35);
    glTexCoord2d(pp2+.125,.8);    glVertex2d(70, 35);
    glTexCoord2d(pp2+.125,1); glVertex2d(70, 50);
    glTexCoord2d(pp2,1);      glVertex2d(55,50);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(opcao==2){
    if(cont%4==0){
    pp2+=.125;
    if(pp2>=1)
    pp2=0;
    }}

    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturarrow);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(arrow,0);         glVertex2d(0, 0);
    glTexCoord2d(arrow+.04,0);    glVertex2d(10, 0);
    glTexCoord2d(arrow+.04,1);     glVertex2d(10, 10);
    glTexCoord2d(arrow,1);          glVertex2d(0,10);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(opcao==3){
    if(cont%4==0){
    arrow+=.04;
    if(arrow>=1)
    arrow=0;
    }}

cont++;
}
}
