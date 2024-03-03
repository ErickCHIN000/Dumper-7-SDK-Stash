#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_WindowSwitcher.WB_WindowSwitcher_C
// (None)

class UClass* UWB_WindowSwitcher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_WindowSwitcher_C");

	return Clss;
}


// WB_WindowSwitcher_C WB_WindowSwitcher.Default__WB_WindowSwitcher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_WindowSwitcher_C* UWB_WindowSwitcher_C::GetDefaultObj()
{
	static class UWB_WindowSwitcher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_WindowSwitcher_C*>(UWB_WindowSwitcher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.Get UI Border Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UWB_WindowSwitcher_C::Get_UI_Border_Color(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "Get UI Border Color");

	Params::UWB_WindowSwitcher_C_Get_UI_Border_Color_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Inv_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Inv_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Inv_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.Crafting to Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::Crafting_to_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "Crafting to Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.Abilities to Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::Abilities_to_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "Abilities to Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.Inventory to Abilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::Inventory_to_Abilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "Inventory to Abilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Quests_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Quests_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Abilities_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_WorldMap_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Quests_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Quests_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_Quests_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_Quests_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_craft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_craft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_craft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__Button_craft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__Button_craft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__Button_craft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Inventory_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Inventory_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Inventory_1_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quests_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quests_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quests_1_K2Node_ComponentBoundEvent_61_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Inventory_1_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Inventory_1_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Inventory_1_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_World_1_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_World_1_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_World_1_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_1_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_1_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_1_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Inventory_Forms_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Inventory_Forms_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Inventory_Forms_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.OpenForms
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::OpenForms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "OpenForms");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Abilities_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Inventory_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Quests_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Lore_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Abilities_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Inventory_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Lore_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_World_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Forms_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Inventory_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Lore_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_Quests_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Abilities_World_K2Node_ComponentBoundEvent_42_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Map_Forms_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Quest_Forms_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_44_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_45_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_45_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Abilities_K2Node_ComponentBoundEvent_45_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Inventory_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Lore_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_Quests_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_WindowSwitcher_C::BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "BndEvt__WB_WindowSwitcher_Button_Forms_World_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_WindowSwitcher.WB_WindowSwitcher_C.ExecuteUbergraph_WB_WindowSwitcher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class ABP_CombatCharacter_C*       K2Node_DynamicCast_AsBP_Combat_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_10                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_11                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_12                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_13                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_14                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_15                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_16                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_17                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_18                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_19                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_20                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_21                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_22                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_23                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_24                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_25                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_26                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_27                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_28                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_29                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_30                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_31                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_32                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_33                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_34                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_35                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_36                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_37                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_38                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_39                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_40                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_41                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_42                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_43                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_44                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_45                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_46                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_47                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_48                                  (None)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Crafting_C*              CallFunc_Get_AC_Crafting_AC_Crafting                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_WorldMap_C*              CallFunc_Open_World_Map_Widget_World_Map_Ref                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_WorldMap_C*              CallFunc_Open_World_Map_Widget_World_Map_Ref_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       K2Node_DynamicCast_AsBP_Combat_Character_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       K2Node_DynamicCast_AsBP_Combat_Character_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       K2Node_DynamicCast_AsBP_Combat_Character_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       K2Node_DynamicCast_AsBP_Combat_Character_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_WorldMap_C*              CallFunc_Open_World_Map_Widget_World_Map_Ref_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASEQ_Master_CharacterCustomization_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_49                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASEQ_Master_CharacterCustomization_C*CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASEQ_Master_CharacterCustomization_C*CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASEQ_Master_CharacterCustomization_C*CallFunc_GetActorOfClass_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_WorldMap_C*              CallFunc_Open_World_Map_Widget_World_Map_Ref_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_WindowSwitcher_C::ExecuteUbergraph_WB_WindowSwitcher(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character, bool K2Node_DynamicCast_bSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FSlateColor& K2Node_MakeStruct_SlateColor_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor_12, const struct FSlateColor& K2Node_MakeStruct_SlateColor_13, const struct FSlateColor& K2Node_MakeStruct_SlateColor_14, const struct FSlateColor& K2Node_MakeStruct_SlateColor_15, const struct FSlateColor& K2Node_MakeStruct_SlateColor_16, const struct FSlateColor& K2Node_MakeStruct_SlateColor_17, const struct FSlateColor& K2Node_MakeStruct_SlateColor_18, const struct FSlateColor& K2Node_MakeStruct_SlateColor_19, const struct FSlateColor& K2Node_MakeStruct_SlateColor_20, const struct FSlateColor& K2Node_MakeStruct_SlateColor_21, const struct FSlateColor& K2Node_MakeStruct_SlateColor_22, const struct FSlateColor& K2Node_MakeStruct_SlateColor_23, const struct FSlateColor& K2Node_MakeStruct_SlateColor_24, const struct FSlateColor& K2Node_MakeStruct_SlateColor_25, const struct FSlateColor& K2Node_MakeStruct_SlateColor_26, const struct FSlateColor& K2Node_MakeStruct_SlateColor_27, const struct FSlateColor& K2Node_MakeStruct_SlateColor_28, const struct FSlateColor& K2Node_MakeStruct_SlateColor_29, const struct FSlateColor& K2Node_MakeStruct_SlateColor_30, const struct FSlateColor& K2Node_MakeStruct_SlateColor_31, const struct FSlateColor& K2Node_MakeStruct_SlateColor_32, const struct FSlateColor& K2Node_MakeStruct_SlateColor_33, const struct FSlateColor& K2Node_MakeStruct_SlateColor_34, const struct FSlateColor& K2Node_MakeStruct_SlateColor_35, const struct FSlateColor& K2Node_MakeStruct_SlateColor_36, const struct FSlateColor& K2Node_MakeStruct_SlateColor_37, const struct FSlateColor& K2Node_MakeStruct_SlateColor_38, const struct FSlateColor& K2Node_MakeStruct_SlateColor_39, const struct FSlateColor& K2Node_MakeStruct_SlateColor_40, const struct FSlateColor& K2Node_MakeStruct_SlateColor_41, const struct FSlateColor& K2Node_MakeStruct_SlateColor_42, const struct FSlateColor& K2Node_MakeStruct_SlateColor_43, const struct FSlateColor& K2Node_MakeStruct_SlateColor_44, const struct FSlateColor& K2Node_MakeStruct_SlateColor_45, const struct FSlateColor& K2Node_MakeStruct_SlateColor_46, const struct FSlateColor& K2Node_MakeStruct_SlateColor_47, const struct FSlateColor& K2Node_MakeStruct_SlateColor_48, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UAC_Crafting_C* CallFunc_Get_AC_Crafting_AC_Crafting, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_2, bool K2Node_DynamicCast_bSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, bool CallFunc_IsPackagedForDistribution_ReturnValue, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsPackagedForDistribution_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class ABP_CombatCharacter_C* K2Node_DynamicCast_AsBP_Combat_Character_4, bool K2Node_DynamicCast_bSuccess_4, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_2, bool CallFunc_IsPackagedForDistribution_ReturnValue_2, bool CallFunc_IsPackagedForDistribution_ReturnValue_3, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_49, bool CallFunc_IsValid_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_1, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_2, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_3, class UWB_WorldMap_C* CallFunc_Open_World_Map_Widget_World_Map_Ref_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_WindowSwitcher_C", "ExecuteUbergraph_WB_WindowSwitcher");

	Params::UWB_WindowSwitcher_C_ExecuteUbergraph_WB_WindowSwitcher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_DynamicCast_AsBP_Combat_Character = K2Node_DynamicCast_AsBP_Combat_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;
	Parms.K2Node_MakeStruct_SlateColor_10 = K2Node_MakeStruct_SlateColor_10;
	Parms.K2Node_MakeStruct_SlateColor_11 = K2Node_MakeStruct_SlateColor_11;
	Parms.K2Node_MakeStruct_SlateColor_12 = K2Node_MakeStruct_SlateColor_12;
	Parms.K2Node_MakeStruct_SlateColor_13 = K2Node_MakeStruct_SlateColor_13;
	Parms.K2Node_MakeStruct_SlateColor_14 = K2Node_MakeStruct_SlateColor_14;
	Parms.K2Node_MakeStruct_SlateColor_15 = K2Node_MakeStruct_SlateColor_15;
	Parms.K2Node_MakeStruct_SlateColor_16 = K2Node_MakeStruct_SlateColor_16;
	Parms.K2Node_MakeStruct_SlateColor_17 = K2Node_MakeStruct_SlateColor_17;
	Parms.K2Node_MakeStruct_SlateColor_18 = K2Node_MakeStruct_SlateColor_18;
	Parms.K2Node_MakeStruct_SlateColor_19 = K2Node_MakeStruct_SlateColor_19;
	Parms.K2Node_MakeStruct_SlateColor_20 = K2Node_MakeStruct_SlateColor_20;
	Parms.K2Node_MakeStruct_SlateColor_21 = K2Node_MakeStruct_SlateColor_21;
	Parms.K2Node_MakeStruct_SlateColor_22 = K2Node_MakeStruct_SlateColor_22;
	Parms.K2Node_MakeStruct_SlateColor_23 = K2Node_MakeStruct_SlateColor_23;
	Parms.K2Node_MakeStruct_SlateColor_24 = K2Node_MakeStruct_SlateColor_24;
	Parms.K2Node_MakeStruct_SlateColor_25 = K2Node_MakeStruct_SlateColor_25;
	Parms.K2Node_MakeStruct_SlateColor_26 = K2Node_MakeStruct_SlateColor_26;
	Parms.K2Node_MakeStruct_SlateColor_27 = K2Node_MakeStruct_SlateColor_27;
	Parms.K2Node_MakeStruct_SlateColor_28 = K2Node_MakeStruct_SlateColor_28;
	Parms.K2Node_MakeStruct_SlateColor_29 = K2Node_MakeStruct_SlateColor_29;
	Parms.K2Node_MakeStruct_SlateColor_30 = K2Node_MakeStruct_SlateColor_30;
	Parms.K2Node_MakeStruct_SlateColor_31 = K2Node_MakeStruct_SlateColor_31;
	Parms.K2Node_MakeStruct_SlateColor_32 = K2Node_MakeStruct_SlateColor_32;
	Parms.K2Node_MakeStruct_SlateColor_33 = K2Node_MakeStruct_SlateColor_33;
	Parms.K2Node_MakeStruct_SlateColor_34 = K2Node_MakeStruct_SlateColor_34;
	Parms.K2Node_MakeStruct_SlateColor_35 = K2Node_MakeStruct_SlateColor_35;
	Parms.K2Node_MakeStruct_SlateColor_36 = K2Node_MakeStruct_SlateColor_36;
	Parms.K2Node_MakeStruct_SlateColor_37 = K2Node_MakeStruct_SlateColor_37;
	Parms.K2Node_MakeStruct_SlateColor_38 = K2Node_MakeStruct_SlateColor_38;
	Parms.K2Node_MakeStruct_SlateColor_39 = K2Node_MakeStruct_SlateColor_39;
	Parms.K2Node_MakeStruct_SlateColor_40 = K2Node_MakeStruct_SlateColor_40;
	Parms.K2Node_MakeStruct_SlateColor_41 = K2Node_MakeStruct_SlateColor_41;
	Parms.K2Node_MakeStruct_SlateColor_42 = K2Node_MakeStruct_SlateColor_42;
	Parms.K2Node_MakeStruct_SlateColor_43 = K2Node_MakeStruct_SlateColor_43;
	Parms.K2Node_MakeStruct_SlateColor_44 = K2Node_MakeStruct_SlateColor_44;
	Parms.K2Node_MakeStruct_SlateColor_45 = K2Node_MakeStruct_SlateColor_45;
	Parms.K2Node_MakeStruct_SlateColor_46 = K2Node_MakeStruct_SlateColor_46;
	Parms.K2Node_MakeStruct_SlateColor_47 = K2Node_MakeStruct_SlateColor_47;
	Parms.K2Node_MakeStruct_SlateColor_48 = K2Node_MakeStruct_SlateColor_48;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_Get_AC_Crafting_AC_Crafting = CallFunc_Get_AC_Crafting_AC_Crafting;
	Parms.CallFunc_Open_World_Map_Widget_World_Map_Ref = CallFunc_Open_World_Map_Widget_World_Map_Ref;
	Parms.CallFunc_Open_World_Map_Widget_World_Map_Ref_1 = CallFunc_Open_World_Map_Widget_World_Map_Ref_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Combat_Character_1 = K2Node_DynamicCast_AsBP_Combat_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Combat_Character_2 = K2Node_DynamicCast_AsBP_Combat_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Combat_Character_3 = K2Node_DynamicCast_AsBP_Combat_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_1 = CallFunc_IsPackagedForDistribution_ReturnValue_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_4 = CallFunc_GetPlayerCharacter_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Combat_Character_4 = K2Node_DynamicCast_AsBP_Combat_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Open_World_Map_Widget_World_Map_Ref_2 = CallFunc_Open_World_Map_Widget_World_Map_Ref_2;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_2 = CallFunc_IsPackagedForDistribution_ReturnValue_2;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue_3 = CallFunc_IsPackagedForDistribution_ReturnValue_3;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_49 = K2Node_MakeStruct_SlateColor_49;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue_3 = CallFunc_GetActorOfClass_ReturnValue_3;
	Parms.CallFunc_Open_World_Map_Widget_World_Map_Ref_3 = CallFunc_Open_World_Map_Widget_World_Map_Ref_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


