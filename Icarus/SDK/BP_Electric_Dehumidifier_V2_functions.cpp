#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C
// (Actor)

class UClass* ABP_Electric_Dehumidifier_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Electric_Dehumidifier_V2_C");

	return Clss;
}


// BP_Electric_Dehumidifier_V2_C BP_Electric_Dehumidifier_V2.Default__BP_Electric_Dehumidifier_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Electric_Dehumidifier_V2_C* ABP_Electric_Dehumidifier_V2_C::GetDefaultObj()
{
	static class ABP_Electric_Dehumidifier_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Electric_Dehumidifier_V2_C*>(ABP_Electric_Dehumidifier_V2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.EnergyNetworkStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Electric_Dehumidifier_V2_C::EnergyNetworkStateUpdate(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "EnergyNetworkStateUpdate");

	Params::ABP_Electric_Dehumidifier_V2_C_EnergyNetworkStateUpdate_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.ElectricityStateUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReceivingPower                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Electric_Dehumidifier_V2_C::ElectricityStateUpdated(bool ReceivingPower, bool Temp_bool_Variable, bool CallFunc_IsServer_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class UMaterialInterface* K2Node_Select_Default, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "ElectricityStateUpdated");

	Params::ABP_Electric_Dehumidifier_V2_C_ElectricityStateUpdated_Params Parms{};

	Parms.ReceivingPower = ReceivingPower;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.FanAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Electric_Dehumidifier_V2_C::FanAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "FanAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.FanAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Electric_Dehumidifier_V2_C::FanAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "FanAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.PlayFanAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Electric_Dehumidifier_V2_C::PlayFanAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "PlayFanAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.StopFanAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Electric_Dehumidifier_V2_C::StopFanAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "StopFanAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Electric_Dehumidifier_V2.BP_Electric_Dehumidifier_V2_C.ExecuteUbergraph_BP_Electric_Dehumidifier_V2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddLocalRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Electric_Dehumidifier_V2_C::ExecuteUbergraph_BP_Electric_Dehumidifier_V2(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Electric_Dehumidifier_V2_C", "ExecuteUbergraph_BP_Electric_Dehumidifier_V2");

	Params::ABP_Electric_Dehumidifier_V2_C_ExecuteUbergraph_BP_Electric_Dehumidifier_V2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddLocalRotation_SweepHitResult = CallFunc_K2_AddLocalRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


