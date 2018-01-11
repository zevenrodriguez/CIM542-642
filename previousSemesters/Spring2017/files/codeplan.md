##Code Plan
 * Explain basic interaction
 * List Components
 * How each part is going to operate in your project
  * Be precise

###Example

####Explanation
User presses the button and cycles through 3 different patterns

####Patterns:
 * Blink 500ms second delay
 * Fade up then Fade down
 * Off
 
####Components
 * Push Button
 * LED

####Pseudocode

Push Button
 * Read Button
 * Increase counter
 * Register click on change from high to low

Patterns
 * Blink
  * Turn LED On
  * Delay
  * Turn LED OFF
  * Delay
 * Fade up then Fade down
  * Loop increase LED analogwrite by 1 till 255
  * small delay after each increase
  * Loop decrease LED analogwrite by 1 from 255 to 0
 * OFF