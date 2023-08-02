@echo off

if "%1" == "lc" g++ .\.leetcode.cpp -o .test
if "%1" == "lg" g++ .\.luogu.cpp -o .test
if "%1" == "nc" g++ .\.nowcoder.cpp -o .test
if "%1" == "aw" g++ .\.acwing.cpp -o .test
if "%1" == "pta" g++ .\.pintia.cpp -o .test

start .test