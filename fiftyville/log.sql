-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Checking the crime scene report for the given crime
/*SELECT *
    FROM crime_scene_reports
    WHERE month = 7
    AND day = 28
    AND street = "Humphrey Street";*/

-- Checking interviews on 28 July
/*SELECT *
    FROM interviews
    WHERE month = 7
    AND day = 28;*/

-- Checking bakery security logs for given day and time
SELECT *
    FROM bakery_security_logs
    WHERE day = 28
    AND hour = 10;