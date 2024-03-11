# My Custom Corne Keymap
This is the custom [qmk](https://docs.qmk.fm/) keymap for my [Corne](https://github.com/foostan/crkbd) keyboard.

## Features
- Custom layout I use for my day-job writing code.
- Autoshift enabled for every key.
- Left half OLED animations with my `JM` logo, layer and modifier key indicators.
- Right half OLED animations featuring BONGOCAT!
- Enables `ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS` and `ENABLE_RGB_MATRIX_RAINBOW_BEACON` matrix animations by default. The only ones I like.

## Usage
```bash
cd ~/qmk_firmware/keyboards/crkbd/keymaps
git clone git@github.com:jomurgel/my-corne-keymap.git jomurgel
qmk compile -kb crkbd/rev1 -km jomurgel
```

## Thanks!
- The OLED animations were cribbed from [@Timeception](https://github.com/Timception/Corne). Props for clean code.

## License
- [MIT](./LICENSE)
