#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fireplace.BP_Fireplace_C
// (Actor)

class UClass* ABP_Fireplace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fireplace_C");

	return Clss;
}


// BP_Fireplace_C BP_Fireplace.Default__BP_Fireplace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fireplace_C* ABP_Fireplace_C::GetDefaultObj()
{
	static class ABP_Fireplace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fireplace_C*>(ABP_Fireplace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fireplace.BP_Fireplace_C.UpdateAttachedSmokeParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADeployable*>         CallFunc_GetAttachedDeployableChildren_ReturnValue               (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fireplace_Chimney_Cap_Half_C*K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        CallFunc_GetChildCap_ChildCap                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fireplace_Chimney_Cap_Half_C*K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fireplace_C::UpdateAttachedSmokeParticles(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ADeployable*>& CallFunc_GetAttachedDeployableChildren_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_2, class ABP_DeployableBase_C* CallFunc_GetChildCap_ChildCap, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_C", "UpdateAttachedSmokeParticles");

	Params::ABP_Fireplace_C_UpdateAttachedSmokeParticles_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAttachedDeployableChildren_ReturnValue = CallFunc_GetAttachedDeployableChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetChildCap_ChildCap = CallFunc_GetChildCap_ChildCap;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half_1 = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_1 = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Fireplace.BP_Fireplace_C.GeneratorStateUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UThermalComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fireplace_C::GeneratorStateUpdate(bool Active, class UMaterialInterface* Temp_object_Variable, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_C", "GeneratorStateUpdate");

	Params::ABP_Fireplace_C_GeneratorStateUpdate_Params Parms{};

	Parms.Active = Active;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Fireplace.BP_Fireplace_C.AuraEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fireplace_C::AuraEffect(bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_C", "AuraEffect");

	Params::ABP_Fireplace_C_AuraEffect_Params Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Fireplace.BP_Fireplace_C.AttachedDeployableActorsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Fireplace_C::AttachedDeployableActorsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_C", "AttachedDeployableActorsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fireplace.BP_Fireplace_C.ExecuteUbergraph_BP_Fireplace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Active                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fireplace_C::ExecuteUbergraph_BP_Fireplace(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool K2Node_CustomEvent_Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_C", "ExecuteUbergraph_BP_Fireplace");

	Params::ABP_Fireplace_C_ExecuteUbergraph_BP_Fireplace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.K2Node_CustomEvent_Active = K2Node_CustomEvent_Active;

	UObject::ProcessEvent(Func, &Parms);

}

}


