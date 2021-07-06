cat /etc/passwd |
grep -v "#" |                     # Non-comment lines
sed -n 'n;p' | cut -d ':' -f1 |   # Remove info after login name; print lines 2,4,6,8,...
rev |                             # Reverse each name
sort -r |                         # Sort in reverse dictionary order
sed -n "$FT_LINE1,$FT_LINE2 p" |  # Select lines in the range $FT_LINE1 to $FT_LINE2 inclusive
sed "s/$/, /" |
tr -d "\n" |                      # Convert newlines to commas
sed "s/, $/./g" |                 # Convert final comma to dot
tr -d "\n"
