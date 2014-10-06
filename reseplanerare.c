#include <stdio.h>
#include <stdlib.h>
//#include <nätverk.txt>
//#include <start.txt>


typedef struct node {

  char statName;
  struct adjlist station;
} Node;


typedef struct adjList {


  struct node adjStationr3;


} AdjList;
  


typedef struct tuple {
  int linje;
  char stationA;
  char stationB;
  int  tid;
} Tuple;

typedef struct edgedata {

  unsigned short travel_time;
  unsigned short bus_line;

} edgeData;




 


Node createNode(char* stationName) {
  
  Node *newNode = malloc(sizeof(Node));
  
  newNode->statName = *stationName;
  return *newNode;

}




unsigned short getWeightFromEdgeData(void *d) {

  return ((struct edgedata*) d) -> travel_time;

}





















// Koppla samman två noder med data till den skapade bågen





int main(int argc, char* argv[]) {




}




