#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTT_R.BaseDoggyTT_R_C
// (None)

class UClass* UBaseDoggyTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTT_R_C");

	return Clss;
}


// BaseDoggyTT_R_C BaseDoggyTT_R.Default__BaseDoggyTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTT_R_C* UBaseDoggyTT_R_C::GetDefaultObj()
{
	static class UBaseDoggyTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTT_R_C*>(UBaseDoggyTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


