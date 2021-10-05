#pragma once

#include<SFML/Graphics.hpp>

class TextAsset
{
private:
  sf::Font* font{};
  sf::Text* text{};
  sf::RenderWindow* window{};
public:
  TextAsset(sf::RenderWindow*& window, const char* fontUrl, 
  const sf::String message, float size, sf::Color color);
  ~TextAsset();
  void Draw();
};