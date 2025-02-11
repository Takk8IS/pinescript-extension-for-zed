# PineScript Extension for Zed

💾 PineScript support for TradingView indicators and strategies development in Zed editor.

## Features

- **Syntax Highlighting**: Full syntax highlighting for PineScript
- **Code Folding**: Smart folding for functions, blocks, and comments
- **Outline View**: Navigate through functions, variables, and strategy points
- **Auto-completion**: Context-aware code completion
- **Bracket Matching**: Automatic bracket/parenthesis matching
- **Comment Toggling**: Easy comment/uncomment of code blocks
- **Language Support**: Complete PineScript v5 language support

## Installation

### Via Zed Extension Manager

1. Open Zed
2. Go to Settings (⌘,)
3. Select Extensions
4. Search for "PineScript"
5. Click Install

### Manual Installation

```bash
git clone https://github.com/takk8is/pinescript-extension-for-zed
cd pinescript-extension-for-zed
# Copy to Zed extensions directory
```

## Usage

Files with the following extensions are automatically recognized:

- `.ps`
- `.pine`
- `.pinescript`

## Example

```pinescript
//@version=5
indicator("My Custom Indicator", overlay=true)

// Input parameters
length = input.int(14, "Length")

// Calculations
sma = ta.sma(close, length)

// Plotting
plot(sma, "SMA", color=color.blue)
```

## Development

### Prerequisites

- Node.js >= 12.0.0
- npm or yarn
- Tree-sitter CLI (`npm install -g tree-sitter-cli`)

### Building

```bash
# Install dependencies
npm install

# Build the extension
npm run build

# Run tests
npm test
```

## 🤝 Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

1. Fork the repository.
2. Create your feature branch (`git checkout -b feature/AmazingFeature`).
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`).
4. Push to the branch (`git push origin feature/AmazingFeature`).
5. Open a Pull Request.

## 💡 Donations

If this project has been helpful, consider making a donation:

**USDT (TRC-20)**: `TP6zpvjt2ZNGfWKPevfp65ZrcbKMWSQXDi`

Your support helps us continue to develop innovative tools.

## 🔧 Support

Experience the power of Zed by visiting their [official website](https://zed.dev/).

To contribute to public and social projects focused on research and artificial intelligence, feel free to support with any amount you prefer.

## 👥 About the Author

### 🧠 Takk™ Innovate Studio

- **Author**: David C Cavalcante
- **LinkedIn**: [David C Cavalcante](https://www.linkedin.com/in/hellodav/)
- **Medium**: [David C Cavalcante](https://medium.com/@davcavalcante/)
- **Positive results, rapid innovation**
- **Leading the Digital Revolution as the Pioneering 100% Artificial Intelligence Team**
- **URL**: [Takk](https://takk.ag/)
- **Twitter**: [Takk](https://twitter.com/takk8is/)
- **Medium**: [Takk](https://takk8is.medium.com/)

This extension provides a solid foundation for Pine Script development in the Zed editor, enhancing your trading strategy development workflow.
