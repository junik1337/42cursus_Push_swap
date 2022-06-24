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

### - First of all, for a better error managing, you have to parse your project perfectly, because the integers's input is an argument, so there could be so many numbers in one argument, so you need to split them by space.
### - second, you have to protect all of your actions (sa, ra, rb...), because in the bonus part when testing the actions. the corrector may push a number from an empty stack, it will give you a segmentaion fault...
### - third, the sack mustn't have any duplication (repeated number), or numbers that doesn't belong to integers (upper than 2147483647, or lower than -2147483648).

## Tester for the project
- In this repository you will a file named **"script.sh"**, it is a tester for the project.
>> How to use it 
```
./script.sh "number of integers" "maximum actions"
```

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
>> The mandatory output will the actions used to sort the stack.

> For bonus part
```
cd bonus/
make bonus
./checker "list of integers"
```
>> The bonus part, you gave to entre a list of integers, and give them the actions you need, if the actions are valid the will will be sortec and the checker will outpu "OK", else the tester will output "KO".

![Made with c](https://forthebadge.com/images/badges/made-with-c.svg)
![Languages](https://img.shields.io/github/languages/count/junik1337/42cursus_push_swap?style=for-the-badge)
![Followers](https://img.shields.io/github/followers/junik1337?style=for-the-badge)
![Code size](https://img.shields.io/github/languages/code-size/junik1337/42cursus_Push_swap?style=for-the-badge)
![Time](https://img.shields.io/date/1656066073?style=for-the-badge)
