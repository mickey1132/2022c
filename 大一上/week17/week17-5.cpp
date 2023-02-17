  size(400,400);
  img=loadImage("image.png");
  img2=loadImage("astro.png");
  imgBG=loadImage("BG.jpg");
}
void draw()
{
  imageMode(CENTER);
  image(imgBG,200,200,400,400);
  image(img2,100,100);
  image(img,mouseX,mouseY,100,100);
}
