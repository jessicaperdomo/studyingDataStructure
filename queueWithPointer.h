struct TpQueue{
	int elem;
	TpQueue *prox;
};

struct Descriptor{
	TpQueue *start;
	TpQueue *end;
};

void init(Descriptor &desc){
	desc.start = NULL;
	desc.end = NULL;
}

char isQueueNull(Descriptor desc){
    if(desc.start==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int elementFromStart(Descriptor desc){
	return desc.end->elem;
}

void push(int e, Descriptor &desc){
     TpQueue *NC = new TpQueue();
     NC -> elem = e;
     NC -> prox = NULL;
     
     if(desc.start == NULL){
     	desc.start=NC;
     	desc.end=NC;
     }
     else{
     	NC->prox = desc.start;
		desc.start = NC;
     }
}

void pop(Descriptor &desc){
     TpQueue *NC=desc.start;
     
     if(desc.start == desc.end){
     	delete(NC);
     	desc.start=NULL;
     	desc.end=NULL;
     }
     else{
     	TpQueue *ant=NC;
     	
	     while(NC->prox!=NULL){
	     	ant=NC;
	     	NC=NC->prox;	
	     }
	     
	     desc.end=ant;
	     ant->prox=NULL;
	     delete(NC);
     }
}
