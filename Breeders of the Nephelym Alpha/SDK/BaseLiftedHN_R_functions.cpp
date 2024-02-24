#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHN_R.BaseLiftedHN_R_C
// (None)

class UClass* UBaseLiftedHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHN_R_C");

	return Clss;
}


// BaseLiftedHN_R_C BaseLiftedHN_R.Default__BaseLiftedHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHN_R_C* UBaseLiftedHN_R_C::GetDefaultObj()
{
	static class UBaseLiftedHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHN_R_C*>(UBaseLiftedHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


