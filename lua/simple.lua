function fact(n)
    if n == 0 then 
        return 1
    else 
        return n * fact(n-1)
    end
end 

--[[
print("this is a cool 5! = ")
print(fact(5))
print()
]]


--[[
print("enter a number")
a = io.read("*number")
print(fact(a))
]]

--[[
a = 10  b = a * 2  
print(a)
print(b)

]]

function norm (x,y)
    local n2 = x^2 + y^2 
    return math.sqrt(n2)
end 

function twice (x)
    return 2*x 
end 


-- Let us try making the table of function
tb1 =  {}
a = {}
for i=1,10 do a[i] = i*2 end

for i=1,10 do
    print(tostring(i) .. " x " .. "2 = " .. tostring(a[i]))
end






