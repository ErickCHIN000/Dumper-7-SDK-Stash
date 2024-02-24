#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HAV_SW_Bramble_A_Var3.BP_HAV_SW_Bramble_A_Var3_C
// (Actor)

class UClass* ABP_HAV_SW_Bramble_A_Var3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HAV_SW_Bramble_A_Var3_C");

	return Clss;
}


// BP_HAV_SW_Bramble_A_Var3_C BP_HAV_SW_Bramble_A_Var3.Default__BP_HAV_SW_Bramble_A_Var3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HAV_SW_Bramble_A_Var3_C* ABP_HAV_SW_Bramble_A_Var3_C::GetDefaultObj()
{
	static class ABP_HAV_SW_Bramble_A_Var3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HAV_SW_Bramble_A_Var3_C*>(ABP_HAV_SW_Bramble_A_Var3_C::StaticClass()->DefaultObject);

	return Default;
}

}


