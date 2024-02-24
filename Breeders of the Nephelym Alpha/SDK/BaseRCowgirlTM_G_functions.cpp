#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTM_G.BaseRCowgirlTM_G_C
// (None)

class UClass* UBaseRCowgirlTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTM_G_C");

	return Clss;
}


// BaseRCowgirlTM_G_C BaseRCowgirlTM_G.Default__BaseRCowgirlTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTM_G_C* UBaseRCowgirlTM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTM_G_C*>(UBaseRCowgirlTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


