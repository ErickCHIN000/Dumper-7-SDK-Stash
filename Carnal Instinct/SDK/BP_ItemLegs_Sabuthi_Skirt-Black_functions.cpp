#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemLegs_Sabuthi_Skirt-Black.BP_ItemLegs_Sabuthi_Skirt-Black_C
// (Actor)

class UClass* ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemLegs_Sabuthi_Skirt-Black_C");

	return Clss;
}


// BP_ItemLegs_Sabuthi_Skirt-Black_C BP_ItemLegs_Sabuthi_Skirt-Black.Default__BP_ItemLegs_Sabuthi_Skirt-Black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C* ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C::GetDefaultObj()
{
	static class ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C*>(ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemLegs_Sabuthi_Skirt-Black.BP_ItemLegs_Sabuthi_Skirt-Black_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_Sabuthi_Skirt-Black_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemLegs_Sabuthi_Skirt-Black.BP_ItemLegs_Sabuthi_Skirt-Black_C.ExecuteUbergraph_BP_ItemLegs_Sabuthi_Skirt-Black
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C::ExecuteUbergraph_BP_ItemLegs_Sabuthi_SkirtMinusBlack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemLegs_Sabuthi_Skirt-Black_C", "ExecuteUbergraph_BP_ItemLegs_Sabuthi_Skirt-Black");

	Params::ABP_ItemLegs_Sabuthi_SkirtMinusBlack_C_ExecuteUbergraph_BP_ItemLegs_Sabuthi_SkirtMinusBlack_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


