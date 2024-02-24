#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMM_G.BaseCowgirlMM_G_C
// (None)

class UClass* UBaseCowgirlMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMM_G_C");

	return Clss;
}


// BaseCowgirlMM_G_C BaseCowgirlMM_G.Default__BaseCowgirlMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMM_G_C* UBaseCowgirlMM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMM_G_C*>(UBaseCowgirlMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


