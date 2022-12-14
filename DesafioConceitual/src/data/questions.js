// creating an array and passing the number, questions, options, and answers
let questions = [
    {
      numb: 1,
      category: "Automação",
      type: "multiple",
      difficulty: "easy",
      question: "Qual a principal diferença entre o controle em malha fechada e em malha aberta?",
      answer: "A necessidade de haver, ou não, um controlador - H",
      options: [
        "O controle em malha aberta precisa de realimentação, já o outro, não - A",
        "A necessidade de haver, ou não, um controlador - H",
        "O controle em malha fechada não precisa de realimentação, já o outro, sim - J",
        "Não existe diferença entre os dois - C",
      ],
    },
    {
      numb: 2,
      category: "Desenvolvimento de Sistemas",
      type: "multiple",
      difficulty: "easy",
      question: "Como é feito a declaração de variáveis em C#?",
      answer: "tipos de dados + nome da variável - A",
      options: [
        "var + nome da variável - C",
        "var + nome da variável + tipo da variável - H",
        "DECLARE + nome da variável + tipo da variável - O",
        "tipos de dados + nome da variável - A",
      ],
    },
    {
      numb: 3,
      category: "Desenvolvimento de Sistemas",
      type: "multiple",
      difficulty: "easy",
      question: "Para o que serve os assests no Unity?",
      answer: "Para adicionar imagens, personagens, áudio e cenários - C",
      options: [
        "Para adicionar imagens, personagens, áudio e cenários - C",
        "É o arquivo com a programação do jogo - L",
        "Configurar os comandos de controle utilizados no jogo - A",
        "É utilizado para desenvolver jogos mobile- O",
      ],
    },
    {
      numb: 4,
      category: "Sistemas Digitais",
      type: "multiple",
      difficulty: "easy",
      question: "Como é feita a montagem de resistor de Pull Up e Pull Down?",
      answer: "O resistor fica ligado ao sinal que é desejado fazer a leitura - K",
      options: [
      "O resistor fica ligado ao sinal que não é desejado fazer a leitura - N", 
      "O resistor de pull up é conectado ao GND e o resistor de pull down ao VCC - A", 
      "O resistor fica ligado ao sinal que é desejado fazer a leitura - K",
      "O resistor de pull up é conectado ao VCC e o de pull down não é conectado nem ao VCC nem ao GND - C "
      ],
    },
    {
      numb: 5,
      category: "Telecomunicação",
      type: "multiple",
      difficulty: "easy",
      question: "Não posso ser vista, mas posso ser medida, porém me exergar a medida que o tempo passa é difícil, sou mais visível em outro domínio.",
      answer: "Onda eletromagnética - A",
      options: [
        "Eletricidade - E",
        "Tensão - C",
        "Onda eletromagnética - A",
        "Corrente elétrica - S",
      ],
    },
    {
      numb: 6,
      category: "Biomédica",
      type: "multiple",
      difficulty: "easy",
      question: "Quais são as dimenções de um intestino e em quantas regiões ele é dividido?",
      answer: "6m de comprimento e 4cm de diâmetro, dividido em 3 regiões - T",
      options: [
       "4m de comprimento e 6cm de diâmetro, dividido em 5 regiões - A",
       "6m de comprimento e 4cm de diâmetro, dividido em 3 regiões - T",
       "5m de comprimento e 4cm de diâmetro, dividido em 2 regiões - O",
       "6m de comprimento e 8cm de diâmetro, dividido em 4 regiões - E"],
    },
    {
      numb: 7,
      category: "Biomédica",
      type: "multiple",
      difficulty: "easy",
      question: "Qual o nome da doença descrita na frase: Doença que afeta uma criança quando nasce outra",
      answer: "Kwashiorkor - H",
      options: ["Schwarzenegger - E","Marasmo - A", "Donald Kwashiorkor - C", "Kwashiorkor - H"],
    },
    {
      numb: 8,
      category: "Automação",
      type: "multiple",
      difficulty: "easy",
      question: "O que não é considerado um dispositivo de saída?",
      answer: "Microcontrolador - O",
      options: ["Pistão pneumático - A","esteira industrial - L", "motor de indução trifásico - N", "Microcontrolador - O"], 
    },
    {
      numb: 9,
      category: "Sistemas Digitais",
      type: "multiple",
      difficulty: "easy",
      question: "Como é feito o porting do código de acionamento de LED do Arduino para o STM32: digitalWrite(6, 1)",
      answer: "HAL_GPIO_WritePin(GPIOA, 6, 1); - N",
      options: [
      "HAL_GPIO_Writepin(GPIOA, 6, 1); - A ",
      "HAL_GPIO_WritePin(GPIOA, 6, 1); - N", 
      "HAL_GPIO_WritePin(GPIOA, 6, 0); - C", 
      "HAL_GPIO_writePin(GPIOA, 6, 1); - E"],
    },
  ];
  