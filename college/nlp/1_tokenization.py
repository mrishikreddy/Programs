import nltk
sen = "This is Tuesday Morning and I am going for a walk"
tokens = nltk.word_tokenize(sen)
print(tokens)
tagged = nltk.pos_tag(tokens)
print(tagged)
print(tagged[0:6])