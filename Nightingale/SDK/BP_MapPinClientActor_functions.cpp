#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapPinClientActor.BP_MapPinClientActor_C
// (Actor)

class UClass* ABP_MapPinClientActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapPinClientActor_C");

	return Clss;
}


// BP_MapPinClientActor_C BP_MapPinClientActor.Default__BP_MapPinClientActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapPinClientActor_C* ABP_MapPinClientActor_C::GetDefaultObj()
{
	static class ABP_MapPinClientActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapPinClientActor_C*>(ABP_MapPinClientActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapPinClientActor.BP_MapPinClientActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MapPinClientActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapPinClientActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapPinClientActor.BP_MapPinClientActor_C.ExecuteUbergraph_BP_MapPinClientActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetWidget_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MapPinWorldspaceIcon_C* K2Node_DynamicCast_AsWBP_Map_Pin_Worldspace_Icon                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void ABP_MapPinClientActor_C::ExecuteUbergraph_BP_MapPinClientActor(int32 EntryPoint, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UWBP_MapPinWorldspaceIcon_C* K2Node_DynamicCast_AsWBP_Map_Pin_Worldspace_Icon, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapPinClientActor_C", "ExecuteUbergraph_BP_MapPinClientActor");

	Params::ABP_MapPinClientActor_C_ExecuteUbergraph_BP_MapPinClientActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWidget_ReturnValue = CallFunc_GetWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Map_Pin_Worldspace_Icon = K2Node_DynamicCast_AsWBP_Map_Pin_Worldspace_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


