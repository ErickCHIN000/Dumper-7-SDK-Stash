#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUDMission.HUDMission_C
// (Actor)

class UClass* AHUDMission_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDMission_C");

	return Clss;
}


// HUDMission_C HUDMission.Default__HUDMission_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHUDMission_C* AHUDMission_C::GetDefaultObj()
{
	static class AHUDMission_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHUDMission_C*>(AHUDMission_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDMission.HUDMission_C.SetVisibilityAllOwnedWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHUDMission_C::SetVisibilityAllOwnedWidgets(enum class ESlateVisibility Visibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "SetVisibilityAllOwnedWidgets");

	Params::AHUDMission_C_SetVisibilityAllOwnedWidgets_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.TryCancelPickUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UArsenalPickUpPartsComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHUDMission_C::TryCancelPickUp(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UArsenalPickUpPartsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "TryCancelPickUp");

	Params::AHUDMission_C_TryCancelPickUp_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.PlayFadeoutAnime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartAtTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCmn_parts_fade00_C*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndTime                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 FadeWidget                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCmn_parts_fade00_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCmn_parts_fade00_C* AHUDMission_C::PlayFadeoutAnime(float StartAtTime, float* EndTime, class UUserWidget* FadeWidget, class UCmn_parts_fade00_C* CallFunc_Create_ReturnValue, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "PlayFadeoutAnime");

	Params::AHUDMission_C_PlayFadeoutAnime_Params Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.FadeWidget = FadeWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EndTime != nullptr)
		*EndTime = Parms.EndTime;

	return Parms.ReturnValue;

}


