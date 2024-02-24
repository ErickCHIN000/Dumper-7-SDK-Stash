#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLS_R.BaseButterflyLS_R_C
// (None)

class UClass* UBaseButterflyLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLS_R_C");

	return Clss;
}


// BaseButterflyLS_R_C BaseButterflyLS_R.Default__BaseButterflyLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLS_R_C* UBaseButterflyLS_R_C::GetDefaultObj()
{
	static class UBaseButterflyLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLS_R_C*>(UBaseButterflyLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


