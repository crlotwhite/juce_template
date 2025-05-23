#include "PluginEditor.h"

PluginEditor::PluginEditor(PluginProcessor& p)
    : AudioProcessorEditor(&p)
    , pluginProcessor(p)
{
    inspector.setVisible(true);
    inspector.toggle(true);

    // Component initialize
    mainComponent = std::make_unique<UI::Main::MainComponent>();
    addAndMakeVisible(mainComponent.get());

    setSize(800, 600);
    setResizable(true, true);

    setWantsKeyboardFocus(true);
}

PluginEditor::~PluginEditor()
{
}

void PluginEditor::paint(juce::Graphics& g)
{
}

void PluginEditor::resized()
{
}
