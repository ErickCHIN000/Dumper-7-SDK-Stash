#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTM_R.BaseRCowgirlTM_R_C
// (None)

class UClass* UBaseRCowgirlTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTM_R_C");

	return Clss;
}


// BaseRCowgirlTM_R_C BaseRCowgirlTM_R.Default__BaseRCowgirlTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTM_R_C* UBaseRCowgirlTM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTM_R_C*>(UBaseRCowgirlTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


