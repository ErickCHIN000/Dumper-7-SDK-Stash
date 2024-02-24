#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTH_R.BaseCowgirlTH_R_C
// (None)

class UClass* UBaseCowgirlTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTH_R_C");

	return Clss;
}


// BaseCowgirlTH_R_C BaseCowgirlTH_R.Default__BaseCowgirlTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTH_R_C* UBaseCowgirlTH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTH_R_C*>(UBaseCowgirlTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


