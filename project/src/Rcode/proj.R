data <- read.csv("data_proj_414.csv")
data <- data[,-1]


tripofPotter <- data[which(data$Potter == 1), ]

tripofWeasley <- data[which(data$Weasley == 1), ]

tripofGranger <- data[which(data$Granger == 1), ]


