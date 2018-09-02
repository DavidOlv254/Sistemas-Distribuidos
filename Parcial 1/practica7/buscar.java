public class buscar{
 public static void main(String[] args){
  String cadena="";
  String abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ ";//26 LETRAS
  String sub="IPN";
  int data=10000,i=0,cont=0;

  for(i=0;i<data;i++){
   cadena=cadena + abc.charAt((int)(Math.random()*100)%26)+abc.charAt((int)(Math.random()*100)%26)+abc.charAt((int)(Math.random()*100)%26)+" ";  
  }
  i=0;

  while(i<data){
   String[] aux=cadena.split(" ");
   if(aux[i].equals(sub)){
    cont+=1;
   }
   i+=1;
  }
  //System.out.println(cadena + "\n\n\n");
  System.out.println("Numero de veces encontrado: "+cont);
  }
}