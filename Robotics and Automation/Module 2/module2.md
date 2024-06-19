## 1. Draw and explain the block diagram of an Actuator system.

An actuator system comprises of several subsystems, 
(i) a power supply
(ii) a power amplifier
(iii) a servomotor
(iv) a transmission system.

<img src = "act.png">

## 2. What are electric actuators. Mention its advantages and disadvantages

Electric actuators are generally those where an electric motor drives robot links through some mechanical transmission, e.g., gears, etc.

* Advantages: 
    * Widespread availability of power supply.
    * Basic drive element electric motor is usually lighter than pressurized fluid or compressed air.
    * High power-conversion efficiency.
    * No pollution of working environment.
    * Accuracy and repeatability of electric drive robots are normally better than fluid power 
    * Being relatively quiet and clean, they are very acceptable environmentally.
    * They are easily maintained and repaired.
    * Structural components can be lightweight.
    * The drive system is well suited to electronic control.


## 3. What is a stepper motor? Explain permanent magnet stepper motor with a neat diagram

<img src = "stepper.png"> <br><br>

* Normally, the shaft of a stepper motors rotates incrementally in equal steps in response to a programmed input pulse train.
* A current in any of the two phases, i.e., with P1 and P2, will magnetize the pair into north and south poles, indicted with N and S, respectively.
* Accordingly, the permanent magnet at the centre will rotate in order to align itself along a particular phase, which is demonstrated.
* Switching the currents in the two phases in an appropriate sequence can produce either clockwise (CW) or counterclockwise (CCW) rotations.
* The switching sequence corresponds to what is known as half-stepping with a step angle of 45°, whereas the full-stepping corresponds to 90° in which one phase is energized at a time.

<img src = "step_working.png">

* Micro-stepping (non-identical steps) up to 1/125 of full-step by changing the currents in small steps instead of switching them on and off, as in the case of half- and full-stepping. 
* While micro-stepping is advantageous from the point of view of accurate motion control using a stepper motor, it has the disadvantage of reduced motor torque. 
* The steps are achieved through phase activation or switching sequences triggered by the pulse sequences.
* The switching logic that decides the states of the phases of a given step can be generated using a look-up table.
* The same sequences can also be generated using a logic circuitry which is typically an electronic device.

* As the rotor indexes round a specific amount for each control pulse, any error in positioning is noncumulative.
* To know the final position of the rotor, all that is required is to count the number of pulses fed into the stator’s phase winding of the motor.
* The number of pulses per unit time determines the motor speed.
* The rotor can be made to index slowly, coming to rest after each increment or it can move rapidly in a continuous motion termed slewing. 
* Maximum dynamic torque in a stepper motor occurs at low pulse rates.

* Therefore, it can easily accelerate a load. Once the required position is achieved and the command pulses cease, the shaft stops without the need for clutches or brakes.
* The actual rotational movements or step angles of the shaft are obtainable typically from 1.8° to 90° depending on the particular motor choices.
* Thus, with a nominal step angle of 1.8°, a stream of 1000 pulses will give an angular displacement of 1800° or five complete revolutions.
* They have also a low velocity capability without the need for gear reduction. For instance, if the previously mentioned motor is driven by 500 pulses per second, it will rotate at 150 rpm.
* Other advantages of the stepper motor are that the motor inertia is often low, and also if more than one stepper motor is driven from the same source then they will maintain perfect synchronizations.

### Advantages

1. Due to their internal structure, stepper motors do not require a sensor to detect the motor position.
2. Since the motor moves by performing “steps,” by simply counting these steps, you can obtain the motor position at a given time.
3. In addition, stepper motor control is pretty simple.
4. The motor does need a driver, but does not need complex calculations or tuning to work properly.
5. Stepper motors offer good torque at low speeds, are great for holding position, and also tend to have a long lifespan.

### Disadvantages

1. They can miss a step if the load torque is too high. 
2. These motors always drain maximum current even when still, which makes efficiency worse and can cause overheating.
3. Stepper motors have low torque and become pretty noisy at high speeds.
4. Finally, stepper motors have low power density and a low torque-to-inertia ratio.
5. Low efficiency 
6. Drive inputs and circuitry have to be carefully designed in relation to the torque and speed required.

<br><br>

<img src = "step_stats.png"> <br><br>


## 4. Draw and explain the working principle of a two-phase stepper motor.

>Same as ans 3

## 5. Explain the working of a Brushless Permanent Magnet DC motor.

* The problem with dc motors is that they require a commutator and brushes in order to periodically reverse the current through each armature coil.
* The brushes make sliding contacts with the commutators and as a consequence sparks jump between the two and they suffer wear.
* Brushes have to be periodically changed and the commutator resurfaced.
* To avoid such problems, brushless motors have been designed.

<br>

