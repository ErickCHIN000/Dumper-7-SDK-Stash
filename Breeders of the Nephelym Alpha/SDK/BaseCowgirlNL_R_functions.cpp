#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNL_R.BaseCowgirlNL_R_C
// (None)

class UClass* UBaseCowgirlNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNL_R_C");

	return Clss;
}


// BaseCowgirlNL_R_C BaseCowgirlNL_R.Default__BaseCowgirlNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNL_R_C* UBaseCowgirlNL_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNL_R_C*>(UBaseCowgirlNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


