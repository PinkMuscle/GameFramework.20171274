#ifndef GameObject_h
#define GameObject_h
#include <SDL.h>
#include <string>

class LoaderParams;

class GameObject
{
public:
    virtual void Draw() = 0;
    virtual void Update() = 0;
    virtual void Clean() = 0;
protected:
    GameObject(const LoaderParams* pParams) {}
    virtual ~GameObject() {}
};
#endif