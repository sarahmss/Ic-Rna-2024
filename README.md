# Aplicação de Redes Neurais a Dados Químicos e Problemas com Poucos Dados

**Projeto de Iniciação Científica — 2024**  
**Área de pesquisa:** Inteligência Artificial, Redes Neurais e Modelagem  
**Grupo de pesquisa:** LaSIA — Laboratório de Sistemas Inteligentes e Aplicados  

## Visão Geral

Este projeto de Iniciação Científica, desenvolvido em 2024, marcou a transição do estudo dos fundamentos de Redes Neurais Artificiais para sua aplicação em problemas reais, com foco em dados relacionados à área de Química.

A pesquisa envolveu a utilização de Redes Neurais Artificiais para modelagem e previsão de variáveis físico-químicas, explorando a capacidade desses modelos de representar relações presentes nos dados.

A partir dessa experiência com dados experimentais, a pesquisa avançou para um segundo problema: a utilização de Redes Neurais em situações nas quais a quantidade de dados disponíveis para treinamento é limitada. Nesse contexto, foram investigadas estratégias de geração de amostras virtuais utilizando Kriging e Processos Gaussianos (GPR).
Essa investigação estabeleceu a base para os trabalhos posteriores sobre Aprendizado de Máquina em problemas com dados limitados.

Dessa forma, o projeto consolidou a passagem entre o estudo teórico realizado em 2023 e a aplicação de técnicas de Aprendizado de Máquina em problemas científicos e de engenharia.

## Conteúdo da Pesquisa

Durante o projeto, foram estudados e aplicados conceitos relacionados a:

- Redes Neurais Artificiais;
- modelos de regressão;
- dados experimentais da área de Química;
- variáveis físico-químicas;
- previsão de propriedades e parâmetros químicos;
- análise e preparação de dados;
- treinamento e avaliação de Redes Neurais;
- problemas de regressão com poucos dados;
- geração de amostras virtuais;
- Kriging;
- Processos Gaussianos (GPR);
- funções de covariância.

Na aplicação nos dados da química a configuração utilizada nos modelos foi:

Entradas:

x₁: Local da Coleta (km);

x₂: Nível da Maré (m);

x₃: Umidade do Ar (%);

x₄: Índice Pluviométrico (mm);

x₅: Temperatura (°C).

Saídas:

y₁: pH;

y₂: Condutividade Elétrica (mS·cm⁻¹);

y₃: Oxigênio Dissolvido (mg·L⁻¹);

y₄: Sólidos Totais Dissolvidos (ppm).

Foram desenvolvidas quatro Redes Neurais Artificiais, todas com as mesmas cinco variáveis de entrada, sendo cada modelo responsável pela previsão de uma das quatro variáveis de saída.
As redes selecionadas foram posteriormente aplicadas a cinco novas amostras, não utilizadas no treinamento, com o objetivo de avaliar a capacidade de generalização dos modelos para novos dados. De forma geral, pH e oxigênio dissolvido foram bem estimados, com melhora proporcionada pelas redes ensemble, enquanto condutividade elétrica e sólidos dissolvidos apresentaram maior incerteza, evidenciada pelos desvios-padrão elevados, embora os resíduos das redes ensemble tenham permanecido, na maioria dos casos, dentro de ±2 desvios-padrões (95%).
## Tecnologias e Ferramentas

- **Python**
- **NumPy**
- **Pandas**
- **Redes Neurais Artificiais**
- **Modelos de regressão**
- **Processamento e análise de dados**
- **Kriging**
- **Processos Gaussianos (GPR)**
- **Funções de covariância**
- **Aprendizado de Máquina**

## Principais resultados

<img width="746" height="638" alt="image" src="https://github.com/user-attachments/assets/2571a3d3-718d-4934-b1e1-b3d925337c54" />
<img width="825" height="484" alt="image" src="https://github.com/user-attachments/assets/eca1e1bc-6d8f-40a7-a4f1-09cca7b64baf" />
