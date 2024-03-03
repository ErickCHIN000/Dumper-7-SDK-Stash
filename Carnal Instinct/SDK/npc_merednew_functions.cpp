#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass npc_merednew.npc_merednew_C
// (Actor, Pawn)

class UClass* ANpc_merednew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("npc_merednew_C");

	return Clss;
}


// npc_merednew_C npc_merednew.Default__npc_merednew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANpc_merednew_C* ANpc_merednew_C::GetDefaultObj()
{
	static class ANpc_merednew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANpc_merednew_C*>(ANpc_merednew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function npc_merednew.npc_merednew_C.TakeDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_HitData                  HitData                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          ResultType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TakeDamage_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AttackResult          CallFunc_TakeDamage_ResultType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_merednew_C::TakeDamage(struct FF_HitData& HitData, bool* Result, enum class E_AttackResult* ResultType, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_TakeDamage_Result, enum class E_AttackResult CallFunc_TakeDamage_ResultType, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "TakeDamage");

	Params::ANpc_merednew_C_TakeDamage_Params Parms{};

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


// Function npc_merednew.npc_merednew_C.GetMontages
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MontageAction         Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Montages                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::GetMontages(enum class E_MontageAction Action, class UDataTable** Montages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "GetMontages");

	Params::ANpc_merednew_C_GetMontages_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	if (Montages != nullptr)
		*Montages = Parms.Montages;

}


// Function npc_merednew.npc_merednew_C.Death
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_merednew_C::Death(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_SetIsInCombat_Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Death");

	Params::ANpc_merednew_C_Death_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.CanBeAttacked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_merednew_C::CanBeAttacked(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "CanBeAttacked");

	Params::ANpc_merednew_C_CanBeAttacked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function npc_merednew.npc_merednew_C.OnFail_15F9DD204A52EE1FB1CBB9898B939632
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::OnFail_15F9DD204A52EE1FB1CBB9898B939632(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "OnFail_15F9DD204A52EE1FB1CBB9898B939632");

	Params::ANpc_merednew_C_OnFail_15F9DD204A52EE1FB1CBB9898B939632_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.OnSuccess_15F9DD204A52EE1FB1CBB9898B939632
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::OnSuccess_15F9DD204A52EE1FB1CBB9898B939632(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "OnSuccess_15F9DD204A52EE1FB1CBB9898B939632");

	Params::ANpc_merednew_C_OnSuccess_15F9DD204A52EE1FB1CBB9898B939632_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.OnFail_7747EEDE4E7ACB5A8EBEAC996FC02953
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::OnFail_7747EEDE4E7ACB5A8EBEAC996FC02953(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "OnFail_7747EEDE4E7ACB5A8EBEAC996FC02953");

	Params::ANpc_merednew_C_OnFail_7747EEDE4E7ACB5A8EBEAC996FC02953_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.OnSuccess_7747EEDE4E7ACB5A8EBEAC996FC02953
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::OnSuccess_7747EEDE4E7ACB5A8EBEAC996FC02953(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "OnSuccess_7747EEDE4E7ACB5A8EBEAC996FC02953");

	Params::ANpc_merednew_C_OnSuccess_7747EEDE4E7ACB5A8EBEAC996FC02953_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        Instigator_id                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator_actor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature(class FName Instigator_id, class AActor* Instigator_actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature");

	Params::ANpc_merednew_C_BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_interact__DelegateSignature_Params Parms{};

	Parms.Instigator_id = Instigator_id;
	Parms.Instigator_actor = Instigator_actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.Call DLG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Call_DLG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Call DLG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.Walking innit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Walking_innit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Walking innit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.Enter Combat
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Enter_Combat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Enter Combat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.Deadededed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Deadededed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Deadededed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.Mered Leave House
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Mered_Leave_House()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Mered Leave House");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.End Quest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               No_Destroy_Mered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_merednew_C::End_Quest(float Delay, bool No_Destroy_Mered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "End Quest");

	Params::ANpc_merednew_C_End_Quest_Params Parms{};

	Parms.Delay = Delay;
	Parms.No_Destroy_Mered = No_Destroy_Mered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.Update Items
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Update_Items()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Update Items");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.OnCollisionActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CollisionPart         Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::OnCollisionActivated(enum class E_CollisionPart Selection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "OnCollisionActivated");

	Params::ANpc_merednew_C_OnCollisionActivated_Params Parms{};

	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.MoveSplineNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::MoveSplineNPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "MoveSplineNPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ANpc_merednew_C::BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ANpc_merednew_C_BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANpc_merednew_C::BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::ANpc_merednew_C_BndEvt__npc_merednew_SphereCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function npc_merednew.npc_merednew_C.Push along
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Push_along()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Push along");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.MeredFinishedWalking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::MeredFinishedWalking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "MeredFinishedWalking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.GoToShrine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::GoToShrine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "GoToShrine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ANpc_merednew_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function npc_merednew.npc_merednew_C.ExecuteUbergraph_npc_merednew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANPC_DynamicSex_Loiterer_C*  CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_instigator_id                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_instigator_actor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FS_dlg_bind_actor_settings  K2Node_MakeStruct_s_dlg_bind_actor_settings                      (HasGetValueTypeHash)
// bool                               CallFunc_add_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_add_dlg_is_spawned                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_add_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_door_mered_C*            CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_guard3_C*               CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_dlg_component_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_door_mered_C*            CallFunc_GetActorOfClass_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_No_Destroy_Mered                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Ubp_quest_component_C*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_guard3_C*               CallFunc_GetActorOfClass_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_dlg_component_is_valid_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BloodScribe_Corpse_C*    CallFunc_GetActorOfClass_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ANpc_citizenrn_C*>    CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ANpc_watchmanrn_C*>   CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class ANpc_watchmanrn_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetAllSocketNames_ReturnValue                           (ReferenceParm)
// enum class E_CollisionPart         K2Node_Event_Selection                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANpc_citizenrn_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLastSplineIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSplinePointLocation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_newstatue_C*            CallFunc_GetActorOfClass_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWB_InGame_C*                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_Data_Item                         (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_Data_Found                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ANpc_merednew_C::ExecuteUbergraph_npc_merednew(int32 EntryPoint, class ANPC_DynamicSex_Loiterer_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWB_Fade_C* CallFunc_Create_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue_1, const struct FS_ItemData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName K2Node_ComponentBoundEvent_instigator_id, class AActor* K2Node_ComponentBoundEvent_instigator_actor, bool K2Node_SwitchName_CmpSuccess, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class UWB_Fade_C* CallFunc_Create_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FS_dlg_bind_actor_settings& K2Node_MakeStruct_s_dlg_bind_actor_settings, bool CallFunc_add_dlg_is_valid, bool CallFunc_add_dlg_is_spawned, class Abp_dlg_actor_C* CallFunc_add_dlg_dlg_actor, class Abp_door_mered_C* CallFunc_GetActorOfClass_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class ANpc_guard3_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, bool CallFunc_get_dlg_is_valid_1, int32 CallFunc_get_dlg_found_index_1, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_1, bool CallFunc_get_dlg_is_valid_2, int32 CallFunc_get_dlg_found_index_2, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_2, class Abp_door_mered_C* CallFunc_GetActorOfClass_ReturnValue_3, float K2Node_CustomEvent_Delay, bool K2Node_CustomEvent_No_Destroy_Mered, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, class Ubp_quest_component_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_get_quest_is_valid_1, int32 CallFunc_get_quest_found_index_1, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor_1, class ANpc_guard3_C* CallFunc_GetActorOfClass_ReturnValue_4, bool CallFunc_dlg_get_dlg_component_is_valid_1, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference_1, bool CallFunc_get_dlg_is_valid_3, int32 CallFunc_get_dlg_found_index_3, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor_3, class ABP_BloodScribe_Corpse_C* CallFunc_GetActorOfClass_ReturnValue_5, TArray<class ANpc_citizenrn_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class ANpc_watchmanrn_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ANpc_watchmanrn_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, enum class EPathFollowingResult Temp_byte_Variable_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, enum class E_CollisionPart K2Node_Event_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_2, class ANpc_citizenrn_C* CallFunc_Array_Get_Item_1, int32 CallFunc_GetLastSplineIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const struct FVector& CallFunc_GetSplinePointLocation_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ANpc_newstatue_C* CallFunc_GetActorOfClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_Data_Item, bool CallFunc_Get_Inventory_Item_by_Data_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("npc_merednew_C", "ExecuteUbergraph_npc_merednew");

	Params::ANpc_merednew_C_ExecuteUbergraph_npc_merednew_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_MovementResult_3 = K2Node_CustomEvent_MovementResult_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_instigator_id = K2Node_ComponentBoundEvent_instigator_id;
	Parms.K2Node_ComponentBoundEvent_instigator_actor = K2Node_ComponentBoundEvent_instigator_actor;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_s_dlg_bind_actor_settings = K2Node_MakeStruct_s_dlg_bind_actor_settings;
	Parms.CallFunc_add_dlg_is_valid = CallFunc_add_dlg_is_valid;
	Parms.CallFunc_add_dlg_is_spawned = CallFunc_add_dlg_is_spawned;
	Parms.CallFunc_add_dlg_dlg_actor = CallFunc_add_dlg_dlg_actor;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_dlg_get_dlg_component_is_valid = CallFunc_dlg_get_dlg_component_is_valid;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference = CallFunc_dlg_get_dlg_component_dlg_reference;
	Parms.CallFunc_get_dlg_is_valid_1 = CallFunc_get_dlg_is_valid_1;
	Parms.CallFunc_get_dlg_found_index_1 = CallFunc_get_dlg_found_index_1;
	Parms.CallFunc_get_dlg_dlg_actor_1 = CallFunc_get_dlg_dlg_actor_1;
	Parms.CallFunc_get_dlg_is_valid_2 = CallFunc_get_dlg_is_valid_2;
	Parms.CallFunc_get_dlg_found_index_2 = CallFunc_get_dlg_found_index_2;
	Parms.CallFunc_get_dlg_dlg_actor_2 = CallFunc_get_dlg_dlg_actor_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue_3 = CallFunc_GetActorOfClass_ReturnValue_3;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.K2Node_CustomEvent_No_Destroy_Mered = K2Node_CustomEvent_No_Destroy_Mered;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_get_quest_is_valid_1 = CallFunc_get_quest_is_valid_1;
	Parms.CallFunc_get_quest_found_index_1 = CallFunc_get_quest_found_index_1;
	Parms.CallFunc_get_quest_quest_actor_1 = CallFunc_get_quest_quest_actor_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue_4 = CallFunc_GetActorOfClass_ReturnValue_4;
	Parms.CallFunc_dlg_get_dlg_component_is_valid_1 = CallFunc_dlg_get_dlg_component_is_valid_1;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference_1 = CallFunc_dlg_get_dlg_component_dlg_reference_1;
	Parms.CallFunc_get_dlg_is_valid_3 = CallFunc_get_dlg_is_valid_3;
	Parms.CallFunc_get_dlg_found_index_3 = CallFunc_get_dlg_found_index_3;
	Parms.CallFunc_get_dlg_dlg_actor_3 = CallFunc_get_dlg_dlg_actor_3;
	Parms.CallFunc_GetActorOfClass_ReturnValue_5 = CallFunc_GetActorOfClass_ReturnValue_5;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_GetAllSocketNames_ReturnValue = CallFunc_GetAllSocketNames_ReturnValue;
	Parms.K2Node_Event_Selection = K2Node_Event_Selection;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetLastSplineIndex_ReturnValue = CallFunc_GetLastSplineIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetSplinePointLocation_ReturnValue = CallFunc_GetSplinePointLocation_ReturnValue;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue_1 = CallFunc_CreateMoveToProxyObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_6 = CallFunc_GetActorOfClass_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Get_Player_Reference_Player_2 = CallFunc_Get_Player_Reference_Player_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CustomEvent_MovementResult_2 = K2Node_CustomEvent_MovementResult_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Item = CallFunc_Get_Inventory_Item_by_Data_Item;
	Parms.CallFunc_Get_Inventory_Item_by_Data_Found = CallFunc_Get_Inventory_Item_by_Data_Found;

	UObject::ProcessEvent(Func, &Parms);

}

}


