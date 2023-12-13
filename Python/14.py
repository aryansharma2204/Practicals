# Write a program to display Bar graphs or Pie chart using Matplotlib.

import matplotlib.pyplot as plt

# Data for the bar graph
categories = ['Category A', 'Category B', 'Category C', 'Category D']
values = [25, 40, 30, 45]

# Bar graph
plt.figure(figsize=(8, 6))
plt.bar(categories, values, color='blue')
plt.title('Bar Graph Example')
plt.xlabel('Categories')
plt.ylabel('Values')
plt.show()

# Data for the pie chart
labels = ['Label A', 'Label B', 'Label C', 'Label D']
sizes = [20, 35, 25, 20]

# Pie chart
plt.figure(figsize=(8, 8))
plt.pie(sizes, labels=labels, autopct='%1.1f%%', startangle=140, colors=['red', 'green', 'blue', 'yellow'])
plt.title('Pie Chart Example')
plt.show()
