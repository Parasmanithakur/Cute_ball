# Cute_ball
La –Code-A-Challenge
                                            -Parasmani

Q1.CuteBall

![](https://github.com/Parasmanithakur/Cute_ball/blob/main/Untitled.jpg)
{A,B,C,D} =holes
{1,2….8} –playing balls
W –white ball




Shane Wighton  loves to play pool .He is playing a version in which he has to put all the 8 balls in pockets but there is a catch .Every time he takes a shot he has to apply a force on the cue , but he is very lazy. He does not want to put more than “X” units of cumulative force .
The cue stick transfers all the force to the white ball without any loss of force.
A shot can have a “Y” unit of forces which will move the ball in floor(Y*2) units in the table in the direction of force .Where Y is a floating number <=X

A ball can move in 8 directions , if a ball hits another one, latter moves in the same direction as previous one ,but the previous stops at that position .The total distance travelled by the balls cannot be more than floor(Y*2)
The balls can bounces from the edges if have enough force left, the ball after hitting a edge will deflect in opposite direction of its motion
No two balls can be at same location





Input 
  1st line T- test cases , 1<=T<=20,
2nd line N,M –pool size (N*M) 1<=N<=M<=20
3rd  line Array of pairs of size 9 ,A[0]=x,y position of white ball ,A[i]= x,y position of ith ball  ,0<=x<=N, 0<=y<=M,
4th  line X- Amount of force 8<=X<=5005

Output
 1.The least amount of shots in which you can put all the balls in pocket but no numbered balls can hit each other
2.A The least amount of shots,Now if balls can hit each other . if 1<=N<=M<=5
 2.B Original constraints.
   
Foot notes-
1.  Question is inspired by StuffMadeHere 
2. QuestionTags -ImplicitGraph.
3.For more contact - parasmani.thakur321@gmail.com


