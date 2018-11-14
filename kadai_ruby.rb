require "numo/narray"

Science = Numo::DFloat[65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]

English = Numo::DFloat[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

print "理科の平均点 : ",Science.mean,"　標準偏差 : ",Science.stddev,"　合計点 : ",Science.sum,"\n"

print "英語の平均点 : ",English.mean,"　標準偏差 : ",English.stddev,"　合計点 : ",English.sum,"\n"

print "\n理科での各偏差値 "
Science.each {|i|
print 50+(i-Science.mean)/2 ,","
}
print "\n"

print "\n英語での各偏差値 "
English.each {|i|
print 50+(i-English.mean)/2,","
}
print "\n"
