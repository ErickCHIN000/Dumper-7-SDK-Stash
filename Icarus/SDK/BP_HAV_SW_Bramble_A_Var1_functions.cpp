#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HAV_SW_Bramble_A_Var1.BP_HAV_SW_Bramble_A_Var1_C
// (Actor)

class UClass* ABP_HAV_SW_Bramble_A_Var1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HAV_SW_Bramble_A_Var1_C");

	return Clss;
}


// BP_HAV_SW_Bramble_A_Var1_C BP_HAV_SW_Bramble_A_Var1.Default__BP_HAV_SW_Bramble_A_Var1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HAV_SW_Bramble_A_Var1_C* ABP_HAV_SW_Bramble_A_Var1_C::GetDefaultObj()
{
	static class ABP_HAV_SW_Bramble_A_Var1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HAV_SW_Bramble_A_Var1_C*>(ABP_HAV_SW_Bramble_A_Var1_C::StaticClass()->DefaultObject);

	return Default;
}

}


