struct TpStack{
    int elem;
    TpPilha *topo;
};

TpStack* init(void){
    return NULL;
}

char isStackNull(TpStack *p){
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

TpStack *p push(int e, TpStack *p){
     TpPilha *NC = new TpPilha();
     NC -> elem = e;
     NC -> prox = p;
     return NC;
}

TpStack *p pop(TpStack *p){
     TpPilha *NC = p->prox;
	 delete(p);
     return NC;
}
