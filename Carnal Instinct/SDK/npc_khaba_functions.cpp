#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass npc_khaba.npc_khaba_C
// (Actor, Pawn)

class UClass* ANpc_khaba_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("npc_khaba_C");

	return Clss;
}


// npc_khaba_C npc_khaba.Default__npc_khaba_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANpc_khaba_C* ANpc_khaba_C::GetDefaultObj()
{
	static class ANpc_khaba_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANpc_khaba_C*>(ANpc_khaba_C::StaticClass()->DefaultObject);

	return Default;
}


// Function npc_khaba.npc_khaba_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_khaba_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_khaba_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature");

	Params::ANpc_khaba_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_khaba.npc_khaba_C.ExecuteUbergraph_npc_khaba
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_instigator_id                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_instigator_actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FS_dlg_bind_actor_settings  K2Node_MakeStruct_s_dlg_bind_actor_settings                      (HasGetValueTypeHash)
// bool                               CallFunc_add_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_spawned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_add_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_khaba_C::ExecuteUbergraph_npc_khaba(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_khaba_C", "ExecuteUbergraph_npc_khaba");

	Params::ANpc_khaba_C_ExecuteUbergraph_npc_khaba_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_instigator_id = K2Node_ComponentBoundEvent_instigator_id;
	Parms.K2Node_ComponentBoundEvent_instigator_actor = K2Node_ComponentBoundEvent_instigator_actor;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_s_dlg_bind_actor_settings = K2Node_MakeStruct_s_dlg_bind_actor_settings;
	Parms.CallFunc_add_dlg_is_valid = CallFunc_add_dlg_is_valid;
	Parms.CallFunc_add_dlg_is_spawned = CallFunc_add_dlg_is_spawned;
	Parms.CallFunc_add_dlg_dlg_actor = CallFunc_add_dlg_dlg_actor;

	UObject::ProcessEvent(Func, &Parms);

}

}


