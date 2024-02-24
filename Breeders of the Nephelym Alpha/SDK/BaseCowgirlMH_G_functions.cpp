#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMH_G.BaseCowgirlMH_G_C
// (None)

class UClass* UBaseCowgirlMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMH_G_C");

	return Clss;
}


// BaseCowgirlMH_G_C BaseCowgirlMH_G.Default__BaseCowgirlMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMH_G_C* UBaseCowgirlMH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMH_G_C*>(UBaseCowgirlMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


