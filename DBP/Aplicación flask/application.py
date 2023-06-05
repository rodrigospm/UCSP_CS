import datetime
import random

from flask import Flask, render_template, request

app = Flask(__name__)

@app.route("/") # ROUTES0 - ROUTES1
def index():
    return "Hello, world!"

@app.route("/templates") # TEMPLATES
def templates():
    now = datetime.datetime.now()
    new_year = now.month == 1 and now.day == 1
    return render_template("templates.html", new_year=new_year)

@app.route("/conditions") # CONDITIONS
def conditions():
    now = datetime.datetime.now()
    new_year = now.month == 1 and now.day == 1
    return render_template("conditions.html", new_year=new_year)

@app.route("/loops") # LOOPS
def loops():
    names = ["Alice", "Bob", "Charlie"]
    return render_template("loops.html", names=names)

@app.route("/david") # ROUTES0
def david():
    return "Hello, David!"

@app.route("/<string:name>") # ROUTES 1
def hello(name):
    return "Hello, {}!".format(name)

@app.route("/urls") # URLS
def urls():
    return render_template("urls.html")

@app.route("/urls_more") # URLS
def urls_more():
    return render_template("urls_more.html")

@app.route("/variables0") # VARIABLES 0
def variables0():
    headline = "Hello, world!"
    return render_template("variables0.html", headline=headline)

@app.route("/variables1") # VARIABLES 1
def variables1():
    headline = random.choice(["Hello, world!", "Hi there!", "Good morning!"])
    return render_template("variables1.html", headline=headline)

@app.route("/static") # STATIC
def static1():
    return render_template("static1.html")

@app.route("/static_more") # STATIC
def static_more():
    return render_template("static_more.html")

@app.route("/forms") # FORMS
def forms():
    return render_template("forms.html")

@app.route("/forms_hello", methods=["POST"]) # forms
def forms_hello():
    name = request.form.get("name")
    return render_template("forms_hello.html", name=name)
