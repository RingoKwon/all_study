#!/bin/bash
# Complete test for Vim auto-reload in tmux

echo "=== Testing Vim Auto-Reload Setup ==="
echo ""

# 1. Check tmux focus-events
echo "1. Checking tmux focus-events:"
if tmux show-options -g focus-events 2>/dev/null | grep -q "focus-events on"; then
    echo "   ✓ focus-events is ON"
else
    echo "   ✗ focus-events is OFF or not set"
    echo "   Fix: Run 'tmux set -g focus-events on'"
fi

# 2. Check TERM
echo ""
echo "2. Checking TERM variable:"
echo "   TERM=$TERM"
if [[ "$TERM" == *"tmux"* ]] || [[ "$TERM" == "screen"* ]]; then
    echo "   ✓ TERM looks good for tmux"
else
    echo "   ⚠ TERM might need to be 'tmux-256color' or 'screen-256color'"
fi

# 3. Check if we're in tmux
echo ""
echo "3. Checking tmux session:"
if [ -n "$TMUX" ]; then
    echo "   ✓ Running in tmux"
else
    echo "   ✗ NOT in tmux. These settings only work inside tmux!"
fi

# 4. Create test setup
echo ""
echo "4. Creating test environment..."
TEST_FILE="/tmp/vim_reload_test_$(date +%s).txt"
echo "Initial content" > "$TEST_FILE"
echo "   Created test file: $TEST_FILE"

# 5. Instructions
echo ""
echo "=== MANUAL TEST ==="
echo "Run these commands in TWO DIFFERENT tmux panes:"
echo ""
echo "In Pane 1:"
echo "  vim $TEST_FILE"
echo ""
echo "In Pane 2:"
echo "  vim $TEST_FILE"
echo ""
echo "Then:"
echo "  1. In Pane 1: Type 'i' to enter insert mode, add text, press ESC, type ':w' to save"
echo "  2. Switch to Pane 2"
echo "  3. The file should auto-reload in Pane 2"
echo ""
echo "If it doesn't work, run this in Vim to check settings:"
echo "  :set autoread?"
echo "  :autocmd FocusGained"
echo ""

# 6. Alternative test with focus events
echo "=== TESTING FOCUS EVENTS ==="
echo "To verify focus events are working, run this in a Vim session:"
echo "  :autocmd FocusGained * echo 'Focus gained!'"
echo "  :autocmd FocusLost * echo 'Focus lost!'"
echo ""
echo "Then switch between tmux panes. You should see the messages."
