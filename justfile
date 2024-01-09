test:
    node_modules/.bin/tree-sitter generate &&\
    node_modules/.bin/tree-sitter test

highlight:
    node_modules/.bin/tree-sitter generate &&\
    node_modules/.bin/tree-sitter highlight transcript

watch cmd='test':
    find {queries/*,*.js,*.json,src/*,corpus/*} | entr -c just {{cmd}}

