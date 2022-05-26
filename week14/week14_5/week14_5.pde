PImage img,img2;
void setup(){
   size(1000,1000);
   img=loadImage("00.png");
   img2=loadImage("10.png");
}
int dy=0;
void draw(){
   background(255);
   imageMode(CENTER);
   image(img,mouseX,mouseY);
   if(mousePressed){
      image(img2,mouseX,mouseY-dy);
      dy++;
   }
}
