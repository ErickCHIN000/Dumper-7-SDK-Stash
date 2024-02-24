#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpn_PreFinishSwap.bpn_PreFinishSwap_C
// (None)

class UClass* Ubpn_PreFinishSwap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpn_PreFinishSwap_C");

	return Clss;
}


// bpn_PreFinishSwap_C bpn_PreFinishSwap.Default__bpn_PreFinishSwap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubpn_PreFinishSwap_C* Ubpn_PreFinishSwap_C::GetDefaultObj()
{
	static class Ubpn_PreFinishSwap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubpn_PreFinishSwap_C*>(Ubpn_PreFinishSwap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpn_PreFinishSwap.bpn_PreFinishSwap_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAbp_ch_igorfpp_01_C*        AnimBP                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbp_ch_igorfpp_01_C*        K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SafelySetIdleState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool Ubpn_PreFinishSwap_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAbp_ch_igorfpp_01_C* AnimBP, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAbp_ch_igorfpp_01_C* K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SafelySetIdleState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpn_PreFinishSwap_C", "Received_Notify");

	Params::Ubpn_PreFinishSwap_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.AnimBP = AnimBP;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01 = K2Node_DynamicCast_AsAbp_Ch_Igorfpp_01;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SafelySetIdleState_ReturnValue = CallFunc_SafelySetIdleState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


