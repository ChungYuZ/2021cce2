void setup(){//只做一次
 size(300,300);
 fill(#FAE330);
 textSize(50);
 textAlign(CENTER,CENTER);
}
void draw(){//60次
  background(#962FBC);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  int choice=mouseX % 3;
  if(choice==0)rect(0,40,50,50);
  if(choice==1)rect(0,135,50,50);
  if(choice==2)rect(0,230,50,50);
}
