//! Variable externa 'i'

extern int i; //Se externaliza y solo se declara mas no inicializa.

void foo (void){
    //! extern int i // también puede colocarse aqui ya que no se usa en otro sitio
    i = 100;
}
