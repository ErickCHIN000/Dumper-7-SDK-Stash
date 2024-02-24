#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLN_R.BaseButterflyLN_R_C
// (None)

class UClass* UBaseButterflyLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLN_R_C");

	return Clss;
}


// BaseButterflyLN_R_C BaseButterflyLN_R.Default__BaseButterflyLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLN_R_C* UBaseButterflyLN_R_C::GetDefaultObj()
{
	static class UBaseButterflyLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLN_R_C*>(UBaseButterflyLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


