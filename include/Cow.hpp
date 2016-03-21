#ifndef COW_HPP
#define COW_HPP
#include "DrawableObject.hpp"

class Cow : public DrawableObject
{
    public:
        Cow(std::string path, sf::Vector2f pos);
        virtual ~Cow();
        // Function
        void draw(sf::RenderWindow* window);
        void update(sf::RenderWindow* window);
        void move(sf::Vector2f motion);
        void updateAnimation();
        void addNotoriety(int value);

        // Inline
        inline sf::Sprite getSprite() {return m_sprite;}
        inline void setSpeed(float f) {m_speed = f; m_duration = sf::seconds(0.1/m_speed);}
        inline float getSpeed() {return m_speed;}
    protected:
    private:
        // Function
        void updatePosition();
        void build();

        // Attribut
        sf::Vector2f m_motion;
        bool m_onMove;

        // Animate
        std::vector<sf::Sprite> m_animationLEFT;
        std::vector<sf::Sprite> m_animationRIGHT;
        std::vector<sf::Sprite> m_animationIDLERIGHT;
        std::vector<sf::Sprite> m_animationIDLELEFT;

        int m_animationCounter;
        sf::Time m_timeSinceLastUpdate;
        sf::Time m_TimePerFrame;
        sf::Time m_duration;
};

#endif // COW_HPP
