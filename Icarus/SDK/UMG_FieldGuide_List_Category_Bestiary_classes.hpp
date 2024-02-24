#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x300 - 0x2B1)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Bestiary.UMG_FieldGuide_List_Category_Bestiary_C
class UUMG_FieldGuide_List_Category_Bestiary_C : public UUMG_FieldGuide_List_Category_C
{
public:
	uint8                                        Pad_630[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTerrainsRowHandle                    Map;                                               // 0x2C0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FAtmospheresRowHandle                 Atmosphere;                                        // 0x2D8(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FilterBestiary;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_List_Category_Bestiary_C* GetDefaultObj();

	void ClickedInternal();
	void ExecuteUbergraph_UMG_FieldGuide_List_Category_Bestiary(int32 EntryPoint);
	void FilterBestiary__DelegateSignature(const struct FTerrainsRowHandle& Map, const struct FAtmospheresRowHandle& Atmosphere);
};

}


