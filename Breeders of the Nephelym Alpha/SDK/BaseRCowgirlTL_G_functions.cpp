#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlTL_G.BaseRCowgirlTL_G_C
// (None)

class UClass* UBaseRCowgirlTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlTL_G_C");

	return Clss;
}


// BaseRCowgirlTL_G_C BaseRCowgirlTL_G.Default__BaseRCowgirlTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlTL_G_C* UBaseRCowgirlTL_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlTL_G_C*>(UBaseRCowgirlTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


