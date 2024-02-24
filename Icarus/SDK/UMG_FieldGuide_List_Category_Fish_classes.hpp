#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x2D8 - 0x2B1)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Fish.UMG_FieldGuide_List_Category_Fish_C
class UUMG_FieldGuide_List_Category_Fish_C : public UUMG_FieldGuide_List_Category_C
{
public:
	uint8                                        Pad_3EA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EFishRarity                       Rarity;                                            // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EFishType                         Type;                                              // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3EBF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FilterFish;                                        // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Category_Fish_C* GetDefaultObj();

	void ClickedInternal();
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Fish(int32 EntryPoint);
	void FilterFish__DelegateSignature(enum class EFishRarity Rarity, enum class EFishType Type);
};

}


