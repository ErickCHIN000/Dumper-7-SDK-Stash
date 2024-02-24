#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C
// (Actor)

class UClass* ABP_Event_TheButterflyEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Event_TheButterflyEffect_C");

	return Clss;
}


// BP_Event_TheButterflyEffect_C BP_Event_TheButterflyEffect.Default__BP_Event_TheButterflyEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Event_TheButterflyEffect_C* ABP_Event_TheButterflyEffect_C::GetDefaultObj()
{
	static class ABP_Event_TheButterflyEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Event_TheButterflyEffect_C*>(ABP_Event_TheButterflyEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.MusicPitchTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::MusicPitchTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "MusicPitchTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.MusicPitchTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::MusicPitchTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "MusicPitchTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.BallerinaSpinning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::BallerinaSpinning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "BallerinaSpinning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.OnQuestCompletedBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::OnQuestCompletedBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "OnQuestCompletedBlueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.OnCompletedSequenceFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::OnCompletedSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "OnCompletedSequenceFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.OnInitialProgressReplicated
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::OnInitialProgressReplicated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "OnInitialProgressReplicated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.OnQuestProgressionLoadedBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSaveExisted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWasCompleted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_TheButterflyEffect_C::OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "OnQuestProgressionLoadedBlueprint");

	Params::ABP_Event_TheButterflyEffect_C_OnQuestProgressionLoadedBlueprint_Params Parms{};

	Parms.bSaveExisted = bSaveExisted;
	Parms.bWasCompleted = bWasCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.IncreaseMusicPitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_TheButterflyEffect_C::IncreaseMusicPitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "IncreaseMusicPitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.OnPersistentEffectToggled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_TheButterflyEffect_C::OnPersistentEffectToggled_Event_0(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "OnPersistentEffectToggled_Event_0");

	Params::ABP_Event_TheButterflyEffect_C_OnPersistentEffectToggled_Event_0_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.BindPersistentEffectsToggler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoatTower_PersistentEffectsToggler_C*Toggler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_TheButterflyEffect_C::BindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "BindPersistentEffectsToggler");

	Params::ABP_Event_TheButterflyEffect_C_BindPersistentEffectsToggler_Params Parms{};

	Parms.Toggler = Toggler;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.UnbindPersistentEffectsToggler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoatTower_PersistentEffectsToggler_C*Toggler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_TheButterflyEffect_C::UnbindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "UnbindPersistentEffectsToggler");

	Params::ABP_Event_TheButterflyEffect_C_UnbindPersistentEffectsToggler_Params Parms{};

	Parms.Toggler = Toggler;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C.ExecuteUbergraph_BP_Event_TheButterflyEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ButterflyEffect_Ballerina_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventCompletedState    CallFunc_GetCompletionState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventCompletedState    CallFunc_GetCompletionState_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSaveExisted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCompleted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bActive                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GoatTower_PersistentEffectsToggler_C*K2Node_Event_Toggler_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoatTower_PersistentEffectsToggler_C*K2Node_Event_Toggler                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ButterflyEffect_Ballerina_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_TheButterflyEffect_C::ExecuteUbergraph_BP_Event_TheButterflyEffect(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue_1, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_bActive, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_TheButterflyEffect_C", "ExecuteUbergraph_BP_Event_TheButterflyEffect");

	Params::ABP_Event_TheButterflyEffect_C_ExecuteUbergraph_BP_Event_TheButterflyEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCompletionState_ReturnValue = CallFunc_GetCompletionState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCompletionState_ReturnValue_1 = CallFunc_GetCompletionState_ReturnValue_1;
	Parms.K2Node_Event_bSaveExisted = K2Node_Event_bSaveExisted;
	Parms.K2Node_Event_bWasCompleted = K2Node_Event_bWasCompleted;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_bActive = K2Node_CustomEvent_bActive;
	Parms.K2Node_Event_Toggler_1 = K2Node_Event_Toggler_1;
	Parms.K2Node_Event_Toggler = K2Node_Event_Toggler;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


