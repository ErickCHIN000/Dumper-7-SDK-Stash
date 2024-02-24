#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlTN_R.BaseCowgirlTN_R_C
// (None)

class UClass* UBaseCowgirlTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlTN_R_C");

	return Clss;
}


// BaseCowgirlTN_R_C BaseCowgirlTN_R.Default__BaseCowgirlTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlTN_R_C* UBaseCowgirlTN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlTN_R_C*>(UBaseCowgirlTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