// Function HUDMission.HUDMission_C.PlayMissionCompleatAnime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEMissionResult      MissionResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_judge_top00_C*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              A_in_00                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEMissionResult      NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              WIdgetNameTbl                                                    (Edit, BlueprintVisible, ZeroConstructor)
// class UWidgetAnimation*            WidgetAnimation                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_judge_top00_C*          MsnJudgeTop                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_judge_top00_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText                     (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSessionHost_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAtomComponent*              CallFunc_SpawnSoundAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAtomComponent*              CallFunc_SpawnSoundAtLocation_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSessionHost_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSessionHost_ReturnValue2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText1                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText2                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText3                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText4                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText5                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText6                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetFromName_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FindTextInLocalizationTable_OutText7                    (None)
// bool                               CallFunc_FindTextInLocalizationTable_ReturnValue7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextBlock*                  K2Node_DynamicCast_AsText                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMsn_judge_top00_C* AHUDMission_C::PlayMissionCompleatAnime(enum class ETTLEMissionResult MissionResult, float* A_in_00, enum class ETTLEMissionResult NewLocalVar_0, const TArray<class FString>& WIdgetNameTbl, class UWidgetAnimation* WidgetAnimation, class UMsn_judge_top00_C* MsnJudgeTop, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, TArray<class FString>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class UMsn_judge_top00_C* CallFunc_Create_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_IsSessionHost_ReturnValue, class UAtomComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAtomComponent* CallFunc_SpawnSoundAtLocation_ReturnValue1, bool CallFunc_IsSessionHost_ReturnValue1, bool CallFunc_IsSessionHost_ReturnValue2, class FText CallFunc_FindTextInLocalizationTable_OutText1, bool CallFunc_FindTextInLocalizationTable_ReturnValue1, class FText CallFunc_FindTextInLocalizationTable_OutText2, bool CallFunc_FindTextInLocalizationTable_ReturnValue2, class FText CallFunc_FindTextInLocalizationTable_OutText3, bool CallFunc_FindTextInLocalizationTable_ReturnValue3, class FText CallFunc_FindTextInLocalizationTable_OutText4, bool CallFunc_FindTextInLocalizationTable_ReturnValue4, class FText CallFunc_FindTextInLocalizationTable_OutText5, bool CallFunc_FindTextInLocalizationTable_ReturnValue5, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_FindTextInLocalizationTable_OutText6, bool CallFunc_FindTextInLocalizationTable_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetWidgetFromName_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText7, bool CallFunc_FindTextInLocalizationTable_ReturnValue7, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetEndTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "PlayMissionCompleatAnime");

	Params::AHUDMission_C_PlayMissionCompleatAnime_Params Parms{};

	Parms.MissionResult = MissionResult;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.WIdgetNameTbl = WIdgetNameTbl;
	Parms.WidgetAnimation = WidgetAnimation;
	Parms.MsnJudgeTop = MsnJudgeTop;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText = CallFunc_FindTextInLocalizationTable_OutText;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue = CallFunc_FindTextInLocalizationTable_ReturnValue;
	Parms.CallFunc_IsSessionHost_ReturnValue = CallFunc_IsSessionHost_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue = CallFunc_SpawnSoundAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSoundAtLocation_ReturnValue1 = CallFunc_SpawnSoundAtLocation_ReturnValue1;
	Parms.CallFunc_IsSessionHost_ReturnValue1 = CallFunc_IsSessionHost_ReturnValue1;
	Parms.CallFunc_IsSessionHost_ReturnValue2 = CallFunc_IsSessionHost_ReturnValue2;
	Parms.CallFunc_FindTextInLocalizationTable_OutText1 = CallFunc_FindTextInLocalizationTable_OutText1;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue1 = CallFunc_FindTextInLocalizationTable_ReturnValue1;
	Parms.CallFunc_FindTextInLocalizationTable_OutText2 = CallFunc_FindTextInLocalizationTable_OutText2;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue2 = CallFunc_FindTextInLocalizationTable_ReturnValue2;
	Parms.CallFunc_FindTextInLocalizationTable_OutText3 = CallFunc_FindTextInLocalizationTable_OutText3;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue3 = CallFunc_FindTextInLocalizationTable_ReturnValue3;
	Parms.CallFunc_FindTextInLocalizationTable_OutText4 = CallFunc_FindTextInLocalizationTable_OutText4;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue4 = CallFunc_FindTextInLocalizationTable_ReturnValue4;
	Parms.CallFunc_FindTextInLocalizationTable_OutText5 = CallFunc_FindTextInLocalizationTable_OutText5;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue5 = CallFunc_FindTextInLocalizationTable_ReturnValue5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_FindTextInLocalizationTable_OutText6 = CallFunc_FindTextInLocalizationTable_OutText6;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue6 = CallFunc_FindTextInLocalizationTable_ReturnValue6;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetWidgetFromName_ReturnValue = CallFunc_GetWidgetFromName_ReturnValue;
	Parms.CallFunc_FindTextInLocalizationTable_OutText7 = CallFunc_FindTextInLocalizationTable_OutText7;
	Parms.CallFunc_FindTextInLocalizationTable_ReturnValue7 = CallFunc_FindTextInLocalizationTable_ReturnValue7;
	Parms.K2Node_DynamicCast_AsText = K2Node_DynamicCast_AsText;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (A_in_00 != nullptr)
		*A_in_00 = Parms.A_in_00;

	return Parms.ReturnValue;

}


