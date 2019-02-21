### Motors

* DC Motors
  * [Understanding DC Motors](https://nationalmaglab.org/education/magnet-academy/watch-play/interactive/dc-motor)
* Servos
  * Is a DC motor with a potentiometer or rotatry encoder
* Steppers
  * [Unstanding Stepper Motors](https://en.wikipedia.org/wiki/Stepper_motor#/media/File:StepperMotor.gif)

[Servo Code](https://github.com/zevenrodriguez/CIM542-642/blob/master/arduino/servoKnob/servoKnob.ino)


### Diode

Is a component used to control the flow of electricity. Generally used to avoid back voltage from components that can generate reverse voltage.

![Diode](https://upload.wikimedia.org/wikipedia/commons/thumb/6/60/Dioden2.jpg/220px-Dioden2.jpg)

Ulfbastel - modified from Dioden.jpg (centimeter instead of meter), created by Honina [CC BY-SA 3.0](http://creativecommons.org/licenses/by-sa/3.0/)


### Transistor

Is a semiconductor that allows to connect 2 poles of electricity using an electrical signal. Transistors usually contain 3 connections:

* Base
* Collector
* Emmiter

There are 2 types of transistors:

* NPN - Negative Positive Negative
  * Apply a positive charge on the Base and it connects two negative poles
* PNP - Positive Negative Positive
  * Apply a negative charge on the Base and it connects two positive poles.


#### Transistor types

![Transitor types](http://3.bp.blogspot.com/-O3T6bn5xZFM/T8d0R8qGjGI/AAAAAAAAB64/eruuB7JwCIA/s1600/transistors-package.png)

In our kits we have 2 IRF520 Mosfet transistors. They can handle more amperage and voltage, but are more sensitive to static electricity damage. MOSFETs are grouped into N-Channel and P-Channel, which are equivalent to NPN and PNP bipolar transistors.

[IRF520 Datasheet](http://pdf.datasheetcatalog.com/datasheet/fairchild/IRF520.pdf)

* Base - Gate

* Collector - Drain

* Emitter - Source

![Arduino Mosfet Hookup](../BreadboardExamples/mosfet_bb.jpg)
