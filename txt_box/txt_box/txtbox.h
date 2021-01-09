/*
  _____      _____ _
 |_   _|_  _|_   _| |__   _____  __
   | | \ \/ / | | | '_ \ / _ \ \/ /
   | |  >  <  | | | |_) | (_) >  <
   |_| /_/\_\ |_| |_.__/ \___/_/\_\

   A simple ASCII-like game engine made by C/C++.

   repository: https://github.com/rupplez/TxTbox
*/

#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

using namespace std;

void displaySetSize();
void clearDisplay();
void moveCur(int x, int y);
void wait(int millisec);
void printText(string str);