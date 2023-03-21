Imports System
Imports System.Threading
Module Module1
    Sub Main()
        Dim firstname As String
        Dim lastname As String
        Dim middleinit As Char
        Dim section As String
        Dim age As Integer
        Dim firstnum As Single
        Dim secondnum As Single
        Dim sum As Single

        Console.WriteLine(vbTab & " ---------------------------------------------")
        Console.WriteLine(vbTab & "|                 PRACTICE 2                  |")
        Console.WriteLine(vbTab & " ---------------------------------------------" & vbCrLf)
        Thread.Sleep(1000)
        Console.WriteLine(vbTab & "   Hello User! You may answer the following   ")
        Console.WriteLine(vbTab & " |-------------------------------------------|" & vbCrLf)
        Thread.Sleep(1000)

        Console.Write(vbTab & "  First Name: ")
        firstname = Console.ReadLine()

        Console.Write(vbTab & "  Middle Initial: ")
        middleinit = Console.ReadLine()

        Console.Write(vbTab & "  LastName: ")
        lastname = Console.ReadLine()

        Console.Write(vbTab & "  Section: ")
        section = Console.ReadLine()

        Console.Write(vbTab & "  Age: ")
        age = Console.ReadLine()

        Console.WriteLine()
        Console.WriteLine(vbTab & " ----------------------------------------------------------------------------------------")
        Console.WriteLine(vbTab & $" Hi, I am {firstname} {middleinit}. {lastname}, {age} years old, from {section}. Learning VB.NET is easy and fun.")
        Console.WriteLine(vbTab & " ----------------------------------------------------------------------------------------" & vbCrLf)

        Thread.Sleep(1000)
        Console.WriteLine(vbTab & "Press any key to continue")
        Console.WriteLine(vbTab & "\------------------------/")
        Console.ReadKey()
        Console.WriteLine()

        Thread.Sleep(1000)
        Console.WriteLine(vbTab & "      Hello User! You may enter two number    ")
        Console.WriteLine(vbTab & " |-------------------------------------------|" & vbCrLf)

        Thread.Sleep(1000)
        Console.Write(vbTab & "  First Number: ")
        firstnum = Console.ReadLine()

        Console.Write(vbTab & "  Second Number: ")
        Secondnum = Console.ReadLine()

        Sum = firstnum + Secondnum

        Console.WriteLine()
        Console.WriteLine()
        Console.WriteLine(vbTab & " ------------------------------------")
        Console.WriteLine(vbTab & $"The sum of {firstnum} and {secondnum} is {sum}")
        Console.WriteLine(vbTab & " ------------------------------------" & vbCrLf)

        Thread.Sleep(1000)
        Console.WriteLine(vbTab & "   Press any key to Exit  ")
        Console.WriteLine(vbTab & "\------------------------/")
        Console.ReadKey()
        Console.Clear()

        Console.WriteLine(vbTab & "|------------------------------------------------|")
        Console.WriteLine(vbTab & "|   This is Presented By Mark Daniel C. Estorba  |")
        Console.WriteLine(vbTab & "|                From BSCpE - 1A                 |")
        Console.WriteLine(vbTab & "|------------------------------------------------|")
        Thread.Sleep(3000)
    End Sub
End Module
