# finding-rank

Your second task is still based on the same setting. In CS141, there are 𝑛 students. In the online system, we have the final exam score for everyone. Your task is to write a program to help answer the query below: given a score 𝑠, please output the rank of the corresponding score. The rank of a score 𝑠 is one plus the number of scores in class that is strictly larger than 𝑠. Note that there may be tie (multiple student may have the same score), so they all have the same rank.

For example, if the scores of all students are:

97, 85, 99, 52, 85, 92, 85

Then, if 𝑠=97, then you should output 2, because 97 points should be the 2nd in class. If 𝑠=85, you should output 4. Note that there are three students who have 85 points. They all tie for the 4th place.

Your program needs to answer a series of 𝑚 such queries.

Input
The first line is a single integer 𝑛 (1≤𝑛≤1000). In the next line, there are 𝑛 integers, which are the scores of the 𝑛 students. All the scores are between 0 to 106.

In the third line, there is an integer 𝑚 (1≤𝑚≤105), which is the number of queries you need to answer. In the next 𝑚 lines, each line contains a value 𝑠𝑖 𝑖=1..𝑚, which is the value of 𝑠 (the score) of such a query.

Output
There should be 𝑚 lines in the output. The 𝑖-th line contains the answer for the 𝑖-th query, which is the rank of the score 𝑠𝑖.
