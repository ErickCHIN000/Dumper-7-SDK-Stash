#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHL_G.BaseDoggyHL_G_C
// (None)

class UClass* UBaseDoggyHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHL_G_C");

	return Clss;
}


// BaseDoggyHL_G_C BaseDoggyHL_G.Default__BaseDoggyHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHL_G_C* UBaseDoggyHL_G_C::GetDefaultObj()
{
	static class UBaseDoggyHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHL_G_C*>(UBaseDoggyHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


