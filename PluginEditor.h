/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "FilmstripMeter.h"
#include "Images.h"

//==============================================================================
/**
*/
class FilmstripMeterAudioProcessorEditor  : public AudioProcessorEditor, public Timer
{
public:
    FilmstripMeterAudioProcessorEditor (FilmstripMeterAudioProcessor&);
    ~FilmstripMeterAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
	void timerCallback();

private:

	FilmstripMeter *meter;
	Image meterImage;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FilmstripMeterAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FilmstripMeterAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
