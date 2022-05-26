PImage img;
void setup(){
  size(500,300);
  img=loadImage("kaws.png");
}
void draw(){
  image(img,mouseX,mouseY);
}
