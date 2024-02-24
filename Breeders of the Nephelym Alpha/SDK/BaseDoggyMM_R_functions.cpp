#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMM_R.BaseDoggyMM_R_C
// (None)

class UClass* UBaseDoggyMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMM_R_C");

	return Clss;
}


// BaseDoggyMM_R_C BaseDoggyMM_R.Default__BaseDoggyMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMM_R_C* UBaseDoggyMM_R_C::GetDefaultObj()
{
	static class UBaseDoggyMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMM_R_C*>(UBaseDoggyMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


