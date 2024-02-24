#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNH_G.BaseCowgirlNH_G_C
// (None)

class UClass* UBaseCowgirlNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNH_G_C");

	return Clss;
}


// BaseCowgirlNH_G_C BaseCowgirlNH_G.Default__BaseCowgirlNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNH_G_C* UBaseCowgirlNH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNH_G_C*>(UBaseCowgirlNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


