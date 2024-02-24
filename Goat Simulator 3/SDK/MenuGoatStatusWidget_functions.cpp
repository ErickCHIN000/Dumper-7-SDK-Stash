#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MenuGoatStatusWidget.MenuGoatStatusWidget_C
// (None)

class UClass* UMenuGoatStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuGoatStatusWidget_C");

	return Clss;
}


// MenuGoatStatusWidget_C MenuGoatStatusWidget.Default__MenuGoatStatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuGoatStatusWidget_C* UMenuGoatStatusWidget_C::GetDefaultObj()
{
	static class UMenuGoatStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuGoatStatusWidget_C*>(UMenuGoatStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ShouldShowLeaveButton
// (Exec, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGGLobbyMember>      CallFunc_GetLobbyMembers_ReturnValue                             (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuGoatStatusWidget_C::ShouldShowLeaveButton(bool* Result, TArray<struct FGGLobbyMember>& CallFunc_GetLobbyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "ShouldShowLeaveButton");

	Params::UMenuGoatStatusWidget_C_ShouldShowLeaveButton_Params Parms{};

	Parms.CallFunc_GetLobbyMembers_ReturnValue = CallFunc_GetLobbyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ShouldShowKickButton
// (Exec, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuGoatStatusWidget_C::ShouldShowKickButton(bool* Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "ShouldShowKickButton");

	Params::UMenuGoatStatusWidget_C_ShouldShowKickButton_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.UpdateMobileButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLeaveButton_result                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowKickButton_result                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGoatStatusWidget_C::UpdateMobileButtonsVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_ShouldShowLeaveButton_result, bool CallFunc_ShouldShowKickButton_result, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "UpdateMobileButtonsVisibility");

	Params::UMenuGoatStatusWidget_C_UpdateMobileButtonsVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_ShouldShowLeaveButton_result = CallFunc_ShouldShowLeaveButton_result;
	Parms.CallFunc_ShouldShowKickButton_result = CallFunc_ShouldShowKickButton_result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.UpdatePlayerSaveStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowStats                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGInventory*                CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCollectedTrinketNum_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UGGGoatGearInfoDataAsset*>CallFunc_GetUnlockedGear_ReturnValue                             (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UGGInventory*                CallFunc_GetPlayerInventory_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTokens_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuGoatStatusWidget_C::UpdatePlayerSaveStats(bool ShowStats, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue, int32 CallFunc_GetCollectedTrinketNum_ReturnValue, TArray<class UGGGoatGearInfoDataAsset*>& CallFunc_GetUnlockedGear_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue_1, int32 CallFunc_GetTokens_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "UpdatePlayerSaveStats");

	Params::UMenuGoatStatusWidget_C_UpdatePlayerSaveStats_Params Parms{};

	Parms.ShowStats = ShowStats;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_GetCollectedTrinketNum_ReturnValue = CallFunc_GetCollectedTrinketNum_ReturnValue;
	Parms.CallFunc_GetUnlockedGear_ReturnValue = CallFunc_GetUnlockedGear_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetPlayerInventory_ReturnValue_1 = CallFunc_GetPlayerInventory_ReturnValue_1;
	Parms.CallFunc_GetTokens_ReturnValue = CallFunc_GetTokens_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.GetVisibility_HoldToLeaveText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetUserHeldLeavingDuration_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UMenuGoatStatusWidget_C::GetVisibility_HoldToLeaveText(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsSplitScreenActive_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetUserHeldLeavingDuration_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "GetVisibility_HoldToLeaveText");

	Params::UMenuGoatStatusWidget_C_GetVisibility_HoldToLeaveText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue = CallFunc_IsSplitScreenActive_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetUserHeldLeavingDuration_ReturnValue = CallFunc_GetUserHeldLeavingDuration_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGoatStatusWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "Tick");

	Params::UMenuGoatStatusWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.OnFullResetPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::OnFullResetPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "OnFullResetPlayerState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.OnMenuTabChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TabID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UMenuGoatStatusWidget_C::OnMenuTabChanged(const struct FGameplayTag& TabID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "OnMenuTabChanged");

	Params::UMenuGoatStatusWidget_C_OnMenuTabChanged_Params Parms{};

	Parms.TabID = TabID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.WidgetAnimationEvt_Hide_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::WidgetAnimationEvt_Hide_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "WidgetAnimationEvt_Hide_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuGoatStatusWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "PreConstruct");

	Params::UMenuGoatStatusWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_KickButtonMobile_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMenuGoatStatusWidget_C::BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "BndEvt__MenuGoatStatusWidget_LeaveButtonMobile_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MenuGoatStatusWidget.MenuGoatStatusWidget_C.ExecuteUbergraph_MenuGoatStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFriendPlatform         Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueNetIDRepl_ReturnValue                          (HasGetValueTypeHash)
// bool                               CallFunc_IsInLobby_bIsOwner                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USplitScreenPlayerObject*>CallFunc_GetSplitScreenPlayerObjects_ReturnValue                 (ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueNetIDRepl_ReturnValue_1                        (HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_Select_Default_2                                          (HasGetValueTypeHash)
// bool                               CallFunc_IsMainMenuStartingLevel_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGGLobbyMember              CallFunc_IsNetIdMemberOfLobby_FoundMember                        (None)
// bool                               CallFunc_IsNetIdMemberOfLobby_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetTargetUserIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplitScreenPlayerObject*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_TabID                                         (NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           K2Node_DynamicCast_AsGGMenu_User_Widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlayingForward_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueNetIDRepl_ReturnValue_2                        (HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromUniqueNetId_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUsername_ReturnValue                                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        K2Node_Select_Default_3                                          (None)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided_1    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_Select_Default_5                                          (HasGetValueTypeHash)
// bool                               CallFunc_IsNetIdLobbyOwner_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUsername_ReturnValue_1                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// struct FGGOnlineFriend             CallFunc_GetOnlineFriend_OutFriend                               (None)
// bool                               CallFunc_GetOnlineFriend_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFriendPlatform         K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGGOnlineFriend             CallFunc_GetOnlineFriendWithUsername_OutFriend                   (None)
// bool                               CallFunc_GetOnlineFriendWithUsername_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatformFlagsBP        CallFunc_GetPlatformForUI_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMouseAndKeyboardAvailable_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetGamepadClaimedByUser_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue_4                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGamepadClaimedByUser_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuGoatStatusWidget_C::ExecuteUbergraph_MenuGoatStatusWidget(int32 EntryPoint, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_5, class FText Temp_text_Variable, bool Temp_bool_Variable_6, enum class EFriendPlatform Temp_byte_Variable_8, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility Temp_byte_Variable_9, const struct FUniqueNetIdRepl& CallFunc_GetUniqueNetIDRepl_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_10, bool Temp_bool_Variable_7, class FText CallFunc_GetText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class USplitScreenPlayerObject*>& CallFunc_GetSplitScreenPlayerObjects_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetUniqueNetIDRepl_ReturnValue_1, const struct FUniqueNetIdRepl& K2Node_Select_Default_2, bool CallFunc_IsMainMenuStartingLevel_ReturnValue, const struct FGGLobbyMember& CallFunc_IsNetIdMemberOfLobby_FoundMember, bool CallFunc_IsNetIdMemberOfLobby_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_SetTargetUserIndex_ReturnValue, class USplitScreenPlayerObject* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_TabID, class UGGMenuUserWidget* K2Node_DynamicCast_AsGGMenu_User_Widget, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsSplitScreenActive_ReturnValue, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueNetIDRepl_ReturnValue_2, class AGGPlayerState* CallFunc_GetPlayerStateFromUniqueNetId_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue_1, const class FString& CallFunc_GetUsername_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText K2Node_Select_Default_3, bool CallFunc_IsMobilePlatform_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue_1, bool Temp_bool_Variable_8, enum class ESlateVisibility K2Node_Select_Default_4, const struct FUniqueNetIdRepl& K2Node_Select_Default_5, bool CallFunc_IsNetIdLobbyOwner_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, const class FString& CallFunc_GetUsername_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, const struct FGGOnlineFriend& CallFunc_GetOnlineFriend_OutFriend, bool CallFunc_GetOnlineFriend_ReturnValue, enum class EFriendPlatform K2Node_Select_Default_6, const struct FGGOnlineFriend& CallFunc_GetOnlineFriendWithUsername_OutFriend, bool CallFunc_GetOnlineFriendWithUsername_ReturnValue, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, bool CallFunc_HasMouseAndKeyboardAvailable_ReturnValue, int32 CallFunc_GetGamepadClaimedByUser_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, int32 CallFunc_GetGamepadClaimedByUser_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuGoatStatusWidget_C", "ExecuteUbergraph_MenuGoatStatusWidget");

	Params::UMenuGoatStatusWidget_C_ExecuteUbergraph_MenuGoatStatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_GetUniqueNetIDRepl_ReturnValue = CallFunc_GetUniqueNetIDRepl_ReturnValue;
	Parms.CallFunc_IsInLobby_bIsOwner = CallFunc_IsInLobby_bIsOwner;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSplitScreenPlayerObjects_ReturnValue = CallFunc_GetSplitScreenPlayerObjects_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetUniqueNetIDRepl_ReturnValue_1 = CallFunc_GetUniqueNetIDRepl_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsMainMenuStartingLevel_ReturnValue = CallFunc_IsMainMenuStartingLevel_ReturnValue;
	Parms.CallFunc_IsNetIdMemberOfLobby_FoundMember = CallFunc_IsNetIdMemberOfLobby_FoundMember;
	Parms.CallFunc_IsNetIdMemberOfLobby_ReturnValue = CallFunc_IsNetIdMemberOfLobby_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SetTargetUserIndex_ReturnValue = CallFunc_SetTargetUserIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_TabID = K2Node_CustomEvent_TabID;
	Parms.K2Node_DynamicCast_AsGGMenu_User_Widget = K2Node_DynamicCast_AsGGMenu_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlayingForward_ReturnValue = CallFunc_IsAnimationPlayingForward_ReturnValue;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue = CallFunc_IsSplitScreenActive_ReturnValue;
	Parms.CallFunc_GetPlatformForUI_ReturnValue = CallFunc_GetPlatformForUI_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUniqueNetIDRepl_ReturnValue_2 = CallFunc_GetUniqueNetIDRepl_ReturnValue_2;
	Parms.CallFunc_GetPlayerStateFromUniqueNetId_ReturnValue = CallFunc_GetPlayerStateFromUniqueNetId_ReturnValue;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue_1 = CallFunc_GetPlayerName_ReturnValue_1;
	Parms.CallFunc_GetUsername_ReturnValue = CallFunc_GetUsername_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided_1 = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue_1 = CallFunc_IsMobilePlatform_ReturnValue_1;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsNetIdLobbyOwner_ReturnValue = CallFunc_IsNetIdLobbyOwner_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_GetUsername_ReturnValue_1 = CallFunc_GetUsername_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_GetOnlineFriend_OutFriend = CallFunc_GetOnlineFriend_OutFriend;
	Parms.CallFunc_GetOnlineFriend_ReturnValue = CallFunc_GetOnlineFriend_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GetOnlineFriendWithUsername_OutFriend = CallFunc_GetOnlineFriendWithUsername_OutFriend;
	Parms.CallFunc_GetOnlineFriendWithUsername_ReturnValue = CallFunc_GetOnlineFriendWithUsername_ReturnValue;
	Parms.CallFunc_GetPlatformForUI_ReturnValue_1 = CallFunc_GetPlatformForUI_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_HasMouseAndKeyboardAvailable_ReturnValue = CallFunc_HasMouseAndKeyboardAvailable_ReturnValue;
	Parms.CallFunc_GetGamepadClaimedByUser_ReturnValue = CallFunc_GetGamepadClaimedByUser_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_4 = CallFunc_GetGameInstanceSubsystem_ReturnValue_4;
	Parms.CallFunc_GetGamepadClaimedByUser_ReturnValue_1 = CallFunc_GetGamepadClaimedByUser_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


