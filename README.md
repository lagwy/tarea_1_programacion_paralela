# tarea_1_programacion_paralela

## Student information
- **Name**: Luis Angel Martinez
- **ID**: A00813485

## Project description
This is a project contains two C program files.
- `test_omp.c` contains a simple program that prints the thread number for all available threads. This program verifies that OpenMP is working correctly (instead of using the code with `_OPENMP`).
- `array_sum.c` contains a program that sums two arrays using OpenMP.

## How to build project
> Make sure Docker is installed and that you are executing these commands in `tarea_1_programacion_paralela` directory.
```bash
docker build -t tarea1 . 
```

```bash
# Execute test_omp.c
docker run --rm tarea1 ./test_omp

# Execute array_sum.c
docker run --rm tarea1 ./array_sum
```
