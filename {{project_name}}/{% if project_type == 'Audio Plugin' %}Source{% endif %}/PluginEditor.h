#pragma once

#include <memory>
#include <juce_audio_processors/juce_audio_processors.h>
#include <melatonin_inspector/melatonin_inspector.h>
#include <UI/Main/MainComponent.h>
#include "PluginProcessor.h"


class PluginEditor : public juce::AudioProcessorEditor
{
public:
    PluginEditor (PluginProcessor&);
    ~PluginEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    PluginProcessor& pluginProcessor;
    melatonin::Inspector inspector { *this, false };

    // Components
    std::unique_ptr<UI::Main::MainComponent> mainComponent;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PluginEditor)
};
