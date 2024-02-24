#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTT_R.BaseCowgirlTT_R_C
// (None)

class UClass* UBaseCowgirlTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTT_R_C");

	return Clss;
}


// BaseCowgirlTT_R_C BaseCowgirlTT_R.Default__BaseCowgirlTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTT_R_C* UBaseCowgirlTT_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTT_R_C*>(UBaseCowgirlTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


