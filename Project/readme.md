# Shading Arbitrary Closed Regions

**Usage**  
optional arguments:
  -h, --help            show this help message and exit  
  -c COLOR, --color COLOR
                        Choose a color  
  -p PATTERN, --pattern PATTERN
                        Choose a shading pattern  
  -f FILE, --file FILE  Choose an input file  
  -o OUT, --out OUT     Choose output file  
  -cp CUSTOM_PATTERN, --custom-pattern CUSTOM_PATTERN
                        Choose a file to use as custom fill pattern.  
                        
**Example usage:**    

`python3 refactor.py -f smiley.png -o out.png -p custom -cp custom.png`  
will use `custom.png` as a fill pattern for `smiley.png` and save the result to `out.png`. Specifying `-p custom` is necessary to use a custom fill pattern.
