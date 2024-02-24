#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMM_R.BaseRCowgirlMM_R_C
// (None)

class UClass* UBaseRCowgirlMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMM_R_C");

	return Clss;
}


// BaseRCowgirlMM_R_C BaseRCowgirlMM_R.Default__BaseRCowgirlMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMM_R_C* UBaseRCowgirlMM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMM_R_C*>(UBaseRCowgirlMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


