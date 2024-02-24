#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PartyMember.UMG_PartyMember_C
class UUMG_PartyMember_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CharacterName;                                     // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HealthBar;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               HostIcon;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HostText;                                          // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_222;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  KickButton;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Ping;                                              // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PingText;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          PlayerHealth;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PlayerIcon;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APlayerState*                          PlayerState;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_PartyMember_C* GetDefaultObj();

	enum class ESlateVisibility Get_KickButton_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	class FText GetLevelText(const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	struct FSlateBrush GetBackground_0(const struct FSlateBrush& Brush, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPlayerVisualIdentity_ReturnValue, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	float GetPlayerHealth(class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	struct FSlateColor GetColorAndOpacity(class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPlayerVisualIdentity_ReturnValue, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class FText GetPing(const struct FSlateColor& RedCol, const struct FSlateColor& GreenCol, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	class FText GetHost(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default);
	class FText GetPlayerName(class FText Temp_wildcard_Variable, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	class FText GetCharacterName(class FText Temp_wildcard_Variable, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActiveCharacter_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StatsUpdated();
	void BndEvt__UMG_PartyMember_KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void KickPlayer();
	void DoNothing();
	void ExecuteUbergraph_UMG_PartyMember(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class FText CallFunc_GetPlayerName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerState_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerState_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool CallFunc_DualActorStatCheck_BothActors_have_Stats, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


