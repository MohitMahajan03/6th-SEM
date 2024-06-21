# 1. Explain the building of a machine learning algorithm in detail.

<b>ANS</b>

<img src = "Module 1\ML_Process.png">

# 2. Summarize the differences between machine learning and deep learning and provide intuitive descriptions and examples of the different kinds of tasks. Explain different types of algorithms with suitable examples.

### Differences Between Machine Learning and Deep Learning

**Machine Learning:**
1. **Definition:** Machine learning is a subset of artificial intelligence that involves training algorithms to make predictions or decisions based on data.
2. **Algorithms:** Common algorithms include linear regression, decision trees, support vector machines (SVM), and k-nearest neighbors (KNN).
3. **Feature Engineering:** Requires significant manual effort in selecting and crafting features that represent the data well.
4. **Data Requirements:** Can work effectively with smaller datasets.
5. **Interpretability:** Models are often more interpretable and easier to understand.

**Deep Learning:**
1. **Definition:** Deep learning is a subset of machine learning that involves neural networks with many layers (deep neural networks) to model complex patterns in data.
2. **Algorithms:** Primarily involves various types of neural networks like convolutional neural networks (CNNs), recurrent neural networks (RNNs), and transformers.
3. **Feature Engineering:** Automatically learns features from raw data, reducing the need for manual feature engineering.
4. **Data Requirements:** Requires large amounts of data to perform well.
5. **Interpretability:** Models are often considered "black boxes" due to their complexity, making them harder to interpret.

### Intuitive Descriptions and Examples of Tasks

**Machine Learning Tasks:**
1. **Classification:**
   - **Description:** Assigning labels to instances based on their features.
   - **Example:** Spam detection in emails. The algorithm learns to classify emails as "spam" or "not spam" based on features like the presence of certain keywords, the sender's address, and other metadata.

2. **Regression:**
   - **Description:** Predicting continuous values.
   - **Example:** House price prediction. The algorithm predicts the price of a house based on features like its size, location, number of bedrooms, and other attributes.

3. **Clustering:**
   - **Description:** Grouping similar instances together.
   - **Example:** Customer segmentation. The algorithm groups customers into segments based on purchasing behavior, demographics, and other factors to target marketing efforts more effectively.

4. **Dimensionality Reduction:**
   - **Description:** Reducing the number of features while retaining essential information.
   - **Example:** Principal Component Analysis (PCA) used for visualizing high-dimensional data. It helps in compressing data for easier visualization and analysis.

**Deep Learning Tasks:**
1. **Image Classification:**
   - **Description:** Classifying objects in images.
   - **Example:** Identifying animals in photos. A CNN can classify images into categories like "cat," "dog," "bird," etc., by learning from millions of labeled images.

2. **Natural Language Processing (NLP):**
   - **Description:** Understanding and generating human language.
   - **Example:** Language translation. Models like transformers translate text from one language to another by learning language patterns from vast amounts of text data.

3. **Speech Recognition:**
   - **Description:** Converting spoken language into text.
   - **Example:** Virtual assistants like Siri or Alexa transcribe and understand spoken commands to perform tasks like setting reminders or playing music.

4. **Generative Tasks:**
   - **Description:** Creating new content.
   - **Example:** Deepfake generation. GANs (Generative Adversarial Networks) can create realistic images or videos of people who don't exist, based on training data.

### Summary
Machine learning focuses on building models using algorithms that often require manual feature engineering and can work with smaller datasets. Deep learning leverages neural networks to automatically learn features from large amounts of data, excelling in tasks like image and speech recognition, where traditional machine learning would struggle.

### Types of Machine Learning Algorithms

**1. Supervised Learning:**
   - **Definition:** The algorithm learns from labeled data, making predictions or classifications based on input-output pairs.
   - **Examples:**
     - **Linear Regression:**
       - **Description:** Predicts a continuous target variable based on one or more input features.
       - **Example:** Predicting house prices based on features like size, location, and number of bedrooms.
     - **Decision Trees:**
       - **Description:** Splits data into branches based on feature values to make predictions.
       - **Example:** Classifying whether a customer will buy a product based on features like age, income, and browsing history.
     - **Support Vector Machines (SVM):**
       - **Description:** Finds the optimal boundary that separates classes in the feature space.
       - **Example:** Classifying emails as spam or not spam based on various email attributes.
     - **K-Nearest Neighbors (KNN):**
       - **Description:** Classifies instances based on the majority class among the k-nearest neighbors in the feature space.
       - **Example:** Recognizing handwritten digits by comparing them to a dataset of labeled digit images.

