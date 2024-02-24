#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTL_R.BaseCowgirlTL_R_C
// (None)

class UClass* UBaseCowgirlTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTL_R_C");

	return Clss;
}


// BaseCowgirlTL_R_C BaseCowgirlTL_R.Default__BaseCowgirlTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTL_R_C* UBaseCowgirlTL_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTL_R_C*>(UBaseCowgirlTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


