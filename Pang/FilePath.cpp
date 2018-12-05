#include "FilePath.h"

const std::string FilePath::_asset = "./Asset";

const std::string FilePath::GetAssetPath(const std::string fileName)
{
	// TODO: implement file search

	const std::string filePath = _asset + "/" + fileName;

	return filePath;
}