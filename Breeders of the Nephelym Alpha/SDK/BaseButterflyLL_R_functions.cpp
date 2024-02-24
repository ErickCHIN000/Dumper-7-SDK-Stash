#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLL_R.BaseButterflyLL_R_C
// (None)

class UClass* UBaseButterflyLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLL_R_C");

	return Clss;
}


// BaseButterflyLL_R_C BaseButterflyLL_R.Default__BaseButterflyLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLL_R_C* UBaseButterflyLL_R_C::GetDefaultObj()
{
	static class UBaseButterflyLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLL_R_C*>(UBaseButterflyLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


