/** Remember that a stack make the insertion and remove of the top **/

struct TpStack{
    int elem;
    TpStack *top;
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
     TpStack *NC = new TpStack();
     NC -> elem = e;
     NC -> top = p;
     return NC;
}

TpStack *p pop(TpStack *p){
     TpStack *NC = p->top;
	 delete(p);
     return NC;
}
