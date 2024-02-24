#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x3D0 - 0x298)
// WidgetBlueprintGeneratedClass UMG_OpenWorldButton.UMG_OpenWorldButton_C
class UUMG_OpenWorldButton_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Button_Animation;                                  // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        DLCName;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_114;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ProspectImageTint;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LockedOverlay;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainButton;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainOverlay;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MapDescription;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProspectImage;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TerrainName;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AvailableResourceList_C*          UMG_AvailableResourceList;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DangerLevel_C*                    UMG_DangerLevel;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ProspectSelected;                                  // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  Name;                                              // 0x310(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x328(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            ProspectTexture;                                   // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FProspectListRowHandle                ProspectListRow;                                   // 0x348(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Disabled;                                          // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5816[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageDataRowHandle              DLC_Data;                                          // 0x364(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_581A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Prompt;                                            // 0x380(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        Difficulty;                                        // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LevelBoostTo;                                      // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FAccountFlagsRowHandle                LevelBoostAccountFlag;                             // 0x3A0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUMG_TerrainButtonPromptContents_C*    PromptContents;                                    // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FResourceAvailabilityData>     AvailableResources;                                // 0x3C0(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_OpenWorldButton_C* GetDefaultObj();

	void ShouldShowWarningMessage(bool* Show, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_GetDisableMapSelectionWarning_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void ShouldShowLevelBoostPrompt(bool* Show, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue_1, bool CallFunc_HasAccountFlagPlayer_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_CalculatePlayerLevel_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue);
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Confirm();
	void Cancel();
	void GrantLevelBoost();
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_TerrainButton_Button_84_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BoostButtonClicked();
	void UpdateDLCLockOverlay();
	void ExecuteUbergraph_UMG_OpenWorldButton(int32 EntryPoint, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UUMG_TerrainButtonPromptContents_C* CallFunc_Create_ReturnValue, class UUMG_InfoImage_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EFeatureLevelCheckResult CallFunc_IsFeatureLevelMet_ReturnValue, enum class EFeatureLevelCheckResult CallFunc_IsFeatureLevelMet_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Array_Index_Variable, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData_1, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_ShouldShowWarningMessage_Show, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_ShouldShowLevelBoostPrompt_Show, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue_1, class UPlayerCharacterState* CallFunc_GetActivePlayerCharacterState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, int32 CallFunc_GetExperience_ReturnValue, int32 CallFunc_GetExperienceRequired_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool CallFunc_DontShowAgain_DontShowAgain, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FResourceAvailabilityData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void ProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect);
};

}


