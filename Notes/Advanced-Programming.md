
![State Machine](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cf/Finite_state_machine_example_with_comments.svg/500px-Finite_state_machine_example_with_comments.svg.png)

*By 1st Macguy314, reworked by Perhelion  German translation by Babakus [Public domain], via Wikimedia Commons*

A state machine changes from one state to another in response to some external inputs; the change from one state to another is called a transition.

# Changing states

#### [Simple Counter](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/buttonpressedCounter/buttonpressedCounter.ino)

In this example we are looking at using a push button to allow us to count how many times a user clicks a button. This is useful to understand when a user has double clicked. It can also be used to cycle through different options.

#### [Basic Mode Changer](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/ModeChanger/ModeChanger.ino)

This example lets you cycle through multiple modes.

# What is Millis?

The millis function allows us to tell basic time. The millis function serves as a stopwatch for your program. When your arduino starts running the millis function immediately. Millis counts in milliseconds.

Examples=>Digital=>BlinkWithOutDelay

#### Delay Vs Millis for timing

The proper way to time your events on the arduino should be with millis. Remember that Delay stops the microcontroller for the period time.


[Millis Fade Led Fade up](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/millisFade/millisFade.ino)

[Millis Fade Up and Down](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/millisFadeUpDown/millisFadeUpDown.ino)

[Mode Changer with LED and Fade](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/ModeChangerFade/ModeChangerFade.ino)
