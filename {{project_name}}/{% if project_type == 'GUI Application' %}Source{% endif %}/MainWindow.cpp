#include "MainWindow.h"

MainWindow::MainWindow(juce::String name)
    : DocumentWindow(name,
                     juce::Desktop::getInstance()
                        .getDefaultLookAndFeel()
                        .findColour(juce::ResizableWindow::backgroundColourId),
                     DocumentWindow::allButtons)
{
    setUsingNativeTitleBar(true);
    setContentOwned(new UI::Main::MainComponent(), true);

    #if JUCE_IOS || JUCE_ANDROID
    setFullScreen(true);
    #else
    setResizable(true, true);
    centreWithSize(getWidth(), getHeight());
    #endif

    setVisible(true);
}

void MainWindow::closeButtonPressed()
{
    juce::JUCEApplication::getInstance()->systemRequestedQuit();
}