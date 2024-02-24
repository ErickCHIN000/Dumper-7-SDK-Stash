#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x2E9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PhysicalKey.UMG_PhysicalKey_C
class UUMG_PhysicalKey_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ArrowAnimation;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                FillImage;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HoldArrow;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KeyImage;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TextSizeBox;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                  PhysicalKey;                                       // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Hold;                                              // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsHeld;                                            // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  PhysicalGamepadKey;                                // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            KeyChanged;                                        // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseUpdateHold;                                     // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_PhysicalKey_C* GetDefaultObj();

	void Set_Held(bool Held, float Alpha, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetHoldState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Set_Key(const struct FKey& InGamepadKey, const struct FKey& InKey, bool Hold, bool* IsSet, const struct FKey& NewKey, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, bool Temp_bool_Variable_1, enum class EControllerIconsSetting Temp_byte_Variable, enum class EControllerIconSet Temp_byte_Variable_1, enum class EControllerIconSet Temp_byte_Variable_2, enum class EControllerIconSet Temp_byte_Variable_3, enum class EControllerIconSet Temp_byte_Variable_4, enum class EControllerIconSet Temp_byte_Variable_5, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, class FText CallFunc_GetDisplayNameForKey_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FKey& K2Node_Select_Default, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, bool Temp_bool_Variable_4, enum class EControllerIconsSetting CallFunc_GetControllerIcons_ReturnValue, enum class EControllerIconSet K2Node_Select_Default_1, const struct FKeyIconData& CallFunc_GetIconsForKey_OutData, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateVisibility K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UTexture2D* K2Node_Select_Default_3, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Select_Default_4, float K2Node_Select_Default_5);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update_Hold(const struct FTimerHandle& Timer);
	void InputTypeChanged(enum class EInputTypeSetting Value);
	void ExecuteUbergraph_UMG_PhysicalKey(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& K2Node_CustomEvent_Timer, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, enum class EInputTypeSetting K2Node_CustomEvent_Value, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Set_Key_IsSet);
	void KeyChanged__DelegateSignature(bool IsSet);
};

}


