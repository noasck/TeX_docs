# TeX_docs
TeX documents in different fields: Calculus, Physics, Numerical Math, etc.

--------------------------------
Fist of all, template I use in my documents: [Untitled template...](https://github.com/noasck/TeX_docs/blob/main/Untitled.tex)
## Content you may like
1. Stability theory lectures [TeX Source...](https://github.com/noasck/TeX_docs/tree/main/Stability%20theory)

Notice, that stabtheory included in release with appropriative tag.

2. Probability theory lectures [TeX Source...](https://github.com/noasck/TeX_docs/tree/main/Probability%20Theory/Lectures)

Repository contains **vector graphics** source provided in a *svg* files. All pictures were created with ```Inkscape``` editor.

-------------------------------

## Snippets

Snippets are important part of my TeX environment. You can use them with ```Atom``` editor with ```atom-latex``` extension installed.


``` yaml
'.source.pweave.md, .source.gfm, .text.md':
  'latex inline':
    'prefix': 'latex'
    'body': '<img src=\\\"https:\\\/\\\/render.githubusercontent.com\\\/render\\\/math?math=$1 \\\">'
'.tex':
  'limit':
    'prefix': 'lim'
    'body': ' \\\\lim\\\\limits_{$1\\\\to ${2: \\\\infty}}{$3} = $4'
  'summ':
    'prefix': 'sum'
    'body': ' \\\\sum\\\\limits_{$1 = $2}^{${3: \\\\infty}}{$4}'
  'Integr a_b':
    'prefix': 'int'
    'body': ' \\\\int\\\\limits_{$1}^{${2: +\\\\infty}}{$3}'
  'limit_to_o':
    'prefix': 'lim0'
    'body': ' \\\\lim\\\\limits_{$1\\\\to0}{$2} $3'
  'fraction':
    'prefix': '\/'
    'body': '\\\\frac{$1}{$2} $3'
  'epsilon':
    'prefix': 'eps'
    'body': '\\\\varepsilon $1'
  'sigma':
    'prefix': 'g'
    'body': '\\\\sigma $1'
  'module':
    'prefix': '\|'
    'body': '\\\\left\\\| $1 \\\\right\\\| $2'
  'big_round_bracket':
    'prefix': 'bir'
    'body': '\\\\left\\\( $1 \\\\right\\\) $2'
  'braket':
    'prefix': 'braket'
    'body': '\\\\left\\\\lbrace $1 \\\\right\\\\rbrace $2'
  'neq':
    'prefix': '\!\='
    'body': '\\\\neq '
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
  'bmatrix':
    'prefix': 'bmatrix'
    'body': '\\\\begin\\\{bmatrix\\\}\n $1 \n\\\\end\\\{bmatrix\\\}'
  'alpha':
    'prefix': 'alp'
    'body': '\\\\alpha'
  'rational':
    'prefix': 'R',
    'body': '\\\\mathbb\\\{R\\\}'
  'probability':
    'prefix': 'P',
    'body': '\\\\mathbb\\\{P\\\} \\\\left\\\\lbrace $1 \\\\right\\\\rbrace'
  'natural':
    'prefix': 'N',
    'body': '\\\\mathbb\\\{N\\\}'
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
    'body': '\\\\sin\\\{\\\($1\\\)\\\} '
  'cos':
    'prefix': 'cos'
    'body': '\\\\cos\\\{\\\($1\\\)\\\} '
  'tg':
    'prefix': 'tg'
    'body': '\\\\tg\\\{\\\($1\\\)\\\} '
  'varphi':
    'prefix': 'fi'
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
  'includegraphics':
    'prefix': 'image'
    'body': '\\\\begin{center} \\\\includegraphics\\\[scale=$1\\\]\\\{$2\\\} \\\\end\\\{center\\\}'

```
