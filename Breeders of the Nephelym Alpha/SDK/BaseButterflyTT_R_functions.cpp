#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTT_R.BaseButterflyTT_R_C
// (None)

class UClass* UBaseButterflyTT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTT_R_C");

	return Clss;
}


// BaseButterflyTT_R_C BaseButterflyTT_R.Default__BaseButterflyTT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTT_R_C* UBaseButterflyTT_R_C::GetDefaultObj()
{
	static class UBaseButterflyTT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTT_R_C*>(UBaseButterflyTT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


