#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C
// (None)

class UClass* UWid_OnScreenFrameInformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_OnScreenFrameInformation_C");

	return Clss;
}


// wid_OnScreenFrameInformation_C wid_OnScreenFrameInformation.Default__wid_OnScreenFrameInformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_OnScreenFrameInformation_C* UWid_OnScreenFrameInformation_C::GetDefaultObj()
{
	static class UWid_OnScreenFrameInformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_OnScreenFrameInformation_C*>(UWid_OnScreenFrameInformation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.Add Boss Kill DLCVRGames
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Boss_number                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_VRGamesBossFrame_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             K2Node_MakeStruct_st_ScreenFrame                                 (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::Add_Boss_Kill_DLCVRGames(float Duration, int32 Boss_number, class UWid_VRGamesBossFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "Add Boss Kill DLCVRGames");

	Params::UWid_OnScreenFrameInformation_C_Add_Boss_Kill_DLCVRGames_Params Parms{};

	Parms.Duration = Duration;
	Parms.Boss_number = Boss_number;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_st_ScreenFrame = K2Node_MakeStruct_st_ScreenFrame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.GetCameraManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACGPlayerCameraManager*      AsCGPlayer_Camera_Manager                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGPlayerCameraManager*      K2Node_DynamicCast_AsCGPlayer_Camera_Manager                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_OnScreenFrameInformation_C::GetCameraManager(class ACGPlayerCameraManager** AsCGPlayer_Camera_Manager, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class ACGPlayerCameraManager* K2Node_DynamicCast_AsCGPlayer_Camera_Manager, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "GetCameraManager");

	Params::UWid_OnScreenFrameInformation_C_GetCameraManager_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGPlayer_Camera_Manager = K2Node_DynamicCast_AsCGPlayer_Camera_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsCGPlayer_Camera_Manager != nullptr)
		*AsCGPlayer_Camera_Manager = Parms.AsCGPlayer_Camera_Manager;

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.HandleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_OnScreenFrameInformation_C::HandleVisibility(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "HandleVisibility");

	Params::UWid_OnScreenFrameInformation_C_HandleVisibility_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.ResetQueueAndCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::ResetQueueAndCurrent(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "ResetQueueAndCurrent");

	Params::UWid_OnScreenFrameInformation_C_ResetQueueAndCurrent_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.GetAnyAvailableStatusFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWid_CompanionStatusFrame_C* AsWid_Companion_Status_Frame                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionStatusFrame_C* K2Node_DynamicCast_AsWid_Companion_Status_Frame                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_OnScreenFrameInformation_C::GetAnyAvailableStatusFrame(class UWid_CompanionStatusFrame_C** AsWid_Companion_Status_Frame, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWid_CompanionStatusFrame_C* K2Node_DynamicCast_AsWid_Companion_Status_Frame, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "GetAnyAvailableStatusFrame");

	Params::UWid_OnScreenFrameInformation_C_GetAnyAvailableStatusFrame_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Companion_Status_Frame = K2Node_DynamicCast_AsWid_Companion_Status_Frame;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsWid_Companion_Status_Frame != nullptr)
		*AsWid_Companion_Status_Frame = Parms.AsWid_Companion_Status_Frame;

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddLevelUpFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_LevelUpFrame_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             K2Node_MakeStruct_st_ScreenFrame                                 (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::AddLevelUpFrame(float Duration, class UWid_LevelUpFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "AddLevelUpFrame");

	Params::UWid_OnScreenFrameInformation_C_AddLevelUpFrame_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_st_ScreenFrame = K2Node_MakeStruct_st_ScreenFrame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddHeistItemFoundFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::AddHeistItemFoundFrame(class FText ItemName, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "AddHeistItemFoundFrame");

	Params::UWid_OnScreenFrameInformation_C_AddHeistItemFoundFrame_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddCompanionStatusChangedFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsNewStatusBetter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipStatusType NewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionStatusFrame_C* CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CompanionStatusFrame_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             K2Node_MakeStruct_st_ScreenFrame                                 (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::AddCompanionStatusChangedFrame(bool IsNewStatusBetter, class FName CompanionID, enum class ERelationshipStatusType NewStatus, float Duration, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class UWid_CompanionStatusFrame_C* CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame, bool CallFunc_IsValid_ReturnValue, class UWid_CompanionStatusFrame_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "AddCompanionStatusChangedFrame");

	Params::UWid_OnScreenFrameInformation_C_AddCompanionStatusChangedFrame_Params Parms{};

	Parms.IsNewStatusBetter = IsNewStatusBetter;
	Parms.CompanionID = CompanionID;
	Parms.NewStatus = NewStatus;
	Parms.Duration = Duration;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame = CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_st_ScreenFrame = K2Node_MakeStruct_st_ScreenFrame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddQuestScreenFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasSuccessfull                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        QuestName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CustomTitle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CustomContent                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWid_QuestCompleted_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ScreenFrame             K2Node_MakeStruct_st_ScreenFrame                                 (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::AddQuestScreenFrame(bool WasSuccessfull, class FText QuestName, float Duration, class FText CustomTitle, class FText CustomContent, class UWid_QuestCompleted_C* CallFunc_Create_ReturnValue, const struct FSt_ScreenFrame& K2Node_MakeStruct_st_ScreenFrame, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "AddQuestScreenFrame");

	Params::UWid_OnScreenFrameInformation_C_AddQuestScreenFrame_Params Parms{};

	Parms.WasSuccessfull = WasSuccessfull;
	Parms.QuestName = QuestName;
	Parms.Duration = Duration;
	Parms.CustomTitle = CustomTitle;
	Parms.CustomContent = CustomContent;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_st_ScreenFrame = K2Node_MakeStruct_st_ScreenFrame;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.RemoveCurrentFrameAndShowNext
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::RemoveCurrentFrameAndShowNext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "RemoveCurrentFrameAndShowNext");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.ShowCurrent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::ShowCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "ShowCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.OnShowFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::OnShowFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "OnShowFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.OnHideFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::OnHideFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "OnHideFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.StartShowing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::StartShowing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "StartShowing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.EnableBackPDA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::EnableBackPDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "EnableBackPDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.DisablePDA
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_OnScreenFrameInformation_C::DisablePDA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "DisablePDA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.ExecuteUbergraph_wid_OnScreenFrameInformation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FSt_ScreenFrame             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor, UObjectWrapper)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IScreenFrameInterface_C>K2Node_DynamicCast_AsScreen_Frame_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*               CallFunc_GetSoundToPlay_Event                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGPlayerCameraManager*      CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACGPlayerCameraManager*      CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWid_OnScreenFrameInformation_C::ExecuteUbergraph_wid_OnScreenFrameInformation(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSt_ScreenFrame& CallFunc_Array_Get_Item, const struct FAnchors& K2Node_MakeStruct_Anchors, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetGlobalTimeDilation_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, const struct FMargin& K2Node_MakeStruct_Margin, TScriptInterface<class IScreenFrameInterface_C> K2Node_DynamicCast_AsScreen_Frame_Interface, bool K2Node_DynamicCast_bSuccess, class UAkAudioEvent* CallFunc_GetSoundToPlay_Event, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class ACGPlayerCameraManager* CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager, class ACGPlayerCameraManager* CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_OnScreenFrameInformation_C", "ExecuteUbergraph_wid_OnScreenFrameInformation");

	Params::UWid_OnScreenFrameInformation_C_ExecuteUbergraph_wid_OnScreenFrameInformation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue = CallFunc_GetGlobalTimeDilation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_1 = CallFunc_GetGlobalTimeDilation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue_2 = CallFunc_GetGlobalTimeDilation_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_DynamicCast_AsScreen_Frame_Interface = K2Node_DynamicCast_AsScreen_Frame_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSoundToPlay_Event = CallFunc_GetSoundToPlay_Event;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager = CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager;
	Parms.CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1 = CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


