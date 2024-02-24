#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSM_G.BaseCowgirlSM_G_C
// (None)

class UClass* UBaseCowgirlSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSM_G_C");

	return Clss;
}


// BaseCowgirlSM_G_C BaseCowgirlSM_G.Default__BaseCowgirlSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSM_G_C* UBaseCowgirlSM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSM_G_C*>(UBaseCowgirlSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


