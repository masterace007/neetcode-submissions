-- Write your query below
select b.customer_id,a.customer_name from customers a join orders b on a.customer_id = b.customer_id group by b.customer_id,a.customer_name having count (
    case 
    when b.product_name = 'A' then 1
    end
) > 0 and count (
    case 
    when b.product_name = 'B' then 1
    end
) > 0 and count (
    case 
    when b.product_name = 'C' then 1
    end
) = 0 order by a.customer_name;