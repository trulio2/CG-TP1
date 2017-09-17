void Desenha_Boss()
{
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    if(fase==1){
    glBindTexture(GL_TEXTURE_2D, texturaboss);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pb,.928571429);       glVertex2d(xb,yb);
    glTexCoord2d(pb+.0625,.928571429); glVertex2d(xb+largura_boss,yb);
    glTexCoord2d(pb+.0625,1);          glVertex2d(xb+largura_boss,yb+largura_boss);
    glTexCoord2d(pb,1);                glVertex2d(xb,yb+largura_boss);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%3==0)
    {
        pb+=.0625;
        if(pb>=.3125)
            pb=0;
    }
    }
    if(fase==2){
    glBindTexture(GL_TEXTURE_2D, texturaboss2);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(pb,boss2);       glVertex2d(xb,yb);
    glTexCoord2d(pb+.25,boss2); glVertex2d(xb+largura_boss,yb);
    glTexCoord2d(pb+.25,boss2+.5);          glVertex2d(xb+largura_boss,yb+largura_boss);
    glTexCoord2d(pb,boss2+.5);                glVertex2d(xb,yb+largura_boss);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%5==0)
    {
        pb+=.25;
        if(pb>=.75&&boss2==0){
            pb=0;
            boss2=.5;
    }
        if(pb>=1&&boss2==.5){
            pb=0;
            boss2=0;
    }
    }
}
}
