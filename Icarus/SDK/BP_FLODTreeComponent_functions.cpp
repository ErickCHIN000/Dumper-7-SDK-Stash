#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FLODTreeComponent.BP_FLODTreeComponent_C
// (None)

class UClass* UBP_FLODTreeComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FLODTreeComponent_C");

	return Clss;
}


// BP_FLODTreeComponent_C BP_FLODTreeComponent.Default__BP_FLODTreeComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FLODTreeComponent_C* UBP_FLODTreeComponent_C::GetDefaultObj()
{
	static class UBP_FLODTreeComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FLODTreeComponent_C*>(UBP_FLODTreeComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.RevealImpl
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_FLODTreeComponent_C::RevealImpl(struct FTransform& Transform, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODTreeComponent_C", "RevealImpl");

	Params::UBP_FLODTreeComponent_C_RevealImpl_Params Parms{};

	Parms.Transform = Transform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ConcealingImpl
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_FLODTreeComponent_C::ConcealingImpl(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODTreeComponent_C", "ConcealingImpl");

	Params::UBP_FLODTreeComponent_C_ConcealingImpl_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_FLODTreeComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODTreeComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ExecuteUbergraph_BP_FLODTreeComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATreeBase*                   K2Node_DynamicCast_AsTree_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FLODTreeComponent_C::ExecuteUbergraph_BP_FLODTreeComponent(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ATreeBase* K2Node_DynamicCast_AsTree_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FLODTreeComponent_C", "ExecuteUbergraph_BP_FLODTreeComponent");

	Params::UBP_FLODTreeComponent_C_ExecuteUbergraph_BP_FLODTreeComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsTree_Base = K2Node_DynamicCast_AsTree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


