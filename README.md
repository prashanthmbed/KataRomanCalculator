# KataRomanCalculator
A library which allows addition and subtraction of Roman numerals.

Roman Numeral rules
--------------------
-Roman numerals consist of the following letters: I, V, X, L, C, D, and M which mean one, five, ten, fifty, hundred, five hundred and     one  thousand respectively.
-As we are in Rome there are no such things as decimals or integers, we need to do this with the strings.
 An example would be &quot;XIV&quot; + &quot;LX&quot; = &quot;LXXIV.&quot;
-Numerals can be concatenated to form a larger numeral (&quot;XX&quot; + &quot;II&quot; = &quot;XXII&quot;).
-If a lesser numeral is put before a bigger it means subtraction of the lesser from the bigger (&quot;IV&quot; means four, &quot;CM&quot;  means ninehundred).
-If the numeral is I, X or C you can&#39;t have more than three (&quot;II&quot; + &quot;II&quot; = &quot;IV&quot; not “IIII”).
-If the numeral is V, L or D you can&#39;t have more than one (&quot;D&quot; + &quot;D&quot; = &quot;M&quot; not “DD”).
