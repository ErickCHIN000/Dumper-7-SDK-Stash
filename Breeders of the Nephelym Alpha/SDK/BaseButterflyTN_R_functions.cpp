#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTN_R.BaseButterflyTN_R_C
// (None)

class UClass* UBaseButterflyTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTN_R_C");

	return Clss;
}


// BaseButterflyTN_R_C BaseButterflyTN_R.Default__BaseButterflyTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTN_R_C* UBaseButterflyTN_R_C::GetDefaultObj()
{
	static class UBaseButterflyTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTN_R_C*>(UBaseButterflyTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


