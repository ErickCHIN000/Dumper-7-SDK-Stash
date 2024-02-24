#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x301 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PhysicalKey_TextOnly.UMG_PhysicalKey_TextOnly_C
class UUMG_PhysicalKey_TextOnly_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ArrowAnimation;                                    // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                KeyImage;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TextSizeBox;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKey                                  PhysicalKey;                                       // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Hold;                                              // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsHeld;                                            // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4322[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  PhysicalGamepadKey;                                // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            KeyChanged;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         UseUpdateHold;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4339[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Color;                                             // 0x2D8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         BackgroundVisible;                                 // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_PhysicalKey_TextOnly_C* GetDefaultObj();

	void Set_Key(const struct FKey& InGamepadKey, const struct FKey& InKey, bool Hold, bool* IsSet, const struct FKey& NewKey, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EControllerIconsSetting Temp_byte_Variable_4, enum class EControllerIconSet Temp_byte_Variable_5, enum class EControllerIconSet Temp_byte_Variable_6, enum class EControllerIconSet Temp_byte_Variable_7, enum class EControllerIconSet Temp_byte_Variable_8, enum class EControllerIconSet Temp_byte_Variable_9, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EControllerIconsSetting CallFunc_GetControllerIcons_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class EControllerIconSet K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FKeyIconData& CallFunc_GetIconsForKey_OutData, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class FText CallFunc_GetDisplayNameForKey_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FKey& K2Node_Select_Default_3);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InputTypeChanged(enum class EInputTypeSetting Value);
	void ExecuteUbergraph_UMG_PhysicalKey_TextOnly(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, enum class EInputTypeSetting K2Node_CustomEvent_Value, bool CallFunc_Set_Key_IsSet, enum class ESlateVisibility K2Node_Select_Default);
	void KeyChanged__DelegateSignature(bool IsSet);
};

}


