# Raspberry pi3 model B Baremetal

## 概要
本プロジェクトは、Raspberry pi3 model Bのベアメタルプログラムです。

## 各ディレクトリの説明
- LED - LED点灯プログラム(output-16pin)
- character - HELLO,WORLD!をディスプレイに表示するプログラム
- exhibition - 背景と文字にグラデーションをつけてディスプレイに表示するプログラム

## 使い方
1. SDカードにRaspberry pi3 model Bの公式のOSをダウンロードする。  
   OSの種類は何でもいい
2. SDカードの中身を見て必要なファイル以外消去する。  
   必要なファイルは以下の3つ
   - bootcode.bin
   - start.elf
   - config.txt
3. kernel.imgをSDカードに追加  
   使いたいベアメタルプログラムのディレクトリにkernel.imgがあるのでそれをSDカードに追加
4. raspi起動

## 詳細
詳しくはQiitaで説明しています。  
[Qiita](https://qiita.com/R-OTS/items/30825d65bd018e94aa6d)

## ライセンス
このプロジェクトはMITライセンスのもとで公開されています。

