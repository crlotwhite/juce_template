#include "MainComponent.h"

namespace UI::Main
{
    MainComponent::MainComponent()
    {
        setSize(800, 600);
    }

    MainComponent::~MainComponent()
    {
    }

    void MainComponent::paint(juce::Graphics& g)
    {
        g.fillAll(juce::Colours::black);
        g.setColour(juce::Colours::white);
        g.drawText("Hello World", getLocalBounds(), juce::Justification::centred, true);
    }

    void MainComponent::resized()
    {
    }
}
