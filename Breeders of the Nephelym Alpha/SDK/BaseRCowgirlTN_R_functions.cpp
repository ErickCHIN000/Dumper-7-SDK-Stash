#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTN_R.BaseRCowgirlTN_R_C
// (None)

class UClass* UBaseRCowgirlTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTN_R_C");

	return Clss;
}


// BaseRCowgirlTN_R_C BaseRCowgirlTN_R.Default__BaseRCowgirlTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTN_R_C* UBaseRCowgirlTN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTN_R_C*>(UBaseRCowgirlTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


