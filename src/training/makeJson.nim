import os, times
import marshal

const STUDENT_NUM = 10
const TRIAL＿NUM = 10

type 
  Report = object
    title: string
    link: string
  Student = object
    name: string
    reports: seq[Report]

var students_list: seq[Student]

for i in 0..STUDENT_NUM:
  students_list.add(
    Student(
      name: "Bob",
      reports: @[
        Report(
          title: "The best programmig language 2017",
          link: "http://report.example/xxxxxxxxxxxxx"
        ),
        Report(
          title: "The best programmig language 2018",
          link: "http://report.example/xxxxxxxxxxxxx"
        )
      ]
    )
  )


#[
変数に格納して最後に出力するパターン。
メリット:
- IOの処理回数が減らせる(処理速度が速い?)
- プログラムの構造がわかりやすい。別のフォーマットにも変更しやすい。
デメリット
- データサイズが大きいと、その分メモリ消費が大きくなってしまう。
  - LinuxだとOOM-killerでプロセスが殺されることもある
- 可変長のseqを使う場合は、メモリ確保分の処理が足を引っ張る可能性がある。
]#
proc makeJsonUsingTmp =
  var tmp: seq[Student]

  for student in students_list:
    tmp.add(student)
  
  echo $$tmp

#[
都度都度、出力するパターン。
メリット:
- メモリ消費を抑えられる。
デメリット:
- IOの処理回数が多くなる(処理速度が遅い?)
- データフォーマットの変更が少し面倒かも？
]#
proc makeJsonNoTmp =
  echo "["
  for student in students_list:
    echo $$student
  echo "]"

proc traial(p: proc): float =
  var t0,t1: float
  var sum_times: float = 0

  for i in 0..TRIAL＿NUM:
    t0 = cpuTime()
    p()
    t1 = cpuTime()
    sum_times += t1 - t0
  
  return sum_times / TRIAL＿NUM

when isMainModule:
  let useTmpResult = traial(makeJsonUsingTmp)
  let NoTmpResult = traial(makeJsonNoTmp)
  echo "----bench params----"
  echo "STUDENT_NUM:" & $STUDENT_NUM
  echo "TRIAL＿NUM :" & $TRIAL＿NUM
  echo "----speed result(avarage)-----"
  echo "UseTmp:" & $useTmpResult
  echo "NoTmp :" & $NoTmpResult


#[
Note:

----bench params----
STUDENT_NUM:10
TRIAL＿NUM :10
----speed result(avarage)-----
UseTmp:0.0007936999999999999
NoTmp :0.0008164999999999995

※ただし、Studentの要素数が2個だと逆転した。
推察:
  IOよりも変数の確保のほうがネックになる?
  そもそもNimの最適化がやばいので、記述したコードとは別物の処理になっていそう。
以下は、STUDENT_NUMが2のとき。

----bench params----
STUDENT_NUM:2
TRIAL＿NUM :10
----speed result(avarage)-----
UseTmp:0.0002239999999999999
NoTmp :0.0002079000000000001
]#