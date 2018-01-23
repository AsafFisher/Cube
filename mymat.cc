#include "led-matrix.h"
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <signal.h>

using rgb_matrix::GPIO;
using rgb_matrix::RGBMatrix;
using rgb_matrix::Canvas;
volatile bool interrupt = false;
static void InterruptHandler(int signo){

}
static void Draw(Canvas *canvas){


}

int main(){
}

