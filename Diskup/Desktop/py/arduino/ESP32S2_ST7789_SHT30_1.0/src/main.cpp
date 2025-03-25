// 假设这里有一些包含时间显示的代码
void drawTime() {
    // 获取当前时间
    String currentTime = "12:34"; // 示例时间
    String ampm = "PM"; // 示例AM/PM

    // 设置时间字体大小
    tft.setTextSize(2); // 假设2是当前时间字体大小
    tft.setTextColor(TFT_WHITE);
    tft.setCursor(50, 50);
    tft.print(currentTime);

    // 设置AM/PM字体大小，假设原来的字体大小是2，现在改为1
    tft.setTextSize(1);
    tft.setTextColor(TFT_WHITE);
    tft.setCursor(120, 50); // 调整AM/PM的位置以适应字体大小的变化
    tft.print(ampm);
}