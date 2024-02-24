#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_Stats_Entry.wid_Inventory_Stats_Entry_C
class UWid_Inventory_Stats_Entry_C : public UUserWidget
{
public:
	class UProgressBar*                          Fill;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          NegativeProgressBar;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Inventory_Stats_Entry_C* GetDefaultObj();

	void Update(class FText StatName, float Fill, bool Temp_bool_Variable, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_FormatText_Output, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* K2Node_Select_Default);
};

}


