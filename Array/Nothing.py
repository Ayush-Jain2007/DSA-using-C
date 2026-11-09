# Q10. Largest and smallest element of a list (using a loop)
nums = [4, 9, 1, 7, 3]
largest = nums[0]
smallest = nums[0]
for n in nums:
    if n > largest:
        largest = n
    if n < smallest:
        smallest = n
print("Largest:", largest)
print("Smallest:", smallest)

# Q11. Sum and average of elements in a list (using a loop)
total = 0
count = 0
for n in nums:
    total = total + n
    count = count + 1
print("Sum:", total)
print("Average:", total / count)

# Q12. Shopping cart using a list
cart = []

while True:
    print("\n--- Shopping Cart Menu ---")
    print("1. Add Item")
    print("2. Insert Item")
    print("3. Remove Item")
    print("4. Delete Item by Index")
    print("5. Update Item")
    print("6. Search Item")
    print("7. Display Cart")
    print("8. Sort Cart")
    print("9. Reverse Cart")
    print("10. Clear Cart")
    print("11. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        item = input("Enter item: ")
        cart.append(item)

    elif choice == "2":
        index = int(input("Enter position: "))
        item = input("Enter item: ")
        cart.insert(index, item)

    elif choice == "3":
        item = input("Enter item to remove: ")
        if item in cart:
            cart.remove(item)
        else:
            print("Item not found")

    elif choice == "4":
        index = int(input("Enter index to delete: "))
        if 0 <= index < len(cart):
            del cart[index]
        else:
            print("Invalid index")

    elif choice == "5":
        index = int(input("Enter index to update: "))
        if 0 <= index < len(cart):
            cart[index] = input("Enter new item: ")
        else:
            print("Invalid index")

    elif choice == "6":
        item = input("Enter item to search: ")
        found = False
        for i in range(len(cart)):
            if cart[i] == item:
                print("Found at index", i)
                found = True
                break
        if not found:
            print("Item not found")

    elif choice == "7":
        print("Cart:", cart)

    elif choice == "8":
        # Bubble sort
        n = len(cart)
        for i in range(n):
            for j in range(n - i - 1):
                if cart[j] > cart[j + 1]:
                    temp = cart[j]
                    cart[j] = cart[j + 1]
                    cart[j + 1] = temp
        print("Cart sorted")

    elif choice == "9":
        # Reverse by swapping first and last, and so on
        left = 0
        right = len(cart) - 1
        while left < right:
            temp = cart[left]
            cart[left] = cart[right]
            cart[right] = temp
            left = left + 1
            right = right - 1
        print("Cart reversed")

    elif choice == "10":
        cart = []
        print("Cart cleared")

    elif choice == "11":
        print("Goodbye!")
        break

    else:
        print("Invalid choice")

# Q13. Reverse a string (using a loop)
s = input("Enter a string: ")
reversed_s = ""
for ch in s:
    reversed_s = ch + reversed_s
print("Reversed:", reversed_s)

# Q14. Count vowels in a string
s = input("Enter a string: ")
count = 0
for ch in s:
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' \
       or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U':
        count = count + 1
print("Number of vowels:", count)

# Q15. Palindrome check (compare first and last characters)
s = input("Enter a string: ")
is_palindrome = True
left = 0
right = len(s) - 1
while left < right:
    if s[left] != s[right]:
        is_palindrome = False
        break
    left = left + 1
    right = right - 1

if is_palindrome:
    print("Palindrome")
else:
    print("Not a Palindrome")