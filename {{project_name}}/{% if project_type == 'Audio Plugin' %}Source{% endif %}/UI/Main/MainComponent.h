#pragma once

#include <juce_gui_basics/juce_gui_basics.h>

namespace UI::Main
{
    class MainComponent : public juce::Component
    {
    public:
        MainComponent();
        ~MainComponent() override;

        void paint(juce::Graphics&) override;
        void resized() override;

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
    };
}
