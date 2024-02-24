#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMH_R.BaseCowgirlMH_R_C
// (None)

class UClass* UBaseCowgirlMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMH_R_C");

	return Clss;
}


// BaseCowgirlMH_R_C BaseCowgirlMH_R.Default__BaseCowgirlMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMH_R_C* UBaseCowgirlMH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMH_R_C*>(UBaseCowgirlMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


