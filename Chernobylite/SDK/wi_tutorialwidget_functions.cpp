#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wi_tutorialwidget.wi_tutorialwidget_C
// (None)

class UClass* UWi_tutorialwidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wi_tutorialwidget_C");

	return Clss;
}


// wi_tutorialwidget_C wi_tutorialwidget.Default__wi_tutorialwidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWi_tutorialwidget_C* UWi_tutorialwidget_C::GetDefaultObj()
{
	static class UWi_tutorialwidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWi_tutorialwidget_C*>(UWi_tutorialwidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wi_tutorialwidget.wi_tutorialwidget_C.PlayProgressSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWi_tutorialwidget_C::PlayProgressSound(float A, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_FTrunc_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "PlayProgressSound");

	Params::UWi_tutorialwidget_C_PlayProgressSound_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InputTutorialContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSt_TutorialContentSlotSet  ContentSlotDataSet                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UWi_quadcontentwidget_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidget_C::InputTutorialContent(const struct FSt_TutorialContentSlotSet& ContentSlotDataSet, class UWi_quadcontentwidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InputTutorialContent");

	Params::UWi_tutorialwidget_C_InputTutorialContent_Params Parms{};

	Parms.ContentSlotDataSet = ContentSlotDataSet;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWi_tutorialwidget_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "GetText_0");

	Params::UWi_tutorialwidget_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InputBackPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::InputBackPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InputBackPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InputAccept
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::InputAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InputAccept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.Show Tutorial Automatically
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::Show_Tutorial_Automatically()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "Show Tutorial Automatically");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InitiateTutorial
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Names                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWi_tutorialwidget_C::InitiateTutorial(TArray<class FName>& Names)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InitiateTutorial");

	Params::UWi_tutorialwidget_C_InitiateTutorial_Params Parms{};

	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InputAcceptPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::InputAcceptPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InputAcceptPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.InputAcceptReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::InputAcceptReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "InputAcceptReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "Tick");

	Params::UWi_tutorialwidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.UnlockInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::UnlockInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "UnlockInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.Lock Input
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWi_tutorialwidget_C::Lock_Input()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "Lock Input");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wi_tutorialwidget.wi_tutorialwidget_C.ExecuteUbergraph_wi_tutorialwidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRealTimeSeconds_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_TutorialTable           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_TutorialContentSlotSet  CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_ArraySubtractionFName_ReturnValue                       (ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_CustomEvent_Names                                         (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWi_tutorialwidget_C::ExecuteUbergraph_wi_tutorialwidget(int32 EntryPoint, float CallFunc_GetRealTimeSeconds_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_TutorialTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue_2, const struct FSt_TutorialContentSlotSet& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_ArraySubtractionFName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& K2Node_CustomEvent_Names, int32 CallFunc_Array_AddUnique_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wi_tutorialwidget_C", "ExecuteUbergraph_wi_tutorialwidget");

	Params::UWi_tutorialwidget_C_ExecuteUbergraph_wi_tutorialwidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRealTimeSeconds_ReturnValue = CallFunc_GetRealTimeSeconds_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_ArraySubtractionFName_ReturnValue = CallFunc_ArraySubtractionFName_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.K2Node_CustomEvent_Names = K2Node_CustomEvent_Names;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


