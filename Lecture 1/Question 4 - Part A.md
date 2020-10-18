## Question 4 Part A

Keeping the rules into consideration of the Tower of Hanoi, the solution to this contraption is highly depends on the number of disks used to make the Tower.

#### The Case of 2 Disks
The contraption is simple to move and can be done in just 3 steps.

#### The Case of 3 Disks
The contraption is still relatively simple to move and can be done in just 7 steps.

#### The Case of 4 Disks
There’s little bit of repetitive cycle to follow the rules but this does not affect the number of steps but adds to the visual complexity of this puzzle. The contraption is solvable in 15 steps.

***

From what we can see, the Tower of Hanoi has a very fixed algorithmic progression on how the number of steps needed to solve the puzzle.

This can be denoted as:

> For “n” number of disks in our Tower, the number of moves needed to solve the puzzle are 
<p align = "center"><b><i> 2<sup>n</sup> – 1 </i></b></p>

In case of n = 4:

    2^(4) - 1
    = 16 - 1
    = 15 Steps

