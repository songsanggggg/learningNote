# 简单的Qt widgets程序及按钮使用

## 简单的Qt widgets程序

````python
import sys
from PySide6.QtWidgets import QApplication, QLabel

app = QApplication(sys.argv)
label = QLabel("Hello World!")
label.show()
app.exec()
````

我们使用`from PySide6.QtWidgets import QApplication, QLabel`从Pyside6.QtWidgets模块导入适当的类

通过`QApplication(sys.argv)`创建一个QApplication实例，并传入参数，我们也可以不传入参数，使用如下方法：

```python
app = QApplication([])
```

创建 application 对象后，我们创建了一个 QLabel 对象。QLabel 是一个小部件，可以显示文本（简单或丰富，如 html）和图像：

````python
# This HTML approach will be valid too!
label = QLabel("<font color=red size=40>Hello World!</font>")
````

> [!NOTE]
>
> 我们创建label标签之后对他调用show()方法。

最后我们调用````app.exec()````进入Qt主循环并执行Qt代码。实际上，这一段代码只显示一个标签，所以目前可以被忽略。

## 按钮的简单使用

````python
import sys
from PySide6.QtWidgets import QApplication, QPushButton
from PySide6.QtCore import Slot

@Slot()
def say_hello():
 print("Button clicked, Hello!")

# Create the Qt Application
app = QApplication(sys.argv)
# Create a button, connect it and show it
button = QPushButton("Click me")
button.clicked.connect(say_hello)
button.show()
# Run the main Qt loop
app.exec()
````

### 1. **导入所需的模块**

```python
import sys
from PySide6.QtWidgets import QApplication, QPushButton
from PySide6.QtCore import Slot
```

- **sys**：用来处理命令行参数，在创建 `QApplication` 对象时需要传递 `sys.argv`，它表示程序启动时的命令行参数。
- **QApplication**：是 Qt 应用程序的核心类。它管理应用的控制流和主要设置，例如事件循环。
- **QPushButton**：表示一个按钮组件。我们将通过它来显示一个可点击的按钮。
- **Slot**：这是一个装饰器，用来标记一个方法为 "槽"（slot）。槽是 Qt 信号和槽机制的一部分，用于处理特定事件（例如按钮点击）。

### 2. **定义槽函数**

```python
@Slot()
def say_hello():
    print("Button clicked, Hello!")
```

- `@Slot()`：这个装饰器告诉 PySide6，这是一个槽函数。槽函数是通过信号连接到事件的回调函数。
- `say_hello`：定义了一个简单的函数，当按钮被点击时会执行这个函数，输出 "Button clicked, Hello!" 到控制台。

### 3. **创建 Qt 应用程序实例**

```python
app = QApplication(sys.argv)
```

- `QApplication` 是 Qt 应用程序的核心对象，负责管理应用程序的生命周期。`sys.argv` 是传递给程序的命令行参数，通常用于配置应用程序。
- 通过 `app` 对象，Qt 框架开始管理和处理用户交互，窗口显示等。

### 4. **创建按钮并连接信号和槽**

```python
button = QPushButton("Click me")
button.clicked.connect(say_hello)
```

- `QPushButton("Click me")`：创建了一个按钮，按钮的文本是 "Click me"。
- `button.clicked.connect(say_hello)`：这行代码将按钮的 `clicked` 信号（当按钮被点击时触发）连接到 `say_hello` 函数。也就是说，每当按钮被点击时，`say_hello` 函数会被调用。

### 5. **显示按钮**

```python
button.show()
```

- `button.show()` 使得按钮在应用程序窗口中可见。

### 6. **启动事件循环**

```python
app.exec()
```

- `app.exec()` 启动了 Qt 的事件循环。事件循环是一个持续运行的机制，负责监听和处理用户的操作（例如点击按钮），并触发相应的事件（例如调用连接到信号的槽函数）。

### 显示效果

![Clickable Button Example](https://doc.qt.io/qtforpython-6/_images/clickablebutton.png)
