#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTL_R.BaseRCowgirlTL_R_C
// (None)

class UClass* UBaseRCowgirlTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTL_R_C");

	return Clss;
}


// BaseRCowgirlTL_R_C BaseRCowgirlTL_R.Default__BaseRCowgirlTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTL_R_C* UBaseRCowgirlTL_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTL_R_C*>(UBaseRCowgirlTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


