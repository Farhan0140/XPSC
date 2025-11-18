.model small
.stack 100h

.data
    ; Menu strings
    menu db 13,10,'=== ADVANCED CALCULATOR ===',13,10
         db '1. Add',13,10
         db '2. Subtract',13,10
         db '3. Multiply',13,10
         db '4. Divide',13,10
         db '5. Modulus (Remainder)',13,10
         db '6. Power (X^Y)',13,10
         db '7. Square (X^2)',13,10
         db '8. Cube (X^3)',13,10
         db 'Enter choice (1-8): $'
    
    ; Input prompts
    num1_prompt db 13,10,'Enter first number: $'
    num2_prompt db 13,10,'Enter second number: $'
    single_num_prompt db 13,10,'Enter number: $'
    
    ; Result messages
    result_msg db 13,10,'Result: $'
    equals_msg db ' = $'
    add_msg db ' + $'
    sub_msg db ' - $'
    mul_msg db ' * $'
    div_msg db ' / $'
    mod_msg db ' % $'
    power_msg db '^$'
    square_msg db '^2 = $'
    cube_msg db '^3 = $'
    
    ; Error messages
    error_msg db 13,10,'Error: Invalid choice! Press any key...$'
    div_zero_msg db 13,10,'Error: Division by zero!$'
    press_any_key db 13,10,10,'Press any key to continue...$'
    
    ; Variables
    choice db ?
    num1 dw ?
    num2 dw ?
    result dw ?
    remainder dw ?
    
.code
main proc
    mov ax, @data
    mov ds, ax
    
start_menu:
    ; Clear screen
    call clear_screen
    
    ; Display menu
    mov ah, 09h
    lea dx, menu
    int 21h
    
    ; Get user choice
    call get_char
    mov choice, al
    
    ; Validate choice
    cmp al, '1'
    jb invalid_choice
    cmp al, '8'
    ja invalid_choice
    
    ; Clear screen after valid choice
    call clear_screen
    
    ; Execute chosen operation
    cmp choice, '1'
    je addition
    cmp choice, '2'
    je subtraction
    cmp choice, '3'
    je multiplication
    cmp choice, '4'
    je division
    cmp choice, '5'
    je modulus
    cmp choice, '6'
    je power
    cmp choice, '7'
    je square
    cmp choice, '8'
    je cube
    
addition:
    call get_two_numbers
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, add_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    mov ax, num1
    add ax, num2
    call print_number
    jmp wait_and_continue
    
subtraction:
    call get_two_numbers
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, sub_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    mov ax, num1
    sub ax, num2
    call print_number
    jmp wait_and_continue
    
multiplication:
    call get_two_numbers
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, mul_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    mov ax, num1
    mov bx, num2
    mul bx
    call print_number
    jmp wait_and_continue
    
division:
    call get_two_numbers
    cmp num2, 0
    je division_by_zero
    
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, div_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    
    mov ax, num1
    mov bx, num2
    xor dx, dx
    div bx
    mov result, ax
    mov remainder, dx
    
    mov ax, result
    call print_number
    
    cmp remainder, 0
    je wait_and_continue
    
    mov ah, 02h
    mov dl, ' '
    int 21h
    mov dl, '('
    int 21h
    mov dl, 'R'
    int 21h
    mov dl, '='
    int 21h
    mov ax, remainder
    call print_number
    mov dl, ')'
    int 21h
    jmp wait_and_continue
    
modulus:
    call get_two_numbers
    cmp num2, 0
    je division_by_zero
    
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, mod_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    
    mov ax, num1
    mov bx, num2
    xor dx, dx
    div bx
    mov ax, dx      ; Remainder is in DX
    call print_number
    jmp wait_and_continue
    
power:
    call get_two_numbers
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, power_msg
    int 21h
    mov ax, num2
    call print_number
    mov ah, 09h
    lea dx, equals_msg
    int 21h
    
    call calculate_power
    mov ax, result
    call print_number
    jmp wait_and_continue
    
