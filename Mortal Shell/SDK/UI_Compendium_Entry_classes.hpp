#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x3D0 - 0x230)
// WidgetBlueprintGeneratedClass UI_Compendium_Entry.UI_Compendium_Entry_C
class UUI_Compendium_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Highlighted;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_Entry;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox_Entry;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_196;                                         // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Line;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Entry_Title;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text_Title_Value;                                  // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UUI_Equipment_CompendiumTab_C*         UI_Compendium;                                     // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Discovered;                                        // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_10EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        InventoryItem;                                     // 0x298(0x132)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_10ED[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUI_Compendium_Entry_C* GetDefaultObj();

	void Highlighted(bool Highlighted, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__Button_Entry_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Compendium_Entry(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, class FText K2Node_Select_Default);
};

}


