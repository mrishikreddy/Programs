from django.views.decorators.csrf import csrf_exempt
from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status

@csrf_exempt  # This disables CSRF protection for this view
@api_view(['POST'])
def exp(request):
    try:
        question = request.data.get('question')
        API_KEY = request.data.get('API')
        if API_KEY!=276135127:
            return Response(status=status.HTTP_400_BAD_REQUEST)
        if not question:
            return Response(status=status.HTTP_400_BAD_REQUEST)

        answer = "This is the answer"
        return Response({"answer": answer}, status=status.HTTP_200_OK)
    except Exception as e:
        return Response({"error": str(e)}, status=status.HTTP_500_INTERNAL_SERVER_ERROR)
