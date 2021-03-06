#pragma once
#include "ManagedObject.h"
#include "Core.h"

using namespace System;

namespace CLIWrapper
{
    // See this docs
    // https://docs.microsoft.com/en-us/cpp/build/walkthrough-creating-and-using-a-dynamic-link-library-cpp
    public ref class Entity : public ManagedObject<core::Entity>
    {
    public:

        // Constructor
        // String^ -> indicates that the lifetime of a string object is to be managed automatically [handle-to-object (^) modifier].
        Entity(String^ name, float xPos, float yPos);

        void Move(float deltaX, float deltaY);

        // X Position 
        property float XPosition
        {
        public:
            float get() { return m_Instance->GetXPosition(); }

        private:
            void set(float value) {}
        }

        // Y Position
        property float YPosition
        {
        public:
            float get() { return m_Instance->GetYPosition(); }

        private:
            void set(float value) {}
        }
    };
}