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
    AND hour = 10
    AND minute > 14
    AND minute < 26;*/
-- Many people exited during the given time

-- Reducing possible thief prospects (with help of license plate) (1)
/*SELECT *
    FROM people
    WHERE license_plate IN
    (SELECT license_plate
    FROM bakery_security_logs
    WHERE day = 28
    AND hour = 10
    AND minute > 14
    AND minute < 26);*/

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
    AND atm_location = "Leggett Street"
    AND transaction_type = "withdraw";*/
-- Several prospects found

-- Reducing possible thief prospects (with help of account number) (2)
/*SELECT *
    FROM people
    WHERE id IN
    (SELECT person_id
    FROM bank_accounts
    WHERE account_number IN
        (SELECT account_number
        FROM atm_transactions
        WHERE day = 28
        AND month = 7
        AND atm_location = "Leggett Street"
        AND transaction_type = "withdraw"))
INTERSECT
SELECT *
    FROM people
    WHERE license_plate IN
        (SELECT license_plate
        FROM bakery_security_logs
        WHERE day = 28
        AND hour = 10
        AND minute > 14
        AND minute < 26);*/
-- Reduced number of prospects

-- Checking interviews on 28 July again for third witness
/*SELECT *
    FROM interviews
    WHERE month = 7
    AND day = 28;*/
-- Thief called during exit for a duration of less than a minute

-- Checing phone calls on 28 july 2021 for duration of less than a minute
/*SELECT *
    FROM phone_calls
    WHERE month = 7
    AND day = 28
    AND duration < 60;*/
-- Got some caller information

-- Reducing possible thief prospects (with help of phone number) (3)
/*SELECT *
    FROM people
    WHERE id IN
    (SELECT person_id
    FROM bank_accounts
    WHERE account_number IN
        (SELECT account_number
        FROM atm_transactions
        WHERE day = 28
        AND month = 7
        AND atm_location = "Leggett Street"
        AND transaction_type = "withdraw"))
INTERSECT
SELECT *
    FROM people
    WHERE license_plate IN
        (SELECT license_plate
        FROM bakery_security_logs
        WHERE day = 28
        AND hour = 10
        AND minute > 14
        AND minute < 26)
INTERSECT
SELECT *
    FROM people
    WHERE phone_number IN
    (SELECT caller
    FROM phone_calls
    WHERE month = 7
    AND day = 28
    AND duration < 60);*/
-- Reduced number of prospects

-- Seeing how many flights departed from Fiftyville after 10 am on 28 july
/*SELECT *
    FROM flights
    WHERE origin_airport_id =
    (SELECT id FROM airports
    WHERE city = "Fiftyville")
    AND day = 28
    AND month = 7
    AND hour > 10;*/
-- Got some information