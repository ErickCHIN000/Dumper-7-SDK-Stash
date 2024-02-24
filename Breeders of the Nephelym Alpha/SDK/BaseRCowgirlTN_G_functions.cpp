#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTN_G.BaseRCowgirlTN_G_C
// (None)

class UClass* UBaseRCowgirlTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTN_G_C");

	return Clss;
}


// BaseRCowgirlTN_G_C BaseRCowgirlTN_G.Default__BaseRCowgirlTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTN_G_C* UBaseRCowgirlTN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTN_G_C*>(UBaseRCowgirlTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


