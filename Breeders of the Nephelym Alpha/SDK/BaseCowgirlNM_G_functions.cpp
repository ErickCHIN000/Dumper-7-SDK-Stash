#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNM_G.BaseCowgirlNM_G_C
// (None)

class UClass* UBaseCowgirlNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNM_G_C");

	return Clss;
}


// BaseCowgirlNM_G_C BaseCowgirlNM_G.Default__BaseCowgirlNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNM_G_C* UBaseCowgirlNM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNM_G_C*>(UBaseCowgirlNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


