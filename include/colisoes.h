void Colisoes()
{
    int i,j,s,vida_aux;
//Tiro do Personagem nos Quadrados
    for(i=0; i<tiro; i++)
    {
        for(j=0; j<inimigos; j++)
        {
            if(xo[j]<=xproj[i]+2&&xe[i]>=x[j]-3&&xe[i]+2<=x[j]+9&&xo[j]+12>=xproj[i])
            {
                tiros[j]++;
                tiro--;
                for(s=i; s<tiro; s++)
                {
                    xproj[s]=xproj[s+1];
                    xe[s]=xe[s+1];
                }
                if(tiros[j]==2)
                {
                    inimigos--;
                    for(s=j; s<inimigos; s++)
                    {
                        xo[s]=xo[s+1];
                        x[s]=x[s+1];
                        z[s]=z[s+1];
                        tiros[s]=tiros[s+1];
                    }
                    if(maxtiros<=3)
                        powerup++;
                }
            }
        }
    }
//###############################################

//tiro do personagem no inimigo 1 ###############

    for(i=0; i<tiro; i++)
    {
        for(j=0; j<quantidadeinimigos1; j++)
        {
            if(yinimigo1[j]+5>=xproj[i]&&yinimigo1[j]<=xproj[i]+5&&xe[i]<=xinimigo1[j]+5&&xe[i]+5>=xinimigo1[j])
            {
                tiro--;
                for(s=i; s<tiro; s++)
                {
                    xproj[s]=xproj[s+1];
                    xe[s]=xe[s+1];
                }
                quantidadeinimigos1--;
                for(s=j; s<quantidadeinimigos1; s++)
                {
                    yinimigo1[s]=yinimigo1[s+1];
                    xinimigo1[s]=xinimigo1[s+1];
                    sentidoinimigo1[s]=sentidoinimigo1[s+1];
                }
                if(maxtiros<=3  )
                    powerup++;
            }
        }
    }

//#########################################################

//tiro no inimigo 2

    for(i=0; i<tiro; i++)
    {
        for(j=0; j<quantidadeinimigos2; j++)
        {
            if(yinimigo2[j]+5>=xproj[i]&&yinimigo2[j]<=xproj[i]+5&&xe[i]<=xinimigo2[j]+5&&xe[i]+5>=xinimigo2[j])
            {
                tiro--;
                for(s=i; s<tiro; s++)
                {
                    xproj[s]=xproj[s+1];
                    xe[s]=xe[s+1];
                }
                quantidadeinimigos2--;
                for(s=j; s<quantidadeinimigos2; s++)
                {
                    yinimigo2[s]=yinimigo2[s+1];
                    xinimigo2[s]=xinimigo2[s+1];
                    sentidoinimigo2[s]=sentidoinimigo2[s+1];
                }
                if(maxtiros<=3)
                    powerup++;
            }
        }
    }
//#####################################
//tiro do personagem no inimigo 3

    for(i=0; i<tiro; i++)
    {
        for(j=0; j<quantidadeinimigos3; j++)
        {
            if(yinimigo3[j]+5>=xproj[i]&&yinimigo3[j]<=xproj[i]+5&&xe[i]<=xinimigo3[j]+5&&xe[i]+5>=xinimigo3[j])
            {
                tiro--;
                for(s=i; s<tiro; s++)
                {
                    xproj[s]=xproj[s+1];
                    xe[s]=xe[s+1];
                }
                quantidadeinimigos3--;
                for(s=j; s<quantidadeinimigos3; s++)
                {
                    yinimigo3[s]=yinimigo3[s+1];
                    xinimigo3[s]=xinimigo3[s+1];
                }
                if(maxtiros<=3)
                    powerup++;
            }
        }
    }
//#################################
//tiro do personagem no inimigo 4
    for(i=0; i<tiro; i++)
    {
        for(j=0; j<quantidadeinimigos4; j++)
        {
            if(yinimigo4[j]+5>=xproj[i]&&yinimigo4[j]<=xproj[i]+5&&xe[i]<=xinimigo4[j]+5&&xe[i]+5>=xinimigo4[j])
            {
                tiro--;
                for(s=i; s<tiro; s++)
                {
                    xproj[s]=xproj[s+1];
                    xe[s]=xe[s+1];
                }
                quantidadeinimigos4--;
                for(s=j; s<quantidadeinimigos4; s++)
                {
                    yinimigo4[s]=yinimigo4[s+1];
                    xinimigo4[s]=xinimigo4[s+1];
                }
                if(maxtiros<=3)
                    powerup++;
            }
        }
    }
//##################################

//Tiro do Personagem no Boss
    if(bos==1)
    {
        for(i=0; i<tiro; i++)
        {
            if(yb+largura_boss>=xproj[i]&&yb<=xproj[i]+2&&xe[i]>=xb&&xe[i]+2<=xb+largura_boss)
            {
                tiro--;
                for(j=i; j<tiro; j++)
                {
                    xproj[j]=xproj[j+1];
                    xe[j]=xe[j+1];
                }
                acerto++;
                if(acerto==hp_boss)
                {
                    px=0;
                    cheat=0;
                    PlaySound(NULL, 0, 0);
                    vida_aux=vidas;
                    carregar_variaveis();
                    vidas=vida_aux;
                    if(fase==2){
                        opcao=1;
                        PlaySound(NULL,0,0);
                        zerou=1;
                    }
                    if(fase==1){
                    fase=2;
                    facil=0;
                    hard=1;
                    }

                }
            }
        }
    }
//###################################

//tiro do Boss no Personagem

    if(bos==1)
    {
        for(i=0; i<tiroboss; i++)
        {
            if(pis==1&&xi+largura_personagem-2>=xtb[i]&&xi+2<=xtb[i]+1.5&&yi+largura_personagem-2>=xprojb[i]&&xprojb[i]+1.5>0&&xprojb[i]+1.5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
                tiroboss--;
                for(j=i; j<tiroboss; j++)
                {
                    xprojb[j]=xprojb[j+1];
                    xtb[j]=xtb[j+1];
                }
            }
        }
    }
//###############################

//tiro inimigo 1 no personagem ###
    if(tiroinimigo1>0)
    {
        for(i=0; i<tiroinimigo1; i++)
        {
            if(pis==1&&xi+largura_personagem-3>=xtinimigo1[i]&&xi+3<=xtinimigo1[i]+1.5&&yi+largura_personagem-2>=xprojinimigo1[i]&&xprojinimigo1[i]+1.5>0&&xprojinimigo1[i]+1.5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
                tiroinimigo1--;
                for(j=i; j<tiroinimigo1; j++)
                {
                    xprojinimigo1[j]=xprojinimigo1[j+1];
                    xtinimigo1[j]=xtinimigo1[j+1];
                    i--;
                }
            }
        }
    }

//########################
//tiro inimigo 2 no personagem
    if(tiroinimigo2>0)
    {
        for(i=0; i<tiroinimigo2; i++)
        {
            if(pis==1&&xi+largura_personagem-3>=xtinimigo2[i]&&xi+3<=xtinimigo2[i]+1.5&&yi+largura_personagem-2>=xprojinimigo2[i]&&xprojinimigo2[i]+1.5>0&&xprojinimigo2[i]+1.5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
                tiroinimigo2--;
                for(j=i; j<tiroinimigo2; j++)
                {
                    xprojinimigo2[j]=xprojinimigo2[j+1];
                    xtinimigo2[j]=xtinimigo2[j+1];
                    i--;
                }
            }
        }
    }
//#########################
//tiro inimigo 3 no personagem
    if(tiroinimigo3>0)
    {
        for(i=0; i<tiroinimigo3; i++)
        {
            if(pis==1&&xi+largura_personagem-3>=xtinimigo3[i]&&xi+3<=xtinimigo3[i]+5&&yi+largura_personagem-2>=xprojinimigo3[i]&&xprojinimigo3[i]+5>0&&xprojinimigo3[i]+5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
                tiroinimigo3--;
                for(j=i; j<tiroinimigo3; j++)
                {
                    xprojinimigo3[j]=xprojinimigo3[j+1];
                    xtinimigo3[j]=xtinimigo3[j+1];
                    kprojinimigo3[j]=kprojinimigo3[j+1];
                }
            }
        }
    }
//############################3
//tiro inimigo 4 no personagem
    if(tiroinimigo4>0)
    {
        for(i=0; i<tiroinimigo4; i++)
        {
            if(pis==1&&xi+largura_personagem-3>=xtinimigo4[i]&&xi+3<=xtinimigo4[i]+5&&yi+largura_personagem-2>=xprojinimigo4[i]&&xprojinimigo4[i]+5>0&&xprojinimigo4[i]+1.5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
                tiroinimigo4--;
                for(j=i; j<tiroinimigo4; j++)
                {
                    xprojinimigo4[j]=xprojinimigo4[j+1];
                    xtinimigo4[j]=xtinimigo4[j+1];
                    kprojinimigo4[j]=kprojinimigo4[j+1];
                }
            }
        }
    }
//###########################3
//Quadrado caindo no Personagem
    if(inimigos>0)
    {
        for(i=0; i<inimigos; i++)
        {
            if(pis==1&&xi+4<=x[i]+9&&xi+largura_personagem-4>=x[i]&&yi+largura_personagem>=xo[i]&&xo[i]+9>0&&xo[i]+9>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                inimigos--;
                for(j=i; j<inimigos; j++)
                {
                    xo[j]=xo[j+1];
                    x[j]=x[j+1];
                    z[j]=z[j+1];
                    tiros[j]=tiros[j+1];
                }
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
            }
        }
    }
//#################################
//Colisao Personagem inimigo 1
    if(quantidadeinimigos1>0)
    {
        for(i=0; i<quantidadeinimigos1; i++)
        {
            if(pis==1&&xi+4<=xinimigo1[i]+5&&xi+largura_personagem-4>=xinimigo1[i]&&yi+largura_personagem>=yinimigo1[i]&&yinimigo1[i]+5>0&&yinimigo1[i]+5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
            }
        }
    }
//##################################

//Colisao Personagem inimigo 2
    if(quantidadeinimigos2>0)
    {
        for(i=0; i<quantidadeinimigos2; i++)
        {
            if(pis==1&&xi+4<=xinimigo2[i]+5&&xi+largura_personagem-4>=xinimigo2[i]&&yi+largura_personagem>=yinimigo2[i]&&yinimigo2[i]+5>0&&yinimigo2[i]+5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
            }
        }
    }
//##################################

//Colisao Personagem inimigo 3
    if(quantidadeinimigos3>0)
    {
        for(i=0; i<quantidadeinimigos3; i++)
        {
            if(pis==1&&xi+4<=xinimigo3[i]+5&&xi+largura_personagem-4>=xinimigo3[i]&&yi+largura_personagem>=yinimigo3[i]&&yinimigo3[i]+5>0&&yinimigo3[i]+5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
            }
        }
    }
//##################################

//Colisao Personagem inimigo 4
    if(quantidadeinimigos4>0)
    {
        for(i=0; i<quantidadeinimigos4; i++)
        {
            if(pis==1&&xi+4<=xinimigo4[i]+5&&xi+largura_personagem-4>=xinimigo4[i]&&yi+largura_personagem>=yinimigo4[i]&&yinimigo4[i]+5>0&&yinimigo4[i]+5>=yi)
            {
                xi=50-largura_personagem/2;
                yi=0;
                caux=cont;
                pis*=-1;
                vidas--;
                if(maxtiros>2)
                    maxtiros--;
                powerup=0;
            }
        }
    }
//##################################

//Colisao Personagem Boss
    if(bos==1)
    {
        if(pis==1&&xi+4<=xb+largura_boss&&xi+largura_personagem-4>=xb&&yi+largura_personagem>=yb&&yb+largura_boss>0&&yb+largura_boss>=yi)
        {
            xi=50-largura_personagem/2;
            yi=0;
            caux=cont;
            pis*=-1;
            vidas--;
            if(maxtiros>2)
                maxtiros--;
            powerup=0;
        }
    }
  if(rageon==1&&pause==1&&gameover==0&&title==0){
   if(quantidadeinimigos4>0)
    {
        for(i=0; i<quantidadeinimigos4; i++)
        {
            if(xi-10<=xinimigo4[i]+5&&xi+largura_personagem+10>=xinimigo4[i]&&yi<=yinimigo4[i]){
            quantidadeinimigos4--;
                for(s=i; s<quantidadeinimigos4; s++)
                {
                    yinimigo4[s]=yinimigo4[s+1];
                    xinimigo4[s]=xinimigo4[s+1];
                }}
        }
    }
    if(quantidadeinimigos3>0)
    {
        for(i=0; i<quantidadeinimigos3; i++)
        {
            if(xi-10<=xinimigo3[i]+5&&xi+largura_personagem+10>=xinimigo3[i]&&yi<=yinimigo3[i]){
            quantidadeinimigos3--;
                for(s=i; s<quantidadeinimigos3; s++)
                {
                    yinimigo3[s]=yinimigo3[s+1];
                    xinimigo3[s]=xinimigo3[s+1];
                }}
        }
    }
    if(quantidadeinimigos2>0){
            for(i=0; i<quantidadeinimigos2; i++)
        {
            if(xi-6<=xinimigo2[i]+5&&xi+largura_personagem+6>=xinimigo2[i]&&yi<=yinimigo2[i]){
                quantidadeinimigos2--;
                for(s=i; s<quantidadeinimigos2; s++)
                {
                    yinimigo2[s]=yinimigo2[s+1];
                    xinimigo2[s]=xinimigo2[s+1];
                    sentidoinimigo2[s]=sentidoinimigo2[s+1];
                }}}}

    if(quantidadeinimigos1>0){
            for(i=0; i<quantidadeinimigos1; i++)
        {
            if(xi-6<=xinimigo1[i]+5&&xi+largura_personagem+6>=xinimigo1[i]&&yi<=yinimigo1[i]){
                quantidadeinimigos1--;
                for(s=i; s<quantidadeinimigos2; s++)
                {
                    yinimigo1[s]=yinimigo1[s+1];
                    xinimigo1[s]=xinimigo1[s+1];
                    sentidoinimigo1[s]=sentidoinimigo1[s+1];
                }}}}

    if(tiroinimigo4>0)
    {
        for(i=0; i<tiroinimigo4; i++)
        {
            if(xi-10<=xtinimigo4[i]+5&&xi+largura_personagem+10>=xtinimigo4[i]&&yi<=xprojinimigo4[i]){
            tiroinimigo4--;
            for(j=i; j<tiroinimigo4; j++)
            {
                    xprojinimigo4[j]=xprojinimigo4[j+1];
                    xtinimigo4[j]=xtinimigo4[j+1];
                    kprojinimigo4[j]=kprojinimigo4[j+1];
            }

            }
        }}
         if(tiroinimigo3>0)
    {
        for(i=0; i<tiroinimigo3; i++)
        {
            if(xi-10<=xtinimigo3[i]+5&&xi+largura_personagem+10>=xtinimigo3[i]&&yi<=xprojinimigo3[i]){
            tiroinimigo3--;
            for(j=i; j<tiroinimigo3; j++)
            {
                    xprojinimigo3[j]=xprojinimigo3[j+1];
                    xtinimigo3[j]=xtinimigo3[j+1];
                    kprojinimigo4[j]=kprojinimigo3[j+1];
            }

            }
        }}

if(tiroinimigo2>0)
    {
        for(i=0; i<tiroinimigo2; i++)
        {
            if(xi-10<=xtinimigo2[i]+5&&xi+largura_personagem+10>=xtinimigo2[i]&&yi<=xprojinimigo2[i])
            {
                tiroinimigo2--;
                for(j=i; j<tiroinimigo2; j++)
                {
                    xprojinimigo2[j]=xprojinimigo2[j+1];
                    xtinimigo2[j]=xtinimigo2[j+1];
                }
            }
        }
    }

     if(tiroinimigo1>0)
    {
        for(i=0; i<tiroinimigo1; i++)
        {
            if(xi-10<=xtinimigo1[i]+5&&xi+largura_personagem+10>=xtinimigo1[i]&&yi<=xprojinimigo1[i])
            {
                tiroinimigo1--;
                for(j=i; j<tiroinimigo1; j++)
                {
                    xprojinimigo1[j]=xprojinimigo1[j+1];
                    xtinimigo1[j]=xtinimigo1[j+1];
                }
            }
        }
    }
    if(inimigos>0)
    {
        for(i=0; i<inimigos; i++)
        {
            if(xi-6<=x[i]+9&&xi+largura_personagem+6>=x[i]&&xo[i]+9>0&&yi<=xo[i])
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
    }
    if(bos==1)
    {
            if(xi-6<=xb+largura_boss&&xi+largura_personagem+6>=xb&&yi<=yb&&cont%5==0)
            {
                acerto++;
                if(acerto==hp_boss)
                {
                    px=0;
                    cheat=0;
                    PlaySound(NULL, 0, 0);
                    vida_aux=vidas;
                    carregar_variaveis();
                    vidas=vida_aux;
                    if(fase==2){
                        PlaySound(NULL,0,0);
                        opcao=1;
                        zerou=1;
                    }
                    if(fase==1){
                    fase=2;
                    facil=0;
                    hard=1;

                }
            }
        }
}
    if(vidas==0)
    {
        cheat=0;
        PlaySound(NULL, 0, 0);
        opcao=1;
        gameover=1;
    }
}
}

