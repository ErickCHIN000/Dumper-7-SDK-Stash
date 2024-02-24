#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C
// (Actor)

class UClass* ABP_SW_Bramble_A_Var3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SW_Bramble_A_Var3_C");

	return Clss;
}


// BP_SW_Bramble_A_Var3_C BP_SW_Bramble_A_Var3.Default__BP_SW_Bramble_A_Var3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SW_Bramble_A_Var3_C* ABP_SW_Bramble_A_Var3_C::GetDefaultObj()
{
	static class ABP_SW_Bramble_A_Var3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SW_Bramble_A_Var3_C*>(ABP_SW_Bramble_A_Var3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C.PlayHarvestFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_HAV_SW_Bramble_A_Var3_C* CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SW_Bramble_A_Var3_C::PlayHarvestFX(const struct FVector& Location, class AIcarusPlayerCharacter* Instigator, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HAV_SW_Bramble_A_Var3_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SW_Bramble_A_Var3_C", "PlayHarvestFX");

	Params::ABP_SW_Bramble_A_Var3_C_PlayHarvestFX_Params Parms{};

	Parms.Location = Location;
	Parms.Instigator = Instigator;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SW_Bramble_A_Var3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SW_Bramble_A_Var3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C.BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SW_Bramble_A_Var3_C::BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SW_Bramble_A_Var3_C", "BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_SW_Bramble_A_Var3_C_BndEvt__BP_SW_Bramble_A_Var1_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SW_Bramble_A_Var3.BP_SW_Bramble_A_Var3_C.ExecuteUbergraph_BP_SW_Bramble_A_Var3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Mount_Base_C*            K2Node_DynamicCast_AsBP_Mount_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifierState_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier_1                                     (NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier_2                                     (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SW_Bramble_A_Var3_C::ExecuteUbergraph_BP_SW_Bramble_A_Var3(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, const struct FModifier& K2Node_MakeStruct_Modifier, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasModifierState_ReturnValue, bool CallFunc_HasModifierState_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasModifierState_ReturnValue_2, int32 CallFunc_AddModifierState_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier_1, const struct FModifier& K2Node_MakeStruct_Modifier_2, int32 CallFunc_AddModifierState_ReturnValue_1, int32 CallFunc_AddModifierState_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SW_Bramble_A_Var3_C", "ExecuteUbergraph_BP_SW_Bramble_A_Var3");

	Params::ABP_SW_Bramble_A_Var3_C_ExecuteUbergraph_BP_SW_Bramble_A_Var3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Mount_Base = K2Node_DynamicCast_AsBP_Mount_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasModifierState_ReturnValue = CallFunc_HasModifierState_ReturnValue;
	Parms.CallFunc_HasModifierState_ReturnValue_1 = CallFunc_HasModifierState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasModifierState_ReturnValue_2 = CallFunc_HasModifierState_ReturnValue_2;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier_1 = K2Node_MakeStruct_Modifier_1;
	Parms.K2Node_MakeStruct_Modifier_2 = K2Node_MakeStruct_Modifier_2;
	Parms.CallFunc_AddModifierState_ReturnValue_1 = CallFunc_AddModifierState_ReturnValue_1;
	Parms.CallFunc_AddModifierState_ReturnValue_2 = CallFunc_AddModifierState_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


