#pragma once
#include <vector>
#include <xstring>
struct paint_kit
{
	int id;
	std::string name;
	auto operator < (const paint_kit& other) const -> bool
	{
		return name < other.name;
	}
};
extern std::vector<paint_kit> k_skins;
extern std::vector<paint_kit> k_gloves;
extern std::vector<paint_kit> k_stickers;
extern auto initialize_kits() -> void;