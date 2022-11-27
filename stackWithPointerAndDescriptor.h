/** Remember that a stack make the insertion and remove of the top **/

struct TpStack{
    int elem;
    TpStack *prox;
};

struct Descriptor{
    TpStack *start;
};

void init(Descriptor &desc){
    desc.start=NULL;
}

char isStackNull(Descriptor desc){
    if(desc.start==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int e, Descriptor &desc){
     TpStack *NC = new TpStack();
     NC -> elem = e;
     NC -> prox = desc.start;
     desc.start = NC;
     return NC;
}

void pop(Descriptor &desc){
     TpStack *NC = desc.start;
     desc.start = NC->prox;
	 delete(NC);
}
