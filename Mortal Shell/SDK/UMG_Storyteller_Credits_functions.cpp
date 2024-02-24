#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Storyteller_Credits.UMG_Storyteller_Credits_C
// (None)

class UClass* UUMG_Storyteller_Credits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Storyteller_Credits_C");

	return Clss;
}


// UMG_Storyteller_Credits_C UMG_Storyteller_Credits.Default__UMG_Storyteller_Credits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Storyteller_Credits_C* UUMG_Storyteller_Credits_C::GetDefaultObj()
{
	static class UUMG_Storyteller_Credits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Storyteller_Credits_C*>(UUMG_Storyteller_Credits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.GiveControlToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::GiveControlToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "GiveControlToPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.StartStory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::StartStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "StartStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.CreditsCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::CreditsCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "CreditsCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.ExecuteUbergraph_UMG_Storyteller_Credits
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogTrees                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Storyteller_Credits_C*   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Storyteller_Credits_C::ExecuteUbergraph_UMG_Storyteller_Credits(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FDialogTrees& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Storyteller_Credits_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "ExecuteUbergraph_UMG_Storyteller_Credits");

	Params::UUMG_Storyteller_Credits_C_ExecuteUbergraph_UMG_Storyteller_Credits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Storyteller_Credits.UMG_Storyteller_Credits_C.CreditsDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Storyteller_Credits_C::CreditsDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Storyteller_Credits_C", "CreditsDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


