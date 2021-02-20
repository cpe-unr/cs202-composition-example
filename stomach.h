
#ifndef CODE_STOMACH_H
#define CODE_STOMACH_H
class Stomach {
    bool functioning = true;
public:
    Stomach();

    ~Stomach();

    bool statusCheck() const;
    void gotHit();

};
#endif //CODE_STOMACH_H
