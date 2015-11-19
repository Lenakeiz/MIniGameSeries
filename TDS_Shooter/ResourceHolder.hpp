

#pragma once

#include <map>
#include <memory>
#include <string>
#include <stdexcept>
#include <cassert>

//Resources will be handled by one object and shared to the one using them time by time.
//This class will be a template for resource managers
//Add/Retrieve sources will be done using std::maps
//Unique poiter is used to make sure that delete is automatically called when the resource is released, to make sure that the instance T is the only one holding it and that transfering ownership is done without copying

template <typename Resource, typename Identifier>
class ResourceHolder
{
public:
	void load(Identifier id, const std::string& filename);
	Resource& get(Identifier id);
	const Resource& get(Identifier id) const;
private:
	std::map<Identifier, std::unique_ptr<Resource>> mResourceMap;
};

#include "ResourceHolder.inl"
