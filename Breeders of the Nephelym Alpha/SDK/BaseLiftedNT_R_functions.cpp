#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedNT_R.BaseLiftedNT_R_C
// (None)

class UClass* UBaseLiftedNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedNT_R_C");

	return Clss;
}


// BaseLiftedNT_R_C BaseLiftedNT_R.Default__BaseLiftedNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedNT_R_C* UBaseLiftedNT_R_C::GetDefaultObj()
{
	static class UBaseLiftedNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedNT_R_C*>(UBaseLiftedNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


