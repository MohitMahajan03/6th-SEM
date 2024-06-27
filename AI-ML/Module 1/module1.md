# Module 1

* **Machine Learning**:
    * A computer program is said to learn from its experience (E), with respect to some task (T) and performance measure (P). If it's performance at task as measured by 'P' improves with experience.

<img src = "learning.png">

## Supervised Learning (Predective Learning)

* Classification
* Regression

### Classification

* Image classification
* Prediction of Disease
* Win or Loss prediction in games
* Prediction of natural calamities
* Recognition of hand writing.

### Regression

Regression -> Simple Linear Regression
           |
           -> Multiple Linear Regression

* Demand Forecasting in retail.
* Sales Prediction for managers.
* Price Prediction in real estates.
* Weather Forecast.

## Unsupervised Learning (Descriptive learning)

> Data in unsupervised learning does not contain any labels.

Descriptive Learning -> Clustering
                     |  _Customer segmentation_
                     |
                     -> Association analysis
                        _Market Baseket analysis_


## Reinforcement Learning

> Here the model learns by itself.

* Self driven cars.


## Differnce Between Supervised, Unsupervised, Reinforcement Learning

* Supervised Learning
    * This type of learning classifies data based on classes/labels.
    * Labelled training is required.
    * Performance is measured by the number of misclassifications occured.
    * Simplest to understand.

* Unsupervised Learning
    * There are no classes or labels for the data.
    * The model finds patterns in the data.
    * Difficult to understand and measure if model did something useful or interesting, Homogenity of data is the only measure.
    * More difficult to understand and implement than Supervised Learining.

* Reinforcement Learning
    * There are no classes or labels for the data.
    * Model learns and adapts through rewards and punishments.
    * Model is evaluated on the reward function after it's been given some time to learn.
    * Most complex to understand and apply.

## Attributes of data

* Qualitative -> Nominal (Non-numeric)
              |
              -> Ordinal (sequenced Nominal set)

* Quantitative -> Interval (Numeric data where we can find out exact difference)
               |
               -> Ratio (Interval type with 0 included)

## Process of Machine Learning

<img src = "ML_Process.png">

## Confusion matrix

* This matrix is used to calculate metrics such as Precision, Recall and Specificity.

**Cases of Positives and Negatives**
* _True Positive:_ If the model predicted a *"win"* and the team *"won"*, then model has correctly classified the data.
* _False Positive:_ If the model predicted a *"win"* and the team *"lost"* then the model classified incorrectly.
* _False Negative:_ If the model predicted a *"loss"* and the team *"won"* then the model classified incorrectly.
* _True Negative:_ If the model predicted a *"loss"* and the team *"lost"* then the model classified the data correctly.

* Accuracy

    * (Tp + Tn)/(Tp + Tn + Fn + Fp)

* Precision

    * Tp/(Tp + Fp)

* Recall

    * Tp/(Tp + Fn)

* Specificity

    * Tn/(Tn + Fp)


## ML Algorithms

### K Nearest Neighbors algorithm

* Overiew
    * 

* Algorithm
    * Step 1: Calculate test data point from different training data point using Euclidean distance formula √((x<sub>2</sub> - x<sub>1</sub>)<sup>2</sup> + (y<sub>2</sub> - y<sub>1</sub>)<sup>2</sup>).
    * Step 2: Find closes K training points i.e., training data whose distance are least from the test datapoint.
    * Step 3: if k == 1
                Then assign class label of 1st nearest training data point to the test data point.
              else
                Whichever class is predominantly present in the nearest training data points, assign their class to the test data point.

### Linear Regression 

* Overview
    * 


* Algorithm
    * Step 1: For each datapoint in the training dataset calculate _x<sup>2</sup>_ and _xy_ 
    * Step 2: Find the summation of _x, y, x<sup>2</sup> and xy_.
    * Step 3: Calculate the slope _m = [(N* Σ(xy)) - (Σx * Σy)]/[(N* Σx<sup>2</sup>) - (Σx)<sup>2</sup>]_
    * Step 4: Calculate _y_ intercept _b = [Σy - (m * Σx)]/N_
    * Step 5: Assemble the equation of the line _y = m * x + c_


### Principle Component Analysis

* Overview
    * 

* Algorithm
    * Step 1: Consider a dataset having n features or variables denoted by _x1, x2, x3, ... , x<sub>n</sub>_  
    * Step 2: Compute the means of the variables _avg.x<sub>i</sub> = (x<sub>i1</sub> + <sub>i2</sub> +...+ x<sub>in</sub>)/N_
    * Step 3: Calculate the covariance matrix _Cov(x<sub>j</sub>, x<sub>j</sub>) = [Σ<sub>k = (1, N)</sub> (x<sub>ik</sub> - avg.x<sub>i</sub>) * (x<sub>jk</sub> - avg.x<sub>j</sub>)]/(N-1)_ 
    * Step 4: Calculate the Eigen values and Eigen vectors of the covariance matrix
    * Step 5: Derive the new dataset, Order the Eigen values in descending order and eigen vector corresponding to the largest Eigen Vector is the 1st Principle Component.


### Logistic Regression

* Overview
    * 

* Algorithm
    * Step 1: Data Collection: Have a dataset cinsisting of more than 1 independent feature and class membership.
    * Step 2: Data Processing: Perform necessary data cleaning and feature scaling.
    * Step 3: Initialize the Logistic Regression parameters.
    * Step 4: Define the hypothesis function that maps features to the predicted probability of the positive class.
                _hΘ = 1/(1 + e<sup>-ΘTx</sup>)_



 