# My Custom Corne Keymap
This is the custom [qmk](https://docs.qmk.fm/) keymap for my [Corne](https://github.com/foostan/crkbd) keyboard.

## Features
- Custom layout I use for my day-job writing code.
- Autoshift enabled for every key.
- Left half OLED animations with my `JM` logo, layer and modifier key indicators.
- Right half OLED animations featuring BONGOCAT!
- Enables `ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS` matrix animation by default. The only one I like.
  - Solid is of course there by default.
- Tapdance Enabled:
  - Capslock is on layer 2, but also double-tap the esc key on layer 1.

## Usage
```bash
cd ~/qmk_firmware/keyboards/crkbd/keymaps
git clone git@github.com:jomurgel/my-corne-keymap.git jomurgel
qmk compile -kb crkbd/rev1 -km jomurgel
```

## Thanks!
- The OLED animations were cribbed from [@Timeception](https://github.com/Timception/Corne). Props for clean code.
- Uses [keymapviz](https://github.com/yskoht/keymapviz) for the ASCII layout art.

## License
- [MIT](./LICENSE)
