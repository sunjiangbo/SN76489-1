/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SN76489AudioProcessorEditor  : public gin::GinAudioProcessorEditor
{
public:
    SN76489AudioProcessorEditor (SN76489AudioProcessor&);
    ~SN76489AudioProcessorEditor();

    //==============================================================================
    void resized() override;
    void paint (Graphics& g) override;

    SN76489AudioProcessor& processor;
    
    drow::TriggeredScope scope;
    Image logo;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SN76489AudioProcessorEditor)
};
