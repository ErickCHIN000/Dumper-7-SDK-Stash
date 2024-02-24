#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNM_R.BaseCowgirlNM_R_C
// (None)

class UClass* UBaseCowgirlNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNM_R_C");

	return Clss;
}


// BaseCowgirlNM_R_C BaseCowgirlNM_R.Default__BaseCowgirlNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNM_R_C* UBaseCowgirlNM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNM_R_C*>(UBaseCowgirlNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


