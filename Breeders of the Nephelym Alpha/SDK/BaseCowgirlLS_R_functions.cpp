#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLS_R.BaseCowgirlLS_R_C
// (None)

class UClass* UBaseCowgirlLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLS_R_C");

	return Clss;
}


// BaseCowgirlLS_R_C BaseCowgirlLS_R.Default__BaseCowgirlLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLS_R_C* UBaseCowgirlLS_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLS_R_C*>(UBaseCowgirlLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


