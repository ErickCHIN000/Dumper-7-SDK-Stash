#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass WB_UpperUIBar.WB_UpperUIBar_C
class UWB_UpperUIBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      AnimGold;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWB_WindowSwitcher_C*                  WB_WindowSwitcher;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_UpperUIBar_C* GetDefaultObj();

	class FText Get_Renown(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Carnal_Instinct(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class FText CallFunc_Conv_IntToText_ReturnValue);
	struct FSlateColor Set_Weight_Color(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	class FText Get_Max_Weight(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Current_Weight(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Player_Gold(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	struct FLinearColor Get_UI_Border_Color(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue);
	void Switch_to_Vendor();
	void Switch_to_Crafting();
	void Switch_to_Storage();
	void Switch_to_Abilities();
	void Switch_to_Map();
	void Switch_to_Quest();
	void Switch_to_Inventory();
	void Switch_to_Forms();
	void ExecuteUbergraph_WB_UpperUIBar(int32 EntryPoint);
};

}


