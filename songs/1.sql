from cs50 import sql
import csv

-- Create Database
open("songs.db", "r").close()
db cs50.SQL("sqlite:///songs.db")

