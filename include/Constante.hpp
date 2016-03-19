#ifndef CONSTANTE_HPP
#define CONSTANTE_HPP

// Constant for Gravity & Mouvement
#define DEFAULT_GRAVITY 9.81
#define DEFAULT_SPEED 1

// Constant for Sprite
#define SPRITE_WIDTH 256
#define SPRITE_HEIGHT 256

// Constant for Tile
#define PATTERN_HEIGHT 15
#define PATTERN_WIDTH 30
#define PATTERN_NBR 10

// Constant for Ressources
#define INIT_STORE_CAPACITY 100
#define TEXT_RESSOURCES_PADDING 10

// Constant for Building
#define DEFAULT_COST_TO_UPGRADE 100
#define MAX_BUILDING_LEVEL 1
#define BUILDING_WIDTH 1310
#define BUILDING_HEIGHT 608
#define SIGN_HEIGHT 120
#define SIGN_WIDTH 114
#define PADDING_BAR_BUILDING 20
#define PADDING_A_BUILDING 10
#define PADDING_Y_WORKER_BUILDING 20
#define PADDING_X_WORKER_BUILDING 10
#define PADDING_Y_EVENT_BUILDING 20
#define INIT_NECESSARY_CLICK 10

//Constant for Event
#define BONUS_EVENT_RESSOURCE 10

std::string const defaultCharPath = "Ressources/Character/";
std::string const defaultTilePath = "Ressources/Tileset/";
std::string const defaultMenuPath = "Ressources/Menu/";
std::string const defaultTilesetPath = "Ressources/Tileset/tileset.png";
std::string const defaultLevelPath = "Ressources/Level/";
std::string const defaultSoundPath = "Ressources/Sound/Musique/";
std::string const defaultFXPath = "Ressources/Sound/FX/";
std::string const defaultObjectPath = "Ressources/Object/";
std::string const defaultFilterPath = "Ressources/Filter/";
std::string const defaultHUDPath = "Ressources/HUD/";
std::string const defaultFontPath = "Ressources/Font/";
std::string const defaultBuildingPath = "Ressources/Object/Building/";
std::string const defaultEventPath = "Ressources/Object/Event/";
std::string const defaultInstaFarmPath = "Ressources/InstaFarm/";
#endif // CONSTANTES_HPP
