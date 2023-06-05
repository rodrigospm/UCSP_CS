import datetime

from flask import Flask, render_template

app = Flask(__name__)

@app.route('/') # @ = decorador
def home ():
    now = datetime.datetime.now()
    new_year = now.month == 1 and now.day == 1
    return render_template ('home.html', new_year= new_year)

if __name__ == '__main__':
    app.run(debug=True) # Actualizar cada cambio / Debug mode -> on