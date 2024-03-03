#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DLG_NonNPC.BP_DLG_NonNPC_C
// (Actor)

class UClass* ABP_DLG_NonNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DLG_NonNPC_C");

	return Clss;
}


// BP_DLG_NonNPC_C BP_DLG_NonNPC.Default__BP_DLG_NonNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DLG_NonNPC_C* ABP_DLG_NonNPC_C::GetDefaultObj()
{
	static class ABP_DLG_NonNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DLG_NonNPC_C*>(ABP_DLG_NonNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.ed_parent_savegame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::Ed_parent_savegame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "ed_parent_savegame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.ed_parent_begingame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DLG_NonNPC_C::Ed_parent_begingame(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "ed_parent_begingame");

	Params::ABP_DLG_NonNPC_C_Ed_parent_begingame_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DLG_NonNPC_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature");

	Params::ABP_DLG_NonNPC_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DLG_NonNPC_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DLG_NonNPC_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature");

	Params::ABP_DLG_NonNPC_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DLG_NonNPC.BP_DLG_NonNPC_C.ExecuteUbergraph_BP_DLG_NonNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_loaded_save_file                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_loaded_save_file                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             K2Node_ComponentBoundEvent_dlg_actor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          K2Node_ComponentBoundEvent_dlg_status                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DLG_NonNPC_C::ExecuteUbergraph_BP_DLG_NonNPC(int32 EntryPoint, bool K2Node_CustomEvent_loaded_save_file, bool K2Node_ComponentBoundEvent_loaded_save_file, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DLG_NonNPC_C", "ExecuteUbergraph_BP_DLG_NonNPC");

	Params::ABP_DLG_NonNPC_C_ExecuteUbergraph_BP_DLG_NonNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_loaded_save_file = K2Node_CustomEvent_loaded_save_file;
	Parms.K2Node_ComponentBoundEvent_loaded_save_file = K2Node_ComponentBoundEvent_loaded_save_file;
	Parms.K2Node_ComponentBoundEvent_dlg_actor = K2Node_ComponentBoundEvent_dlg_actor;
	Parms.K2Node_ComponentBoundEvent_dlg_status = K2Node_ComponentBoundEvent_dlg_status;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


