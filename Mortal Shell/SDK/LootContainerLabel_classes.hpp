#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x388 - 0x230)
// WidgetBlueprintGeneratedClass LootContainerLabel.LootContainerLabel_C
class ULootContainerLabel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeAnimation;                                     // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GamepadImage;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            KeyboardText;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NotificationType;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FToolTipInfo                          ItemToolTipInfo;                                   // 0x260(0xB4)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_708[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NotificationTypeText;                              // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESlateVisibility                  NotificationVisible;                               // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NotificationTimeout;                               // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NotificationTimeOnScreen;                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade;                                              // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  NotificationDetailsText;                           // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NotificationFlavorText;                            // 0x358(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            BottomRightNotificationCompleted;                  // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  CurrentNotificationPlaying;                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULootContainerLabel_C* GetDefaultObj();

	void IconsForKeyboardOrGamepad(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	void OnPaint(struct FPaintContext& Context);
	class FText Get_NotificationFlavor();
	class FText Get_NotificationDetails();
	class FText Get_NotificationType_Text();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue);
	enum class ESlateVisibility Get_StackSize_Visibility();
	class FText Get_StackSize_Text(class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Description_Visibility(const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue);
	class FText Get_Description_Text(const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_NotEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Use_Visibility(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class FText Get_Use_Text(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	enum class ESlateVisibility Get_Intelligence_Visibility(bool CallFunc_Greater_IntInt_ReturnValue);
	class FText Get_Intelligence_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Dexterity_Visibility(bool CallFunc_Greater_IntInt_ReturnValue);
	class FText Get_Dexterity_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Strength_Visibility(bool CallFunc_Greater_IntInt_ReturnValue);
	class FText Get_Strength_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Armor_Visibility(bool CallFunc_Greater_IntInt_ReturnValue);
	class FText Get_Armor_Text(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Damage_Visibility(bool CallFunc_Greater_IntInt_ReturnValue);
	class FText Get_Damage_Text(bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	enum class ESlateVisibility Get_Visibility(bool CallFunc_IsValid_ReturnValue);
	class FText Get_Type_Text(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	class FText Get_Name_Text();
	struct FLinearColor Get_Border_Color(const struct FQualityColors& LocalQualityColors, const struct FLinearColor& LocalColor, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Border_Visibility(bool CallFunc_IsValid_ReturnValue);
	void CheckForEarlyTermination();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_LootContainerLabel(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BottomRightNotificationCompleted__DelegateSignature();
};

}


