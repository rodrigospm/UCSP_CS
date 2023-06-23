# Importamos librerias
from flask import Flask
from flask_graphql import GraphQLView
from models import db, Alumno
from schemas import schema
import json

# Representar la ruta de archivo "alumnos.json" para solicitar
PATH_DATA_JSON = "data/alumnos.json"

# Creamos app
app = Flask(__name__) 
app.config.from_pyfile('settings.py') # Extraer configuraciones
db.init_app(app) # Iniciar base de datos

@app.before_first_request # Decorador que indica que la función crea_bases()
def crea_bases():
    db.create_all() # Crear elementos de la base
    with open(PATH_DATA_JSON) as f: # Extraer datos de alumnos.json
        alumnos = json.load(f)
    for alumno in alumnos: # Convertir en instancia de alumnos
        db.session.add(Alumno(**alumno))
    db.session.commit() # Commit para guardar en la base de datos

app.add_url_rule(
    '/graphql',
    view_func=GraphQLView.as_view( # Generar una funcion de lista basada en graphqlview
        'Graphql', # basado en graph
        schema=schema, # basado en esquema
        graphiql=True # graphql interfaz      
    ) 
)

app.run()