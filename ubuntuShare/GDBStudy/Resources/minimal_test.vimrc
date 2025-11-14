" Minimal Vim config ONLY for testing auto-reload
" Use this to test: vim -u minimal_test.vimrc testfile.txt

" Essential settings
set nocompatible
set autoread
set updatetime=500

" Auto-reload triggers
autocmd FocusGained,BufEnter,CursorHold * checktime

" Notification
autocmd FileChangedShellPost *
  \ echohl ErrorMsg | echo "✓ FILE RELOADED at " . strftime("%H:%M:%S") | echohl None

" Show when focus changes (for debugging)
autocmd FocusGained * echo ">>> FOCUS GAINED <<<"
autocmd FocusLost * echo ">>> FOCUS LOST <<<"

echo "Minimal auto-reload config loaded. Open same file in 2 panes and test!"
