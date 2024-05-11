# push_swap

<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/push_swape.png" alt="Push_swap 42 project badge"/>
</p>

# Understanding Push_Swap

# Objective:
To introduce and explain the concept of the push_swap project, its purpose, and how it works.

# Introduction:
Push_swap is a 42 school project aimed at sorting a stack of integers using two stacks and a set of instructions. The goal is to sort the stack with the smallest number of operations possible.

# Key Components:

```Stacks```: The push_swap project revolves around two stacks, Stack A and Stack B. Initially, Stack A contains a random list of integers, while Stack B is empty.

```Instructions```: The project provides a set of instructions to manipulate the stacks. These instructions include pushing elements onto a stack, swapping elements, rotating elements, and reversing the order of elements.

```Sorting Algorithm```: The main challenge of push_swap is to devise an efficient algorithm to sort the integers in Stack A using the provided instructions while minimizing the number of operations.

# How Push_Swap Works:

```Initialization```: The program starts by receiving a list of integers as input and initializing Stack A with these integers.

```Sorting Algorithm```: The sorting algorithm implemented in push_swap analyzes the elements in Stack A and determines the optimal sequence of instructions to sort them. This algorithm aims to minimize the number of instructions required to achieve a sorted stack.

```Instruction Execution```: Once the sorting algorithm determines the sequence of instructions, push_swap executes these instructions to sort the stack. It applies the instructions to manipulate the elements in Stack A and Stack B until Stack A is sorted in ascending order.

```Output```: Finally, push_swap outputs the sequence of instructions used to sort the stack, along with any other relevant information such as the number of operations performed.

# Conclusion:
`Push_swap` is a challenging project that tests your understanding of sorting algorithms and data structures. By implementing an efficient sorting algorithm and optimizing the sequence of instructions, you can successfully sort a stack of integers using minimal operations.
## Usage

Git clone this repository and enter into it. Then use ```make``` to compile.

Then run it with :

```shell
./push_swap <numbers>
```

The numbers provided can be positive or negative integers. There must not be any duplicates. For example :

```shell
./push_swap 9 0 89 2147483647 -2147483648
```

If the arguments are valid, the program will output the most efficient list of actions to sort the list.

The program can be checked with the provided checker, like this :

```shell
ARG="4 1 8 3 -1"; ./push_swap $ARG | ./checker $ARG
```
## Push_Swap Rules

In this project, the program is restricted to utilizing only two stacks, referred to as Stack A and Stack B. Initially, all numbers are placed onto Stack A, while Stack B remains empty.

The available ```actions``` include:

- `pa` (push A): Move the top element from stack B to the top of stack A. This action is skipped if stack B is empty.
- `pb` (push B): Move the top element from stack A to the top of stack B. This action is skipped if stack A is empty.
- `sa` (swap A): Swap the positions of the first two elements at the top of stack A. This action has no effect if there is only one or no elements in stack A.
- `sb` (swap B): Swap the positions of the first two elements at the top of stack B. This action has no effect if there is only one or no elements in stack B.
- `ss`: Perform `sa` and `sb` simultaneously.
- `ra` (rotate A): Shift all elements of stack A upwards by one position. The first element becomes the last one.
- `rb` (rotate B): Shift all elements of stack B upwards by one position. The first element becomes the last one.
- `rr`: Perform `ra` and `rb` simultaneously.
- `rra` (reverse rotate A): Shift all elements of stack A downwards by one position. The last element becomes the first one.
- `rrb` (reverse rotate B): Shift all elements of stack B downwards by one position. The last element becomes the first one.
- `rrr`: Perform `rra` and `rrb` simultaneously.
