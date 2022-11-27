/**Remember that Queue make the insertion in the beginning and remove of the end**/

struct TpQueue{
	int elem;
	TpQueue *prox;
};

TpQueue* init(TpQueue *f){
	return NULL;
}

char isQueueEmpty(TpQueue *f){
    if(f==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int elementFromStart(TpQueue *f){
	TpQueue *aux=f;
	while(aux->prox!=NULL){
		aux=aux->prox;
	}
	return aux->elem;
}

TpQueue* push(int e, TpQueue *f){
     TpQueue *NC = new TpQueue();
     NC -> elem = e;
     NC -> prox = NULL;
     
     if(f == NULL){
     	return NC;
     }
     else{
     	NC->prox = f;
		return NC;
     }
}

TpQueue* pop(TpQueue *f){
     
     if(f->prox == NULL){
     	delete(f);
     	return NULL;
     }
     else{
	 	TpQueue *NewC=f,*before=f;
     	
	     while(NewC->prox!=NULL){
	     	ant=NewC;
	     	NewC=NewC->prox;	
	     }
	     
	     delete(NewC);
	     before->prox=NULL;
	     return f;
     }
}
