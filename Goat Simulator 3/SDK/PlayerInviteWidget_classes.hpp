#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x2BC - 0x268)
// WidgetBlueprintGeneratedClass PlayerInviteWidget.PlayerInviteWidget_C
class UPlayerInviteWidget_C : public UGGPlayerInviteWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimHover_Mobile;                                  // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimHover;                                         // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ButtonDropShadow;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               InviteButton;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             InviteButtonScaleBox;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      InviteText;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MobielInviteFriendContainer;                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMobile_InviteFriendButton_C*          MobileInviteFriend;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        InviteButtonScaleMultiplier;                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerInviteWidget_C* GetDefaultObj();

	bool CanShowHoldText(class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ECanStartSplitScreenResult CallFunc_CanStartSplitScreen_ReturnValue, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsPrimaryPlayerBlueprint_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsGamepadAvailableForPlayerIndex_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool Get_InviteButton_bIsEnabled(class UGGGameInstance* CallFunc_GetGGGameInstance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	enum class ESlateVisibility GetVisibility_InviteTextContainer(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FGGLobbyMember>& CallFunc_GetLobbyMembers_ReturnValue, bool CallFunc_IsAnyGamepadConnected_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ECanStartSplitScreenResult CallFunc_CanStartSplitScreen_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	void BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSplitscreenPlayersUpdated();
	void OnPrivilegeResult(bool bHasPrivilege);
	void OnGamepadConnected();
	void UpdateInviteTextVisibility();
	void BndEvt__PlayerInviteWidget_InviteButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_5_OnReleased__DelegateSignature();
	void OpenFriendsMenu();
	void OpenMobileFriendsMenu();
	void PopupResponse(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response);
	void Construct();
	void BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
	void BndEvt__PlayerInviteWidget_PlayerInviteMobileWidget_52_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void OnMobileInviteButtonPopupPressed(const class FString& ID, class UObject* Object, const class FString& ButtonID, enum class EPopupResponse Response);
	void ExecuteUbergraph_PlayerInviteWidget(int32 EntryPoint, bool CallFunc_IsConnectedToInternet_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_GetText_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_SetTargetUserIndex_ReturnValue, class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, float CallFunc_GetUserHeldJoiningDuration_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_RequestTabNavigation_ReturnValue, bool K2Node_CustomEvent_bHasPrivilege, bool CallFunc_CanShowHoldText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, bool CallFunc_RequestTabNavigation_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsInLobby_bIsOwner, bool CallFunc_IsInLobby_ReturnValue, bool CallFunc_IsLowendMobileDevice_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FPopupDataRow& K2Node_MakeStruct_PopupDataRow, const class FString& K2Node_CustomEvent_ID_1, class UObject* K2Node_CustomEvent_Object_1, const class FString& K2Node_CustomEvent_ButtonID_1, enum class EPopupResponse K2Node_CustomEvent_Response_1, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget, bool CallFunc_CreatePopupCustom_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FPopupDataRow& CallFunc_MakePopupDataRow_ReturnValue, const class FString& K2Node_CustomEvent_ID, class UObject* K2Node_CustomEvent_Object, const class FString& K2Node_CustomEvent_ButtonID, enum class EPopupResponse K2Node_CustomEvent_Response, class UGGPopupUserWidget* CallFunc_CreatePopupCustom_OutWidget_1, bool CallFunc_CreatePopupCustom_ReturnValue_1);
};

}


