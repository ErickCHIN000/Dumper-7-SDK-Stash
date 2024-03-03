#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_DynamicSex_Base.NPC_DynamicSex_Base_C
// (Actor, Pawn)

class UClass* ANPC_DynamicSex_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_DynamicSex_Base_C");

	return Clss;
}


// NPC_DynamicSex_Base_C NPC_DynamicSex_Base.Default__NPC_DynamicSex_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_DynamicSex_Base_C* ANPC_DynamicSex_Base_C::GetDefaultObj()
{
	static class ANPC_DynamicSex_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_DynamicSex_Base_C*>(ANPC_DynamicSex_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_DynamicSex_Base_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature");

	Params::ANPC_DynamicSex_Base_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.ed_parent_begingame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_DynamicSex_Base_C::Ed_parent_begingame(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "ed_parent_begingame");

	Params::ANPC_DynamicSex_Base_C_Ed_parent_begingame_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.ed_parent_savegame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::Ed_parent_savegame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "ed_parent_savegame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_DynamicSex_Base_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature");

	Params::ANPC_DynamicSex_Base_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.SpawnParticle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANPC_DynamicSex_Base_C::SpawnParticle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "SpawnParticle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NPC_DynamicSex_Base.NPC_DynamicSex_Base_C.ExecuteUbergraph_NPC_DynamicSex_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_ComponentBoundEvent_loaded_save_file                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_loaded_save_file                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// class Abp_dlg_actor_C*             K2Node_ComponentBoundEvent_dlg_actor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          K2Node_ComponentBoundEvent_dlg_status                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)

void ANPC_DynamicSex_Base_C::ExecuteUbergraph_NPC_DynamicSex_Base(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool K2Node_ComponentBoundEvent_loaded_save_file, bool K2Node_CustomEvent_loaded_save_file, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_DynamicSex_Base_C", "ExecuteUbergraph_NPC_DynamicSex_Base");

	Params::ANPC_DynamicSex_Base_C_ExecuteUbergraph_NPC_DynamicSex_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ComponentBoundEvent_loaded_save_file = K2Node_ComponentBoundEvent_loaded_save_file;
	Parms.K2Node_CustomEvent_loaded_save_file = K2Node_CustomEvent_loaded_save_file;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_ComponentBoundEvent_dlg_actor = K2Node_ComponentBoundEvent_dlg_actor;
	Parms.K2Node_ComponentBoundEvent_dlg_status = K2Node_ComponentBoundEvent_dlg_status;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

}

}


