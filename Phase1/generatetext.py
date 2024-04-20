import nltk
import random
import string

nltk.download('words')

english_words = set(nltk.corpus.words.words())

words_by_letter = {}

for letter in string.ascii_lowercase: words_by_letter[letter] = [word for word in english_words if word.lower().startswith(letter)]

with open('testcase.txt', 'w') as file:
    for letter, words in words_by_letter.items():
        file.write('\n'.join(random.sample(words, 50)))
        file.write('\n\n')
