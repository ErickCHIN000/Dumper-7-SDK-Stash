#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCC (0x314 - 0x248)
// WidgetBlueprintGeneratedClass DebuffButton.DebuffButton_C
class UDebuffButton_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_5;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHButton*                             DebuffButton;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DebuffIcon;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DebuffNameText;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DebuffTypeText;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFloatingWidget_C*                     FloatingWidget;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUIDebuffType                     DebuffType;                                        // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1249[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          PositiveColor;                                     // 0x28C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NegativeColor;                                     // 0x29C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPositiveDebuff;                                 // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_124E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DebuffName;                                        // 0x2B0(0x18)(Edit, BlueprintVisible)
	class FText                                  DiseaseName;                                       // 0x2C8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class ASHPlayerCharacter*                    Player;                                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASHDisease*                            DiseaseElem;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASHEffect*                             EventsElem;                                        // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASHEffect_Buff*                        BuffElem;                                          // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsWorldEvent;                                     // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_125B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          WorldEventColor;                                   // 0x304(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDebuffButton_C* GetDefaultObj();

	struct FLinearColor Get_SelectionImage_ColorAndOpacity_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_HasKeyboardFocus_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void SetTexture(class UTexture2D* BuffTexture, enum class EEffectBuffType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class EUIDebuffType Temp_byte_Variable_1, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* Temp_object_Variable_14, class UTexture2D* Temp_object_Variable_15, bool CallFunc_IsValid_ReturnValue, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1);
	class FText Get_DebuffCategoryText(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable_4, enum class ETraumaComplication Temp_byte_Variable, class FText Temp_text_Variable_5, enum class ETraumaComplication Temp_byte_Variable_1, class FText Temp_text_Variable_6, enum class ETraumaComplication Temp_byte_Variable_2, class FText Temp_text_Variable_7, enum class ETraumaComplication Temp_byte_Variable_3, class FText Temp_text_Variable_8, enum class ECarryingCapacityStage Temp_byte_Variable_4, class FText Temp_text_Variable_9, enum class EStressStage Temp_byte_Variable_5, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, enum class EUIDebuffType Temp_byte_Variable_6, bool Temp_bool_Variable_5, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, class FText Temp_text_Variable_12, bool Temp_bool_Variable_6, class FText Temp_text_Variable_13, class FText K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class FText K2Node_Select_Default_4, class FText CallFunc_TextToUpper_ReturnValue_5, enum class ECarryingCapacityStage CallFunc_GetCarryingCapacityStage_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FText K2Node_Select_Default_5, bool CallFunc_IsValid_ReturnValue_7, class FText K2Node_Select_Default_6, class FText CallFunc_TextToUpper_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_8, enum class EStressStage CallFunc_GetStressStage_ReturnValue, class FText K2Node_Select_Default_7, class FText K2Node_Select_Default_8, class FText CallFunc_TextToUpper_ReturnValue_7, class FText K2Node_Select_Default_9, class FText CallFunc_TextToUpper_ReturnValue_8, class FText K2Node_Select_Default_10, class FText CallFunc_TextToUpper_ReturnValue_9, class FText K2Node_Select_Default_11, class FText CallFunc_TextToUpper_ReturnValue_10, class FText K2Node_Select_Default_12, bool CallFunc_IsValid_ReturnValue_9, class FText CallFunc_TextToUpper_ReturnValue_11, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_12, class FText CallFunc_TextToUpper_ReturnValue_13, class FText K2Node_Select_Default_13);
	class FText Get_DebuffNameText(bool Temp_bool_Variable, class FText Temp_text_Variable, enum class ETraumaComplication Temp_byte_Variable, class FText Temp_text_Variable_1, enum class ETraumaComplication Temp_byte_Variable_1, class FText Temp_text_Variable_2, enum class ETraumaComplication Temp_byte_Variable_2, class FText Temp_text_Variable_3, enum class ETraumaComplication Temp_byte_Variable_3, class FText Temp_text_Variable_4, enum class ECarryingCapacityStage Temp_byte_Variable_4, class FText Temp_text_Variable_5, enum class EStressStage Temp_byte_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, enum class EUIDebuffType Temp_byte_Variable_6, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText Temp_text_Variable_8, bool Temp_bool_Variable_1, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue_2, enum class ECarryingCapacityStage CallFunc_GetCarryingCapacityStage_ReturnValue, class FText K2Node_Select_Default_2, class FText CallFunc_TextToUpper_ReturnValue_3, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue_4, class FText K2Node_Select_Default_4, class FText CallFunc_TextToUpper_ReturnValue_5, class FText K2Node_Select_Default_5, class FText CallFunc_TextToUpper_ReturnValue_6, class FText K2Node_Select_Default_6, class FText CallFunc_TextToUpper_ReturnValue_7, enum class EStressStage CallFunc_GetStressStage_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_8, class FText K2Node_Select_Default_7, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_TextToUpper_ReturnValue_9, class FText CallFunc_TextToUpper_ReturnValue_10, class FText CallFunc_MakeLiteralText_ReturnValue_9, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText CallFunc_TextToUpper_ReturnValue_11, class FText CallFunc_TextToUpper_ReturnValue_12, class FText CallFunc_MakeLiteralText_ReturnValue_11, class FText CallFunc_TextToUpper_ReturnValue_13, class FText K2Node_Select_Default_8);
	struct FLinearColor GetBrushColor_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_HasKeyboardFocus_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2);
	void SetColor(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetDebuffDuration(float* Result, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetServerTimeStamp_ReturnValue, int32 CallFunc_GetServerTimeStamp_ReturnValue_1, int32 CallFunc_GetServerTimeStamp_ReturnValue_2, int32 CallFunc_GetServerTimeStamp_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_2, int32 CallFunc_Max_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	enum class ESlateVisibility Get_SelectionImage_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnSynchronizeProperties();
	void FOnWidgetSelect_Event_0(class USHUserWidget* Sender, bool IsSelected);
	void BndEvt__DebuffButton_K2Node_ComponentBoundEvent_51_OnButtonPressedEvent__DelegateSignature();
	void ManualPress();
	void Update();
	void ExecuteUbergraph_DebuffButton(int32 EntryPoint, bool Temp_bool_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, enum class EUIDebuffType Temp_byte_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, class UTexture2D* Temp_object_Variable_2, class USHUserWidget* K2Node_CustomEvent_Sender, bool K2Node_CustomEvent_IsSelected, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTexture2D* K2Node_Select_Default, bool K2Node_Select_Default_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* K2Node_Select_Default_2);
};

}

