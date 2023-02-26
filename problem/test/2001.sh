#!/bin/bash



for i in {1..50}
do

	echo $i

	gcc /home/playlinks/github/euleroj/problem/stone/2001_answer.c

	echo $(/home/playlinks/github/euleroj/problem/test/a.out << EOF
$i
EOF
)
	gcc /home/playlinks/github/euleroj/problem/stone/2001.c
	
	echo $(/home/playlinks/github/euleroj/problem/test/a.out << EOF
$i
EOF
)
	echo $result
done;
