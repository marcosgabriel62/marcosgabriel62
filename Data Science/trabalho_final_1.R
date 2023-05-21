# Setando diretório de trabalho e verificando o diretório de trabalho.
setwd("G:/Meu Drive/Introdução a ciência de dados") 
getwd()   

# Carregando os dados do dataset para uma variável do tipo dataframe.
dados = read.csv2("CAR-DETAILS-FROM-CAR-DEKHO.csv", sep = ",")

# Visualizando o dataframe carregado, de modo a poder visualizar todas as variáveis e elementos.
View(dados)

valor_total=nrow(dados)

# media do ano de fabricação
mean(x = dados$year)

# maior ano de fabricação
maior_ano=max(x = dados$year)

# menor ano de fabricação
menor_ano=min(x = dados$year)

# maior valor anunciado
maior_valor=max(x = dados$selling_price)

# menor valor anunciado
menor_valor=min(x = dados$selling_price)

# valor anunciado médio
mean(x = dados$selling_price)

#quantidade de descrições unicas e quantidades de cada carro
library(dplyr)
carros_qty = dados %>%
  group_by(name) %>%
  count()
View(carros_qty)

# quantidades de carros de cada ano
library(dplyr)
dados1 = dados %>%
  group_by(year) %>%
  count()
View(dados1)

# quantidade de carros por cada combustível
library(dplyr)
dados2 = dados %>%
  group_by(fuel) %>%
  count()
View(dados2)

#porcentagem de carros mais velhos do que 2005
old_cars=42+23+21+20+12+10+12+3+2+1+1+1+1
old_cars=(old_cars/valor_total)*100
old_cars

#porcentagem de carros com outros combustíveis
qty_other_comb=2153+2125
qty_other_comb=valor_total-qty_other_comb
qty_other_comb=(valor20/valor_total)*100
qty_other_comb

#porcentagem de carros diesel
diesel_cars=2153
perc_diesel_cars=(diesel_cars/valor_total)*100
perc_diesel_cars

#porcentagem de carros gasolina
petrol_cars=2125
perc_petrol_cars=(petrol_cars/valor_total)*100
perc_petrol_cars

#diferença de idade
diferenca_idade=maior_ano-menor_ano
diferenca_idade

#diferença de valor e porcentagem
diferenca_valor=maior_valor-menor_valor
diferenca_valor
porcentagem_valor=(menor_valor/maior_valor)*100
porcentagem_valor

# histograma para quantidade de carros anunciados x ano de fabricação
hist(
    dados$year, breaks = c(1990:2020), 
     xlab = "Ano de fabricação", 
     ylab = "Quantidade de carros", 
     main = "Ano de fabricação x Quantidade de carros",
     labels = TRUE,  
     xlim = c(1990,2020),
     ylim = c(0,500),
     include.lowest = F
     )

# barplot para quantidade de carros conforme o combustível que consome onde não aparecem labels
comb_num<-c(1,23,40,2125, 2153)
comb_type<-c("Eletric","LPG","CNG","PETROL", "DIESEL")
barplot(comb_num, 
        names.arg=comb_type,
        main = "Quantidade de carros x combustível",
        ylab = "Quantidade de carros", 
        xlab = "Combustível que consome"
        )

#bar plot com gnuplot mostando combustíveis e a quantidade de carros que os usam com labels 
set.seed(5642)                            
sample_data <- data.frame(Fuels = c("Eletric","LPG","CNG","PETROL", "DIESEL") ,
                          Quantity_of_cars = c(1,23,40,2125, 2153))
library("ggplot2")
# Create bar plot with labels
plot<-ggplot(sample_data,
             aes(Fuels,Quantity_of_cars)) +
  geom_bar(stat = "identity")+
  geom_text(aes(label = signif(Quantity_of_cars)), nudge_y = +50)
plot

##############################################################################################

#install.packages("caTools")
library(caTools)
#install.packages('miscTools')
library(miscTools)

# Divisao da base entre treinamento e teste
set.seed(1)             
divisao = sample.split(dados$selling_price, SplitRatio = 0.70)
base_treinamento = subset(dados, divisao == TRUE)
base_teste = subset(dados, divisao == FALSE)

