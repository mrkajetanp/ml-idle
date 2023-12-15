---------------------------------------------------------
*** Menu idle accuracy ***

Baseline for ../testing/geekbench_menu_idle_3_1412
accuracy 0.816481372881879
misses 0.18351862711812092
too deep 0.1578486990339208 too shallow 0.02566992808420013

Baseline for ../testing/jetnews_menu_idle_10_1412
accuracy 0.6962507146510999
misses 0.30374928534890017
too deep 0.2697473562088553 too shallow 0.03400192914004487

Baseline for ../testing/speedometer_menu_idle_10_1412
accuracy 0.7800750738896148
misses 0.21992492611038514
too deep 0.18292211339068337 too shallow 0.037002812719701766

Baseline for ../testing/drarm_menu_idle_10_1512
accuracy 0.8691868299015306
misses 0.1308131700984694
too deep 0.11541427240054901 too shallow 0.015398897697920407

Total menu baseline
accuracy 0.8250149988085469
misses 0.17498500119145316


*** TEO idle accuracy ***

Baseline for ../training/geekbench_idle_trace_rq_3_1112
accuracy 0.7830149330655424
misses 0.21698506693445763
too deep 0.08570174250092319 too shallow 0.13128332443353444

Baseline for ../training/geekbench_idle_trace_rq_3_1312
accuracy 0.7973772045423059
misses 0.20262279545769413
too deep 0.06912713811573416 too shallow 0.13349565734195998

Baseline for ../training/jetnews_idle_trace_rq_10_1112
accuracy 0.7921134477978814
misses 0.20788655220211863
too deep 0.032157237069754305 too shallow 0.1757293151323643

Baseline for ../training/jetnews_idle_trace_rq_10_1212
accuracy 0.7817459178820201
misses 0.21825408211797992
too deep 0.030360141103595674 too shallow 0.18789394101438425

Baseline for ../training/speedometer_idle_trace_rq_10_1112
accuracy 0.8304460241426809
misses 0.16955397585731916
too deep 0.01033244217512073 too shallow 0.15922153368219844

Baseline for ../testing/drarm_idle_trace_rq_10_1212
accuracy 0.9509681896400448
misses 0.04903181035995514
too deep 0.0006858790244998658 too shallow 0.04834593133545527

Total TEO baseline
accuracy 0.8767279965586983
misses 0.12327200344130176

------------------------------------------------

gb6 (3292802, 28)
jet (5234560, 28)
spe (3987020, 28)
dra (13051471, 28)
total (9000009, 28)

------------------------------------------------

RandomForestClassifier(max_depth=16, n_estimators=10, n_jobs=8)

RandomForest accuracy on full dataset:  0.8179599091155657
RandomForest accuracy on test dataset:  0.817932969807569

---------------------------------------------------

gb6 (1546354, 28)
jet (2603689, 28)
spe (3731326, 28)
dra (13051471, 28)

TEO GB6 test set decision accuracy 0.7754104170196475 0.07653098837652957 0.14805859460382292
RandomForests GB6 test set decision accuracy 0.8178715869716766

TEO Speedometer test set decision accuracy 0.8284071131817483 0.010008506359401457 0.1615843804588503
RandomForests Speedometer test set decision accuracy 0.8330218265571007

TEO JetNews test set decision accuracy 0.7651109637134081 0.03355354652571793 0.2013354897608739
RandomForests JetNews test set decision accuracy 0.7792086535680721

TEO DrArm test set decision accuracy 0.9502149617615471 0.0009287898891390197 0.048856248349313874
RandomForests DrArm decision accuracy 0.9495296708220603

---------------------------------------------------------

MLP accuracy on training set: 0.806
MLP accuracy on test set: 0.806

