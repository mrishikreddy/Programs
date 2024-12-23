from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def home(request):
    #return HttpResponse("Hello world")
    return render(request,"home.html",{'name':"Rishik"})

# def add(request):
#     val1 = int(request.GET["num1"])
#     val2 = int(request.GET["num2"])
#     res = val1+val2
#     print(res)
#     return render(request,"result.html",{"result":res})

def add(request):
    val1 = int(request.POST["num1"])
    val2 = int(request.POST["num2"])
    res = val1+val2
    print(res)
    return render(request,"result.html",{"result":res})