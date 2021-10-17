" NERDTree settings
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif
let g:NERDTreeDirArrowExpandable = '▸'
let g:NERDTreeDirArrowCollapsible = '▾'

" Cursor settings
set guicursor=n-v-c:block,i-ci-ve:ver25,r-cr:hor20,o:hor50
		  \,a:blinkwait700-blinkoff400-blinkon250-Cursor/lCursor
		  \,sm:block-blinkwait175-blinkoff150-blinkon175

" I think unnamed for Win32
set clipboard=unnamedplus

" Splits window to right
" instead of left
set splitbelow splitright

" Allows you to backspace on 
" other characters as well
set backspace=indent,eol,start

" Enables cursor line and column 
" highlights
set cursorline
set cursorcolumn

" Sets syntax on 
syntax on

" Sets line number
set number
highlight Normal ctermbg=None
highlight LineNr ctermfg=DarkGrey
hi LineNr ctermfg=8

" Enables mouse
set mouse=a

" Important for 
" some options 
" if I recall
" correctly
filetype plugin on

" Adds everything
" to path so when
" I am programming 
" I can just do 
" gf and go to that
" file
set path+=**

" Allows auto completion
" in neovim commands
set wildmenu 
set wildmode=longest:list,full

" Indent
set smarttab
set cindent
set tabstop=4
set shiftwidth=4
set expandtab

