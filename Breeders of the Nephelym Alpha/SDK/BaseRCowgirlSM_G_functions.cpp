#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSM_G.BaseRCowgirlSM_G_C
// (None)

class UClass* UBaseRCowgirlSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSM_G_C");

	return Clss;
}


// BaseRCowgirlSM_G_C BaseRCowgirlSM_G.Default__BaseRCowgirlSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSM_G_C* UBaseRCowgirlSM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSM_G_C*>(UBaseRCowgirlSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


