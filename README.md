# Exibição de Mensagens em Display LCD com Arduino

## Descrição

Este programa implementa a **comunicação entre um Arduino e um display LCD 16x2**, permitindo a exibição de mensagens textuais diretamente na tela.

A aplicação demonstra o uso da biblioteca **LiquidCrystal**, responsável por controlar displays baseados no controlador HD44780, amplamente utilizado em projetos embarcados.

---

## Funcionamento Geral

O sistema executa um ciclo contínuo de exibição de mensagens no display, realizando as seguintes operações:

- **Inicializa o display LCD**
- **Define dimensões da tela (16 colunas x 2 linhas)**
- **Posiciona o cursor em coordenadas específicas**
- **Escreve textos no display**
- **Alterna entre diferentes mensagens**
- **Aplica pausas temporizadas entre as telas**

O processo se repete indefinidamente.

---

## Comportamento da Aplicação

Durante a execução, o display apresenta:

### Primeira Tela

- Linha superior: Identificação do projeto
- Linha inferior: Indicação de status operacional

Essa tela permanece visível por um período determinado.

---

### Segunda Tela

Após o tempo de espera:

- A tela é limpa
- Uma nova mensagem é exibida
- O conteúdo anterior é completamente substituído

---

## Controle de Exibição

O programa utiliza:

- **Limpeza completa da tela antes de cada atualização**
- **Posicionamento explícito do cursor**
- **Delays temporizados para leitura confortável**

Isso garante que o usuário visualize cada mensagem sem sobreposição ou artefatos.

---

## Estrutura de Atualização

O ciclo segue a lógica:

1. Limpar display
2. Posicionar cursor
3. Escrever mensagem
4. Aguardar intervalo
5. Repetir com nova mensagem

---

## Recursos Demonstrados

Este exemplo reforça conceitos importantes em sistemas embarcados:

- **Interface homem-máquina via LCD**
- **Controle de periféricos**
- **Manipulação de cursor**
- **Temporização com delay**
- **Execução em loop contínuo**

---

## Aplicações Práticas

Esse tipo de implementação é comum em:

- Painéis informativos
- Sistemas de monitoramento
- Interfaces de status
- Projetos acadêmicos
- Equipamentos embarcados
- Displays de feedback ao usuário

---

## Requisitos de Hardware

O funcionamento pressupõe:

- Arduino compatível
- Display LCD 16x2
- Conexões corretas entre pinos de controle e dados
- Alimentação adequada

---

## Requisitos de Software

Necessário:

- Arduino IDE
- Biblioteca **LiquidCrystal**

Normalmente já incluída na instalação padrão da IDE.

---

## Conclusão

O programa demonstra como utilizar um display LCD como **mecanismo de saída visual**, permitindo apresentar informações de forma estruturada, legível e controlada em projetos com Arduino.


#Imagem do projeto feito na prática

![Image](https://github.com/user-attachments/assets/898ffe60-3c2e-492e-a0f9-03f442449de2)
