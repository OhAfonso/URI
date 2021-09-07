#include <stdio.h>

int main(void) {
  
  int h_inicial, m_inicial, h_final, m_final, h_duracao, m_duracao;

  scanf("%d%d%d%d", &h_inicial, &m_inicial, &h_final, &m_final);

  h_duracao = h_final - h_inicial;
  m_duracao = m_final - m_inicial;

  if(h_inicial >= h_final){

    h_duracao = 24 - (h_inicial - h_final);

  }

  if(m_inicial > m_final){

    m_duracao = 60 - (m_inicial - m_final);
    h_duracao -= 1;

  }
  
  else if(h_inicial == h_final && m_inicial < m_final){

    h_duracao = 0;


  }

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_duracao, m_duracao);
  


  return 0;
}
