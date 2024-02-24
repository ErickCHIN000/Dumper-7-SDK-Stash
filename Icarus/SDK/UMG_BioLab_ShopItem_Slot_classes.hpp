#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x271 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C
class UUMG_BioLab_ShopItem_Slot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                LockImage;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Locked;                                            // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_BioLab_ShopItem_Slot_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_BioLab_ShopItem_Slot(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
};

}


