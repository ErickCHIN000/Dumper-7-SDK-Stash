#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Stats_Entry.wid_Crafting_Stats_Entry_C
class UWid_Crafting_Stats_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          Fill;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          NegativeProgressBar;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoMI;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Stats_Entry_C* GetDefaultObj();

	void Update(class FText StatName, int32 Fill, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_FormatText_Output, float CallFunc_Abs_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_wid_Crafting_Stats_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


