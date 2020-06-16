//En c
//Se usó Recuperar(p,Lista) y Fin(Lista), tomando en cuenta que Fin(Lista) entrega la posición n+1, 
//siendo n+1 el Largo de la Lista (Si hay 3 elementos en una lista, la ultima posición [n] es 2, ya que [ 0, 1, 2], entonces n+1 es 3)

float promedio(Lista *L){
  int auxiliar;
  int i;
  float suma=0;
  float promedio;
  
  for(i=0; i<Fin(L);i++){
    auxiliar= Recuperar(i, L);
    suma= suma+auxiliar;
  }
  
  promedio= (suma/Fin(L));
      
  return promedio;

}
