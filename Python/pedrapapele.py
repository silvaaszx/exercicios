import threading
from random import randint
from time import sleep


sem = threading.Semaphore(0)

def escolha_computador():
    global computador
    itens = ('pedra', 'papel', 'tesoura')
    computador = randint(0, 2)
    sem.release()

def escolha_jogador():
    global jogador
    print('\033[1;30m-=-' * 30)
    print('                         \033[1;32m      Vamos jogar Jo ken po ? \033[m')
    print('\033[1;30m-=-' * 30)

    print('\033[1;30mEu vou escolher pedra, papel ou tesoura, faça a sua escolha ! \n')

    print('''Suas Opçoes
\033[1;30m[0] \033[1;34mPedra\033[m
\033[1;30m[1] \033[1;35mPapel\033[m
\033[1;30m[2] \033[1;36mTesoura\033[m\n''')

    jogador = int(input('\033[1;30mEscolha uma opção: '))
    sem.release()

def jo_ken_po():
    print('                                \033[1;32mJo')
    sleep(1)
    print('                                \033[1;31mKen')
    sleep(1)
    print('                                \033[1;34mPo\033[m')

def resultado():
    sem.acquire()
    sem.acquire()

    if computador == 0:  
        if jogador == 0:  
            print('\033[1;30mTemos um empate\033[m')
            print('\033[1;30mEu escolhi Pedra e você escolheu Pedra')

        elif jogador == 1:  
            print('\033[1;30mVocê\033[m \033[1;32mGanhou\033[m !')
            print('\033[1;30mEu escolhi Pedra e você escolheu Papel ')

        elif jogador == 2:  
            print('\033[1;30mVocê\033[m  \033[1;31mPerdeu\033[m !')
            print('\033[1;30mEu escolhi Pedra e você escolheu Tesoura')

    elif computador == 1:  
        if jogador == 0:  
            print('\033[1;30mVocê\033[m  \033[1;31mPerdeu\033[m !')
            print('\033[1;30mEu escolhi Papel e você escolheu Pedra')

        elif jogador == 1:  
            print('\033[1;30mTemos um empate !\033[m')
            print('\033[1;30mEu escolhi Papel e você escolheu Papel')

        elif jogador == 2:  
            print('\033[1;30mVocê\033[m \033[1;32mGanhou\033[m !')
            print('\033[1;30mEu escolhi Papel e você escolheu Tesoura')

    elif computador == 2: 
        if jogador == 0:  
            print('\033[1;30mVocê\033[m \033[1;32mGanhou\033[m !')
            print('\033[1;30mEu escolhi Tesoura e você escolheu Pedra')

        elif jogador == 1:  
            print('\033[1;30mVocê\033[m \033[1;31mPerdeu\033[m !')
            print('\033[1;30mEu escolhi Tesoura e você escolheu Papel')

        elif jogador == 2:  
            print('\033[1;30mTemos um empate !\033[m')
            print('\033[1;30mEu escolhi Tesoura e você escolheu Tesoura')

if __name__ == "__main__":
    t1 = threading.Thread(target=escolha_computador)
    t2 = threading.Thread(target=escolha_jogador)
    t3 = threading.Thread(target=jo_ken_po)
    t4 = threading.Thread(target=resultado)

    t1.start()
    t2.start()
    t3.start()

    t1.join()
    t2.join()
    t3.join()
    
    t4.start()
    t4.join()
