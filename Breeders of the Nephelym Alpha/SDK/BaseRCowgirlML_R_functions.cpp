#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlML_R.BaseRCowgirlML_R_C
// (None)

class UClass* UBaseRCowgirlML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlML_R_C");

	return Clss;
}


// BaseRCowgirlML_R_C BaseRCowgirlML_R.Default__BaseRCowgirlML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlML_R_C* UBaseRCowgirlML_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlML_R_C*>(UBaseRCowgirlML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


