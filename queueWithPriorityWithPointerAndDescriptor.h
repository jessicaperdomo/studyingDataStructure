struct TpQueue{
	int priority;
	int elem;
	TpQueue *ant,*prox;
};

struct Descriptor{
	TpQueue *start,*end;
};

void init(Descriptor &desc){
	desc.start = NULL;
	desc.end = NULL;
}

char queueIsEmpty(Descriptor desc){
	if(desc.start == NULL)
		return 1;
	else
		return 0;
}

void push(Descriptor &desc, int e, int p){
	TpQueue *NewQ = new TpQueue();
	NewQ->elem=e;
	NewQ->priority=p;
	NewQ->prox=NULL;
	NewQ->ant=NULL;
	
	if(queueIsEmpty()==1){
		desc.start=NewQ;
		desc.end=NewQ;
	}
	else{
		
		
		if(NewQ->priority <= desc.start->priority){
			NewQ->prox=desc.start;
			desc.start=NewQ;
		}
		else{
			if(NewQ->priority > desc.end){
				desc.end->prox=NewQ;
				NewQ->ant=desc.end;
				desc.end=NewQ;
			}
			else{
				TpQueue *aux=desc.start;
				
				while(aux->prox != NULL && NewQ->priority > aux->priority){
					aux=aux->prox;
				}
				
				NewQ->prox=aux;
				NewQ->ant=aux->ant;
				aux->ant->prox=NewQ;
				aux->ant=NewQ;
			}
		}
		
	}
}
