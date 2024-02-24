#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNN_R.BaseButterflyNN_R_C
// (None)

class UClass* UBaseButterflyNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNN_R_C");

	return Clss;
}


// BaseButterflyNN_R_C BaseButterflyNN_R.Default__BaseButterflyNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNN_R_C* UBaseButterflyNN_R_C::GetDefaultObj()
{
	static class UBaseButterflyNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNN_R_C*>(UBaseButterflyNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