square:
    mov ah, 09h
    lea dx, single_num_prompt
    int 21h
    call get_number
    mov num1, ax
    
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, square_msg
    int 21h
    
    mov ax, num1
    mov bx, num1
    mul bx
    call print_number
    jmp wait_and_continue
    
cube:
    mov ah, 09h
    lea dx, single_num_prompt
    int 21h
    call get_number
    mov num1, ax
    
    mov ah, 09h
    lea dx, result_msg
    int 21h
    mov ax, num1
    call print_number
    mov ah, 09h
    lea dx, cube_msg
    int 21h
    
    mov ax, num1
    mov bx, num1
    mul bx      ; Square first
    mov bx, num1
    mul bx      ; Multiply by num1 again to get cube
    call print_number
    jmp wait_and_continue
    
division_by_zero:
    mov ah, 09h
    lea dx, div_zero_msg
    int 21h
    jmp wait_and_continue
    
invalid_choice:
    mov ah, 09h
    lea dx, error_msg
    int 21h
    call get_char  ; Wait for any key
    jmp start_menu

wait_and_continue:
    ; Display "Press any key to continue..." message
    mov ah, 09h
    lea dx, press_any_key
    int 21h
    
    ; Wait for any key
    call get_char
    
    ; Return to menu
    jmp start_menu

main endp

; Procedure to clear screen
clear_screen proc
    mov ax, 0003h  ; Clear screen using BIOS interrupt
    int 10h
    ret
clear_screen endp

; Procedure to get a character
get_char proc
    mov ah, 01h
    int 21h
    ret
get_char endp

; Procedure to get two numbers
get_two_numbers proc
    mov ah, 09h
    lea dx, num1_prompt
    int 21h
    call get_number
    mov num1, ax
    
    mov ah, 09h
    lea dx, num2_prompt
    int 21h
    call get_number
    mov num2, ax
    ret
get_two_numbers endp

; Procedure to get a decimal number from input
get_number proc
    push bx
    push cx
    push dx
    
    xor bx, bx      ; BX will store the final number
    mov cx, 10      ; Base 10 for decimal
    
input_loop:
    mov ah, 01h
    int 21h
    
    cmp al, 0Dh     ; Enter key pressed?
    je input_done
    
    cmp al, '0'
    jb input_loop   ; If below '0', ignore
    cmp al, '9'
    ja input_loop   ; If above '9', ignore
    
    ; Convert ASCII to digit
    sub al, '0'
    mov ah, 0       ; Clear AH (AL contains the digit)
    
    ; Save the digit
    push ax
    
    ; BX = BX * 10
    mov ax, bx
    mul cx          ; AX = BX * 10
    mov bx, ax
    
    ; Add the new digit
    pop ax
    add bx, ax      ; BX = BX + new digit
    
    jmp input_loop
    
input_done:
    mov ax, bx      ; Return result in AX
    pop dx
    pop cx
    pop bx
    ret
get_number endp

; Procedure to print a decimal number
print_number proc
    push ax
    push bx
    push cx
    push dx
    
    mov bx, 10
    xor cx, cx
    
    ; Handle zero case
    cmp ax, 0
    jne convert_loop
    mov dl, '0'
    mov ah, 02h
    int 21h
    jmp print_done
    
convert_loop:
    xor dx, dx
    div bx
    push dx
    inc cx
    test ax, ax
    jnz convert_loop
    
print_loop:
    pop dx
    add dl, '0'
    mov ah, 02h
    int 21h
    loop print_loop
    
print_done:
    pop dx
    pop cx
    pop bx
    pop ax
    ret
print_number endp

; Procedure to calculate power (num1 ^ num2)
calculate_power proc
    push bx
    push cx
    push dx
    
    mov ax, 1       ; Start with result = 1
    mov cx, num2    ; Counter = exponent
    
    cmp cx, 0
    je power_done   ; If exponent is 0, result is 1
    
power_loop:
    mov bx, num1
    mul bx          ; AX = AX * num1
    loop power_loop
    
power_done:
    mov result, ax
    pop dx
    pop cx
    pop bx
    ret
calculate_power endp

end main