#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNM_R.BaseMilkNM_R_C
// (None)

class UClass* UBaseMilkNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNM_R_C");

	return Clss;
}


// BaseMilkNM_R_C BaseMilkNM_R.Default__BaseMilkNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNM_R_C* UBaseMilkNM_R_C::GetDefaultObj()
{
	static class UBaseMilkNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNM_R_C*>(UBaseMilkNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


