PShape gundam;
void setup(){
   size(500,500,P3D);
   gundam=loadShape("Gundam.obj");
}
void draw(){
  background(128);
  
  translate(250,500);//往右
  scale(20,-20,20); //放大20倍
  rotateY(radians(frameCount));
  shape(gundam);
}
