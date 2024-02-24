#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTN_R.BaseDoggyTN_R_C
// (None)

class UClass* UBaseDoggyTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTN_R_C");

	return Clss;
}


// BaseDoggyTN_R_C BaseDoggyTN_R.Default__BaseDoggyTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTN_R_C* UBaseDoggyTN_R_C::GetDefaultObj()
{
	static class UBaseDoggyTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTN_R_C*>(UBaseDoggyTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


