# Push_Swap 1337/42 school project

**Push_Swap*** is a simple project, the objective of it is to sort a stack of integers in a short amount of moves or (actions).
you have in the begining two stacks , **STACK A** is the list of integers, **STACK B** is an empty stack, **STACK B** will help us sort **STACK A** using theses actions :

> *******Swap stack a (sa)<br>
> Swap stack b (sb)<br>
> Swap stack a and b (ss)<br>
> Rotate stack a (ra)<br>
> Rotate stack b (rb)<br>
> Rotate stack a and b (rr)<br>
> Rotate reverse stack a (rra)<br>
> Rotate reverse stack b (rrb)<br>
> Rotate reverse stack a and b (rrr)<br>
> Push to stack a (pa)<br>
> Push to stack b (pb)<br>*******

## Error management

### First of all, for a better error managing, you have to parse your project perfectly, because the integers's input is an argument, so there could be so many numbers in one argument, so you need to split them by space.
### second, you have to protect all of your actions (sa, ra, rb...), because in the bonus part when testing the actions. the corrector may push a number from an empty stack, it will give you a segmentaion fault...
### third, the sack mustn't have any duplication (repeated number), 

## Usage of the code

```
git clone https://github.com/junik1337/42cursus_Push_swap.git
cd 42cursus_push_swap
```
> For mandatory part
```
make
./push_swap "list of integers"
```
