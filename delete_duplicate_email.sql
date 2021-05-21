-- https://leetcode.com/problems/delete-duplicate-emails/

DELETE t1 from Person t1
INNER JOIN Person t2
WHERE
    t1.id>t2.id AND
    t1.Email= t2.Email;
