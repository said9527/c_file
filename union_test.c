#include <stdio.h>

typedef union {
    int int_value;
    float float_value;
    char* string_value;
} DataValue; 

typedef enum {
    INT,
    FLOAT,
    STRING
} DataType;

typedef struct {
    DataType type;
    DataValue value;
} Data;

void printData(Data* typed_data);

int main() {
    Data data1 = {INT, {.int_value = 521}};

    printData(&data1);

    return 0;
}

void printData(Data* typed_data) {
    switch (typed_data->type) {
        case INT:
            printf("Integer: %d\n", typed_data->value.int_value);
            break;
        case FLOAT:
            printf("FLOAT: %f\n", typed_data->value.float_value);
            break;
        case STRING:
            printf("STRING:%s\n", typed_data->value.string_value);
            break;
        default:
            printf("Unknown type\n");
    }
};