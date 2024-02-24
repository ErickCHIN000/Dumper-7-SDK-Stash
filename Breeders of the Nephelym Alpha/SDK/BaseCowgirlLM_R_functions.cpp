#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLM_R.BaseCowgirlLM_R_C
// (None)

class UClass* UBaseCowgirlLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLM_R_C");

	return Clss;
}


// BaseCowgirlLM_R_C BaseCowgirlLM_R.Default__BaseCowgirlLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLM_R_C* UBaseCowgirlLM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLM_R_C*>(UBaseCowgirlLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


