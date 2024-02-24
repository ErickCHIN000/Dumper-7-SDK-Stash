#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMS_R.BaseRCowgirlMS_R_C
// (None)

class UClass* UBaseRCowgirlMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMS_R_C");

	return Clss;
}


// BaseRCowgirlMS_R_C BaseRCowgirlMS_R.Default__BaseRCowgirlMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMS_R_C* UBaseRCowgirlMS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMS_R_C*>(UBaseRCowgirlMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


