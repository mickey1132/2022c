void setup(){
  size(400,400);
}
void draw(){
  background(#FFFFF2);
  for(int i=0; i<24; i++){
    if(i==0) fill(#03F4FF);
    else if(i%3==0) fill(0,0,0);
    else if(i%3==1) fill(#03FF3B);
    else fill(255,255,255);
    float a = radians(360/24);
    arc(200, 200, 300, 300, a*i+dx, a*i+a+dx, PIE);
  }
  dx-=v;
  v=v*0.95;
}
float oldX=0,dx=0,v=0;
void mousePressed()
  {
    oldX=mouseX;
  }
void mouseDragged()
  {
    dx=radians(mouseX-oldX);
  }
void mouseReleased()
  {
    v=radians(mouseX-oldX);
  }
