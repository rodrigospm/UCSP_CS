import graphene
from graphene import relay # Permitir conectar con la base de datos y relacionar
from graphene_sqlalchemy import SQLAlchemyObjectType, SQLAlchemyConnectionField # Ligar modelas y
# base de datos con el schema de graphql
from models import Alumno, db

class SchemaAlumno(SQLAlchemyObjectType): # Instancia de objecttype
    class Meta:
        model = Alumno  
        interfaces = (relay.Node,)

class Query(graphene.ObjectType): # Traer los alumnos de db
    node = relay.Node.Field()
    estudiantes = SQLAlchemyConnectionField(SchemaAlumno.connection)

schema = graphene.Schema(query=Query)