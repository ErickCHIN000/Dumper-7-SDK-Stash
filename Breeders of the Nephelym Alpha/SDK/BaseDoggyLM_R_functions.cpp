#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLM_R.BaseDoggyLM_R_C
// (None)

class UClass* UBaseDoggyLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLM_R_C");

	return Clss;
}


// BaseDoggyLM_R_C BaseDoggyLM_R.Default__BaseDoggyLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLM_R_C* UBaseDoggyLM_R_C::GetDefaultObj()
{
	static class UBaseDoggyLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLM_R_C*>(UBaseDoggyLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


