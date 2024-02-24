#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlNT_R.BaseCowgirlNT_R_C
// (None)

class UClass* UBaseCowgirlNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlNT_R_C");

	return Clss;
}


// BaseCowgirlNT_R_C BaseCowgirlNT_R.Default__BaseCowgirlNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlNT_R_C* UBaseCowgirlNT_R_C::GetDefaultObj()
{
	static class UBaseCowgirlNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlNT_R_C*>(UBaseCowgirlNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


