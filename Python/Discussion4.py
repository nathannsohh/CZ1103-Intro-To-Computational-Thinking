hr_str = input('Hours:     ')
mn_str = input('Minutes:   ')
sc_str = input('Seconds:   ')
am_pm = input('AM/PM:     ')

hr_s = int(hr_str)*3600
mn_s = int(mn_str)*60
sc = int(sc_str)
seconds = hr_s + mn_s + sc

if am_pm.upper() == "AM":
    if hr_str == "12":
        seconds = seconds - 12*60*60
elif am_pm.upper() == "PM":
    if hr_str != "12":
        seconds = seconds + 12*60*60

print(f"Time:    {seconds}s")
        



