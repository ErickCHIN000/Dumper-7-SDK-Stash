#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9C (0x554 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_SocialScreen.WBP_SocialScreen_C
class UWBP_SocialScreen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_AcceptInvites;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Console_Invite;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_CreateParty;                                   // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_LeaveParty;                                    // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       DisabledSwitcher;                                  // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_PartyMembers;                                   // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NotInPartyMessage;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ScreenCanvasPanel;                                 // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StageFootprint;                                    // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_LocalPlayerNameWithDiscriminator;              // 0x508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard;                               // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard_1;                             // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard_2;                             // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard_3;                             // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard_8;                             // 0x530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyMemberCard_C*                WBP_PartyMemberCard_9;                             // 0x538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_sw_PlayerSearch_C*                WBP_sw_PlayerSearch;                               // 0x540(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ColumnCount;                                       // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPartyDisplaySize;                               // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GridColumnCount;                                   // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SocialScreen_C* GetDefaultObj();

	class UWidget* DoCustomRightToLeftNav(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue);
	class UWidget* DoCustomLeftToRightNav(enum class EUINavigation Navigation, class UWidget* CallFunc_ReturnNavigableTarget_Output);
	void UpdatePlatformInviteButtonVisibility(bool CallFunc_IsOnConsolePlatform_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_GetIsEnabled_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasChildren_ReturnValue);
	void SetFullPlayerNameWithDiscriminator(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, bool CallFunc_IsSuccess_bIsSuccess, TArray<struct FUniqueName>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetPublicNameWithDiscriminator_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateAcceptInvitesButton(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPartyInvitesMode CallFunc_GetPartyInvitesMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeAcceptInvitesButton();
	void MemberInitiatePartyRefresh(const class FString& RoomId, const class FString& ProfileId);
	void OnGatherPartyMemberDataComplete(bool bSuccess, TArray<struct FNWXPartyMember>& Members, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FNWXPartyMember& CallFunc_Array_Get_Item, class UWBP_PartyMemberCard_C* CallFunc_Add_Party_Member_Card_PlayerCard, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Room_Initiate_Party_Refresh(const class FString& RoomId, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void CreatePartyPressed(class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, bool CallFunc_CreateParty_Success);
	void LeavePartyPressed(class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent);
	void HandlePlayerLeftParty(const class FString& RoomId);
	void Add_Party_Member_Card(const struct FNWXPartyMember& PartyMember, int32 InputPin, class UWBP_PartyMemberCard_C** PlayerCard, const struct FNWXPartyMember& NewLocalVar, class UWBP_PartyMemberCard_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void UpdatePartyDependentWidgets(enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, bool CallFunc_IsPlayerInParty_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UWBP_PartyMemberCard_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void Clear_Party();
	void BndEvt__WBP_SocialScreen_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BndEvt__WBP_SocialScreen_CBU_AcceptInvites_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SocialScreen_CBU_LeaveParty_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_SocialScreen_CBU_CreateParty_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_SocialScreen(int32 EntryPoint, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EPartyInvitesMode CallFunc_GetPartyInvitesMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AreSocialFeaturesDisabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, TArray<class FString>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UBP_PartyComponent_C* CallFunc_GetLocalPartyComponent_PartyComponent, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_GetStreamerModeEnabled_ReturnValue, const class FString& CallFunc_GetStreamerModeEnabledLocalPlayerName_StreamerModeEnabledLocalPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UPartyComponentBase* CallFunc_GetComponentByClass_ReturnValue_1, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1);
};

}


