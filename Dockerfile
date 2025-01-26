FROM gcc:latest

RUN apt-get update && apt-get install -y libomp-dev

COPY . /app/

 WORKDIR /app

 RUN gcc -fopenmp test_omp.c -o test_omp
 RUN gcc -fopenmp array_sum.c -o array_sum

 CMD ["bash"]