-- 코드를 입력하세요
SELECT CART_ID
FROM CART_PRODUCTS A JOIN CART_PRODUCTS B USING (CART_ID)
WHERE A.NAME = "Yogurt" AND B.NAME = "Milk"
ORDER BY 1;