#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTM_R.BaseCowgirlTM_R_C
// (None)

class UClass* UBaseCowgirlTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTM_R_C");

	return Clss;
}


// BaseCowgirlTM_R_C BaseCowgirlTM_R.Default__BaseCowgirlTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTM_R_C* UBaseCowgirlTM_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTM_R_C*>(UBaseCowgirlTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


