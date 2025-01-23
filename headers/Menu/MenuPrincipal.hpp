#pragma once

#include "Menu.hpp"
#include "../Fundo/Fundo.hpp"

#define CAMINHO_TEXTURA_MENU_PRINCIPAL "Jungle++/img/Menu/menuPrincipal.png"

    namespace Menu {

        class MenuPrincipal: public Menu {
        protected:
            Fundo::Fundo fundo;

        private:
            void criarFundo();
            
        public:
            MenuPrincipal();
            MenuPrincipal(const IDs::IDs ID, std::string nome, const unsigned int tamFonte = 180);
            virtual ~MenuPrincipal();
            virtual void criarBotoes();
            virtual void executar();
        };

    } 
