#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHT_R.BaseRCowgirlHT_R_C
// (None)

class UClass* UBaseRCowgirlHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHT_R_C");

	return Clss;
}


// BaseRCowgirlHT_R_C BaseRCowgirlHT_R.Default__BaseRCowgirlHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHT_R_C* UBaseRCowgirlHT_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHT_R_C*>(UBaseRCowgirlHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


