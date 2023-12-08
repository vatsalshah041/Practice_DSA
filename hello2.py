import sqlite3

try:

	# Connect to DB and create a cursor
	sqliteConnection = sqlite3.connect('sql.db')
	cursor = sqliteConnection.cursor()
	print('DB Init')

	# Write a query and execute it with cursor
	query = 'select sqlite_version();'
	cursor.execute(query)

	# Fetch and output result
	result = cursor.fetchall()
	print('SQLite Version is {}'.format(result))

	# Close the cursor
	cursor.close()

# Handle errors
except sqlite3.Error as error:
	print('Error occurred - ', error)

# Close DB Connection irrespective of success
# or failure
# finally:

# 	if sqliteConnection:
# 		sqliteConnection.close()
# 		print('SQLite Connection closed')
connection_obj = sqlite3.connect('emp.db')
cursor_obj = connection_obj.cursor()
cursor_obj.execute("DROP TABLE IF EXISTS GEEK")
# table = """ CREATE TABLE GEEK (
#             Email VARCHAR(255) NOT NULL,
#             First_Name CHAR(25) NOT NULL,
#             Last_Name CHAR(25),
#             Score INT
#         ); """
# cursor_obj.execute(table)
 
sql_query = """SELECT name FROM sqlite_master  
  WHERE type='table';"""

cursor_obj.execute('''INSERT INTO GEEK(
   Email,FIRST_NAME, LAST_NAME, Score) VALUES 
   ('s@gmail..com', 'Rama Priya', 90)''')

# cursor_obj.execute(sql_query)
print(cursor_obj.fetchall())
 
print("Table is Ready")