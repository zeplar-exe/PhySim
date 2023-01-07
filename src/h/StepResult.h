#ifndef PHYSISIM_STEPRESULT_H
#define PHYSISIM_STEPRESULT_H

#endif //PHYSISIM_STEPRESULT_H

struct StepResult {
    char** errors;
    int errorCount;
};

void StepResult_error(struct StepResult* result, char* error);