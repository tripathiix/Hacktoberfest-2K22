import pygame,random
pygame.init()

window=pygame.display.set_mode((500,600))

pygame.display.set_caption("Snow Falling")

list=[]
for i in range(1000):
    x=random.randrange(0,500)
    y=random.randrange(0,500)

    list.append([x,y])

while True:
    for i in pygame.event.get():
        if i.type==pygame.QUIT:
            pygame.quit()
    window.fill((0,0,0))
    for i in range(len(list)):
        pygame.draw.circle(window,(255,255,255),list[i],2)
        list[i][1]+=1
        if list[i][1]>=500:
            y= random.randrange(-50,-10)
            x=random.randrange(0,500)
            list[i][0]=x
            list[i][1]=y

    pygame.time.delay(3)
    pygame.display.update()
