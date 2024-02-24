#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTH_R.BaseRCowgirlTH_R_C
// (None)

class UClass* UBaseRCowgirlTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTH_R_C");

	return Clss;
}


// BaseRCowgirlTH_R_C BaseRCowgirlTH_R.Default__BaseRCowgirlTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTH_R_C* UBaseRCowgirlTH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTH_R_C*>(UBaseRCowgirlTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


