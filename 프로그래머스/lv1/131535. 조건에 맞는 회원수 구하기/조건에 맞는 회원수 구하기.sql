-- 코드를 입력하세요
SELECT SUM(AGE >= 20 AND AGE <= 29) AS USERS
FROM USER_INFO
WHERE YEAR(JOINED) = 2021;