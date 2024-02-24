#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x284 - 0x230)
// WidgetBlueprintGeneratedClass UI_Prompt_Switcher.UI_Prompt_Switcher_C
class UUI_Prompt_Switcher_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Holding;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Holding;                                     // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Prompt;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class Enum_UI_InputType                 Input;                                             // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C08[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   GameInstance;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            XBOX_Icon;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PS4_Icon;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PC_Icon;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHolding;                                         // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldingDuration;                                   // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EControllerButton                 XBOX_Button;                                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EControllerButton                 PS4_Button;                                        // 0x281(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EControllerButton                 PC_Button;                                         // 0x282(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_UI_InputType                 Editor_Preview;                                    // 0x283(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Prompt_Switcher_C* GetDefaultObj();

	void UpdatePromptTextures(class UTexture2D* XBOX_Icon, class UTexture2D* PS4_Icon, class UTexture2D* PC_Icon);
	void StopAndResetHoldingAnim(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void PlayHoldingAnim(float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetPrompt(enum class Enum_UI_InputType Input, enum class Enum_UI_InputType Temp_byte_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class Enum_UI_InputType Temp_byte_Variable_1, bool Temp_bool_Variable_2, class UTexture2D* CallFunc_GetButtonIcon_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UTexture2D* CallFunc_GetButtonIcon_Texture_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Select_Default_1, class UTexture2D* K2Node_Select_Default_2, class UTexture2D* K2Node_Select_Default_3, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnChangeForcePS4Icons();
	void OnInputChanged(bool KeyboardMode);
	void ExecuteUbergraph_UI_Prompt_Switcher(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class Enum_UI_InputType Temp_byte_Variable, enum class Enum_UI_InputType Temp_byte_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class Enum_UI_InputType Temp_byte_Variable_2, enum class Enum_UI_InputType Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class Enum_UI_InputType Temp_byte_Variable_6, bool K2Node_Event_IsDesignTime, enum class Enum_UI_InputType K2Node_Select_Default, bool K2Node_CustomEvent_KeyboardMode, enum class Enum_UI_InputType K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, enum class Enum_UI_InputType K2Node_Select_Default_3);
};

}


