all:
  gcc main.c clz.c endian.c rotate.c Parity.c -o main
clean:
  rm -f main 