**2. Unsupervised Learning:**
   - **Definition:** The algorithm learns patterns from unlabeled data, identifying structure and relationships.
   - **Examples:**
     - **K-Means Clustering:**
       - **Description:** Partitions data into k clusters, where each data point belongs to the cluster with the nearest mean.
       - **Example:** Customer segmentation based on purchasing behavior.
     - **Hierarchical Clustering:**
       - **Description:** Builds a tree of clusters by recursively merging or splitting clusters.
       - **Example:** Organizing news articles into a hierarchy based on topic similarity.
     - **Principal Component Analysis (PCA):**
       - **Description:** Reduces dimensionality by transforming data to a new set of orthogonal features.
       - **Example:** Compressing data for visualization, such as reducing the number of features in a dataset of handwritten digits.

**3. Semi-Supervised Learning:**
   - **Definition:** The algorithm learns from a small amount of labeled data supplemented with a large amount of unlabeled data.
   - **Example:**
     - **Label Propagation:**
       - **Description:** Spreads labels from labeled to unlabeled data points based on their proximity in the feature space.
       - **Example:** Improving document classification by leveraging a few labeled documents and many unlabeled ones.

**4. Reinforcement Learning:**
   - **Definition:** The algorithm learns by interacting with an environment, receiving rewards or penalties based on actions taken.
   - **Examples:**
     - **Q-Learning:**
       - **Description:** Learns a policy that maximizes the total reward over time by learning the value of actions in states.
       - **Example:** Training an AI to play chess by rewarding successful strategies and penalizing poor ones.
     - **Deep Q-Networks (DQN):**
       - **Description:** Uses deep neural networks to approximate Q-values in complex environments.
       - **Example:** Developing AI agents for video games that learn optimal strategies through gameplay.

### Types of Deep Learning Algorithms

**1. Convolutional Neural Networks (CNNs):**
   - **Definition:** Specialized neural networks for processing structured grid data like images.
   - **Example:**
     - **Image Classification:**
       - **Description:** Identifies the main object in an image.
       - **Example:** Classifying images of animals as "cat," "dog," or "bird."

**2. Recurrent Neural Networks (RNNs):**
   - **Definition:** Neural networks designed to handle sequential data by maintaining a memory of previous inputs.
   - **Examples:**
     - **Language Modeling:**
       - **Description:** Predicts the next word in a sequence.
       - **Example:** Text generation, where the model generates coherent sentences.
     - **Time Series Prediction:**
       - **Description:** Forecasts future values based on past data.
       - **Example:** Predicting stock prices based on historical trends.

**3. Long Short-Term Memory Networks (LSTMs):**
   - **Definition:** A type of RNN designed to remember long-term dependencies and mitigate the vanishing gradient problem.
   - **Examples:**
     - **Speech Recognition:**
       - **Description:** Converts spoken language into text.
       - **Example:** Transcribing spoken commands into written text for virtual assistants.
     - **Machine Translation:**
       - **Description:** Translates text from one language to another.
       - **Example:** Translating English sentences into French.

**4. Generative Adversarial Networks (GANs):**
   - **Definition:** Consists of two neural networks (generator and discriminator) that compete against each other to create realistic data.
   - **Example:**
     - **Image Generation:**
       - **Description:** Generates new, realistic images from random noise.
       - **Example:** Creating photorealistic images of faces that do not exist.

**5. Transformers:**
   - **Definition:** Neural networks that handle sequential data with self-attention mechanisms to capture long-range dependencies.
   - **Examples:**
     - **Language Translation:**
       - **Description:** Translates text using attention to contextual relationships between words.
       - **Example:** Using models like BERT or GPT for translating text between languages.
     - **Text Summarization:**
       - **Description:** Generates concise summaries of long texts.
       - **Example:** Summarizing articles or reports to provide key information.

Each type of algorithm is suited for specific kinds of tasks, leveraging different strengths and methodologies to solve problems effectively.


# 3. Explain Dimensionality reduction with an example.

### Dimensionality Reduction

**Dimensionality reduction** is a process used to reduce the number of features or variables in a dataset while retaining as much of the important information as possible. This is often done to simplify the dataset, making it easier to visualize, analyze, and use in machine learning models. It helps in combating the curse of dimensionality, reducing computational cost, and potentially improving model performance.

### Common Techniques

