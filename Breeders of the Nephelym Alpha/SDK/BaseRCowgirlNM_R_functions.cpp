#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNM_R.BaseRCowgirlNM_R_C
// (None)

class UClass* UBaseRCowgirlNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNM_R_C");

	return Clss;
}


// BaseRCowgirlNM_R_C BaseRCowgirlNM_R.Default__BaseRCowgirlNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNM_R_C* UBaseRCowgirlNM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNM_R_C*>(UBaseRCowgirlNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


