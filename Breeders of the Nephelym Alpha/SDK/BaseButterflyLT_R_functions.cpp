#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLT_R.BaseButterflyLT_R_C
// (None)

class UClass* UBaseButterflyLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLT_R_C");

	return Clss;
}


// BaseButterflyLT_R_C BaseButterflyLT_R.Default__BaseButterflyLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLT_R_C* UBaseButterflyLT_R_C::GetDefaultObj()
{
	static class UBaseButterflyLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLT_R_C*>(UBaseButterflyLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


