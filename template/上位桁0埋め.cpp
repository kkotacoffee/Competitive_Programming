cout << right << setw(4) <<  12; // "  12"

cout << left << setw(4) <<  12; // "12  "

cout << setfill('0') << right << setw(4) << 12; // "0012"

cout << setfill(' '); // ゼロ埋め・解除（デフォルトに戻す）