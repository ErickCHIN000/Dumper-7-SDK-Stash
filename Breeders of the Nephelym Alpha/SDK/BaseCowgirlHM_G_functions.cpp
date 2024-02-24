#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHM_G.BaseCowgirlHM_G_C
// (None)

class UClass* UBaseCowgirlHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHM_G_C");

	return Clss;
}


// BaseCowgirlHM_G_C BaseCowgirlHM_G.Default__BaseCowgirlHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHM_G_C* UBaseCowgirlHM_G_C::GetDefaultObj()
{
	static class UBaseCowgirlHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHM_G_C*>(UBaseCowgirlHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


