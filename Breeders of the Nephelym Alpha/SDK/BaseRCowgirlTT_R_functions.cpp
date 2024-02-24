#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTT_R.BaseRCowgirlTT_R_C
// (None)

class UClass* UBaseRCowgirlTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTT_R_C");

	return Clss;
}


// BaseRCowgirlTT_R_C BaseRCowgirlTT_R.Default__BaseRCowgirlTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTT_R_C* UBaseRCowgirlTT_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTT_R_C*>(UBaseRCowgirlTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


