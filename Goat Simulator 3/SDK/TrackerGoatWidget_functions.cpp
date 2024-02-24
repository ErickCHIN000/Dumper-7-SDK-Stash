#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TrackerGoatWidget.TrackerGoatWidget_C
// (None)

class UClass* UTrackerGoatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrackerGoatWidget_C");

	return Clss;
}


// TrackerGoatWidget_C TrackerGoatWidget.Default__TrackerGoatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrackerGoatWidget_C* UTrackerGoatWidget_C::GetDefaultObj()
{
	static class UTrackerGoatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrackerGoatWidget_C*>(UTrackerGoatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrackerGoatWidget.TrackerGoatWidget_C.MobileAppendDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        CallFunc_GetCachedData_ReturnValue                               (None)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              K2Node_DynamicCast_AsGGPlayer_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_GetPlayerGoat_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// struct FRadarCoordinateData        K2Node_MakeStruct_RadarCoordinateData                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UTrackerGoatWidget_C::MobileAppendDistance(const struct FRadarCoordinateData& CallFunc_GetCachedData_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue, class AGGPlayerState* K2Node_DynamicCast_AsGGPlayer_State, bool K2Node_DynamicCast_bSuccess, class AGGGoat* CallFunc_GetPlayerGoat_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FRadarCoordinateData& K2Node_MakeStruct_RadarCoordinateData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "MobileAppendDistance");

	Params::UTrackerGoatWidget_C_MobileAppendDistance_Params Parms{};

	Parms.CallFunc_GetCachedData_ReturnValue = CallFunc_GetCachedData_ReturnValue;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue = CallFunc_GetOwningGGPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGPlayer_State = K2Node_DynamicCast_AsGGPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerGoat_ReturnValue = CallFunc_GetPlayerGoat_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_MakeStruct_RadarCoordinateData = K2Node_MakeStruct_RadarCoordinateData;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue = CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrackerGoatWidget_C::SetTalking(bool InTalking, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "SetTalking");

	Params::UTrackerGoatWidget_C_SetTalking_Params Parms{};

	Parms.InTalking = InTalking;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdateVoiceChatData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DataActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGGOnlineFriend             CallFunc_GetOnlineFriendFromPlayerState_OutFriend                (None)
// bool                               CallFunc_GetOnlineFriendFromPlayerState_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHost_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrackerGoatWidget_C::UpdateVoiceChatData(class AActor* DataActor, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, const struct FGGOnlineFriend& CallFunc_GetOnlineFriendFromPlayerState_OutFriend, bool CallFunc_GetOnlineFriendFromPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHost_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "UpdateVoiceChatData");

	Params::UTrackerGoatWidget_C_UpdateVoiceChatData_Params Parms{};

	Parms.DataActor = DataActor;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.CallFunc_GetOnlineFriendFromPlayerState_OutFriend = CallFunc_GetOnlineFriendFromPlayerState_OutFriend;
	Parms.CallFunc_GetOnlineFriendFromPlayerState_ReturnValue = CallFunc_GetOnlineFriendFromPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsHost_ReturnValue = CallFunc_IsHost_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdatePlayerColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetPlayerColor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrackerGoatWidget_C::UpdatePlayerColor(struct FRadarCoordinateData& Data, bool CallFunc_IsValid_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_GetPlayerColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "UpdatePlayerColor");

	Params::UTrackerGoatWidget_C_UpdatePlayerColor_Params Parms{};

	Parms.Data = Data;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerColor_ReturnValue = CallFunc_GetPlayerColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.UpdatePlayerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              NewMaxNameLength                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGGRadarInterface>K2Node_DynamicCast_AsGGRadar_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetRadarDisplayName_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UTrackerGoatWidget_C::UpdatePlayerName(struct FRadarCoordinateData& Data, int32 NewMaxNameLength, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TScriptInterface<class IGGRadarInterface> K2Node_DynamicCast_AsGGRadar_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetRadarDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 K2Node_Select_Default, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "UpdatePlayerName");

	Params::UTrackerGoatWidget_C_UpdatePlayerName_Params Parms{};

	Parms.Data = Data;
	Parms.NewMaxNameLength = NewMaxNameLength;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsGGRadar_Interface = K2Node_DynamicCast_AsGGRadar_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRadarDisplayName_ReturnValue = CallFunc_GetRadarDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTrackerGoatWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.OnPlayerTalkingStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            TalkerId                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrackerGoatWidget_C::OnPlayerTalkingStateChanged(struct FUniqueNetIdRepl& TalkerId, bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "OnPlayerTalkingStateChanged");

	Params::UTrackerGoatWidget_C_OnPlayerTalkingStateChanged_Params Parms{};

	Parms.TalkerId = TalkerId;
	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.OnAddedWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrackerGoatWidget_C::OnAddedWidget(struct FRadarCoordinateData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "OnAddedWidget");

	Params::UTrackerGoatWidget_C_OnAddedWidget_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.OnUpdatedWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRadarCoordinateData        Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrackerGoatWidget_C::OnUpdatedWidget(struct FRadarCoordinateData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "OnUpdatedWidget");

	Params::UTrackerGoatWidget_C_OnUpdatedWidget_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrackerGoatWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "Tick");

	Params::UTrackerGoatWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TrackerGoatWidget.TrackerGoatWidget_C.ExecuteUbergraph_TrackerGoatWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_TalkerId                                      (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsTalking                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRadarCoordinateData        K2Node_Event_Data_1                                              (ConstParm)
// struct FRadarCoordinateData        K2Node_Event_Data                                                (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CompareUniqueNetIdRepls_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrackerGoatWidget_C::ExecuteUbergraph_TrackerGoatWidget(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_TalkerId, bool K2Node_CustomEvent_bIsTalking, const struct FRadarCoordinateData& K2Node_Event_Data_1, const struct FRadarCoordinateData& K2Node_Event_Data, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CompareUniqueNetIdRepls_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackerGoatWidget_C", "ExecuteUbergraph_TrackerGoatWidget");

	Params::UTrackerGoatWidget_C_ExecuteUbergraph_TrackerGoatWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_TalkerId = K2Node_CustomEvent_TalkerId;
	Parms.K2Node_CustomEvent_bIsTalking = K2Node_CustomEvent_bIsTalking;
	Parms.K2Node_Event_Data_1 = K2Node_Event_Data_1;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CompareUniqueNetIdRepls_ReturnValue = CallFunc_CompareUniqueNetIdRepls_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