View(base_treinamento) #base ok
View(base_teste) #base ok

# Geracao do modelo preditivo -> regressao linear
correlacao = cor(dados$selling_price, dados$year)    
correlacao   # 0.4134161 - correlacao fraca    
aprendizagem = lm(formula = selling_price ~ year, data = base_treinamento)
summary(aprendizagem)

plot(base_treinamento$selling_price ~ base_treinamento$year, xlab = "Year", ylab = "Selling price")
abline(aprendizagem, col = 'blue')

# Avaliacao do modelo
previsoes = predict(aprendizagem, newdata = base_teste[2])
View(previsoes)

# media de diferenca: pode ser para + ou para -
diferenca = abs(base_teste$selling_price - previsoes)
View(diferenca)
mean(diferenca)

# acuracia do modelo na base de teste
acuracia = rSquared(base_teste$selling_price, resid = base_teste$selling_price - previsoes)
acuracia

###############################################################################################

#install.packages("caTools")
library(caTools)
#install.packages('miscTools')
library(miscTools)

nova_base=dados
nova_base$name = NULL
nova_base$seller_type = NULL
nova_base$owner = NULL
nova_base$fuel = NULL
nova_base$transmission = NULL

View(nova_base)

# Divisao da base entre treinamento e teste
set.seed(1)             
divisao2 = sample.split(nova_base$selling_price, SplitRatio = 0.70)
base_treinamento2 = subset(nova_base, divisao == TRUE)
base_teste2 = subset(nova_base, divisao == FALSE)

View(base_treinamento2) #base ok
View(base_teste2) #base ok

# Geracao do modelo preditivo -> regressao linear multipla
aprendizagem2 = lm(formula = selling_price ~ ., data = base_treinamento2)
aprendizagem2
summary(aprendizagem2)

# Avaliacao do modelo
previsoes2 = predict(aprendizagem2, newdata = base_teste2[-2])
View(previsoes2)

# media de diferenca: pode ser para + ou para -
diferenca2 = abs(base_teste2$selling_price - previsoes2)
View(diferenca2)

# media de diferenca: pode ser para + ou para -
mean(diferenca2)

# acuracia do modelo na base de teste
acuracia2 = rSquared(base_teste2$selling_price, resid = base_teste2$selling_price - previsoes2)
acuracia2

#################################################################################################

#install.packages("caTools")
library(caTools)
#install.packages('miscTools')
library(miscTools)

library(dplyr)
maruti=filter(dados, name == "Maruti Swift Dzire VDI")
View(maruti)

# Divisao da base entre treinamento e teste
set.seed(1)             
divisao_maruti = sample.split(maruti$selling_price, SplitRatio = 0.70)
base_treinamento_maruti = subset(maruti, divisao_maruti == TRUE)
base_teste_maruti = subset(maruti, divisao_maruti == FALSE)

View(base_treinamento_maruti) #base ok
View(base_teste_maruti) #base ok

# Geracao do modelo preditivo -> regressao linear
correlacao_maruti = cor(maruti$selling_price, maruti$year)    
correlacao_maruti   # 0.7614072 - correlacao alta   
aprendizagem_maruti = lm(formula = selling_price ~ year, data = base_treinamento_maruti)
summary(aprendizagem_maruti)

plot(base_treinamento_maruti$selling_price ~ base_treinamento_maruti$year, xlab = "Year", ylab = "Selling price")
abline(aprendizagem_maruti, col = 'blue')

# Avaliacao do modelo
previsoes_maruti = predict(aprendizagem_maruti, newdata = base_teste_maruti[2])
View(previsoes_maruti)

# media de diferenca: pode ser para + ou para -
diferenca_maruti = abs(base_teste_maruti$selling_price - previsoes_maruti)
View(diferenca_maruti)
mean(diferenca_maruti)

# acuracia do modelo na base de teste
acuracia_maruti = rSquared(base_teste_maruti$selling_price, resid = base_teste_maruti$selling_price - previsoes_maruti)
acuracia_maruti

###########################################################################################
