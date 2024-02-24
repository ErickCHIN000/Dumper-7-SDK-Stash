#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlML_G.BaseRCowgirlML_G_C
// (None)

class UClass* UBaseRCowgirlML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlML_G_C");

	return Clss;
}


// BaseRCowgirlML_G_C BaseRCowgirlML_G.Default__BaseRCowgirlML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlML_G_C* UBaseRCowgirlML_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlML_G_C*>(UBaseRCowgirlML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


