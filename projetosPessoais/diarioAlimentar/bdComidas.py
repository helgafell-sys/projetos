import sqlite3
con = sqlite3.connect("bdComidas.db")
cur = con.cursor()
cur.execute("CREATE TABLE comidas(entrada, hora, imagem)")
cur.execute("""
    INSERT INTO comidas VALUES
        ('150g arroz', 12:32, ?),
            """)
con.commit()
