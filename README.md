# TeX_docs
TeX documents in different fields: Calculus, Physics, Numerical Math, etc.

--------------------------------
## Getting started
First of all, the template I use in my documents: [Untitled template...](https://github.com/noasck/TeX_docs/blob/main/Untitled.tex)

Another useful resource is [Latex Workbook for Beginners...](https://github.com/noasck/TeX_docs/blob/main/Latex%20for%20beginners.pdf)

And the last one, my own post with [First steps in LaTeX](https://telegra.ph/Dive-into-LaTeX-10-18)
## Content you may like
1. Stability theory lectures **UKR** [TeX Source...](https://github.com/noasck/TeX_docs/tree/main/Stability%20theory)

Notice, that ```stabtheory_lec<num>``` included in **Release** with appropriative tag.

2. Probability theory lectures **UKR** [TeX Source...](https://github.com/noasck/TeX_docs/tree/main/Probability%20Theory/Lectures) [Final PDF...](https://github.com/noasck/TeX_docs/releases/download/pt_final/default.pdf)

Repository contains **vector graphics** source provided in a *svg* files. All pictures were created with ```Inkscape``` editor.

-------------------------------
## Best practices
For making typesetting correctly you need to avoid bad practices or legacy\deprecated *LaTeX* commands and packages. There is my own list of recommendations that you can use as a styleguide.

1. Use defined **theorem styles** like ```defo, teo, boxteo, proof```, etc.
2. Use **LaTeX Math mode** ```\[ \]``` for display math and ```\( \)``` for inline math instead of **TeX** ```$ $  $$ $$```.
3. In curly brackets (like in sets or sequences) use ```\  \big| \  ``` as a separator.
4. Use ```\bigg|_{}^{}``` for **subtractions/restrictions** :  ![image](https://user-images.githubusercontent.com/39808592/119129084-21572f80-ba3f-11eb-96a5-10ee60aa12cf.png).
-------------------------------

## Snippets

Snippets are an important part of my TeX environment. You can use them with ```Atom``` editor with ```atom-latex``` extension installed.


``` yaml
'.source.pweave.md, .source.gfm, .text.md':
  'latex inline':
    'prefix': 'latex'
    'body': '<img src=\\\"https:\\\/\\\/render.githubusercontent.com\\\/render\\\/math?math=$1 \\\">'
'.tex':
  'limit':
    'prefix': 'lim'
    'body': ' \\\\lim\\\\limits_{$1\\\\to $2}{$3}'
  'summ':
    'prefix': 'sum'
    'body': ' \\\\sum\\\\limits_{$1}^{$2}{$3}'
  'min':
    'prefix': 'min'
    'body': ' \\\\min\\\\limits_{$1}{$2}'
  'max':
    'prefix': 'max'
    'body': ' \\\\max\\\\limits_{$1}{$2}'
  'sup':
    'prefix': 'sup'
    'body': ' \\\\sup\\\\limits_{$1}{$2}'
  'inf':
    'prefix': 'inf'
    'body': ' \\\\inf\\\\limits_{$1}{$2}'
  'multiplication':
    'prefix': 'mult'
    'body': ' \\\\prod\\\\limits_{$1}^{$2}{$3}'
  'Integr a_b':
    'prefix': 'int'
    'body': ' \\\\int\\\\limits_{$1}^{$2}{$3}'
  'fraction':
    'prefix': '\/'
    'body': '\\\\frac{$1}{$2}'
  'dfraction':
    'prefix': 'd\/'
    'body': '\\\\dfrac{$1}{$2}'
  'epsilon':
    'prefix': 'eps'
    'body': '\\\\varepsilon'
  'sigma':
    'prefix': 'g'
    'body': '\\\\sigma $1'
  'module':
    'prefix': '\|'
    'body': '\\\\left\\\| $1 \\\\right\\\|'
  'big_round_bracket':
    'prefix': 'bir'
    'body': '\\\\left\\\( $1 \\\\right\\\)'
  'big_squared_bracket':
    'prefix': 'bsq'
    'body': '\\\\left\\\[ $1 \\\\right\\\]'
  'braket':
    'prefix': 'braket'
    'body': '\\\\left\\\\lbrace $1 \\\\right\\\\rbrace'
  'neq':
    'prefix': '\!\='
    'body': '\\\\neq '
  'dlra':
    'prefix': '\=\>'
    'body': '\\\\Longrightarrow '
  'dlla':
    'prefix': '\<\='
    'body': '\\\\Longleftarrow '
  'lla':
    'prefix': '\<\-'
    'body': '\\\\longleftarrow '
  'dllra':
    'prefix': '\<\=\>'
    'body': '\\\\Longleftrightarrow '
  'lra':
    'prefix': '\-\>'
    'body': '\\\\xrightarrow\\\[$1\\\]\\\{$2\\\}'
  'geq':
    'prefix': '\>\='
    'body': '\\\\geq '
  'leq':
    'prefix': '\<\='
    'body': '\\\\leq '
  'proof':
    'prefix': 'proof'
    'body': '\\\\begin\\\{proof\\\}\n $1 \n\\\\end\\\{proof\\\}'
  'theorem':
    'prefix': 'bteo'
    'body': '\\\\begin\\\{boxteo\\\}\n $1 \n\\\\end\\\{boxteo\\\}'
  'gathered':
    'prefix': 'gathered'
    'body': '\\\\begin\\\{gathered\\\}\n $1 \n\\\\end\\\{gathered\\\}'
  'cases':
    'prefix': 'cases'
    'body': '\\\\begin\\\{cases\\\}\n $1 \n\\\\end\\\{cases\\\}'
  'dcases':
    'prefix': 'dcases'
    'body': '\\\\begin\\\{dcases\\\}\n $1 \n\\\\end\\\{dcases\\\}'
  'center':
    'prefix': 'center'
    'body': '\\\\begin\\\{center\\\}\n $1 \n\\\\end\\\{center\\\}'
  'example':
    'prefix': 'example'
    'body': '\\\\begin\\\{example\\\}\n $1 \n\\\\end\\\{example\\\}'
  'definition':
    'prefix': 'defo'
    'body': '\\\\begin\\\{defo\\\}\n $1 \n\\\\end\\\{defo\\\}'
  'bmatrix':
    'prefix': 'bmatrix'
    'body': '\\\\begin\\\{bmatrix\\\}\n $1 \n\\\\end\\\{bmatrix\\\}'
  'vmatrix':
    'prefix': 'vmatrix'
    'body': '\\\\begin\\\{vmatrix\\\}\n $1 \n\\\\end\\\{vmatrix\\\}'
  'split':
    'prefix': 'split'
    'body': '\\\\begin\\\{split\\\}\n $1 \n\\\\end\\\{split\\\}'
  'alpha':
    'prefix': 'alpha'
    'body': '\\\\alpha'
  'beta':
    'prefix': 'beta'
    'body': '\\\\beta'
  'rational':
    'prefix': 'R',
    'body': '\\\\mathbb\\\{R\\\}'
  'probability':
    'prefix': 'P',
    'body': '\\\\mathbb\\\{P\\\} \\\\left\\\\lbrace $1 \\\\right\\\\rbrace'
  'natural':
    'prefix': 'N',
    'body': '\\\\mathbb\\\{N\\\}'
  'vector':
    'prefix': 'vect',
    'body': '\\\\overrightarrow\\\{$1\\\}'
  'mean':
    'prefix': 'E',
    'body': '\\\\mathbb\\\{E\\\}'
  'covariance':
    'prefix': 'C',
    'body': '\\\\mathbb\\\{C\\\}'
  'variance':
    'prefix': 'D',
    'body': '\\\\mathbb\\\{D\\\}'
  'overline':
    'prefix': 'not',
    'body': '\\\\overline\\\{$1\\\}'
  'sin':
    'prefix': 'sin'
    'body': '\\\\sin\\\{$1\\\}'
  'cos':
    'prefix': 'cos'
    'body': '\\\\cos\\\{$1\\\}'
  'derivative':
    'prefix': 'd'
    'body': '\\\\mathrm{d}'
  'tg':
    'prefix': 'tg'
    'body': '\\\\tg\\\{$1\\\}'
  'Math mode':
    'prefix': 'q_uation'
    'body': '\\\\\\\[\\\n $1 \\\n\\\\\\\]'
  'Inline Math mode':
    'prefix': 'f_ormulae'
    'body': '\\\\\\\( $1 \\\\\\\)'
  'separator':
    'prefix': 'sep1'
    'body': '\\\\  \\\\big\\\| \\\\  $1'
  'restriction':
    'prefix': 'restr'
    'body': '\\\\bigg\\\|_\\\{$1\\\}^\\\{\\\}'
  'varphi':
    'prefix': 'phi'
    'body': '\\\\varphi'
  'omega':
    'prefix': 'w'
    'body': '\\\\omega'
  'lambda':
    'prefix': 'k'
    'body': '\\\\lambda'
  'xi':
    'prefix': 'xi'
    'body': '\\\\xi'
  'eta':
    'prefix': 'eta'
    'body': '\\\\eta'
  'includegraphics':
    'prefix': 'image'
    'body': '\\\\includegraphics\\\[scale=$1\\\]\\\{$2\\\}'
```
