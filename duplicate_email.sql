-- https://leetcode.com/problems/duplicate-emails/

SELECT DISTINCT Email from Person 
GROUP BY Email HAVING COUNT(*)>1;
