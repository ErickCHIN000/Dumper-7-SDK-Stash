#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSN_R.BaseCowgirlSN_R_C
// (None)

class UClass* UBaseCowgirlSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSN_R_C");

	return Clss;
}


// BaseCowgirlSN_R_C BaseCowgirlSN_R.Default__BaseCowgirlSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSN_R_C* UBaseCowgirlSN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSN_R_C*>(UBaseCowgirlSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


