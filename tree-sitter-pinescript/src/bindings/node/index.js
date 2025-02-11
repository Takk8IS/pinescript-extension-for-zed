try {
  module.exports = require('../../build/Release/tree-sitter-pinescript.node');
} catch (error) {
  try {
    module.exports = require('../../build/Debug/tree-sitter-pinescript.node');
  } catch {} // Agora este bloco vazio será permitido
}
