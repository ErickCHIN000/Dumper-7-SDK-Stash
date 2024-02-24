#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSL_R.BaseCowgirlSL_R_C
// (None)

class UClass* UBaseCowgirlSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSL_R_C");

	return Clss;
}


// BaseCowgirlSL_R_C BaseCowgirlSL_R.Default__BaseCowgirlSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSL_R_C* UBaseCowgirlSL_R_C::GetDefaultObj()
{
	static class UBaseCowgirlSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSL_R_C*>(UBaseCowgirlSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


