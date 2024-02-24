#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x310 (0x540 - 0x230)
// WidgetBlueprintGeneratedClass Notification.Notification_C
class UNotification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInAnim;                                        // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutAnim;                                       // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Familiarity;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BossGlimpse;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ItemArt;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Notification_Background;                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Description;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Notification;                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Description;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Description;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Description;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Item;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Notification;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_ItemArt_Left;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_ItemArt_Right;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Amount;                                       // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_DebugIDPosition;                              // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Name;                                         // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_NotificationType;                             // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityWidget_C*                  UI_FamiliarityWidget;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class Enum_NotifyType                   NotifyType;                                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1DC7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NotifyType_Text;                                   // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Item_Description;                                  // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Duration;                                          // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Item_Name;                                         // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  Item_ID;                                           // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Item_ID_Position;                                  // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Item_Amount;                                       // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FToolTipInfo                          Item_ToolTipInfo;                                  // 0x358(0xB4)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1DDF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRemovedFromScreen;                               // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          Timer_Duration;                                    // 0x420(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnMovedUpASlot;                                    // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        SmokeBlendAlphaTarget;                             // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RetainerMatBlendAlpha;                             // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RetainerMaterial;                                  // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        Font_Default;                                      // 0x448(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        Font_Italic;                                       // 0x498(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDHGenericDataTableID                 Preview;                                           // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AYourHUD_C*                            HUD;                                               // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInPauseTime;                                   // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutPauseTime;                                  // 0x504(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FadeInPaused;                                      // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FadeOutPaused;                                     // 0x509(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimerPaused;                                       // 0x50A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AnimNotPlayed;                                     // 0x50B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNotificationQueueContainer_C*         UI_NotificationContainer;                          // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsShellNotify;                                     // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowWeaponUpgradeLevel;                            // 0x519(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E31[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WeaponUpgradeLevel;                                // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShellRenouncedNotify;                            // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Scrolling_Enabled;                                 // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E3B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset_Delta;                                      // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Target;                                     // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Max;                                        // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Item_Familiarity;                                  // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Item_ShowFam;                                      // 0x534(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class EArmorTypes                       CurrentArmor;                                      // 0x535(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1E51[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_HadernShell;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNotification_C* GetDefaultObj();

	void UpdateScrollOffset(float DeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	class FText ChangeItemFamEffectText(class FName ID, class FText Text, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_StormMode_ItemFamEffectText_ReturnValue, bool CallFunc_StormModeIsActive_ReturnValue);
	class FText ChangeItemEffectText(class FName ID, class FText Text, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_StormMode_ItemEffectText_ReturnValue, bool CallFunc_StormModeIsActive_ReturnValue);
	void GetCurrentItemName(class FText CallFunc_CheckItemName_ReturnValue);
	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetHUDScale_Size, bool K2Node_SwitchEnum_CmpSuccess);
	bool IsHadernShellNotify(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HadernMID(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Notify_Remove();
	void Notify_Visibility(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_NotifyVisibility CallFunc_GetWeaponNotify_Visibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_NotifyVisibility CallFunc_GetShellNotify_Visibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class Enum_NotifyVisibility CallFunc_GetItemNotify_Visibility_Visibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_NotifyVisibility CallFunc_GetItemNotify_Visibility_Visibility_1, bool K2Node_SwitchEnum_CmpSuccess_4);
	void GetDuration(float* Duration, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_NotifyDuration CallFunc_GetWeaponNotify_Duration_Duration, enum class Enum_NotifyDuration CallFunc_GetShellNotify_Duration_Duration, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_NotifyDuration CallFunc_GetItemNotify_Duration_Duration, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetDurationBasedOnText(int32 Local_Lenght, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class FText CallFunc_Get_Description_Text_ReturnValue);
	float GetScrollBoxMax(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void GetWeaponUpgrade(bool K2Node_SwitchName_CmpSuccess, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, int32 CallFunc_GetNamedPCInt_Value_2, int32 CallFunc_GetNamedPCInt_Value_3);
	void Unbind(FDelegateProperty_& Delegate, int32 ID, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	class FText Get_Text_DebugIDPosition_Text(class FText CallFunc_Conv_IntToText_ReturnValue);
	void RemoveNotify(bool CallFunc_IsValid_ReturnValue);
	void IncreaseShellPortraitSize(bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_2, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1);
	struct FLinearColor Get_Image_BossGlimpse_Color(const struct FLinearColor& Local_Color, bool K2Node_SwitchName_CmpSuccess);
	enum class ESlateVisibility Get_Image_BossGlimpse_Visibility(bool K2Node_SwitchName_CmpSuccess);
	void RepriseFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void RepriseTimer();
	void RepriseFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PauseFadeOut(float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void PauseTimer(bool CallFunc_K2_IsTimerActiveHandle_ReturnValue);
	void PauseFadeIn(float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void GetHUD(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess);
	void GetTextType(struct FSlateFontInfo* Font, struct FVector2D* Transform, bool Local_IsEmpty, bool Local_MaxFam);
	struct FSlateBrush Get_ItemArt_Brush(bool Temp_bool_Variable, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	enum class ESlateVisibility Get_Text_Amount_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1);
	class FText Get_Text_Amount(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetSmokeBlend(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void DisplayInfo(const struct FToolTipInfo& ItemToolTipInfo, class FText NotificationTypeText, bool ShowFamiliarity_, int32 DiamondsOld, int32 DiamondsNew, bool AnimateLastDiamond, class FText CallFunc_Get_Description_Text_ReturnValue);
	class FText Get_NotificationType_Text();
	class FText Get_StackSize_Text(class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Description_Visibility(const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue);
	class FText Get_Description_Text(bool Local_IsEmpty, bool Local_MaxFam, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool Temp_bool_Variable_4, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_5, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool Temp_bool_Variable_6, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, class FText CallFunc_ChangeItemFamEffectText_ReturnValue, class FText CallFunc_ChangeItemEffectText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& K2Node_Select_Default_4, const class FString& K2Node_Select_Default_5, const class FString& K2Node_Select_Default_6, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	class FText Get_Use_Text(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Intelligence_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Dexterity_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Strength_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Armor_Text(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Damage_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class FText Get_Type_Text(bool CallFunc_NotEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	class FText Get_Name_Text(bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Construct();
	void FadeOut();
	void RemoveFromScreen();
	void ShowFamiliarity(bool Condition);
	void Update();
	void OnHudVisibilityChanged_Set(bool bHudVisible);
	void OnHudVisibilityChanged_Bind();
	void OnHudVisibility_BeginPlay(bool HUD_Visible);
	void FadeIn();
	void OnCountDecreased();
	void ScrollBox_Bind();
	void ScrollBox_Set();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartScrollBox();
	void Reset_Offset_Start();
	void Reset_Offset_End();
	void Notify_Hidden();
	void OnHUDScaleChanged_Bind();
	void OnHUDScaleChanged_Set(enum class Enum_HUD_Size Size);
	void ExecuteUbergraph_Notification(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Condition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_CustomEvent_bHudVisible, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool K2Node_CustomEvent_HUD_Visible, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetDuration_Duration, bool CallFunc_Notify_Visibility_Show, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, enum class Enum_HUD_Size K2Node_CustomEvent_Size);
	void OnMovedUpASlot__DelegateSignature();
	void OnRemovedFromScreen__DelegateSignature();
};

}


