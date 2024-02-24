#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x538 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_PlayerReadiness.WBP_PlayerReadiness_C
class UWBP_PlayerReadiness_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Ready;                                         // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_biomesketch;                                   // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_map;                                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Txt_LevelName;                                     // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_datetime_C*                       WBP_datetime_101;                                  // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_PocketWatch_C*                WBP_Map_PocketWatch;                               // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmInfo_C*                      WBP_RealmInfo;                                     // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RealmPower_C*                     WBP_RealmPower;                                    // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_decor_kaleidoscope_C*          WBP_sw_decor_kaleidoscope;                         // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_RealmExamine_CardsPlayed_C*    WBP_sw_RealmExamine_CardsPlayed;                   // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       ShownTime;                                         // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AutoReadyTime;                                     // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SpawnRequestedTimer;                               // 0x530(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerReadiness_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void SetRandomSketchOnGuidebook(enum class EBiomeID Biome, const TArray<class UTexture2D*>& LBiomeSketchTextures, const TArray<class UTexture2D*>& LSwampBiomeSketchTextures, const TArray<class UTexture2D*>& LDesertBiomeSketchTextures, const TArray<class UTexture2D*>& LForestBiomeSketchTextures, TArray<class UTexture2D*>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, TArray<class UTexture2D*>& K2Node_MakeArray_Array_1, TArray<class UTexture2D*>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item);
	void CheckIfInNightmareRealm(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnExperienceStatesReadyHandler();
	void BindToPESReadiness(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UExperienceStateTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IExperienceStateEventInterface> CallFunc_BindEventTo_ExperienceStatesReady_self_CastInput);
	class UWidget* GetDefaultFocusWidget();
	void SetupMap(class FText CallFunc_Get_NWX_CurrentMapNameAndDetails_Map_Level_Name, bool CallFunc_Get_NWX_CurrentMapNameAndDetails_Found_Details, const struct FS_UI_MapTable& CallFunc_Get_NWX_CurrentMapNameAndDetails_Level_Details, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void OnEnterLevelCheck(const struct FGameplayTagContainer& L_AppendingContainer, class UBP_RealmHistory_Persistence_C* CallFunc_GetRealmHistoryComponent_Realm_History_Persistence_Component, bool CallFunc_GetRealmHistoryComponent_Success, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_GetCurrentRealmTags_Success, const struct FGameplayTagContainer& CallFunc_GetCurrentRealmTags_RealmTags, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_GetCurrentInfluenceLevels_Success, const struct FRealmInfluenceValues& CallFunc_GetCurrentInfluenceLevels_Influence_Levels, int32 CallFunc_GetCurrentRealmPower_RealmPower, const struct FS_Persisted_RealmVisitedInfo& K2Node_MakeStruct_S_Persisted_RealmVisitedInfo);
	struct FEventReply OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void ResetCursorToCenter(double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, const struct FVector2D& CallFunc_GetAlignmentInViewport_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
	void Construct();
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnPlayerSpawnTimedOut();
	void OnInitialized();
	void BndEvt__WBP_PlayerReadiness_CBU_Ready_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_PlayerReadiness(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetRealmInfo_CurrentRealm_Success, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Map_Level_Name, class FText CallFunc_UI_Get_NWXRealmName_FromTags_Description, bool CallFunc_UI_Get_NWXRealmName_FromTags_Found_Details, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_GetRealmInfo_CurrentRealm_Success_1, const struct FS_Persisted_RealmVisitedInfo& CallFunc_GetRealmInfo_CurrentRealm_RealmInfo_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, const struct FRealmSettings& K2Node_MakeStruct_RealmSettings, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
};

}


