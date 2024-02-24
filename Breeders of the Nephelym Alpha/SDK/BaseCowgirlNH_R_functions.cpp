#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNH_R.BaseCowgirlNH_R_C
// (None)

class UClass* UBaseCowgirlNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNH_R_C");

	return Clss;
}


// BaseCowgirlNH_R_C BaseCowgirlNH_R.Default__BaseCowgirlNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNH_R_C* UBaseCowgirlNH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNH_R_C*>(UBaseCowgirlNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


