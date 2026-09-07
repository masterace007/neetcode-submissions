-- Write your query below
select a.first_name, a.last_name,b.city, b.state from person a left join address b on a.person_id = b.person_id;