import pandas as pd
a = pd.read_excel(r"D:\DSA\Code\DA\Datasets\tb_Stu_G1.xlsx")
# b = pd.DataFrame(a)
df_drop_cols = a.fillna(0)
print(df_drop_cols)
