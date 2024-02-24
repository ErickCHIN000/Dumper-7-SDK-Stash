#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass wid_Crafting_Stats_Entry_Small.wid_Crafting_Stats_Entry_Small_C
class UWid_Crafting_Stats_Entry_Small_C : public UUserWidget
{
public:
	class UTextBlock*                            Amount;                                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Fill;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          NegativeProgressBar;                               // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Crafting_Stats_Entry_Small_C* GetDefaultObj();

	void Update(class FText StatName, int32 Fill, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Abs_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UProgressBar* K2Node_Select_Default);
};

}


