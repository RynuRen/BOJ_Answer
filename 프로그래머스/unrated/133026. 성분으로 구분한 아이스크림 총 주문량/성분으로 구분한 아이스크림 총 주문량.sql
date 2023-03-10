-- 코드를 입력하세요
SELECT INGREDIENT_TYPE, sum(TOTAL_ORDER) AS TOTAL_ORDER
FROM FIRST_HALF
NATURAL JOIN ICECREAM_INFO
GROUP BY INGREDIENT_TYPE
ORDER BY TOTAL_ORDER;