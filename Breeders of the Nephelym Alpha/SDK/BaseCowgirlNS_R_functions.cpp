#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNS_R.BaseCowgirlNS_R_C
// (None)

class UClass* UBaseCowgirlNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNS_R_C");

	return Clss;
}


// BaseCowgirlNS_R_C BaseCowgirlNS_R.Default__BaseCowgirlNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNS_R_C* UBaseCowgirlNS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNS_R_C*>(UBaseCowgirlNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


