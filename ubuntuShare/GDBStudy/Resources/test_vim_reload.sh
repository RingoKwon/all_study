#!/bin/bash
# Diagnostic script to test Vim auto-reload in tmux

echo "=== Vim Auto-Reload Diagnostic ==="
echo ""

# Check if we're in tmux
if [ -z "$TMUX" ]; then
    echo "❌ Not running in tmux. Please run this inside tmux."
else
    echo "✓ Running in tmux"
fi

# Check focus-events setting
echo ""
echo "Checking tmux focus-events setting:"
tmux show-options -g | grep focus-events

# Check if focus events are reaching vim
echo ""
echo "Testing focus events (press Ctrl+C to stop):"
echo "Run this command and switch between tmux panes:"
echo "  sed -n l < /dev/tty"
echo ""
echo "You should see escape sequences like '^[[I' (focus in) and '^[[O' (focus out)"
echo ""

# Vim check
echo "To test in Vim, run these commands inside Vim:"
echo "  :set autoread?"
echo "  :set updatetime?"
echo "  :autocmd FocusGained"
echo ""
echo "Expected output:"
echo "  autoread should be 'on'"
echo "  updatetime should be <= 1000"
echo "  autocmd FocusGained should show your autocmd"