1. **Principal Component Analysis (PCA):**
   - **Description:** PCA transforms the data into a new coordinate system by identifying the directions (principal components) along which the variance of the data is maximized. The top principal components are chosen to represent the data in fewer dimensions.
   - **Example:** Reducing a dataset with 10 features to 2 principal components for easier visualization.

2. **t-Distributed Stochastic Neighbor Embedding (t-SNE):**
   - **Description:** t-SNE is a non-linear technique primarily used for visualization in two or three dimensions. It reduces dimensionality while preserving the local structure of the data, making it particularly good for visualizing clusters.
   - **Example:** Visualizing high-dimensional data like handwritten digits from the MNIST dataset in 2D space.

### Example: Principal Component Analysis (PCA)

#### Scenario
Imagine you have a dataset with 5 features about students: Math score, English score, Science score, History score, and Physical Education (PE) score. You want to reduce this to 2 dimensions to visualize the relationships between students more easily.

#### Steps in PCA

1. **Standardize the Data:**
   - Convert all scores to a common scale (e.g., z-scores).

2. **Compute the Covariance Matrix:**
   - Calculate the covariance matrix to understand how the features vary together.

3. **Compute Eigenvalues and Eigenvectors:**
   - Determine the principal components by computing the eigenvalues and eigenvectors of the covariance matrix.

4. **Select Top Principal Components:**
   - Choose the top k principal components based on the eigenvalues. Here, k=2.

5. **Transform the Data:**
   - Project the original data onto the new 2D space formed by the top 2 principal components.

#### Result
The result is a new dataset with 2 dimensions that captures the most variance in the original 5-dimensional dataset. This reduced dataset can be visualized as a scatter plot, where each point represents a student and the axes represent the principal components.

### Visualization Example

Imagine the original dataset looks like this:
```
Math   English   Science   History   PE
90     85        95        70        80
85     80        88        65        75
...
```

After applying PCA, the transformed dataset might look like this:
```
PC1     PC2
3.2     1.1
2.8     0.9
...
```

You can then create a scatter plot using PC1 and PC2:
- **PC1:** The first principal component, capturing the most variance.
- **PC2:** The second principal component, orthogonal to PC1, capturing the next highest variance.

In this 2D scatter plot, each point (student) can be seen in relation to others, highlighting clusters or patterns that were not easily visible in the original 5-dimensional space.

### Summary
Dimensionality reduction, particularly through techniques like PCA, helps simplify complex datasets, making them easier to visualize and analyze while retaining essential information. This is crucial for exploratory data analysis and improving the efficiency of machine learning algorithms.

# 4. Explain PCA and LDA with proper steps.

>Notes

# 5. Explain Linear Regression and Logistic Regression in detail.


### Linear Regression

**Linear Regression** is a fundamental statistical technique used to model the relationship between a dependent variable and one or more independent variables. The goal is to predict the value of the dependent variable based on the values of the independent variables.

#### Key Concepts:

1. **Dependent Variable (Y):** The outcome or target variable we are trying to predict.
2. **Independent Variables (X):** The input variables used to make predictions.

#### Types:
1. **Simple Linear Regression:** Involves a single independent variable.
2. **Multiple Linear Regression:** Involves multiple independent variables.

#### Model:
The linear regression model assumes a linear relationship between the dependent and independent variables. The model can be expressed as:

\[ Y = \beta_0 + \beta_1 X_1 + \beta_2 X_2 + \cdots + \beta_n X_n + \epsilon \]

- \( Y \) is the predicted value.
- \( \beta_0 \) is the intercept.
- \( \beta_1, \beta_2, \ldots, \beta_n \) are the coefficients representing the weight of each independent variable.
- \( X_1, X_2, \ldots, X_n \) are the independent variables.
- \( \epsilon \) is the error term.

#### Example:

**Scenario:** Predicting house prices based on size (in square feet) and number of bedrooms.

**Data:**
```
Size (sq ft) | Bedrooms | Price ($)
-------------|----------|---------
1500         | 3        | 300,000
2000         | 4        | 400,000
```

**Model:**
\[ \text{Price} = \beta_0 + \beta_1 \times \text{Size} + \beta_2 \times \text{Bedrooms} \]

After training the model, you might get:
\[ \text{Price} = 50,000 + 150 \times \text{Size} + 10,000 \times \text{Bedrooms} \]

**Prediction:**
For a house with 1800 sq ft and 3 bedrooms:
\[ \text{Price} = 50,000 + 150 \times 1800 + 10,000 \times 3 = 350,000 \]

