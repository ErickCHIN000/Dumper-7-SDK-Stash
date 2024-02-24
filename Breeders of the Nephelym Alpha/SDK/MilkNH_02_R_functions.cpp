#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNH_02_R.MilkNH_02_R_C
// (None)

class UClass* UMilkNH_02_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNH_02_R_C");

	return Clss;
}


// MilkNH_02_R_C MilkNH_02_R.Default__MilkNH_02_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNH_02_R_C* UMilkNH_02_R_C::GetDefaultObj()
{
	static class UMilkNH_02_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNH_02_R_C*>(UMilkNH_02_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


