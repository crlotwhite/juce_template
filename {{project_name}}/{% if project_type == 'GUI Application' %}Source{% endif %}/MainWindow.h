#pragma once

#include <juce_gui_basics/juce_gui_basics.h>
#include <UI/Main/MainComponent.h>

class MainWindow : public juce::DocumentWindow
{
public:
    MainWindow(juce::String);

    void closeButtonPressed() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainWindow)
};