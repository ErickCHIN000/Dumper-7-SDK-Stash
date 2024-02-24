#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x378 (0x5A8 - 0x230)
// WidgetBlueprintGeneratedClass UI_MainMenu_Button.UI_MainMenu_Button_C
class UUI_MainMenu_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Image_Blink;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Text_Blink;                                   // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_MainMenu;                                   // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Button;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectionLine;                               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Button;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Button;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ClearWidth;                                        // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_Value;                                        // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        Button_Width;                                      // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ETextJustify                      Text_Justification;                                // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2137[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Hovered;                                           // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSelected;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Unhovered;                                         // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsBlinking;                                        // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUnavailable;                                     // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseImage;                                          // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2157[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Texture;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Inactive;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Blinking;                                    // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CustomFontSize;                                    // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2169[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FontSize;                                          // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDisabled;                                        // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2175[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ButtonImageSize;                                   // 0x30C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugButton;                                       // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2185[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          DebugStyle;                                        // 0x318(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Hide_Line;                                         // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DontPlayScaleAnim;                                 // 0x591(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_218B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CustomID;                                          // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_MainMenu_Button_C* GetDefaultObj();

	void DebugButtonSet();
	struct FSlateColor GetDisabledColor(const struct FSlateColor& OtherColor, bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_Select_Default);
	void MMB_SetDisabled(bool IsDisabled, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue);
	void MMB_SetFontSize(const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void MMB_SetWidth();
	void MMB_SetTextToLower();
	void MMB_Unavailable(bool IsUnavailable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue);
	void MMB_Deselected(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue);
	void MMB_Selected(class USoundBase* Sound, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue);
	void MMB_Blink_Stop(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& CallFunc_GetDisabledColor_ReturnValue_1);
	void MMB_Blink_Start(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void MMB_SetTextValue(class FText CallFunc_TextToLower_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnInitialized();
	void OnLanguageChanged();
	void ExecuteUbergraph_UI_MainMenu_Button(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Variable, float K2Node_Select_Default);
	void Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
};

}


