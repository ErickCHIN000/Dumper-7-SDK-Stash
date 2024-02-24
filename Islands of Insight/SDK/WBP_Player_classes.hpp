#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3B0 - 0x360)
// WidgetBlueprintGeneratedClass WBP_Player.WBP_Player_C
class UWBP_Player_C : public UPlayerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button;                                            // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_0;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CrownImage;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PartySize;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_187;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StatusImage;                                       // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UserStatus;                                        // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            SocialStatusTexture;                               // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Player_C* GetDefaultObj();

	enum class ESlateVisibility Get_User_Status_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	bool GetButtonEnabled(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInPartyWithLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanRemoveFromParty_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FLinearColor GetBrushColor_0(bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1);
	enum class ESlateVisibility Get_Button_Container_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	class FText Get_UserStatus_Text_0(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default);
	struct FSlateBrush GetBackground_0(bool Temp_bool_Variable, class UObject* Temp_object_Variable, bool Temp_bool_Variable_1, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, bool CallFunc_IsBlockedByLocalPlayer_ReturnValue, bool CallFunc_IsInPartyWithLocalPlayer_ReturnValue, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	struct FSlateBrush Get_StatusImage_Brush_0(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_CrownImage_Visibility_0(class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLeader_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__WBP_PlayerMainMenu_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Player_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Player(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EPersonSocialState Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UGISSocial* CallFunc_GetGameInstanceSubsystem_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInPartyWithLocalPlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_1, bool K2Node_DynamicCast_bSuccess_1, enum class EPingMessageAttemptResult CallFunc_TrySendPartyInviteByKrakenId_C_ReturnValue, class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue_1, bool CallFunc_IsBlockedByLocalPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue_2, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue_3, class UWBP_FriendRemove_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetButtonEnabled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ASophiaPlayerState* K2Node_DynamicCast_AsSophia_Player_State_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_CanInviteToParty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsFTUE_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
};

}


