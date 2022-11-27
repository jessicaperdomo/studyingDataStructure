struct TpQueue{
	int elem;
	TpQueue *before,*next;
};

struct Descriptor{
	TpQueue *start,*end;
};

void init(Descriptor &desc){
	desc.start=NULL;
	desc.end=NULL;
}

char isEmpty(Descriptor &desc){
	if(desc.start == NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void push(int e, Descriptor &desc){
	TpQueue *NC = new TpQueue();
	NC->elem = e;
	NC->next = NULL;
	NC->before = NULL;
	
	if(isEmpty(desc.start)){
		desc.start=NC;
		desc.end=NC;
	}
	else{
		NC->next=desc.start;
		desc.start->before=NC;
		desc.start=NC;
	}
}

void pop(Descriptor &desc){
	TpQueue *aux=desc.end;
	
	if(aux->next == NULL){
		delete(aux);
		desc.start = NULL;
		desc.end = NULL;
	}
	else{
		aux->before->next=NULL;
		desc.end = aux->before; 
		delete(aux);
	}
}
