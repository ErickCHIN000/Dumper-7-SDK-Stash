#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMN_G.BaseRCowgirlMN_G_C
// (None)

class UClass* UBaseRCowgirlMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMN_G_C");

	return Clss;
}


// BaseRCowgirlMN_G_C BaseRCowgirlMN_G.Default__BaseRCowgirlMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMN_G_C* UBaseRCowgirlMN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMN_G_C*>(UBaseRCowgirlMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