* Essentially, they consist of a sequence of stator coiled and a permanent magnet rotor.
* A current-carrying conductor in a magnetic field experiences a force; likewise, as a consequence of Newton’s third law of motion, the magnet  will also experience an opposite and equal force.
* With the conventional dc motor, the magnet is fixed and the current-carrying conductors made to move.
* With the brushless permanent-magnet dc motor the reverse is the case, the current-carrying conductors are fixed and the magnetic field moves.
* The rotor is a ferrite or ceramic permanent magnet.
* In concept, brushless dc motors are somewhat similar to permanent-magnet stepper motors explained
* The current to the stator coils is electronically switched by transistors in sequence round the coils, the switching being controlled by the position of the rotor so that there are always forces acting on the magnet causing it to rotate in the same direction.

<br><br>

<img src = "BLDC.png"> <br><br>

### Advantages

The brushless motors have many advantages over conventional dc motors. For example,
1. They have better heat dissipation; heat being more easily lost from the stator than the rotor.
2. There is reduced rotor inertia. Hence, they weigh less and low mass for a specified torque rating.
3. The motors in themselves are less expensive.
4. They are more durable and have longer life.
5. Low maintenance.
6. Lower mechanical loading.
7. Improved safety.
8. Quieter operation.
9. They are of smaller dimensions of comparable power.

The absence of brushes reduces maintenance costs due to brush and commutator wear, and also allows electric
robots to be used in hazardous areas with flammable atmospheres such as are found in spray-painting applications.


## 6. Explain the typical layout of a DC servo motor and the controller of a DC servo motor.

<br><br>

<img src = "servo_layout.png"> <br><br>

1. Why Servo Motors?

    * Servomotors are motors with motion feedback control, which are able to follow a specified motion trajectory.
    * In a dc servomotor, both angular position and speed might be measured using, say, shaft encoders, tachometers, resolvers, potentiometers, etc., and compared with the desired position and speed.
    * The error signal which is the difference between the desired minus actual responses is conditioned and compensated using analog circuitry or is processed by a digital hardware processor or a computer, and supplied to drive the servomotor toward the desired response.
    * Motion control implies indirect torque control of the motor that causes the motion. In some applications like grinding, etc., where
    torque itself is a primary output, direct control of motor torque would be desirable.
    * This can be accomplished using feedback of the armature current or the fi eld current because those currents determine the motor torque is desirable.
    * This can be accomplished using feedback of the armature current or the field current because those currents determine the motor torque

2. Working

    * Note that the control of a dc motor is achieved by controlling either the stator field flux or the armature flux. 
    * If the armature and fi eld windings are connected through the same circuit, i.e., one of the winding types, both techniques are implemented simultaneously. 
    * Two methods of control are armature control and field control. 
    * In armature control, the fi eld current in the stator circuit is kept constant and the input voltage to the rotor is varied in order to achieve a desired performance.
    * In the field control, on the other hand, the armature voltage is kept constant and input voltage to the field circuit is varied.
    * These winding currents are generated using a motor driver.
    * It is a hardware unit that generates necessary current to energize the windings of the motor.
    * By controlling the current generated by the driver, the motor torque can be controlled.
    * By receiving feedback from a motion sensor (encoder tachometer, etc.), the angular position and the speed of the motor can be controlled.
    * The drive unit of a dc servomotor primarily consists of a driver amplifier (commercially available amplifiers are linear amplifier or pulse-width modulation, i.e., PWM, amplifier), with additional circuitry and a dc power supply.
    * The driver is commanded by a control input provided by a host computer through an interface (input/ output) card.
    * Also, the driver parameters like amplifier gains are software programmable and can be set by the host computer.
    * The control computer receives a feedback signal of the motor motion, through the interface board, and generates a control signal, using a suitable control law
    * The signal is then provided to the drive amplifier, again through the interface board.
    * An interface board or Data Acquisition (DAQ) card is a hardware module with Digital-to-Analog (DAC) and Analog-to-Digital (ADC) capabilities built-in. These are generally parts of a robot’s control system.
    * The final control of a dc motor is accomplished by controlling the supply voltage to either the armature circuit or the field circuit.
    * A dissipative method of achieving this involves using a variable resistor in series with the supply source to the circuit.
    * This method has disadvantages of high heat generation, etc. Instead, the voltage to a dc motor is controlled by using a solid-state switch known as a thyristor to vary the off time of fixed voltage level, while keeping the period of pulse signal constant.


<br><br>

<img src = "servo_control.png">

<br><br>



## 7. Explain briefly Three-phase Induction motor and Synchronous motor with a diagram
## 8. Explain the working of a single-phase squirrel cage induction motor.
## 9. Compare the functional differences of DC and AC motors.
## 10. Compare Hydraulic and Pneumatic actuators.
## 11. Explain the different criteria involved in selection of motor for robotic applications.
## 12. Explain the working of Mechanical Gripper.
## 13. With a diagram explain Variable-reluctance stepper motor
## 14. With a diagram explain hybrid stepper motor
## 15. Explain the working principle of a DC motor. Briefly explain types of DC motors
## 16. With a diagram explain two-pole dc motor with field coils
## 17. Explain two types of permanent magnet DC motor configurations
## 18. Mention the typical advantages and disadvantages of ac motor over dc motors
## 19. Mention the typical advantages and disadvantages of Hydraulic Actuators and Pneumatic Actuators
## 20. Explain different types of Grippers