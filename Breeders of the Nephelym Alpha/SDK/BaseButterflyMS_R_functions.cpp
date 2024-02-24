#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMS_R.BaseButterflyMS_R_C
// (None)

class UClass* UBaseButterflyMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMS_R_C");

	return Clss;
}


// BaseButterflyMS_R_C BaseButterflyMS_R.Default__BaseButterflyMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMS_R_C* UBaseButterflyMS_R_C::GetDefaultObj()
{
	static class UBaseButterflyMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMS_R_C*>(UBaseButterflyMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


