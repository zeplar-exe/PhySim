//
// Created by zande on 1/6/2023.
//

#include "../h/StepResult.h"

void StepResult_error(struct StepResult* result, char* error) {
    result->errors[result->errorCount++] = error;
}