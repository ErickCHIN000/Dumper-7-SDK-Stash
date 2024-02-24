#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNL_G.BaseCowgirlNL_G_C
// (None)

class UClass* UBaseCowgirlNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNL_G_C");

	return Clss;
}


// BaseCowgirlNL_G_C BaseCowgirlNL_G.Default__BaseCowgirlNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNL_G_C* UBaseCowgirlNL_G_C::GetDefaultObj()
{
	static class UBaseCowgirlNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNL_G_C*>(UBaseCowgirlNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


