import tkinter as tk
from tkinter import scrolledtext, font

def main():
    root = tk.Tk()
    root.title("Mock Interview Chatbot")
    root.geometry("580x680")
    root.configure(bg="#121212")
    root.resizable(False, False)

    header_font = font.Font(family="Segoe UI", size=24, weight="bold")
    chat_font = font.Font(family="Segoe UI", size=11)
    input_font = font.Font(family="Segoe UI", size=12)

    BG_COLOR = "#121212"
    CHAT_BG = "#1E1E1E"
    USER_BUBBLE = "#0A84FF"
    BOT_BUBBLE = "#2C2C2E"
    TEXT_COLOR = "#FFFFFF"

    container = tk.Frame(root, bg=BG_COLOR, padx=24, pady=24)
    container.pack(expand=True, fill="both")

    header = tk.Label(container, text="Mock Interview Chatbot", bg=BG_COLOR,
                      fg=TEXT_COLOR, font=header_font)
    header.pack(pady=(0, 16))

    chat_frame = tk.Frame(container, bg=CHAT_BG)
    chat_frame.pack(expand=True, fill="both")

    chat_display = scrolledtext.ScrolledText(chat_frame, wrap=tk.WORD, bg=CHAT_BG,
                                             fg=TEXT_COLOR, font=chat_font,
                                             bd=0, relief=tk.FLAT, padx=12, pady=12)
    chat_display.pack(expand=True, fill="both")
    chat_display.configure(state='disabled', cursor="arrow")

    input_frame = tk.Frame(container, bg=BG_COLOR)
    input_frame.pack(fill="x", pady=(16, 0))

    input_text = tk.Entry(input_frame, font=input_font, bg="#222222", fg=TEXT_COLOR,
                          insertbackground=TEXT_COLOR, relief=tk.FLAT, bd=0, highlightthickness=1,
                          highlightbackground="#444444", highlightcolor=USER_BUBBLE,
                          justify='left')
    input_text.pack(side="left", fill="x", expand=True, ipady=10, padx=(0, 12))
    input_text.focus_set()

    send_btn = tk.Button(input_frame, text="Send", bg=USER_BUBBLE, fg=TEXT_COLOR,
                         activebackground="#006CEA", activeforeground=TEXT_COLOR,
                         font=input_font, bd=0, relief=tk.FLAT, cursor="hand2",
                         padx=20, pady=10)
    send_btn.pack(side="right")

    mode = "waiting"
    question_index = 0

    coding_questions = [
        "How do you reverse a string?",
        "How do you find a cycle in a linked list?",
        "What is the difference between a stack and a queue?"
    ]

    design_questions = [
        "Design a URL shortener. What parts would you need?",
        "How would you build a chat app for many users?"
    ]

    def add_message(text, sender="bot"):
        chat_display.configure(state='normal')
        # Add newline spacing
        chat_display.insert(tk.END, "\n")
        # Create bubble text with simple formatting for left/right align
        if sender == "bot":
            bubble_text = "  " + text + "  \n"
            chat_display.insert(tk.END, bubble_text)
            # Color bot message
            chat_display.tag_add("bot", "end-2l linestart", "end-1l lineend")
            chat_display.tag_config("bot", background=BOT_BUBBLE, foreground=TEXT_COLOR, justify="left")
        else:
            bubble_text = "  " + text + "  \n"
            chat_display.insert(tk.END, bubble_text)
            # Color user message, right aligned
            chat_display.tag_add("user", "end-2l linestart", "end-1l lineend")
            chat_display.tag_config("user", background=USER_BUBBLE, foreground=TEXT_COLOR, justify="right")
        chat_display.configure(state='disabled')
        chat_display.see(tk.END)

    def ask_next_question():
        nonlocal question_index, mode
        if mode == "coding":
            if question_index < len(coding_questions):
                add_message("Coding question: " + coding_questions[question_index], "bot")
            else:
                add_message("No more coding questions. Type 'design' to switch or 'restart' to reset.", "bot")
                mode = "waiting"
        elif mode == "design":
            if question_index < len(design_questions):
                add_message("Design question: " + design_questions[question_index], "bot")
            else:
                add_message("No more design questions. Type 'coding' to switch or 'restart' to reset.", "bot")
                mode = "waiting"

    def on_send():
        nonlocal mode, question_index
        user_text = input_text.get().strip()
        if not user_text:
            return
        add_message(user_text, "user")
        input_text.delete(0, tk.END)

        txt = user_text.lower()

        if mode == "waiting":
            if txt == "coding":
                mode = "coding"
                question_index = 0
                ask_next_question()
            elif txt == "design":
                mode = "design"
                question_index = 0
                ask_next_question()
            elif txt == "restart":
                mode = "waiting"
                question_index = 0
                add_message("Chat restarted! Type 'coding' or 'design' to begin.", "bot")
            else:
                add_message("Please type 'coding' or 'design' to start questions.", "bot")
        else:
            # Simple keyword check
            answer = txt
            good = False
            if mode == "coding":
                keywords = ["reverse", "cycle", "fast", "slow", "stack", "queue"]
                for kw in keywords:
                    if kw in answer:
                        good = True
                        break
                if good:
                    add_message("Great answer!", "bot")
                else:
                    add_message("Try to include key points related to the question.", "bot")
                question_index += 1
                ask_next_question()
            elif mode == "design":
                keywords = ["database", "hash", "api", "cache", "message"]
                for kw in keywords:
                    if kw in answer:
                        good = True
                        break
                if good:
                    add_message("Nice explanation!", "bot")
                else:
                    add_message("Think about the important parts of the system.", "bot")
                question_index += 1
                ask_next_question()

    send_btn.config(command=on_send)
    input_text.bind("<Return>", lambda event: on_send())

    add_message("Hello! Type 'coding' for coding questions or 'design' for design questions.", "bot")

    root.mainloop()

if __name__ == "__main__":
    main()
