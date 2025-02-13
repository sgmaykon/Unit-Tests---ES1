# Unit-Tests - ES1
Projeto criado para atividade de Engenharia de Software 1

# Como usar

Primeiro, será necessário instalar o meson para executar o build e o compile. É um pacote python
Para instruções mais detalhadas: https://mesonbuild.com/Quick-guide.html

Instalação pelo gerenciador de pacotes:

`sudo apt-get install python3 python3-pip python3-setuptools \
                       python3-wheel ninja-build`

Instalação pelo Pip:

`pip3 install --user meson`

Após isso, na pasta raiz ( a que contem o meson.build), rode: 

`meson setup builddir`

`meson compile -C builddir`

Agora, o programa foi compilado. Para executar os testes:
`meson test -C builddir`
Para uma execução mais detalhada dos testes:


`cd builddir`

`./conversor-tests`


Para executar o programa:
```cd builddir 
./programa ```


