# line_follower

Este projeto implementa um robô seguidor de linha utilizando controle PID e arrays de sensores QTR. Ele é desenvolvido usando o PlatformIO para facilitar o desenvolvimento e implementação em várias plataformas.

## Requisitos

Para compilar e carregar este projeto, você precisará:

- [PlatformIO Core](https://platformio.org/install) instalado na sua máquina.
- Um microcontrolador compatível (por exemplo, Arduino ou qualquer outro suportado pelo PlatformIO).
- As dependências necessárias (por exemplo, bibliotecas Motor e QTR Sensor), que são gerenciadas pelo PlatformIO.

## Instruções de Compilação

Siga os passos abaixo para compilar o projeto na sua máquina local:

1. **Clone o repositório:**

   ```bash
   git clone https://github.com/seu-repositorio/line-follower.git
   cd line-follower

2. **Abra o terminal no diretório do projeto**.

3. **Execute o seguinte comando para instalar todas as dependências**:

   ```bash
   pio run

## Opcional

**Para carregar o firmware compilado, use o seguinte comando**:

   ```bash
   pio run --target upload

**Para monitorar os dados seriais, use este comando**:

  ```bash
   pio device monitor
