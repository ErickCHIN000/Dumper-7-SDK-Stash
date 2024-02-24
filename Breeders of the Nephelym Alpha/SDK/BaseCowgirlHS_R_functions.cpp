#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlHS_R.BaseCowgirlHS_R_C
// (None)

class UClass* UBaseCowgirlHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlHS_R_C");

	return Clss;
}


// BaseCowgirlHS_R_C BaseCowgirlHS_R.Default__BaseCowgirlHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlHS_R_C* UBaseCowgirlHS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlHS_R_C*>(UBaseCowgirlHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


