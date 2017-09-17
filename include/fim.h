void fim(){

     if(opcao==1)
    {
        op_menu=.5;
    }
    if(opcao==2)
    {
        op_menu=1;
    }

    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturafim);
    glBegin(GL_TRIANGLE_FAN);
    glTexCoord2d(op_menu-.5,0); glVertex2d(0, 0);
    glTexCoord2d(op_menu,0);                   glVertex2d(100, 0);
    glTexCoord2d(op_menu,1);                   glVertex2d(100, 100);
    glTexCoord2d(op_menu-.5,1); glVertex2d(0, 100);
    glEnd();
    glDisable(GL_TEXTURE_2D);

}
