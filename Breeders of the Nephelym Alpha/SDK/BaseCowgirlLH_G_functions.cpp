#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLH_G.BaseCowgirlLH_G_C
// (None)

class UClass* UBaseCowgirlLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLH_G_C");

	return Clss;
}


// BaseCowgirlLH_G_C BaseCowgirlLH_G.Default__BaseCowgirlLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLH_G_C* UBaseCowgirlLH_G_C::GetDefaultObj()
{
	static class UBaseCowgirlLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLH_G_C*>(UBaseCowgirlLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


