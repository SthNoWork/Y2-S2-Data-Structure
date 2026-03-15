# Project Structure Guide (for index.html viewer)

This guide explains how to organize your project so `index.html` works correctly for both on-screen viewing and PDF export.

## 1. Required Top-Level Layout

Keep this layout at the project root:

```text
Y2-S2-Data-Structure/
  index.html
  Lab/
    Lab1/
      Ex1/
      Ex2/
      ...
    Lab2/
      Ex1/
      Ex2/
      ...
    utils/
      input.cpp
      any_shared_code.*
```

Notes:

- `index.html` must stay at root.
- The category folder is currently `Lab`.
- Shared helper code must be in `Lab/utils/`.

## 2. Lab / Exercise Naming Rules

Use consistent naming so automatic discovery works best:

- Labs: `Lab1`, `Lab2`, `Lab3`, ...
- Exercises: `Ex1`, `Ex2`, `Ex3`, ...
- Main code file (recommended): `Main.<ext>`

Examples:

- `Lab/Lab1/Ex1/Main.cpp`
- `Lab/Lab1/Ex2/Main.java`
- `Lab/Lab2/Ex4/Main.py`

## 3. Files Inside Each Exercise Folder

Each exercise folder can contain:

- Source files (`.cpp`, `.c`, `.java`, `.py`, `.js`, `.ts`, etc.)
- Optional output file (recommended): `output.txt`

The viewer will:

- Render code files as code blocks.
- Render output from one of these candidates:
  - `output.txt`
  - `output.log`
  - `stdout.txt`
  - `result.txt`

### Output section marker (recommended)

If your output file also contains terminal noise/log lines, add a cut line. Each block becomes its own output panel in HTML/PDF:

```text
=== CUT ===
<first output block>

=== CUT ===
<second output block>
```

You can also use:

```text
===cut===
```

Or these older supported markers:

```text
=== REPORT OUTPUT ===
=======================cut here
```

Example:

```text
Microsoft (R) C/C++ Optimizing Compiler Version ...
[build logs]

=== CUT ===
Enter a character: a
Vowel.

D:\Github\Y2-S2-Data-Structure\Lab\Lab1\Ex2\Main.exe (process 12148) exited with code 0 (0x0).
Press any key to close this window . . .
```

Behavior:

- Each cut-separated block is rendered as its own output panel.
- Common terminal footer lines like `...exited with code...` and `Press any key to close this window...` are removed automatically from each block.
- If markers are missing, the whole file is shown as one output panel (backward compatible).

## 4. Shared Utils Section (Bottom of Report)

The viewer loads shared utility files from:

- `Lab/utils/`

These files appear in a **Shared Utilities** section at the very bottom of the Lab report (HTML and PDF), after all exercises.

Use this for files that are referenced by includes/imports, for example:

- `#include "../../utils/input.cpp"`

## 5. Run Method (Important)

Do **not** open `index.html` directly with `file://`.

Use a local web server so `fetch()` works for:

- Exercise folder discovery
- `output.txt` loading
- `Lab/utils` loading

### Option A: VS Code Live Server

1. Install Live Server extension.
2. Right click `index.html`.
3. Click **Open with Live Server**.

### Option B: Python simple server

From project root:

```bash
python -m http.server 5500
```

Then open:

- `http://localhost:5500/index.html`

## 6. PDF Export Tips

For clean export results:

- Open the target Lab page first.
- Let exercises finish loading.
- Click **Export PDF**.
- Keep network stable if using CDN resources.

## 7. Recommended Good Practices

- Keep one exercise per `ExN` folder.
- Keep shared code only in `Lab/utils/`.
- Use readable file names and standard extensions.
- Prefer UTF-8 text files.
- Avoid binary artifacts in exercise folders (`.exe`, `.dll`, `.ilk`, etc.).

## 8. Quick Checklist

- [ ] `index.html` is at project root
- [ ] `Lab/` exists
- [ ] `Lab/Lab1/Ex1...` structure exists
- [ ] `Lab/utils/` exists with shared files
- [ ] Each exercise has code file(s)
- [ ] Output file exists (`output.txt` recommended)
- [ ] Run via local server (not `file://`)
