#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlMT_R.BaseCowgirlMT_R_C
// (None)

class UClass* UBaseCowgirlMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlMT_R_C");

	return Clss;
}


// BaseCowgirlMT_R_C BaseCowgirlMT_R.Default__BaseCowgirlMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlMT_R_C* UBaseCowgirlMT_R_C::GetDefaultObj()
{
	static class UBaseCowgirlMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlMT_R_C*>(UBaseCowgirlMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


