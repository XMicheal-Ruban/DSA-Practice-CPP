# Write your MySQL query statement below
SELECT 
    s.score,
    count(s2.score) as 'rank'
From Scores S, 
    (SELECT DISTINCT score FROM Scores) S2
Where s.score <= s2.score
group by s.id
order by s.score desc;