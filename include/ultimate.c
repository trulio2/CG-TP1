void ultimate(){
    if(rageon==1){
    glColor3f(0, 0, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturaultimate);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(0,0);                   glVertex2d(xi-10, yi+5);
    glTexCoord2d(1,0);                   glVertex2d(xi+largura_personagem+10, yi+5);
    glTexCoord2d(1,1);                   glVertex2d(xi+largura_personagem+10, larg_ult);
    glTexCoord2d(0,1);                   glVertex2d(xi-10, larg_ult);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    larg_ult+=5;
    }
    if(rage==1){
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturault);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(0,0);       glVertex2d(0, 95);
    glTexCoord2d(1,0);       glVertex2d(5, 95);
    glTexCoord2d(1,1);       glVertex2d(5, 100);
    glTexCoord2d(0,1);       glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    }

}
