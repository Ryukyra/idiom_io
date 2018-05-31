#ifndef RESULTCHECKER_H
#define RESULTCHECKER_H
#include <QTextStream>

class ResultChecker {

public:
    ResultChecker();
    virtual void printCheck() = 0;
    virtual ~ResultChecker();
protected:
    int iterator;
};

class TranslationChecker : public ResultChecker {
public:
    TranslationChecker();
    void printCheck() override {
        QTextStream(stdout) << "Translation Checked";
    }
private:
    int result_index;
    int task_type;
};

class MultipleChoiceChecker : public ResultChecker {
public:
    MultipleChoiceChecker();
    void printCheck() override {
        QTextStream(stdout) << "Multiple Choice Checked";
    }
};

class GapFillChecker : public ResultChecker {
public:
    GapFillChecker();
    void printCheck() override {
        QTextStream(stdout) << "Gap Fill Checked";
    }
};

class PairChecker : public ResultChecker {
public:
    PairChecker();
    void printCheck() override {
        QTextStream(stdout) << "Pair Checked";
    }
};

class CheckerFactory {
public:
    static ResultChecker * makeChecker(int j) {
        if (j == 0)
            return new TranslationChecker();
        if (j == 1)
            return new MultipleChoiceChecker();
        if (j == 2)
            return new GapFillChecker();
        if (j == 3)
            return new PairChecker();
    }
};

#endif // RESULTCHECKER_H
