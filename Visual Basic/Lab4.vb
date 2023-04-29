Imports System.Reflection
Imports System.Threading

Module Program
    Dim newprogram As New Lab4
    Sub Main()
        newprogram.main()
    End Sub
End Module

Class Lab4
    Dim inputnum As Integer
    Dim opt As ConsoleKeyInfo
    Public Sub main()

        Mainmenu()
    End Sub
    Sub Mainmenu()

        Console.WriteLine("Group Baby")
        Console.WriteLine("1 - Fibonacci Sequence")
        Console.WriteLine("2 - Prime Numbers")
        Console.WriteLine("3 - Decimal to Binary")
        Console.WriteLine("4 - Exit")
        Console.WriteLine("Your choice: ")
        opt = Console.ReadKey()
        Select Case opt.KeyChar
            Case "1"
                Console.Clear()
                Fibonacci()
            Case "2"
                Console.Clear()
                Primenumbers()
            Case "3"
                Console.Clear()
                DecToBinary()
            Case Else
                Console.Clear()
                Mainmenu()
        End Select
    End Sub
    Private Sub Fibonacci()
        Dim firstnum As Integer = 0
        Dim secondnum As Integer = 1
        Dim preceedingnum As Integer = 0

        Console.Write("input a number: ")
        inputnum = Console.ReadLine()

        Console.WriteLine("Fibonacci series up to " & inputnum & ":")
        While (firstnum <= inputnum)
            Console.WriteLine(firstnum)
            preceedingnum = firstnum + secondnum
            firstnum = secondnum
            secondnum = preceedingnum
        End While
        retry()
    End Sub
    Private Sub Primenumbers()
        Console.Write("input a number: ")
        inputnum = Console.ReadLine()
        Dim primes(inputnum) As Boolean

        For i As Integer = 2 To inputnum
            primes(i) = True
        Next

        For i As Integer = 2 To Math.Sqrt(inputnum)
            If primes(i) Then
                For j As Integer = i * i To inputnum Step i
                    primes(j) = False
                Next
            End If
        Next

        Console.WriteLine("Prime numbers up to " & inputnum & ":")
        For i As Integer = 2 To inputnum
            If primes(i) Then
                Console.WriteLine(i & " ")
            End If
        Next
        retry()
    End Sub
    Private Sub DecToBinary()
        Console.Write("input a number: ")
        inputnum = Console.ReadLine()
        Dim input As Integer = inputnum
        Dim binary As String = ""

        While inputnum > 0
            binary = (inputnum Mod 2).ToString() & binary
            inputnum \= 2
        End While

        Console.WriteLine("The Binary of {0}:", input)
        Console.WriteLine(binary)
        retry()
    End Sub
    Sub retry()
        Dim opt1 As New ConsoleKeyInfo
        Console.WriteLine("Do you want to try again?")
        Console.WriteLine("Press 1 if YES and ANYKEY to go back!!!")
        Console.WriteLine("Your choice: ")
        opt1 = Console.ReadKey()
        Select Case opt1.KeyChar
            Case "1"
                If opt.Key = ConsoleKey.D1 Then
                    Console.Clear()
                    Fibonacci()


                ElseIf opt.Key = ConsoleKey.D2 Then
                    Console.Clear()
                    Primenumbers()
                ElseIf opt.Key = ConsoleKey.D3 Then
                    Console.Clear()
                    DecToBinary()
                Else
                    Console.Clear()
                    Mainmenu()
                End If

            Case Else
                Console.Clear()
                Mainmenu()
        End Select
    End Sub

End Class
