#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BaseAI_Dialog.BP_BaseAI_Dialog_C
// (Actor, Pawn)

class UClass* ABP_BaseAI_Dialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BaseAI_Dialog_C");

	return Clss;
}


// BP_BaseAI_Dialog_C BP_BaseAI_Dialog.Default__BP_BaseAI_Dialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BaseAI_Dialog_C* ABP_BaseAI_Dialog_C::GetDefaultObj()
{
	static class ABP_BaseAI_Dialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BaseAI_Dialog_C*>(ABP_BaseAI_Dialog_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.TakeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          ResultType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TakeDamage_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          CallFunc_TakeDamage_ResultType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseAI_Dialog_C::TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "TakeDamage");

	Params::ABP_BaseAI_Dialog_C_TakeDamage_Params Parms{};

	Parms.HitData = HitData;
	Parms.CallFunc_TakeDamage_Result = CallFunc_TakeDamage_Result;
	Parms.CallFunc_TakeDamage_ResultType = CallFunc_TakeDamage_ResultType;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (ResultType != nullptr)
		*ResultType = Parms.ResultType;

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.SetHostile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_BaseAI_Dialog_C::SetHostile(TArray<class UClass*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "SetHostile");

	Params::ABP_BaseAI_Dialog_C_SetHostile_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.SetFriendly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::SetFriendly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "SetFriendly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BaseAI_Dialog_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature");

	Params::ABP_BaseAI_Dialog_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseAI_Dialog_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature");

	Params::ABP_BaseAI_Dialog_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ed_parent_begingame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseAI_Dialog_C::Ed_parent_begingame(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "ed_parent_begingame");

	Params::ABP_BaseAI_Dialog_C_Ed_parent_begingame_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ed_parent_savegame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::Ed_parent_savegame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "ed_parent_savegame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BaseAI_Dialog_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BaseAI_Dialog.BP_BaseAI_Dialog_C.ExecuteUbergraph_BP_BaseAI_Dialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// class Abp_dlg_actor_C*             K2Node_ComponentBoundEvent_dlg_actor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          K2Node_ComponentBoundEvent_dlg_status                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_loaded_save_file                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_loaded_save_file                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BaseAI_Dialog_C::ExecuteUbergraph_BP_BaseAI_Dialog(int32 EntryPoint, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_1, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_2, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_ComponentBoundEvent_loaded_save_file, bool K2Node_CustomEvent_loaded_save_file, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BaseAI_Dialog_C", "ExecuteUbergraph_BP_BaseAI_Dialog");

	Params::ABP_BaseAI_Dialog_C_ExecuteUbergraph_BP_BaseAI_Dialog_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_ComponentBoundEvent_dlg_actor = K2Node_ComponentBoundEvent_dlg_actor;
	Parms.K2Node_ComponentBoundEvent_dlg_status = K2Node_ComponentBoundEvent_dlg_status;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_loaded_save_file = K2Node_ComponentBoundEvent_loaded_save_file;
	Parms.K2Node_CustomEvent_loaded_save_file = K2Node_CustomEvent_loaded_save_file;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


