#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseMilkNL_R.BaseMilkNL_R_C
// (None)

class UClass* UBaseMilkNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseMilkNL_R_C");

	return Clss;
}


// BaseMilkNL_R_C BaseMilkNL_R.Default__BaseMilkNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseMilkNL_R_C* UBaseMilkNL_R_C::GetDefaultObj()
{
	static class UBaseMilkNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseMilkNL_R_C*>(UBaseMilkNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


