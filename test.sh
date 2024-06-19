#!/bin/bash

read x
read y
read z

if [[ $x -eq $y && $y -eq $z ]]; then
    echo "EQUILATERAL"
elif [[ $x -ne $y && $y -ne $z && $x -ne $z ]]; then
    echo "SCALENE"
elif [[ $x -ne $y && $x -eq $z ]]; then
    echo "ISOSCELES"
elif [[ $x -eq $y && $y -ne $z ]]; then
    echo "ISOSCELES"
fi

