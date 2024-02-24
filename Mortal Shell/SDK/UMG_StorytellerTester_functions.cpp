#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_StorytellerTester.UMG_StorytellerTester_C
// (None)

class UClass* UUMG_StorytellerTester_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_StorytellerTester_C");

	return Clss;
}


// UMG_StorytellerTester_C UMG_StorytellerTester.Default__UMG_StorytellerTester_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_StorytellerTester_C* UUMG_StorytellerTester_C::GetDefaultObj()
{
	static class UUMG_StorytellerTester_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_StorytellerTester_C*>(UUMG_StorytellerTester_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_StorytellerTester_C::BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "BndEvt__StorytellerTestButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.GiveControlToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_StorytellerTester_C::GiveControlToPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "GiveControlToPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_StorytellerTester_C::BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "BndEvt__FinishNowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_StorytellerTester_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.StartStory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_StorytellerTester_C::StartStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "StartStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_StorytellerTester.UMG_StorytellerTester_C.ExecuteUbergraph_UMG_StorytellerTester
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Storyteller_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABP_Storyteller_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogTrees                CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_StorytellerTester_C::ExecuteUbergraph_UMG_StorytellerTester(int32 EntryPoint, TArray<class ABP_Storyteller_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Storyteller_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FDialogTrees& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_StorytellerTester_C", "ExecuteUbergraph_UMG_StorytellerTester");

	Params::UUMG_StorytellerTester_C_ExecuteUbergraph_UMG_StorytellerTester_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


