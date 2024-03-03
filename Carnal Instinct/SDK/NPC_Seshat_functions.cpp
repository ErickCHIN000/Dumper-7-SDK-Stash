#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Seshat.NPC_Seshat_C
// (Actor, Pawn)

class UClass* ANPC_Seshat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Seshat_C");

	return Clss;
}


// NPC_Seshat_C NPC_Seshat.Default__NPC_Seshat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Seshat_C* ANPC_Seshat_C::GetDefaultObj()
{
	static class ANPC_Seshat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Seshat_C*>(ANPC_Seshat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_Seshat.NPC_Seshat_C.TakeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          ResultType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TakeDamage_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          CallFunc_TakeDamage_ResultType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Seshat_C::TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "TakeDamage");

	Params::ANPC_Seshat_C_TakeDamage_Params Parms{};

	Parms.HitData = HitData;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_TakeDamage_Result = CallFunc_TakeDamage_Result;
	Parms.CallFunc_TakeDamage_ResultType = CallFunc_TakeDamage_ResultType;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ResultType != nullptr)
		*ResultType = Parms.ResultType;

}


// Function NPC_Seshat.NPC_Seshat_C.Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_Seshat_C::Death()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "Death");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Seshat.NPC_Seshat_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Seshat_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "GetMontages");

	Params::ANPC_Seshat_C_GetMontages_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function NPC_Seshat.NPC_Seshat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANPC_Seshat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Seshat.NPC_Seshat_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Seshat_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature");

	Params::ANPC_Seshat_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Seshat.NPC_Seshat_C.OnCollisionActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Seshat_C::OnCollisionActivated(enum class E_CollisionPart Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "OnCollisionActivated");

	Params::ANPC_Seshat_C_OnCollisionActivated_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Seshat.NPC_Seshat_C.Update Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_Seshat_C::Update_Items()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "Update Items");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Seshat.NPC_Seshat_C.HandleMeshOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_Seshat_C::HandleMeshOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "HandleMeshOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_Seshat.NPC_Seshat_C.ExecuteUbergraph_NPC_Seshat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ItemBlackLotus_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ItemBlackLotus_C*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_instigator_id                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_instigator_actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FS_dlg_bind_actor_settings  K2Node_MakeStruct_s_dlg_bind_actor_settings                      (HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_add_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_spawned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_add_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_CollisionPart         K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_objective_objective_exist                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_get_objective_objective_is_current                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_objective_index                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_objective_data     CallFunc_get_objective_objective_data                            (HasGetValueTypeHash)
// bool                               CallFunc_get_objective_sub_objective_exist                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_objective_sub_objective_index                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_quest_sub_objective_data CallFunc_get_objective_sub_objective_data                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Seshat_C::ExecuteUbergraph_NPC_Seshat(int32 EntryPoint, TArray<class ABP_ItemBlackLotus_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_ItemBlackLotus_C* CallFunc_Array_Get_Item, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, bool CallFunc_get_objective_objective_exist, bool CallFunc_get_objective_objective_is_current, int32 CallFunc_get_objective_objective_index, const struct FS_quest_objective_data& CallFunc_get_objective_objective_data, bool CallFunc_get_objective_sub_objective_exist, int32 CallFunc_get_objective_sub_objective_index, const struct FS_quest_sub_objective_data& CallFunc_get_objective_sub_objective_data, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Seshat_C", "ExecuteUbergraph_NPC_Seshat");

	Params::ANPC_Seshat_C_ExecuteUbergraph_NPC_Seshat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_ComponentBoundEvent_instigator_id = K2Node_ComponentBoundEvent_instigator_id;
	Parms.K2Node_ComponentBoundEvent_instigator_actor = K2Node_ComponentBoundEvent_instigator_actor;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_s_dlg_bind_actor_settings = K2Node_MakeStruct_s_dlg_bind_actor_settings;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.CallFunc_add_dlg_is_valid = CallFunc_add_dlg_is_valid;
	Parms.CallFunc_add_dlg_is_spawned = CallFunc_add_dlg_is_spawned;
	Parms.CallFunc_add_dlg_dlg_actor = CallFunc_add_dlg_dlg_actor;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_get_objective_objective_exist = CallFunc_get_objective_objective_exist;
	Parms.CallFunc_get_objective_objective_is_current = CallFunc_get_objective_objective_is_current;
	Parms.CallFunc_get_objective_objective_index = CallFunc_get_objective_objective_index;
	Parms.CallFunc_get_objective_objective_data = CallFunc_get_objective_objective_data;
	Parms.CallFunc_get_objective_sub_objective_exist = CallFunc_get_objective_sub_objective_exist;
	Parms.CallFunc_get_objective_sub_objective_index = CallFunc_get_objective_sub_objective_index;
	Parms.CallFunc_get_objective_sub_objective_data = CallFunc_get_objective_sub_objective_data;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


