print("hello")
import mysql.connector
config = mysql.connector.connect(
  host="3306",
  user="root@localhost",
  password="Pass@123",
  database="emp"
)
print(config)
# conn = mysql.connector.connect(**config)

# # Get a cursor object
# cursor = conn.cursor()

# # Execute a SQL statement
# cursor.execute('SELECT 1')

# # Fetch the results
# result = cursor.fetchone()

# # Close the cursor and connection
# cursor.close()
# conn.close()