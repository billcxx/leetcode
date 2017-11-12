docker build -t leetcode:1.0 .
docker run --name=gcc -dt -v ${PWD}:/root leetcode:1.0 /bin/bash