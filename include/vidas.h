void imagem_vidas(){
    int i;
if(vidas>0){
    for(i=0;i<vidas-1;i++){
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturavida);
    glBegin(GL_TRIANGLE_FAN);
        glTexCoord2d(0,0); glVertex2d(95-i*5, 95);
        glTexCoord2d(1,0); glVertex2d(100-i*5, 95);
        glTexCoord2d(1,1); glVertex2d(100-i*5, 100);
        glTexCoord2d(0,1); glVertex2d(95-i*5, 100);
        glEnd();
        glDisable(GL_TEXTURE_2D);
    }
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturavida);
    glBegin(GL_TRIANGLE_FAN);
        glTexCoord2d(0,0); glVertex2d(95-(i*5)-constant, 95-constant);
        glTexCoord2d(1,0); glVertex2d(constant+100-(i*5), 95-constant);
        glTexCoord2d(1,1); glVertex2d(constant+100-(i*5), constant+100);
        glTexCoord2d(0,1); glVertex2d(95-(i*5)-constant, constant+100);
        glEnd();
        glDisable(GL_TEXTURE_2D);
        if(cont%4==0){
        if(constant>=1)
            aumenta=0;
        if(constant<=0)
            aumenta=1;
        if(aumenta==1)
            constant+=.2;
         if(aumenta==0)
            constant-=.2;
        }}}
