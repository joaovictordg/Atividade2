#ifndef tcircuito_h
#define tcircuito_h

typedef struct circuitos{
    float r1, r2, v1;
}tcircuito;

float serie(tcircuito c);
float par(tcircuito c);
float corrent(tcircuito c);
float pot(tcircuito c);

#endif
