#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMN_R.BaseCowgirlMN_R_C
// (None)

class UClass* UBaseCowgirlMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMN_R_C");

	return Clss;
}


// BaseCowgirlMN_R_C BaseCowgirlMN_R.Default__BaseCowgirlMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMN_R_C* UBaseCowgirlMN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMN_R_C*>(UBaseCowgirlMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


