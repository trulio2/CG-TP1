void desenha_ult(float x,float y){

    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturault);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(0,0);       glVertex2d(x, y);
    glTexCoord2d(1,0);       glVertex2d(x+5, y);
    glTexCoord2d(1,1);       glVertex2d(x+5, y+5);
    glTexCoord2d(0,1);       glVertex2d(x, y+5);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}
