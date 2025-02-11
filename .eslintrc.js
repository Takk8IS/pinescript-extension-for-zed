module.exports = {
  env: {
    node: true,
    es2021: true
  },
  extends: 'eslint:recommended',
  parserOptions: {
    ecmaVersion: 'latest',
    sourceType: 'module'
  },
  rules: {
    indent: ['error', 2],
    quotes: ['error', 'single'],
    'no-undef': 'off',
    'no-empty': ['error', { 'allowEmptyCatch': true }] // Permite catch blocks vazios
  },
  globals: {
    grammar: 'readonly',
    seq: 'readonly',
    choice: 'readonly',
    repeat: 'readonly',
    token: 'readonly',
    prec: 'readonly',
    field: 'readonly',
    optional: 'readonly'
  }
};
