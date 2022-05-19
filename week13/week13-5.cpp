void setup(){//只做一次
 size(300,300);
 fill(#FAE330);
 textSize(50);
 textAlign(CENTER,CENTER);
}
int choice=-1;
void draw(){//60次
  background(#962FBC);
  text("Dinner 1",150,50);
  text("Dinner 2",150,150);
  text("Dinner 3",150,250);
  if(choice==0)ellipse(30,50,50,50);
  if(choice==1)ellipse(30,150,50,50);
  if(choice==2)ellipse(30,250,50,50);
}
void mousePressed(){
   choice=int(random(3));
}
