#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF5 (0x325 - 0x230)
// WidgetBlueprintGeneratedClass UI_RuneStatusIcon.UI_RuneStatusIcon_C
class UUI_RuneStatusIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Misc;                                // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Circle_Black;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Background;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_BackgroundBlack;                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Border;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Icon;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_Tier;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rune_TierGlow;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Rune;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Tier;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MiscLevel;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_MiscLevel_Symbol;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_TierLevel;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  Rune_ID;                                           // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Category                Rune_Category;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    Rune_Type;                                         // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Rune_Tier;                                         // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_27B1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Rune_Level;                                        // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Rune_Misc;                                         // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_27BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Rune_Texture;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_Runes_StatusContainer_C*           UI_RuneStatuContainer;                             // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds;                                  // 0x2D0(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        UniqueId;                                          // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DesignTime;                                        // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_RuneStatusIcon_C* GetDefaultObj();

	void HandleTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	void HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	class FText GetTierLevelText(bool IsMisc, const class FString& Temp_string_Variable, int32 Temp_int_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_SelectString_ReturnValue, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void HandleLevel(bool Local_IsMisc, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetTierLevelText_ReturnValue);
	void HandleTier(const struct FLinearColor& Local_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue);
	void HandleIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_RuneStatusIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


