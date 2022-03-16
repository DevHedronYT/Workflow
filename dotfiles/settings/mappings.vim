" Just some mappings, some of them
" I don't even use properly while
" some I do

let mapleader = ""

nnoremap <F1> :w <Enter>
nnoremap <F2> :!gcc -o %:r % -std=c99 && ./%:r<Enter>
nnoremap <F3> :!g++ -o %:r % -std=c++14 && ./%:r<Enter>
nnoremap <F4> :!python3 % <Enter>
nnoremap <F5> :!make <Enter>

nnoremap <C-h> <C-w>k
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>h
nnoremap <C-l> <C-w>l
nnoremap <C-b> :m+1<Enter><Esc>
nnoremap <C-u> :m-2<Enter><Esc>
nnoremap h  j
nnoremap k  h
nnoremap j  k
vnoremap h  j
vnoremap k  h
vnoremap j  k
map fe $
map fd 0 
map ffd gg
map ffe G
map fh }}
map fj {{
map cc :
map cf :wq<Enter>
map esc :<Esc>
map gc gq
map ss :w<Enter>


