#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHN_R.BaseRCowgirlHN_R_C
// (None)

class UClass* UBaseRCowgirlHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHN_R_C");

	return Clss;
}


// BaseRCowgirlHN_R_C BaseRCowgirlHN_R.Default__BaseRCowgirlHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHN_R_C* UBaseRCowgirlHN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHN_R_C*>(UBaseRCowgirlHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


