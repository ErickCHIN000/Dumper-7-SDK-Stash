#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class XeSSPlugin.XeSSSettings
// (None)

class UClass* UXeSSSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("XeSSSettings");

	return Clss;
}


// XeSSSettings XeSSPlugin.Default__XeSSSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UXeSSSettings* UXeSSSettings::GetDefaultObj()
{
	static class UXeSSSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UXeSSSettings*>(UXeSSSettings::StaticClass()->DefaultObject);

	return Default;
}

}


