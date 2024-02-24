#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNL_02_R.MilkNL_02_R_C
// (None)

class UClass* UMilkNL_02_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNL_02_R_C");

	return Clss;
}


// MilkNL_02_R_C MilkNL_02_R.Default__MilkNL_02_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNL_02_R_C* UMilkNL_02_R_C::GetDefaultObj()
{
	static class UMilkNL_02_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNL_02_R_C*>(UMilkNL_02_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


