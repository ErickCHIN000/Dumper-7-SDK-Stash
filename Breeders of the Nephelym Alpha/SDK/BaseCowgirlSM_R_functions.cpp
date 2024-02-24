#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSM_R.BaseCowgirlSM_R_C
// (None)

class UClass* UBaseCowgirlSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSM_R_C");

	return Clss;
}


// BaseCowgirlSM_R_C BaseCowgirlSM_R.Default__BaseCowgirlSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSM_R_C* UBaseCowgirlSM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSM_R_C*>(UBaseCowgirlSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


