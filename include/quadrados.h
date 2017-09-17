void Quadrados()
{
    int i,j,k=rand();
//Cria os Quadrados#############################################################

    if((k%const_quadrados==0&&cont<=900)||inimigos>5)
    {
        if(inimigos<quantidade_quadrados)
        {
            tiros[inimigos]=0;
            xo[inimigos]=101;
            x[inimigos]=(k%86)+9;
            z[inimigos]=0.1;
            inimigos++;
        }
    }
//##############################################################################

//Movimenta Quadrados ##########################################################
    if(inimigos>0)
    {
        for(i=0; i<inimigos; i++)
        {
            xo[i]-=+z[i];
            z[i]+=.025;
            if(z[i]>=1.25)
                z[i]=1.25;
        }
    }
//###############################################################################

//Se o Quadrado sair da tela ####################################################
    if(inimigos>0)
    {
        for(i=0; i<inimigos; i++)
        {
            if(xo[i]+9<0)
            {
                inimigos--;
                for(j=i; j<inimigos; j++)
                {
                    xo[j]=xo[j+1];
                    x[j]=x[j+1];
                    z[j]=z[j+1];
                    tiros[j]=tiros[j+1];
                }
            }
        }
        for(i=0; i<inimigos; i++)
        {
            Desenha_Inimigos(x[i],xo[i],9,0);
        }
    }
//################################################################################

}
