set serveroutput on
declare 
	n_emp number;
	max number; 
	com number;
	nom_emp emp.NomEmp%TYPE;
	avg number;
begin 
-- Q1:
	select count(*) into n_emp
	from emp 
	where emp.fonction='Ingenieur' or emp.fonction='Vendeur';
	dbms_output.put_line('Ing ou Vendeur : '||n_emp);	
-- Q2:
	select max(emp.salaire) into max
	from emp;
	select NomEmp, commission into nom_emp, com
	from emp
	where salaire=max;
	dbms_output.put_line('Nom Emp : '||nom_emp);
	dbms_output.put_line('Comission : '||com);
-- Q3:
	select count(*) into avg
	from emp, travaillersur
	where emp.numemp=travaillersur.numemp
	group by travaillersur.numprojet
		
end;	
/ 