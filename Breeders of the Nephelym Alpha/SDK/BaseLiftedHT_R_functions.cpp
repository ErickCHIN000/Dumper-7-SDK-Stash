#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseLiftedHT_R.BaseLiftedHT_R_C
// (None)

class UClass* UBaseLiftedHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseLiftedHT_R_C");

	return Clss;
}


// BaseLiftedHT_R_C BaseLiftedHT_R.Default__BaseLiftedHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseLiftedHT_R_C* UBaseLiftedHT_R_C::GetDefaultObj()
{
	static class UBaseLiftedHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseLiftedHT_R_C*>(UBaseLiftedHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


