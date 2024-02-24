#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x299 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_Trait.UMG_FieldGuide_Trait_C
class UUMG_FieldGuide_Trait_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               BorderColour;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBestiaryTraitsRowHandle              Trait;                                             // 0x280(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Unlocked;                                          // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_Trait_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_FieldGuide_Trait(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, bool Temp_bool_Variable_3, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_4, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, bool K2Node_Event_IsDesignTime, const struct FBestiaryTraitData& CallFunc_GetBestiaryTraitsStruct_BestiaryTraits, enum class EValid CallFunc_GetBestiaryTraitsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FBestiaryTraitType& CallFunc_GetBestiaryTraitTypesStruct_BestiaryTraitTypes, enum class EValid CallFunc_GetBestiaryTraitTypesStruct_Paths, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FText K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, const struct FLinearColor& K2Node_Select_Default_4);
};

}


