#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTM_R.BaseDoggyTM_R_C
// (None)

class UClass* UBaseDoggyTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTM_R_C");

	return Clss;
}


// BaseDoggyTM_R_C BaseDoggyTM_R.Default__BaseDoggyTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTM_R_C* UBaseDoggyTM_R_C::GetDefaultObj()
{
	static class UBaseDoggyTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTM_R_C*>(UBaseDoggyTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