#### Evaluation:
- **Mean Squared Error (MSE):** Measures the average of the squares of the errors (the average squared difference between the estimated values and actual value).
- **R-squared:** Represents the proportion of the variance for the dependent variable that's explained by the independent variables.

---

### Logistic Regression

**Logistic Regression** is used for binary classification problems, where the outcome is a binary variable (e.g., 0 or 1, true or false). It predicts the probability of the occurrence of an event by fitting data to a logistic function.

#### Key Concepts:

1. **Dependent Variable (Y):** The binary outcome (e.g., success/failure).
2. **Independent Variables (X):** The input variables used to make predictions.

#### Model:
The logistic regression model predicts the probability that the dependent variable \( Y \) belongs to a particular category. The model can be expressed as:

\[ P(Y=1|X) = \frac{1}{1 + e^{-(\beta_0 + \beta_1 X_1 + \beta_2 X_2 + \cdots + \beta_n X_n)}} \]

- \( P(Y=1|X) \) is the probability of the event occurring.
- \( \beta_0, \beta_1, \ldots, \beta_n \) are the coefficients.

The output of the logistic function is a probability value between 0 and 1.

#### Example:

**Scenario:** Predicting whether a student will pass (1) or fail (0) based on hours studied and attendance.

**Data:**
```
Hours Studied | Attendance (%) | Pass/Fail
--------------|----------------|---------
10            | 80             | 1
5             | 60             | 0
```

**Model:**
\[ P(\text{Pass}=1|\text{Hours Studied}, \text{Attendance}) = \frac{1}{1 + e^{-(\beta_0 + \beta_1 \times \text{Hours Studied} + \beta_2 \times \text{Attendance})}} \]

After training the model, you might get:
\[ P(\text{Pass}=1|\text{Hours Studied}, \text{Attendance}) = \frac{1}{1 + e^{-(0.5 + 0.3 \times \text{Hours Studied} + 0.02 \times \text{Attendance})}} \]

**Prediction:**
For a student who studied 7 hours and has 70% attendance:
\[ \text{Log-odds} = 0.5 + 0.3 \times 7 + 0.02 \times 70 = 3.1 \]
\[ P(\text{Pass}=1) = \frac{1}{1 + e^{-3.1}} \approx 0.957 \]

The model predicts a 95.7% chance of passing.

#### Evaluation:
- **Accuracy:** The proportion of correctly predicted instances.
- **Precision and Recall:** Measures the accuracy of positive predictions and the ability to find all positive instances, respectively.
- **F1 Score:** The harmonic mean of precision and recall.
- **ROC Curve and AUC:** Measures the trade-off between the true positive rate and the false positive rate.

### Summary

- **Linear Regression** is used for predicting continuous outcomes and assumes a linear relationship between the dependent and independent variables.
- **Logistic Regression** is used for binary classification, predicting the probability of a binary outcome using a logistic function.

Both techniques are foundational to machine learning and have wide applications in various fields.

# 6. Define Machine Learning. Explain with examples why machine learning is important.

### What is Machine Learning?

**Machine Learning** is a subset of artificial intelligence (AI) that involves developing algorithms and statistical models that enable computers to perform tasks without explicit instructions. Instead, these systems learn from data by identifying patterns and making predictions or decisions based on this data.

### Importance of Machine Learning

Machine learning is crucial because it allows computers to handle complex and large-scale data-driven tasks more efficiently and effectively than traditional programming methods. Here are some reasons why machine learning is important, along with examples:

1. **Automation of Routine Tasks:**
   - **Example:** Email filtering. Machine learning algorithms can automatically classify emails into categories like spam, promotions, and primary inbox, saving users time and enhancing productivity.

2. **Handling Big Data:**
   - **Example:** Retail industry. Companies like Amazon and Walmart use machine learning to analyze vast amounts of customer data to predict trends, manage inventory, and personalize shopping experiences.

3. **Improved Decision Making:**
   - **Example:** Finance. Banks and financial institutions use machine learning models to detect fraudulent transactions, assess credit risk, and automate trading strategies based on real-time data analysis.

4. **Enhanced User Experiences:**
   - **Example:** Recommendation systems. Streaming services like Netflix and Spotify use machine learning to suggest movies, shows, and music based on users' past behavior and preferences.

