#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLM_R.BaseRCowgirlLM_R_C
// (None)

class UClass* UBaseRCowgirlLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLM_R_C");

	return Clss;
}


// BaseRCowgirlLM_R_C BaseRCowgirlLM_R.Default__BaseRCowgirlLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLM_R_C* UBaseRCowgirlLM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLM_R_C*>(UBaseRCowgirlLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


