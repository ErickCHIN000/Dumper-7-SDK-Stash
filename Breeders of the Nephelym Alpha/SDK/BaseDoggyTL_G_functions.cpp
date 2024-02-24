#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTL_G.BaseDoggyTL_G_C
// (None)

class UClass* UBaseDoggyTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTL_G_C");

	return Clss;
}


// BaseDoggyTL_G_C BaseDoggyTL_G.Default__BaseDoggyTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTL_G_C* UBaseDoggyTL_G_C::GetDefaultObj()
{
	static class UBaseDoggyTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTL_G_C*>(UBaseDoggyTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


