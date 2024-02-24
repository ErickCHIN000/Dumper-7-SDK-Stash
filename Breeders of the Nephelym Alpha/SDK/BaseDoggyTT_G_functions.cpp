#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTT_G.BaseDoggyTT_G_C
// (None)

class UClass* UBaseDoggyTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTT_G_C");

	return Clss;
}


// BaseDoggyTT_G_C BaseDoggyTT_G.Default__BaseDoggyTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTT_G_C* UBaseDoggyTT_G_C::GetDefaultObj()
{
	static class UBaseDoggyTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTT_G_C*>(UBaseDoggyTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


