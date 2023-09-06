#!/usr/bin/env python3
""" Factor numbers """

from sys import argv
from math import sqrt


def open_read_file(file_name):
    """read from file
    add to array
    """
    with open(file_name, "r", encoding="utf-8") as file:
        lines = file.readlines()
        number_to_factor = []
        for line in lines:
            number_to_factor.append(int(line))
        return number_to_factor


def find_and_times(n):
    """find and print the factors of n"""
    i = 2
    while i <= sqrt(n):
        if n % i == 0:
            print("{}={}*{}".format(n, i, n//i))
            return
        i += 1
    print("{}={}*{}".format(n, n, 1))


def fac_list(ls):
    """factor each
    num in ls
    """
    for i in ls:
        find_and_times(i)


if len(argv) == 2:
    fac_list(open_read_file(argv[1]))
