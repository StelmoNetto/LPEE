#include<stdio.h>
#include<stdint.h>

int main()
{
    union 
    {
        uint16_t cor;
        
        struct
        {
            uint16_t r: 4;
            uint16_t g: 4;
            uint16_t b: 4;
        } canal;
    } sensorDeCor;

    sensorDeCor.cor = 152; //Leitura do sensor: 0b0000'0000'1001'1000

    printf("Canais RGB = {%hd,%hd,%hd}\n", sensorDeCor.canal.r,sensorDeCor.canal.g,sensorDeCor.canal.b);
}