#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHS_R.BaseButterflyHS_R_C
// (None)

class UClass* UBaseButterflyHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHS_R_C");

	return Clss;
}


// BaseButterflyHS_R_C BaseButterflyHS_R.Default__BaseButterflyHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHS_R_C* UBaseButterflyHS_R_C::GetDefaultObj()
{
	static class UBaseButterflyHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHS_R_C*>(UBaseButterflyHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


