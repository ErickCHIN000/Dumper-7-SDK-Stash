#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSM_R.BaseRCowgirlSM_R_C
// (None)

class UClass* UBaseRCowgirlSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSM_R_C");

	return Clss;
}


// BaseRCowgirlSM_R_C BaseRCowgirlSM_R.Default__BaseRCowgirlSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSM_R_C* UBaseRCowgirlSM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSM_R_C*>(UBaseRCowgirlSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


