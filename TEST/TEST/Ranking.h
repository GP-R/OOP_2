#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#define MAX_RANK 5
struct PlayInfo {
	char name[80];
	int nMove;
	double tElapsed;
};

struct Rank {
	void loadRanking(PlayInfo player[], int len, const char *filename);
	void storeRanking(PlayInfo player[], int len, const char *filename);
	void printRanking(PlayInfo player[], int len);
	int addRanking(PlayInfo player[], int len, int nmove, double elapsed);
	void initRanking(PlayInfo player[], int len);
};

class Rank {

public:
	void loadRanking(PlayInfo player[], int len, const char *filename);
	void storeRanking(PlayInfo player[], int len, const char *filename);
	void printRanking(PlayInfo player[], int len);
	void initRanking(PlayInfo player[], int len);
};

class Player : Rank {
	char name[80];
	int nMove;
	double tElapsed;
public:
	int addRanking(PlayInfo player[], int len, int nmove, double elapsed);
};