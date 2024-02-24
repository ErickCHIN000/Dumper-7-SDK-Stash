#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHT_R.BaseButterflyHT_R_C
// (None)

class UClass* UBaseButterflyHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHT_R_C");

	return Clss;
}


// BaseButterflyHT_R_C BaseButterflyHT_R.Default__BaseButterflyHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHT_R_C* UBaseButterflyHT_R_C::GetDefaultObj()
{
	static class UBaseButterflyHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHT_R_C*>(UBaseButterflyHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


