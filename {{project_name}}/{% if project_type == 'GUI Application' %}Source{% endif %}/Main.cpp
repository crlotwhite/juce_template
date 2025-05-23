#include <memory>
#include <juce_gui_basics/juce_gui_basics.h>
#include "MainWindow.h"

class Application : public juce::JUCEApplication
{
public:
    Application() {}

    const juce::String getApplicationName() override       { return PROJECT_NAME; }
    const juce::String getApplicationVersion() override    { return PROJECT_VERSION; }
    bool moreThanOneInstanceAllowed() override             { return true; }

    void initialise(const juce::String& commandLine) override
    {
        mainWindow.reset (new MainWindow(getApplicationName()));
    }

    void shutdown() override
    {
        mainWindow = nullptr; // (deletes our window)
    }

    void systemRequestedQuit() override
    {
        quit();
    }

    void anotherInstanceStarted(const juce::String& commandLine) override
    {
    }

private:
    std::unique_ptr<MainWindow> mainWindow;
};

START_JUCE_APPLICATION(Application)
