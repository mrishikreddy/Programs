
const API_URL = 'http://127.0.0.1:8000/cbexp';

async function fetchData(question) {
  try {
    const response = await fetch(API_URL, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',

      },
      body: JSON.stringify({ "question":question,"API":276135127}),
    });

    if (!response.ok) {
      throw new Error('Network response was not ok ' + response.statusText);  
    }
    const data = await response.json();
    console.log(data);
  } catch (error) {
    console.error('There was a problem with the fetch operation:', error);
  }
}

var question = "Hi";
fetchData(question);
