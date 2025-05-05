-- Write your PostgreSQL query statement below
SELECT
  t.id,
  CASE
    WHEN t.p_id IS NULL         THEN 'Root'
    WHEN COUNT(x.id) = 0        THEN 'Leaf'
    ELSE                            'Inner'
  END AS type
FROM Tree AS t
LEFT JOIN Tree AS x
  ON x.p_id = t.id
GROUP BY
  t.id,
  t.p_id
ORDER BY
  t.id;
