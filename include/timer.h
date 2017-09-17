void timer(int idx)
{
    if(pause==1&&title==0&&gameover==0&&zerou==0)
    {
        if(cont==10){
    if(fase==1){
            PlaySound("Audio/ghost2.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
                }
        if(fase==2)
            PlaySound("Audio/ghost.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
        }
        if(pis==-1&&cont-caux>=70)
            pis=1;

        if(powerup>=5)
        {
            powerup=0;
            maxtiros++;
        }
        if(cont-cont_rage>200)
            rageon=0;
        cont++;
    }
    glutPostRedisplay();
    glutTimerFunc(17, timer, 0);
}
