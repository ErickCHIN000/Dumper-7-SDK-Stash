#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTT_G.BaseRCowgirlTT_G_C
// (None)

class UClass* UBaseRCowgirlTT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTT_G_C");

	return Clss;
}


// BaseRCowgirlTT_G_C BaseRCowgirlTT_G.Default__BaseRCowgirlTT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTT_G_C* UBaseRCowgirlTT_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTT_G_C*>(UBaseRCowgirlTT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


