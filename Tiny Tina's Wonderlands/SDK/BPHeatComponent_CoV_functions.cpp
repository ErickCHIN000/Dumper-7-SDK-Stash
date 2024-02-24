#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPHeatComponent_CoV.BPHeatComponent_CoV_C
// (None)

class UClass* UBPHeatComponent_CoV_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPHeatComponent_CoV_C");

	return Clss;
}


// BPHeatComponent_CoV_C BPHeatComponent_CoV.Default__BPHeatComponent_CoV_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPHeatComponent_CoV_C* UBPHeatComponent_CoV_C::GetDefaultObj()
{
	static class UBPHeatComponent_CoV_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPHeatComponent_CoV_C*>(UBPHeatComponent_CoV_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPHeatComponent_CoV_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPHeatComponent_CoV_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPHeatComponent_CoV_C::OnStartOverheat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPHeatComponent_CoV_C", "OnStartOverheat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_COV_BaseWeapon_C*    K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPHeatComponent_CoV_C::ExecuteUbergraph_BPHeatComponent_CoV(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_COV_BaseWeapon_C* K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPHeatComponent_CoV_C", "ExecuteUbergraph_BPHeatComponent_CoV");

	Params::UBPHeatComponent_CoV_C_ExecuteUbergraph_BPHeatComponent_CoV_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon = K2Node_DynamicCast_AsBPWeap_COV_Base_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


