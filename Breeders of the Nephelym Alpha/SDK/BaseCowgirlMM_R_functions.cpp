#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMM_R.BaseCowgirlMM_R_C
// (None)

class UClass* UBaseCowgirlMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMM_R_C");

	return Clss;
}


// BaseCowgirlMM_R_C BaseCowgirlMM_R.Default__BaseCowgirlMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMM_R_C* UBaseCowgirlMM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMM_R_C*>(UBaseCowgirlMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


