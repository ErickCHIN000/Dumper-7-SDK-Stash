#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedMH_R.BaseLiftedMH_R_C
// (None)

class UClass* UBaseLiftedMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedMH_R_C");

	return Clss;
}


// BaseLiftedMH_R_C BaseLiftedMH_R.Default__BaseLiftedMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedMH_R_C* UBaseLiftedMH_R_C::GetDefaultObj()
{
	static class UBaseLiftedMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedMH_R_C*>(UBaseLiftedMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


