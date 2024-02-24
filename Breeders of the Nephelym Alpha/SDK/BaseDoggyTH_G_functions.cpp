#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTH_G.BaseDoggyTH_G_C
// (None)

class UClass* UBaseDoggyTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTH_G_C");

	return Clss;
}


// BaseDoggyTH_G_C BaseDoggyTH_G.Default__BaseDoggyTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTH_G_C* UBaseDoggyTH_G_C::GetDefaultObj()
{
	static class UBaseDoggyTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTH_G_C*>(UBaseDoggyTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


