#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemProxy_DestroyedFeedback.BP_ItemProxy_DestroyedFeedback_C
// (Actor)

class UClass* ABP_ItemProxy_DestroyedFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemProxy_DestroyedFeedback_C");

	return Clss;
}


// BP_ItemProxy_DestroyedFeedback_C BP_ItemProxy_DestroyedFeedback.Default__BP_ItemProxy_DestroyedFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemProxy_DestroyedFeedback_C* ABP_ItemProxy_DestroyedFeedback_C::GetDefaultObj()
{
	static class ABP_ItemProxy_DestroyedFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemProxy_DestroyedFeedback_C*>(ABP_ItemProxy_DestroyedFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemProxy_DestroyedFeedback.BP_ItemProxy_DestroyedFeedback_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemProxy_DestroyedFeedback_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_DestroyedFeedback_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemProxy_DestroyedFeedback.BP_ItemProxy_DestroyedFeedback_C.ExecuteUbergraph_BP_ItemProxy_DestroyedFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FloatyTextComponent_C*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemProxy_DestroyedFeedback_C::ExecuteUbergraph_BP_ItemProxy_DestroyedFeedback(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UBP_FloatyTextComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemProxy_DestroyedFeedback_C", "ExecuteUbergraph_BP_ItemProxy_DestroyedFeedback");

	Params::ABP_ItemProxy_DestroyedFeedback_C_ExecuteUbergraph_BP_ItemProxy_DestroyedFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


