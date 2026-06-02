# Lander

You control a spacecraft to land on the moon without smashing it like a meteor (Funny wat practice free fall equations)

```text
           /\           ==================================
          //\\            TIME WASTED: 14 seconds
         ||##||         ==================================
        //##mm\\        ALTITUDE [########   ] 642 meters
       //##*mmm\\       Speed [===        ] 43 m/s
      //###**mmm\\      Engine Food [###########] 180 Liters
```
## Wanna try it?
* **On windows you can download it an run it locally**
* **For other operating systems, you can try it online**

### For players (Windows)
1. Download `lander.exe`
2. Launch the file (It will open the terminal automatically)
3. Throw down a random number, hit Enter, and start playing
4. You will find it on itch.io and use an emulator (〜￣▽￣)〜 **[Lander](https://mahmuudsarhan.itch.io/lander)**

### For players (Non-Windows OS)
**Use an emulator**


---

# How it works

## The Boring Mathematical Logic
No Risk No Fun, to survive it, you should free fall then at the right moment, start burning fuel like crazy

Where:
* **Maximum Thrust Capacity:** $20 \text{ fuel units} \times 0.4 \text{ thrust coefficient} = 8.0 \text{ upward acceleration}$.
* **Net Deceleration Pull:** $6.38 \text{ m/s}^2$ after factoring out the native planetary gravity resistance.

## Warning
If the fuel reached ZERO, you will free fall till you crash