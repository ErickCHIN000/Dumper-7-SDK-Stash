#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSS_R.BaseCowgirlSS_R_C
// (None)

class UClass* UBaseCowgirlSS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSS_R_C");

	return Clss;
}


// BaseCowgirlSS_R_C BaseCowgirlSS_R.Default__BaseCowgirlSS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSS_R_C* UBaseCowgirlSS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlSS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSS_R_C*>(UBaseCowgirlSS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


