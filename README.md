# Interviu CM/HTML Basic

**Submission Guideline:** Commit your submission to the GitHub repo. Append the two exercises as two separate folders in the commit.

## Exercise 1.

### HTML part

Create a single web page for your photo album. The result should be a  **single**  HTML file named  `index.html`. The HTML file should meet the following criteria:

1.  The document should just contain content markup (no style markup, no JavaScript).
2.  Where appropriate, the document should use the HTML representation of special characters.
3.  The document should be a single, valid HTML5 document, that is parsed correctly by the  [W3C ValidatorLinks to an external site.](https://validator.w3.org/nu/#file). Make sure your declare the document's natural language and character encoding.
4.  As a first crude version of your photo album, include an HTML  `table`  showing photos of famous authors in one column, along with some metadata that describes what is depicted on the photo in the other columns:
    -   The table should have exactly five columns, with for each item a column named:
        -   **`image`**  (a URI pointing to a representative image of the author on the web),
        -   **`author`**  (the name of the author in a small string),
        -   **`alt`**  (a concise description of the image suitable to be used in an  `img alt`  tag),
        -   **`tags`**  (a comma-separated list of tags to associated with your image), and
        -   **`description`**  (a longer description describing the image).The table should have the specification of at least 3 authors already filled in. An example row could contain:
    
    -   an image using  `https://en.wikipedia.org/wiki/Richard_Feynman#/media/File:Richard_Feynman_Nobel.jpg`
    -   "Richard Feynman" in the author column
    -   "Image of Nobel laureate Richard Feynman" as the alt text column
    -   "physics, nobel_prize, man" as the tags
    -   "Nobel laureate Richard Feynman is the author of the famous The Feynman Lectures on Physics, perhaps his most accessible work for anyone with an interest in physics, compiled from lectures to Caltech undergraduates in 1961–64." as a long descriptive text
    
    -   You are free to reorder the columns in any order you like, for example if you like the image to be in another column.
    -   Note that all images you use should be images publicly available on the Web. You should link the images into your document by referring to their URLs. You are  **not**  allowed to include your own image files in your submission.

### CSS part

Construct, again with the help of a text editor such as  `VS Code`, a single "responsive design" CSS style file. All your CSS code should be in this  `.css`  file, CSS code embedded in your HTML file will not be graded but penalized. The style file should have the following properties:

1.  The style should have rules that ensure a proper layout and style on a ordinary  **desktop**  or  **laptop**  screen, and make the interactive parts usable with input devices such a mouse and keyboard
2.  The style should have dedicated rules that are applied only during printing on  **PDF, paper or other "paged" device**. Think about what you would find useful and what would make the page easier to read. Think about how you would handle interactive elements when printing to paper. Be aware that many typographic conventions are different for print and screen, so think how you can optimize fonts, margins, text justification, heading sizes, page breaks and other properties to make your page look like a professional printed document instead of a standard web page print out.
3.  The style file should have dedicated rules that provides a good user experience (UX) on a  **small tablet or smart-phone**, that is, a device without mouse or traditional keyboard, and with a small touch screen (not larger than 320x480 pixels) that can be used in both portrait and landscape mode. Demonstrate you know how to use media queries and breakpoints to improve the UX on different devices. 
4.  The style sheet should be defined in a separate  `.css`  file, which contains valid CSS, that is, code parsed correctly by the CSS module of the (experimental)  [W3C ValidatorLinks to an external site.](https://validator.w3.org/nu/#file).
5.  The HTML file you made above should use the style sheet. To this end, include the appropriate definitions in the  `head`  element of the HTML file. You are only allowed to refer to your own CSS style file. You are not allowed to use any other CSS file (for example, the use of bootstrap.css is not allowed).
6.  Add  `class`  attributes to the elements in your HTML file where appropriate. Such classes should represent semantic markup relevant to a photo album (e.g. an image with class "favorite", or a paragraph "image license information") that provide the hooks for your style rules.
8.  Use images publicly available on the Web by using their URLs, do  **not**  include your own image files in your submission.
9.  Add, at the top or bottom of your  `index.html`  file, an extra section with a short browser compatibility report. In this report, you briefly summarize your experiences with testing the HTML and CSS markup of your page in different browsers. To test, use Google Chrome and at least one other browser. Report especially on how you tested the  Print  style and the tests of the different screen sizes. Also report on HTML5 and CSS constructs in your submission that work or worked differently in different browsers. If you took explicit measures to make something work well across multiple browsers, please indicate this explicitly (good examples may be awarded max 5 bonus points).

## Submission details

You have to submit a single zip file, your submission needs to contain your HTML and CSS file, nothing more, nothing less.

The zip filename needs to include the assignment number and your lab group number, for example "assign1-lab145.zip". You need to submit only once per group. In case Canvas would be down at the time of submission: this is not a valid excuse to miss the deadline. Try again some time later, and, in case you think you might miss the deadline, please notify us via wt.few@listserver.vu.nl.

## Appendix 1: List of HTML constructs to be used

Minimum set of HTML constructs

Document-level elements

`html`,  `head`,  `title`,  `body`,  `nav`

Sections, headings and paragraphs

`section`,  `h1`,  `h2`,  `p`

Various list forms

`ul`,  `ol`,  `dl`

Links (external, within document)

`a`, the  `id`  attribute

Tables

`table`,  `caption`,  `tr`,  `th`,  `td`

Figures

`figure`,  `img`,  `figcaption`

Text types

`em`,  `strong`,  `pre`

Other

`abbr`

Forms

Different variants of the  `type`  attribute on  `input`  (types other than text), appropriate use of the  `required`  attribute.

## Appendix 2: List of CSS constructs to be used

Using all the CSS constructs listed below is a minimum requirement. You are encouraged to also find effective usage for other CSS properties or constructs. For a list of style properties, you may consult  [http://www.w3.org/TR/CSS21/propidx.htmlLinks to an external site.](http://www.w3.org/TR/CSS21/propidx.html).

Minimum set of CSS 2.1 style properties

Margins

`margin-top`,  `margin-bottom`,  `margin-left`,  `margin-right`,  `margin`  (individual and shorthand notation)

Background

`background-color`,  `background-image`,  `background-repeat`,  `background`  (individual and shorthand notation)

Border

`border-color`,  `border-style`,  `border-spacing`,  `border-width`,  `border`  (individual and shorthand notation)

Text

`text-align`,  `text-decoration`,  `text-indent`,  `text-transform`

Foreground color

`color`

Fonts

`font-size`  (absolute/relative),  `font-weight`,  `font-style`,  `font-variant`,  `font-family`,  `font`(individual and shorthand notation)

Lists

`list-style-type`,  `list-style-position`,  `list-style-image`,  `list-style (individual and shorthand notation)`

Properties for paged media

`page-break-before`,  `page-break-after`,  `orphans`,  `widows`

Other

`caption-side`  (in tables),  `float`  (e.g. for images),  `vertical-align`

Link pseudo-classes

`:link`  `:visited`  `:hover`,  `:active`,  `:focus`,


## Part 2

[Polish notationLinks to an external site.](https://en.wikipedia.org/wiki/Polish_notation)  is a mathematical notation  in which operators  _precede_ their operands, in contrast to the more common infix notation, in which operators are placed _in between_ operands. Compare the two notations in this example:

-   infix notation: 2 + 3
-   Polish (prefix) notation: + 2 3

For this assignment, write a simple calculator using a _switch_ statement. The calculator should be able to evaluate simple expressions consisting of a number, an operator, and another number. Each number is an element of the set of real numbers (R). Each operator is an element of + , − , ∗ , /.

The program should read expressions in Polish notation, evaluate them, and print them, with the result, in infix notation. This process should repeat until the letter  _q_  (as in "quit") is entered in place of the operator. You can assume that only valid expressions will be entered.

An example of a correct execution of the program is shown below:

Enter the expression: + 2 3  
2 + 3 = 5  
Enter the expression: * 2.3  4  
2.3 * 4 = 9.2  
Enter the expression: q
