void cria_ult(){
    int k=rand();
if(quant_rage==0&&k%349==0&&rage==0){
    x_ult=k%80+5;
    y_ult=100;
    quant_rage++;
}
if(quant_rage==1&&rage==0){
    y_ult-=.5;
desenha_ult(x_ult,y_ult);
}
if(xi<=x_ult+5&&xi+largura_personagem>=x_ult&&y_ult<=yi+largura_personagem&&y_ult+5>=yi){
rage++;
y_ult=110;
quant_rage=0;
}
if(y_ult+5<=0){
y_ult=110;
quant_rage=0;
}
}
