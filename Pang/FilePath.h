#pragma once
#include <string>

class FilePath
{
private:
	static const std::string _asset;

public:
	static const std::string GetAssetPath(const std::string fileName);
};