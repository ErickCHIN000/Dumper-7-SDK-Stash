#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNH_R.BaseMilkNH_R_C
// (None)

class UClass* UBaseMilkNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNH_R_C");

	return Clss;
}


// BaseMilkNH_R_C BaseMilkNH_R.Default__BaseMilkNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNH_R_C* UBaseMilkNH_R_C::GetDefaultObj()
{
	static class UBaseMilkNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNH_R_C*>(UBaseMilkNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


