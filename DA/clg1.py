import pandas as pd
data = {
    'Name' : ['Atul', 'kumar', 'Gupta'],
    'Age' : [17,28.0,19],
    'Score' : [45,76,99]
}

df = pd.DataFrame(data)
print(df.info())