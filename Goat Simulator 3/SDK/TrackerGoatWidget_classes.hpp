#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x4D0 - 0x430)
// WidgetBlueprintGeneratedClass TrackerGoatWidget.TrackerGoatWidget_C
class UTrackerGoatWidget_C : public UGGTrackerMarkerUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Collapse;                                          // 0x438(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Talking;                                           // 0x440(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BottomMarker;                                      // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PlayerColorBackground;                             // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerNameLabel;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Speaker;                                           // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpeakerOutline;                                    // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SpeakerOverlay;                                    // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                DotAppendString;                                   // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        MaxNameLength;                                     // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F87[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CurrentUniqueNetId;                                // 0x490(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bIsCurrentUniqueNetIdValid;                        // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsHost;                                           // 0x4B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTalking;                                         // 0x4BA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F8E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerNameString;                                  // 0x4C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTrackerGoatWidget_C* GetDefaultObj();

	void MobileAppendDistance(const struct FRadarCoordinateData& CallFunc_GetCachedData_ReturnValue, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue, class AGGPlayerState* K2Node_DynamicCast_AsGGPlayer_State, bool K2Node_DynamicCast_bSuccess, class AGGGoat* CallFunc_GetPlayerGoat_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FRadarCoordinateData& K2Node_MakeStruct_RadarCoordinateData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetStylizedDistanceTextToRadarPoint_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void SetTalking(bool InTalking, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateVoiceChatData(class AActor* DataActor, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, const struct FGGOnlineFriend& CallFunc_GetOnlineFriendFromPlayerState_OutFriend, bool CallFunc_GetOnlineFriendFromPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHost_ReturnValue);
	void UpdatePlayerColor(struct FRadarCoordinateData& Data, bool CallFunc_IsValid_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_GetPlayerColor_ReturnValue);
	void UpdatePlayerName(struct FRadarCoordinateData& Data, int32 NewMaxNameLength, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TScriptInterface<class IGGRadarInterface> K2Node_DynamicCast_AsGGRadar_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetRadarDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_Len_ReturnValue_1, const class FString& CallFunc_Left_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 K2Node_Select_Default, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnInitialized();
	void OnPlayerTalkingStateChanged(struct FUniqueNetIdRepl& TalkerId, bool bIsTalking);
	void OnAddedWidget(struct FRadarCoordinateData& Data);
	void OnUpdatedWidget(struct FRadarCoordinateData& Data);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TrackerGoatWidget(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_TalkerId, bool K2Node_CustomEvent_bIsTalking, const struct FRadarCoordinateData& K2Node_Event_Data_1, const struct FRadarCoordinateData& K2Node_Event_Data, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CompareUniqueNetIdRepls_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsMobilePlatform_ReturnValue);
};

}


