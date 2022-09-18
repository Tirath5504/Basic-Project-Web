-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Checking the crime scene report for the given crime
/*SELECT *
    FROM crime_scene_reports
    WHERE month = 7
    AND day = 28
    AND street = "Humphrey Street";*/
-- Mention of three witnesses and bakery

-- Checking interviews on 28 July for first witness
/*SELECT *
    FROM interviews
    WHERE month = 7
    AND day = 28;*/
-- Thief exited bakery within 10 mins of 10:15 AM

-- Checking bakery security logs for given day and time
/*SELECT *
    FROM bakery_security_logs
    WHERE day = 28
    AND hour = 10;*/
-- Many people exited during the given time

-- Checking interviews on 28 July again for second witness
/*SELECT *
    FROM interviews
    WHERE month = 7
    AND day = 28;*/
-- Thief went to atm on Leggett Street

-- Checking atm transactions on 28 july before 10 15 am
/*SELECT *
    FROM atm_transactions
    WHERE day = 28
    AND month = 7
    AND atm_location = "Leggett Street";*/
-- No paricular information obtained

-- Checking interviews on 28 July again for third witness
SELECT *
    FROM interviews
    WHERE month = 7
    AND day = 28;
-- Thief went to atm on Leggett Street