// Function HUDMission.HUDMission_C.SetTalkHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TalkEventName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Start_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHUDMission_C::SetTalkHUD(class FName TalkEventName, bool CallFunc_Start_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "SetTalkHUD");

	Params::AHUDMission_C_SetTalkHUD_Params Parms{};

	Parms.TalkEventName = TalkEventName;
	Parms.CallFunc_Start_ReturnValue = CallFunc_Start_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUDMission_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_4");

	Params::AHUDMission_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUDMission_C::InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3");

	Params::AHUDMission_C_InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUDMission_C::InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2");

	Params::AHUDMission_C_InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUDMission_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1");

	Params::AHUDMission_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHUDMission_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0");

	Params::AHUDMission_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AHUDMission_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "ReceiveTick");

	Params::AHUDMission_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                              SizeX                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SizeY                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "ReceiveDrawHUD");

	Params::AHUDMission_C_ReceiveDrawHUD_Params Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.OnStartMultiplayDuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnStartMultiplayDuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnStartMultiplayDuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnResultEventFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnResultEventFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnResultEventFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnResultEventStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEMissionResult      MissionResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::OnResultEventStarted(enum class ETTLEMissionResult MissionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnResultEventStarted");

	Params::AHUDMission_C_OnResultEventStarted_Params Parms{};

	Parms.MissionResult = MissionResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.OnMissionPlayerChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnMissionPlayerChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMissionPlayerChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnMissionStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnMissionStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMissionStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnLevelLoadStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnLevelLoadStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnLevelLoadStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnMissionFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEMissionResult      MissionResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::OnMissionFinished(enum class ETTLEMissionResult MissionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMissionFinished");

	Params::AHUDMission_C_OnMissionFinished_Params Parms{};

	Parms.MissionResult = MissionResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.OnLevelFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnLevelFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnLevelFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnMenuStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnMenuStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMenuStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.OnMissionDuelEvaluationScreenStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::OnMissionDuelEvaluationScreenStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMissionDuelEvaluationScreenStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.FinishedMissionLevelProcess
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AHUDMission_C::FinishedMissionLevelProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "FinishedMissionLevelProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDMission.HUDMission_C.SetVisibilityAllOwnedWidgetsForCallBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::SetVisibilityAllOwnedWidgetsForCallBP(enum class ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "SetVisibilityAllOwnedWidgetsForCallBP");

	Params::AHUDMission_C_SetVisibilityAllOwnedWidgetsForCallBP_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.OnMissionEndingEventStarted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEMissionResult      MissionResult                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::OnMissionEndingEventStarted(enum class ETTLEMissionResult MissionResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "OnMissionEndingEventStarted");

	Params::AHUDMission_C_OnMissionEndingEventStarted_Params Parms{};

	Parms.MissionResult = MissionResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "ReceiveEndPlay");

	Params::AHUDMission_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDMission.HUDMission_C.ExecuteUbergraph_HUDMission
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top00_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNeedHideHud_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnableOuterLockOn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULockonComponent_C*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayableOgreRelation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AArsenalCharacter_C*         K2Node_DynamicCast_AsArsenal_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCmn_parts_fade00_C*         CallFunc_PlayFadeoutAnime_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayFadeoutAnime_EndTime                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key1                                        (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key2                                        (HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key3                                        (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key4                                        (HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLEMissionResult      K2Node_Event_MissionResult2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEMissionResult      K2Node_Event_MissionResult1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_judge_top00_C*          CallFunc_PlayMissionCompleatAnime_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayMissionCompleatAnime_a_in_00                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SizeX                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SizeY                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Event_visibility                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLGameState*               K2Node_DynamicCast_AsTTLGame_State4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_hud_top00_C*            K2Node_DynamicCast_AsMsn_Hud_Top_00                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMsn_hud_radar02_C*          K2Node_DynamicCast_AsMsn_Hud_Radar_02                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess8                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOnl_duel_top00_C*           CallFunc_Create_ReturnValue1                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOnl_coop_page00_C*          CallFunc_Create_ReturnValue2                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_fielditem_top00_C*      CallFunc_Create_ReturnValue3                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETTLEMissionResult      K2Node_Event_MissionResult                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsn_rob_top00_C*            CallFunc_Create_ReturnValue4                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHUDMission_C::ExecuteUbergraph_HUDMission(int32 EntryPoint, class UMsn_hud_top00_C* CallFunc_Create_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsNeedHideHud_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnableOuterLockOn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlayableOgreRelation_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess1, class UCmn_parts_fade00_C* CallFunc_PlayFadeoutAnime_ReturnValue, float CallFunc_PlayFadeoutAnime_EndTime, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FKey& K2Node_InputKeyEvent_Key2, int32 Temp_int_Variable, const struct FKey& K2Node_InputKeyEvent_Key3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State1, bool K2Node_DynamicCast_bSuccess3, enum class ETTLEMissionResult K2Node_Event_MissionResult2, enum class ETTLEMissionResult K2Node_Event_MissionResult1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UMsn_judge_top00_C* CallFunc_PlayMissionCompleatAnime_ReturnValue, float CallFunc_PlayMissionCompleatAnime_a_in_00, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State2, bool K2Node_DynamicCast_bSuccess4, float K2Node_Event_DeltaSeconds, enum class ESlateVisibility K2Node_Event_visibility, class AGameStateBase* CallFunc_GetGameState_ReturnValue3, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State3, bool K2Node_DynamicCast_bSuccess5, bool K2Node_SwitchEnum1_CmpSuccess, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue4, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State4, bool K2Node_DynamicCast_bSuccess6, int32 Temp_int_Array_Index_Variable1, class UUserWidget* CallFunc_Array_Get_Item1, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess7, class UMsn_hud_radar02_C* K2Node_DynamicCast_AsMsn_Hud_Radar_02, bool K2Node_DynamicCast_bSuccess8, class UOnl_duel_top00_C* CallFunc_Create_ReturnValue1, class UOnl_coop_page00_C* CallFunc_Create_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, class UMsn_fielditem_top00_C* CallFunc_Create_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, enum class ETTLEMissionResult K2Node_Event_MissionResult, bool CallFunc_IsValid_ReturnValue2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UMsn_rob_top00_C* CallFunc_Create_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDMission_C", "ExecuteUbergraph_HUDMission");

	Params::AHUDMission_C_ExecuteUbergraph_HUDMission_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsNeedHideHud_ReturnValue = CallFunc_IsNeedHideHud_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEnableOuterLockOn_ReturnValue = CallFunc_IsEnableOuterLockOn_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue1 = CallFunc_GetPlayerCharacter_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsPlayableOgreRelation_ReturnValue = CallFunc_IsPlayableOgreRelation_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Character = K2Node_DynamicCast_AsArsenal_Character;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_PlayFadeoutAnime_ReturnValue = CallFunc_PlayFadeoutAnime_ReturnValue;
	Parms.CallFunc_PlayFadeoutAnime_EndTime = CallFunc_PlayFadeoutAnime_EndTime;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.K2Node_InputKeyEvent_Key1 = K2Node_InputKeyEvent_Key1;
	Parms.K2Node_InputKeyEvent_Key2 = K2Node_InputKeyEvent_Key2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_InputKeyEvent_Key3 = K2Node_InputKeyEvent_Key3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key4 = K2Node_InputKeyEvent_Key4;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLGame_State = K2Node_DynamicCast_AsTTLGame_State;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGameState_ReturnValue1 = CallFunc_GetGameState_ReturnValue1;
	Parms.K2Node_DynamicCast_AsTTLGame_State1 = K2Node_DynamicCast_AsTTLGame_State1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_Event_MissionResult2 = K2Node_Event_MissionResult2;
	Parms.K2Node_Event_MissionResult1 = K2Node_Event_MissionResult1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayMissionCompleatAnime_ReturnValue = CallFunc_PlayMissionCompleatAnime_ReturnValue;
	Parms.CallFunc_PlayMissionCompleatAnime_a_in_00 = CallFunc_PlayMissionCompleatAnime_a_in_00;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.K2Node_Event_SizeX = K2Node_Event_SizeX;
	Parms.K2Node_Event_SizeY = K2Node_Event_SizeY;
	Parms.CallFunc_GetGameState_ReturnValue2 = CallFunc_GetGameState_ReturnValue2;
	Parms.K2Node_DynamicCast_AsTTLGame_State2 = K2Node_DynamicCast_AsTTLGame_State2;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_visibility = K2Node_Event_visibility;
	Parms.CallFunc_GetGameState_ReturnValue3 = CallFunc_GetGameState_ReturnValue3;
	Parms.K2Node_DynamicCast_AsTTLGame_State3 = K2Node_DynamicCast_AsTTLGame_State3;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_GetGameState_ReturnValue4 = CallFunc_GetGameState_ReturnValue4;
	Parms.K2Node_DynamicCast_AsTTLGame_State4 = K2Node_DynamicCast_AsTTLGame_State4;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Top_00 = K2Node_DynamicCast_AsMsn_Hud_Top_00;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.K2Node_DynamicCast_AsMsn_Hud_Radar_02 = K2Node_DynamicCast_AsMsn_Hud_Radar_02;
	Parms.K2Node_DynamicCast_bSuccess8 = K2Node_DynamicCast_bSuccess8;
	Parms.CallFunc_Create_ReturnValue1 = CallFunc_Create_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue2 = CallFunc_Create_ReturnValue2;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue2 = CallFunc_Array_Add_ReturnValue2;
	Parms.CallFunc_Create_ReturnValue3 = CallFunc_Create_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue3 = CallFunc_Array_Add_ReturnValue3;
	Parms.K2Node_Event_MissionResult = K2Node_Event_MissionResult;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Create_ReturnValue4 = CallFunc_Create_ReturnValue4;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_Array_Add_ReturnValue4 = CallFunc_Array_Add_ReturnValue4;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


