# 🎮 Jogo do Esconde-Esconde numérico em C

Este projeto é um jogo de adivinhação em C onde você precisa encontrar um número escondido entre 0 e 50 em até 10 tentativas. O jogo utiliza recursão e fornece dicas baseadas na proximidade do seu palpite.

## 🌐 Como Executar Online (Sem Instalação)

Se preferir não instalar nada no computador, você pode rodar o jogo diretamente no navegador usando o **OnlineGDB**:

1. Acesse o site [OnlineGDB (Compiler and IDE)](https://www.onlinegdb.com/?utm_source=gemini).

2. No canto superior direito, na opção **Language**, selecione **C**.

3. Apague qualquer código de exemplo existente no editor e cole o conteúdo do arquivo `main.c`.

4. Clique no botão verde **Run** (ou pressione `F9`).

5. O programa será executado no painel inferior. Digite seus chutes no terminal integrado na parte de baixo da tela e pressione `Enter`.

## 🎲 Regras do Jogo

* O sistema sorteia um número secreto entre **0 e 50**.

* Você tem até **10 tentativas** para adivinhar.

* A cada tentativa, o jogo dá uma dica baseada em quão perto seu palpite está do número escondido:

  * 🟩 **Até 5 de distância:** Tá do lado!

  * 🟨 **Até 10 de distância:** Tá bem perto!

  * 🟧 **Até 15 de distância:** Perto, continue procurando.

  * 🟥 **Até 20 de distância:** Um pouco longe...

  * 🟪 **Até 25 de distância:** Muito longe!

  * ⬛ **Mais de 25 de distância:** Passou longe!
