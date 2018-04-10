/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
{
     addAndMakeVisible (testButton);
     testButton.setButtonText ("just a button");
    testButton.addListener(this); //when button's state changes
     addAndMakeVisible (textLabel);
     textLabel.setColour(Label::backgroundColourId, Colours::black);
     textLabel.setColour (Label::textColourId, Colours::white);
     textLabel.setJustificationType (Justification::centred);


    setSize (600, 400);
}

MainContentComponent::~MainContentComponent()
{ testButton.removeListener(this); // !don't forget
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff680227));

    g.setFont (Font (15.9476f));
    g.setColour (Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), Justification::centred, true);

}

void MainContentComponent::resized()
{
    testButton.setBounds (200, 70, 100, 60);
    textLabel.setBounds(20, 10, 100, 100);
}
//void MainContentComponent::repaint ();

void MainContentComponent::buttonClicked (Button* button)
    {
        if ( button == &testButton )
        {
                const String message = "or not";
                textLabel.setText(message, dontSendNotification); 
                //textLabel.repaint(20, 10, 100, 100);

    repaint();
       }
    }