5. **Advancements in Healthcare:**
   - **Example:** Medical diagnostics. Machine learning algorithms can analyze medical images, such as X-rays and MRIs, to detect abnormalities and diseases like cancer with high accuracy, aiding doctors in early diagnosis and treatment planning.

6. **Natural Language Processing (NLP):**
   - **Example:** Virtual assistants. Assistants like Siri, Alexa, and Google Assistant use machine learning to understand and respond to voice commands, providing users with hands-free control over their devices and access to information.

7. **Personalization and Marketing:**
   - **Example:** Targeted advertising. Machine learning helps advertisers deliver personalized ads to users based on their browsing history, preferences, and demographic information, increasing the effectiveness of marketing campaigns.

8. **Predictive Maintenance:**
   - **Example:** Manufacturing. Companies use machine learning to predict equipment failures before they occur by analyzing sensor data from machinery. This helps in scheduling maintenance proactively, reducing downtime and repair costs.

9. **Self-Driving Cars:**
   - **Example:** Autonomous vehicles. Companies like Tesla and Waymo use machine learning to enable cars to recognize objects, understand road conditions, and make driving decisions, moving towards safer and more efficient transportation.

10. **Improved Customer Service:**
    - **Example:** Chatbots. Many companies deploy machine learning-powered chatbots to handle customer inquiries, provide support, and resolve issues quickly, enhancing the customer service experience.

### Examples Highlighting the Importance of Machine Learning

1. **Healthcare:**
   - **Application:** Predictive Analytics for Patient Care
   - **Impact:** Machine learning models can predict patient outcomes, readmission rates, and potential complications, allowing healthcare providers to implement preventive measures and personalized treatment plans, ultimately improving patient care and reducing costs.

2. **Finance:**
   - **Application:** Fraud Detection
   - **Impact:** Machine learning algorithms analyze transaction patterns to detect and flag potentially fraudulent activities in real-time. This has significantly reduced financial fraud and saved millions for banks and credit card companies.

3. **Retail:**
   - **Application:** Personalized Recommendations
   - **Impact:** E-commerce platforms use machine learning to analyze users' past purchases, browsing history, and preferences to recommend products. This not only enhances the shopping experience but also increases sales and customer retention.

4. **Transportation:**
   - **Application:** Route Optimization
   - **Impact:** Logistics companies use machine learning to optimize delivery routes, taking into account factors like traffic, weather, and delivery urgency. This results in faster deliveries, reduced fuel consumption, and lower operational costs.

### Summary

Machine learning is transforming various industries by enabling the automation of complex tasks, improving decision-making processes, and enhancing user experiences. Its ability to process and learn from vast amounts of data allows for predictive insights and personalized services, making it a critical technology in the modern digital age.

## 7. Explain Naïve Bayes classifier. Find the probability to play tennis or not on the 15th day, if the attributes are as follows: OUTLOOK =Sunny, Temperature= Cool, Humidity= High, Wind= Strong.

>Notes

## 8. Write a note on i) Linear regression and ii) Logistic regression 

>Same as ans 5

# 9. Explain the K-Nearest neighbour learning algorithm

>Notes

# 10. Apply the K nearest neighbor classifier to predict the types of tissues with the given features Acid durability, and strength. If the training examples are Test Example: Assume K=3. Now the factory produces a new paper tissue that passes the laboratory test with Acid durability =3 and Strength =7, Class=? Guess the classification of this new tissue.

>Solve and upload

# 11. Explain the Bayes theorem and describe the brute force MAP learning algorithm.

### Bayes Theorem

**Bayes Theorem** is a fundamental concept in probability theory and statistics that describes how to update the probability of a hypothesis based on new evidence. It is named after Thomas Bayes and is a key principle in Bayesian inference, which is widely used in various fields, including machine learning.

#### Bayes Theorem Formula

\[ P(H|E) = \frac{P(E|H) \cdot P(H)}{P(E)} \]

- **\( P(H|E) \)**: Posterior probability. The probability of the hypothesis \( H \) given the evidence \( E \).
- **\( P(E|H) \)**: Likelihood. The probability of the evidence \( E \) given that the hypothesis \( H \) is true.
- **\( P(H) \)**: Prior probability. The initial probability of the hypothesis \( H \) before observing the evidence \( E \).
- **\( P(E) \)**: Marginal likelihood. The total probability of the evidence \( E \) under all possible hypotheses.

### Brute Force MAP Learning Algorithm

**Maximum A Posteriori (MAP)** estimation is a method used in Bayesian statistics to estimate the most probable hypothesis given the observed data. The brute force MAP learning algorithm involves evaluating all possible hypotheses to find the one with the highest posterior probability.

