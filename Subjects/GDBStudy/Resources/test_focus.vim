" Test file to check if focus events work
" Run this in Vim with: vim -u test_focus.vim

set nocompatible
set autoread

" Log file for debugging
let g:focus_log = expand('/tmp/vim_focus_test.log')

" Clear log
call writefile(['=== Vim Focus Test Started ==='], g:focus_log)

" Test FocusGained event
autocmd FocusGained * call writefile([strftime('%H:%M:%S') . ' - FocusGained triggered'], g:focus_log, 'a')

" Test FocusLost event
autocmd FocusLost * call writefile([strftime('%H:%M:%S') . ' - FocusLost triggered'], g:focus_log, 'a')

" Test checktime
autocmd FocusGained,BufEnter * call writefile([strftime('%H:%M:%S') . ' - Running checktime'], g:focus_log, 'a') | checktime

" Test file change notification
autocmd FileChangedShellPost * call writefile([strftime('%H:%M:%S') . ' - File changed on disk!'], g:focus_log, 'a')

echo "Focus test loaded. Switch panes and check /tmp/vim_focus_test.log"
echo "Run: :!tail -f /tmp/vim_focus_test.log"
