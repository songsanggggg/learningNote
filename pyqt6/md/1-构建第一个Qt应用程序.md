# 构建第一个Qt程序

Qt提供了两种构建GUI的技术：

- Qt Widgets
- Qt Quick

## 使用Qt Widgets构建第一个程序

````python
import sys
import random
from PySide6 import QtCore, QtWidgets, QtGui


class MyWidget(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()

        self.hello = ["Hallo Welt", "Hei maailma", "Hola Mundo", "Привет мир"]

        self.button = QtWidgets.QPushButton("Click me!")
        self.text = QtWidgets.QLabel("Hello World",
                                     alignment=QtCore.Qt.AlignCenter)

        self.layout = QtWidgets.QVBoxLayout(self)
        self.layout.addWidget(self.text)
        self.layout.addWidget(self.button)

        self.button.clicked.connect(self.magic)

    @QtCore.Slot()
    def magic(self):
        self.text.setText(random.choice(self.hello))
        

if __name__ == "__main__":
    app = QtWidgets.QApplication([])

    widget = MyWidget()
    widget.resize(800, 600)
    widget.show()

    sys.exit(app.exec())
````

### 代码结构：
1. **导入模块**：
   ```python
   import sys
   import random
   from PySide6 import QtCore, QtWidgets, QtGui
   ```
   - `sys`：用于处理系统相关功能，比如退出应用程序。
   - `random`：用于随机选择问候语。
   - `QtCore`, `QtWidgets`, `QtGui`：PySide6 提供的模块，分别处理核心功能、图形用户界面（GUI）控件、以及图形和显示相关的功能。

2. **定义 `MyWidget` 类**：
   ```python
   class MyWidget(QtWidgets.QWidget):
   ```
   - `MyWidget` 是一个自定义类，继承自 `QWidget`，代表一个窗口部件（控件）。
   
3. **构造函数 `__init__`**：
   ```python
   def __init__(self):
       super().__init__()
   ```
   - `__init__` 方法是构造函数，初始化窗口部件的属性和布局。
   - `super().__init__()` 调用父类（`QWidget`）的构造函数，确保基类的初始化。

4. **定义问候语列表 `self.hello`**：
   ```python
   self.hello = ["Hallo Welt", "Hei maailma", "Hola Mundo", "Привет мир"]
   ```
   - `self.hello` 是一个包含多个不同语言问候语的列表。

5. **创建控件**：
   ```python
   self.button = QtWidgets.QPushButton("Click me!")
   self.text = QtWidgets.QLabel("Hello World", alignment=QtCore.Qt.AlignCenter)
   ```
   - `self.button` 创建一个按钮，显示文本 "Click me!"。
   - `self.text` 创建一个标签，默认显示文本 "Hello World"，并将文本居中对齐。

6. **设置布局**：
   ```python
   self.layout = QtWidgets.QVBoxLayout(self)
   self.layout.addWidget(self.text)
   self.layout.addWidget(self.button)
   ```
   - `self.layout` 是一个垂直布局（`QVBoxLayout`），用于将控件垂直排列。
   - `addWidget()` 方法将控件添加到布局中，`self.text` 先添加，`self.button` 后添加，确保按钮在标签下方。

7. **连接信号与槽**：
   ```python
   self.button.clicked.connect(self.magic)
   ```
   - `self.button.clicked.connect(self.magic)`：将按钮的 `clicked` 信号连接到 `magic` 方法。当按钮被点击时，`magic` 方法会被触发执行。

8. **定义 `magic` 槽函数**：
   ```python
   @QtCore.Slot()
   def magic(self):
       self.text.setText(random.choice(self.hello))
   ```
   - `magic` 是一个槽函数，用于响应按钮点击事件。
   - `random.choice(self.hello)` 随机从 `self.hello` 列表中选择一个问候语。
   - `self.text.setText()` 将随机选择的问候语设置为标签的文本内容。

9. **主程序部分**：
   ```python
   if __name__ == "__main__":
       app = QtWidgets.QApplication([])
       widget = MyWidget()
       widget.resize(800, 600)
       widget.show()
       sys.exit(app.exec())
   ```
   - `if __name__ == "__main__":` 确保只有直接运行此脚本时才执行以下代码。
   - `app = QtWidgets.QApplication([])` 创建一个应用程序对象，所有 Qt 应用程序都需要它。
   - `widget = MyWidget()` 创建 `MyWidget` 的实例，即我们的主窗口。
   - `widget.resize(800, 600)` 设置窗口的大小为 800x600 像素。
   - `widget.show()` 显示窗口。
   - `sys.exit(app.exec())` 启动应用程序的事件循环，并在应用退出时返回退出代码。

## 使用Qt Quick构建第一个程序

​	该部分非本次学习重点。