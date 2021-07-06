#Shows FT_USER environment groups

#groups:print the groups a user is in
#tr:traslate the result (here converting commas with spaces)

#groups $FT_USER | tr ' ' ','
groups $FT_USER | sed 's/ /,/g' | tr -d '\n'
