#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass npc_weaponsmith.npc_weaponsmith_C
// (Actor, Pawn)

class UClass* ANpc_weaponsmith_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("npc_weaponsmith_C");

	return Clss;
}


// npc_weaponsmith_C npc_weaponsmith.Default__npc_weaponsmith_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANpc_weaponsmith_C* ANpc_weaponsmith_C::GetDefaultObj()
{
	static class ANpc_weaponsmith_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANpc_weaponsmith_C*>(ANpc_weaponsmith_C::StaticClass()->DefaultObject);

	return Default;
}


// Function npc_weaponsmith.npc_weaponsmith_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_weaponsmith_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_weaponsmith_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature");

	Params::ANpc_weaponsmith_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_weaponsmith.npc_weaponsmith_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANpc_weaponsmith_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_weaponsmith_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_weaponsmith.npc_weaponsmith_C.ReStockVendor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_weaponsmith_C::ReStockVendor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_weaponsmith_C", "ReStockVendor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_weaponsmith.npc_weaponsmith_C.BndEvt__InteractableArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_weaponsmith_C::BndEvt__InteractableArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_weaponsmith_C", "BndEvt__InteractableArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::ANpc_weaponsmith_C_BndEvt__InteractableArea_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_weaponsmith.npc_weaponsmith_C.ExecuteUbergraph_npc_weaponsmith
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_instigator_id                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_instigator_actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FS_dlg_bind_actor_settings  K2Node_MakeStruct_s_dlg_bind_actor_settings                      (HasGetValueTypeHash)
// bool                               CallFunc_add_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_spawned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_add_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_weaponsmith_C::ExecuteUbergraph_npc_weaponsmith(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchName_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_weaponsmith_C", "ExecuteUbergraph_npc_weaponsmith");

	Params::ANpc_weaponsmith_C_ExecuteUbergraph_npc_weaponsmith_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_instigator_id = K2Node_ComponentBoundEvent_instigator_id;
	Parms.K2Node_ComponentBoundEvent_instigator_actor = K2Node_ComponentBoundEvent_instigator_actor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_s_dlg_bind_actor_settings = K2Node_MakeStruct_s_dlg_bind_actor_settings;
	Parms.CallFunc_add_dlg_is_valid = CallFunc_add_dlg_is_valid;
	Parms.CallFunc_add_dlg_is_spawned = CallFunc_add_dlg_is_spawned;
	Parms.CallFunc_add_dlg_dlg_actor = CallFunc_add_dlg_dlg_actor;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