#### Steps of the Brute Force MAP Learning Algorithm

1. **Define the Hypotheses:**
   - Identify all possible hypotheses \( H_1, H_2, \ldots, H_n \).

2. **Compute the Prior Probabilities:**
   - Determine the prior probability \( P(H_i) \) for each hypothesis \( H_i \).

3. **Collect Evidence:**
   - Gather the evidence \( E \).

4. **Compute the Likelihoods:**
   - Calculate the likelihood \( P(E|H_i) \) for each hypothesis \( H_i \).

5. **Compute the Posterior Probabilities:**
   - Use Bayes Theorem to compute the posterior probability \( P(H_i|E) \) for each hypothesis \( H_i \):
     \[ P(H_i|E) = \frac{P(E|H_i) \cdot P(H_i)}{P(E)} \]
   - Since \( P(E) \) is constant for all hypotheses, it can be ignored for finding the hypothesis with the maximum posterior probability:
     \[ P(H_i|E) \propto P(E|H_i) \cdot P(H_i) \]

6. **Select the Hypothesis with the Highest Posterior Probability:**
   - Find the hypothesis \( H_{MAP} \) that maximizes the posterior probability:
     \[ H_{MAP} = \arg\max_{H_i} P(H_i|E) \]
     \[ H_{MAP} = \arg\max_{H_i} \left[ P(E|H_i) \cdot P(H_i) \right] \]

### Example

Let's consider a simple example of a spam filter to illustrate the Bayes Theorem and the brute force MAP learning algorithm.

#### Scenario

You want to classify an email as spam or not spam based on the presence of certain words.

1. **Hypotheses:**
   - \( H_1 \): The email is spam.
   - \( H_2 \): The email is not spam.

2. **Prior Probabilities:**
   - \( P(H_1) \): Prior probability that any given email is spam.
   - \( P(H_2) \): Prior probability that any given email is not spam.

3. **Evidence:**
   - \( E \): The email contains the word "discount".

4. **Likelihoods:**
   - \( P(E|H_1) \): Probability that the word "discount" appears in a spam email.
   - \( P(E|H_2) \): Probability that the word "discount" appears in a non-spam email.

5. **Posterior Probabilities:**
   - Compute the posterior probability for each hypothesis using Bayes Theorem:
     \[ P(H_1|E) = \frac{P(E|H_1) \cdot P(H_1)}{P(E)} \]
     \[ P(H_2|E) = \frac{P(E|H_2) \cdot P(H_2)}{P(E)} \]

6. **MAP Hypothesis:**
   - Compare the posterior probabilities and select the hypothesis with the highest value:
     \[ H_{MAP} = \arg\max_{H_i} \left[ P(E|H_i) \cdot P(H_i) \right] \]

### Summary

- **Bayes Theorem** provides a way to update the probability of a hypothesis based on new evidence.
- The **Brute Force MAP Learning Algorithm** involves evaluating all possible hypotheses to find the one with the highest posterior probability. This method is straightforward but computationally intensive for large hypothesis spaces.
- Both concepts are fundamental in Bayesian inference and are widely used in machine learning and statistical analysis.

# 12. Illustrate Bayes Theorem and maximum posterior hypothesis.

>Same as ans 11

## 13. Explain Naïve Bayes Classifier with an Example
## 14. Explain about SVD.
## 15. Apply K nearest neighbor classifier to predict the diabetic patient with the given features BMI, Age. If the training examples are Assume K=3 Test Example: BMI=43.6, Age=40, Sugar=?
## 16. What is Artificial Neural Network? Build the working of Deep Feedforward Networks with an example.
## 17. Explain the concept of a Perceptron with a neat diagram. Or Explain Perceptron with appropriate diagram. Represent AND Boolean function using Perceptron.
## 18. Explain the single perceptron with its learning algorithm.
## 19. How a single perceptron can be used to represent the Boolean functions such as AND, OR. Why is that a single layer perceptron cannot be used to represent the XOR function?
## 20. Write Gradient Descent algorithm for training a linear unit.
## 21. Write Stochastic Gradient Descent algorithm for training a linear unit.
## 22. Differentiate between Gradient Descent and Stochastic Gradient Descent
## 23. Write Back Propagation algorithm
## 24. Outline the stochastic gradient descent and its variants in deep learning.
## 25. What is multilayer Perceptron? Explain the back propagation algorithm 