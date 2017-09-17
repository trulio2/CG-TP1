void Background()
{
    float fundo;
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    if(fase==1){
    glBindTexture(GL_TEXTURE_2D, texturafundo);
    fundo=.066666666666667;
    }
    if(fase==2){
    glBindTexture(GL_TEXTURE_2D, texturafundo2);
    fundo=.1;
    }
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(px,0);                   glVertex2d(0, 0);
    glTexCoord2d(px+fundo,0); glVertex2d(100, 0);
    glTexCoord2d(px+fundo,1); glVertex2d(100, 100);
    glTexCoord2d(px,1);                   glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    if(cont%2==0&&pause==1&&fase==1)
    {
        px+=.0666666666666667;
        if(px>=.99)
            px=0;
    }
    if(cont%4==0&&pause==1&&fase==2)
    {
        px+=.1;
        if(px>=.99)
            px=0;
    }
}
