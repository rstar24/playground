#!/bin/bash

# Make a expression var
read expression
printf %.3f $(echo $expression | bc -l)
