/*
  ==============================================================================

	This file was auto-generated and contains the startup code for a PIP.

  ==============================================================================
*/

#include <JuceHeader.h>
#include "PluginProcessor.cpp"

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
	return new SlaveXAudioProcessor();
}

