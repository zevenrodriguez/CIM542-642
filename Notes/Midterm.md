# Midterm

For your midterm, create an interactive project that contains an clear input and output.

## Requirements

* Create a folder for your midterm.
  * Include a readme.md in your folder.
  * Include your code.
  * Your project needs to be encased.

### Questions

* What is the title of your project?
* Briefly explain why did you want to make this project?
* Talk about what form factor/size your project would ideally be.
  * Explain what your input is?
    * Explain how a user interacts with your input, What do they do?
    * What components did you use?
    * Why did you decide to use that component?
  * Explain what your output is?
    * What components did you use?
    * Why did you decide to use that component?
* What parts did you use?
* How does your program work? (Explain your code)
* Reflect on what worked/did not work?
* If you had more time what would you change in your project?


## Images and Videos

* Include images and captions for
  * 2 - Progress images
    * For example, breadboard, case,
  * 1 - Finished input
  * 1 - Finished output
  * 1 - Finished Breadboard
* A video of finished project  


# Example

## The Yes/No Machine

I wanted to create a small handheld project that allows a user to ask a yes and no question and get and answer. My project works by the user pressing a button and it randomly chooses between 2 lights, representing yes and no. I used one push button switch, because I need a component that a user can press and it resets back. For the output, I decided to use 2 leds to signal when it is yes or no. I decided to use LEDs for this first iteration because I wanted to make the project as small as possible.

### Parts

* One momentary push button switch
* 1 Green LED
* 1 Red LED

### Explain your code

When the user presses and releases the button, on the release I generate a random number between 1 and 2. If the number is 1, the yes led turns on and the red led turns off. If the number is 2, the no led turns on and the yes led, turns off.

### What worked/did not work

What needs work is a transition between when it is not being used and the user presses the button. Then the user pressed the button it should choose, then the light should stay on for 10 seconds, then turn off.

### If I had more times

If I had more time I would add a small servo motor with a swipe and a piezo to signal the yes and no answer. I would still include the leds. I would also add transitions between actions mentioned about.
