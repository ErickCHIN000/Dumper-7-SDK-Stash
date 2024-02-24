#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlST_G.BaseRCowgirlST_G_C
// (None)

class UClass* UBaseRCowgirlST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlST_G_C");

	return Clss;
}


// BaseRCowgirlST_G_C BaseRCowgirlST_G.Default__BaseRCowgirlST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlST_G_C* UBaseRCowgirlST_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlST_G_C*>(UBaseRCowgirlST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


