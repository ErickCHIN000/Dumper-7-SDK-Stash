#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHM_R.BaseCowgirlHM_R_C
// (None)

class UClass* UBaseCowgirlHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHM_R_C");

	return Clss;
}


// BaseCowgirlHM_R_C BaseCowgirlHM_R.Default__BaseCowgirlHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHM_R_C* UBaseCowgirlHM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHM_R_C*>(UBaseCowgirlHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


