void barra_de_progresso(){
if(pause==1&&title==0&&gameover==0&&bos==0){
float barra=cont/34;
glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(1, 0);
    glVertex2d(1, barra);
    glVertex2d(0, barra);
    glEnd();
}
if(bos==1&&pause==1&&title==0&&gameover==0){
float barra=hp_boss-acerto;
glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(1, 0);
    glVertex2d(1, barra);
    glVertex2d(0, barra);
    glEnd();

}
}
