#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHS_G.BaseCowgirlHS_G_C
// (None)

class UClass* UBaseCowgirlHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHS_G_C");

	return Clss;
}


// BaseCowgirlHS_G_C BaseCowgirlHS_G.Default__BaseCowgirlHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHS_G_C* UBaseCowgirlHS_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHS_G_C*>(UBaseCowgirlHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


