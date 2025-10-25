from manim import *


class intro(Scene):
    def construct(self):
        t1=Text("Rishabh ")
        t2= Text("Rathore")
        t3 = Text(" Manim Trial ")

        t2.next_to(t1,RIGHT)
        t3.next_to(t2,RIGHT)

        group = VGroup(t1,t2,t3)

        group.move_to(ORIGIN)

        self.play(Write(t1))
        self.wait()
        self.play(Write(t2))
        self.wait()
        self.play(Write(t3))


        fb1 =  SurroundingRectangle(t1,buff = 0.1)
        fb2 =  SurroundingRectangle(t2,buff = 0.1 ) 
        fb3 =  SurroundingRectangle(t3,buff = 0.1 ) 
        

        self.play(Create(fb1))

        self.wait()
        self.play(

        self.wait()
        
        self.play(
            ReplacementTransform(fb2, fb3)
        )

        self.wait()
