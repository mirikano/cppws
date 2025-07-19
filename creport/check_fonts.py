# check_fonts.py
import matplotlib.font_manager as fm

# システムにインストールされているフォントをすべて取得
font_list = fm.findSystemFonts()

print("--- 利用可能な日本語フォントの候補 ---")

# フォントのパスから、日本語フォントと思われるものを探して表示
for font_path in font_list:
    # フォント名に 'hiragino', 'gothic', 'mincho', 'yu' などが含まれていれば表示
    if 'hiragino' in font_path.lower() or \
       'gothic' in font_path.lower() or \
       'mincho' in font_path.lower() or \
       'yu' in font_path.lower():
        
        try:
            # フォントのプロパティから正式名称を取得
            font_prop = fm.FontProperties(fname=font_path)
            print(f"フォント名: {font_prop.get_name()}, パス: {font_path}")
        except RuntimeError:
            # フォントファイルが壊れている場合などをスキップ
            print(f"読み込みエラー: {font_path}")

print("\n--- 確認終わり ---")
print("上記のリストから、使いたいフォント名（例: 'Hiragino Sans'）をコピーしてください。")