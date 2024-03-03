#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass example_npc_base.example_npc_base_C
// (Actor, Pawn)

class UClass* AExample_npc_base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("example_npc_base_C");

	return Clss;
}


// example_npc_base_C example_npc_base.Default__example_npc_base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AExample_npc_base_C* AExample_npc_base_C::GetDefaultObj()
{
	static class AExample_npc_base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AExample_npc_base_C*>(AExample_npc_base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function example_npc_base.example_npc_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_npc_base_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_npc_base.example_npc_base_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          Dlg_status                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AExample_npc_base_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature(class Abp_dlg_actor_C* Dlg_actor, enum class Enum_dlg_start Dlg_status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature");

	Params::AExample_npc_base_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_2_ed_dlg_started__DelegateSignature_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Dlg_status = Dlg_status;

	UObject::ProcessEvent(Func, &Parms);

}


// Function example_npc_base.example_npc_base_C.ExecuteUbergraph_example_npc_base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_ComponentBoundEvent_dlg_actor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_dlg_start          K2Node_ComponentBoundEvent_dlg_status                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_npc_base_C::ExecuteUbergraph_example_npc_base(int32 EntryPoint, class Abp_dlg_actor_C* K2Node_ComponentBoundEvent_dlg_actor, enum class Enum_dlg_start K2Node_ComponentBoundEvent_dlg_status, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_npc_base_C", "ExecuteUbergraph_example_npc_base");

	Params::AExample_npc_base_C_ExecuteUbergraph_example_npc_base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_dlg_actor = K2Node_ComponentBoundEvent_dlg_actor;
	Parms.K2Node_ComponentBoundEvent_dlg_status = K2Node_ComponentBoundEvent_dlg_status;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


