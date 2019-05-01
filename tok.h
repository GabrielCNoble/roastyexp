#ifndef TOK_H
#define TOK_H

//enum CHAR
//{
//    CHAR_PLUS = 0,
//    CHAR_MINUS,
//    CHAR_BAR,
//    CHAR_ASTERISC,
//    CHAR_NUMBER,
//    CHAR_LETTER,
//    CHAR_SEMICOLON,
//    CHAR_OPARENTHESIS,
//    CHAR_CPARENTHESIS,
//    CHAR_EQUALS,
//    CHAR_EXCLAMATION,
//    CHAR_SPACE,
//    CHAR_COMMA,
//    CHAR_UNKNOWN,
//};

enum CHAR_TYPE
{
    CHAR_PUNCTUATOR = 1,
    CHAR_LETTER = 1 << 1,
    CHAR_NUMBER = 1 << 2,
    CHAR_SPACE = 1 << 3,
    CHAR_UNKNOWN = 1 << 4,
};

enum TOKEN
{
    TOKEN_KEYWORD,
    TOKEN_IDENTIFIER,
    TOKEN_CONSTANT,
    TOKEN_STRING_LITERAL,
    TOKEN_PUNCTUATOR,
    TOKEN_EOF,
    TOKEN_UNKNOWN,
};


enum TOKEN_CONSTANT
{
    TOKEN_CONSTANT_INTEGER,
    TOKEN_CONSTANT_FLOAT,
    TOKEN_CONSTANT_CHAR,
    TOKEN_CONSTANT_HEX,
};


enum TOKEN_PUNCTUATOR
{
    TOKEN_PUNCTUATOR_PLUS = 0,
    TOKEN_PUNCTUATOR_INCREMENT,
    TOKEN_PUNCTUATOR_PLUS_ASSIGN,
    TOKEN_PUNCTUATOR_MINUS,
    TOKEN_PUNCTUATOR_DECREMENT,
    TOKEN_PUNCTUATOR_MINUS_ASSIGN,
    TOKEN_PUNCTUATOR_ASTERISC,
    TOKEN_PUNCTUATOR_MUL_ASSIGN,
    TOKEN_PUNCTUATOR_SLASH,
    TOKEN_PUNCTUATOR_DIV_ASSIGN,
    TOKEN_PUNCTUATOR_PERCENT,
    TOKEN_PUNCTUATOR_MOD_ASSIGN,
    TOKEN_PUNCTUATOR_AMPERSAND,
    TOKEN_PUNCTUATOR_BW_AND_ASSIGN,
    TOKEN_PUNCTUATOR_LOG_AND,
    TOKEN_PUNCTUATOR_EXCLAMATION,
    TOKEN_PUNCTUATOR_NOT_EQUAL,
    TOKEN_PUNCTUATOR_ASSIGN,
    TOKEN_PUNCTUATOR_EQUAL,
    TOKEN_PUNCTUATOR_XOR,
    TOKEN_PUNCTUATOR_BW_XOR_ASSIGN,
    TOKEN_PUNCTUATOR_BW_OR,
    TOKEN_PUNCTUATOR_BW_OR_ASSIGN,
    TOKEN_PUNCTUATOR_LOG_OR,
    TOKEN_PUNCTUATOR_TILDE,
    TOKEN_PUNCTUATOR_LESS_THAN,
    TOKEN_PUNCTUATOR_LESS_THAN_OR_EQUAL,
    TOKEN_PUNCTUATOR_LEFT_SHIFT,
    TOKEN_PUNCTUATOR_LEFT_SHIFT_ASSIGN,
    TOKEN_PUNCTUATOR_GREATER_THAN,
    TOKEN_PUNCTUATOR_GREATER_THAN_OR_EQUAL,
    TOKEN_PUNCTUATOR_RIGHT_SHIFT,
    TOKEN_PUNCTUATOR_RIGHT_SHIFT_ASSIGN,
    TOKEN_PUNCTUATOR_OPARENTHESIS,
    TOKEN_PUNCTUATOR_CPARENTHESIS,
    TOKEN_PUNCTUATOR_OBRACE,
    TOKEN_PUNCTUATOR_CBRACE,
    TOKEN_PUNCTUATOR_OBRACKET,
    TOKEN_PUNCTUATOR_CBRACKET,
    TOKEN_PUNCTUATOR_COLON,
    TOKEN_PUNCTUATOR_SEMICOLON,
    TOKEN_PUNCTUATOR_COMMA,
    TOKEN_PUNCTUATOR_DOT,
    TOKEN_PUNCTUATOR_ARROW,
    TOKEN_PUNCTUATOR_UNKNOWN,
};


enum TOKEN_KEYWORD
{
    TOKEN_KEYWORD_AUTO = 0,
    TOKEN_KEYWORD_BREAK,
    TOKEN_KEYWORD_CASE,
    TOKEN_KEYWORD_CHAR,
    TOKEN_KEYWORD_CONST,
    TOKEN_KEYWORD_CONTINUE,
    TOKEN_KEYWORD_DEFAULT,
    TOKEN_KEYWORD_DO,
    TOKEN_KEYWORD_DOUBLE,
    TOKEN_KEYWORD_ELSE,
    TOKEN_KEYWORD_ENUM,
    TOKEN_KEYWORD_EXTERN,
    TOKEN_KEYWORD_FLOAT,
    TOKEN_KEYWORD_FOR,
    TOKEN_KEYWORD_GOTO,
    TOKEN_KEYWORD_IF,
    TOKEN_KEYWORD_INLINE,
    TOKEN_KEYWORD_INT,
    TOKEN_KEYWORD_LONG,
    TOKEN_KEYWORD_REGISTER,
    TOKEN_KEYWORD_RESTRICT,
    TOKEN_KEYWORD_RETURN,
    TOKEN_KEYWORD_SHORT,
    TOKEN_KEYWORD_SIGNED,
    TOKEN_KEYWORD_SIZEOF,
    TOKEN_KEYWORD_STATIC,
    TOKEN_KEYWORD_STRUCT,
    TOKEN_KEYWORD_SWITCH,
    TOKEN_KEYWORD_TYPEDEF,
    TOKEN_KEYWORD_UNION,
    TOKEN_KEYWORD_UNSIGNED,
    TOKEN_KEYWORD_VOID,
    TOKEN_KEYWORD_VOLATILE,
    TOKEN_KEYWORD_WHILE,
    TOKEN_KEYWORD_UNKNOWN,
};


struct token_t
{
    struct token_t *next;
    char text[64];
    int token_type;
    int token_name;

    unsigned int line;
    unsigned int column;
//    int token;
//    int reserved_token;
};


void token_init();

struct token_t *tokenize(char *text);

void free_tokens(struct token_t *tokens);

void translate_token(struct token_t *token);




#endif // TOK_H








