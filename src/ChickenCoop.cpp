#include "ChickenCoop.hpp"

ChickenCoop::ChickenCoop(sf::Vector2f pos, Controller* controller)
:Building(pos)
{
    m_name = "ChickenCoop";
    m_type = RessourcesType::GOLD;
    m_controller = controller;
    if(!m_buildTexture.loadFromFile(defaultBuildingPath+"chickencoop.png"))
    { // RAISE ERROR
    }

    // HIGHLIGHTED
    if(!m_textureHighlighted.loadFromFile(defaultBuildingPath+"chickencoophi.png"))
    { // RAISE ERROR
    }
    m_textureHighlighted.setSmooth(true);
    m_spriteHighlighted.setTexture(m_textureHighlighted);

    std::cout << m_name << " build done" << std::endl;
}

ChickenCoop::~ChickenCoop()
{
    //dtor
}

void ChickenCoop::enter()
{
    produce(1);
    increaseLevel();
}

void ChickenCoop::produce(int i)
{
    m_counter += i;
    if(m_counter > m_necessaryClick)
    {
        m_controller->increaseRessource(RessourcesType::GOLD,1);
        m_counter -= m_necessaryClick;
    }
}