#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_UpperUIBar.WB_UpperUIBar_C
// (None)

class UClass* UWB_UpperUIBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_UpperUIBar_C");

	return Clss;
}


// WB_UpperUIBar_C WB_UpperUIBar.Default__WB_UpperUIBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_UpperUIBar_C* UWB_UpperUIBar_C::GetDefaultObj()
{
	static class UWB_UpperUIBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_UpperUIBar_C*>(UWB_UpperUIBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get Renown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_UpperUIBar_C::Get_Renown(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get Renown");

	Params::UWB_UpperUIBar_C_Get_Renown_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get Carnal Instinct
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_UpperUIBar_C::Get_Carnal_Instinct(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get Carnal Instinct");

	Params::UWB_UpperUIBar_C_Get_Carnal_Instinct_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Set Weight Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UWB_UpperUIBar_C::Set_Weight_Color(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Set Weight Color");

	Params::UWB_UpperUIBar_C_Set_Weight_Color_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get Max Weight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_UpperUIBar_C::Get_Max_Weight(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get Max Weight");

	Params::UWB_UpperUIBar_C_Get_Max_Weight_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get Current Weight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_UpperUIBar_C::Get_Current_Weight(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get Current Weight");

	Params::UWB_UpperUIBar_C_Get_Current_Weight_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get Player Gold
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_UpperUIBar_C::Get_Player_Gold(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get Player Gold");

	Params::UWB_UpperUIBar_C_Get_Player_Gold_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Get UI Border Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FLinearColor UWB_UpperUIBar_C::Get_UI_Border_Color(class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Get UI Border Color");

	Params::UWB_UpperUIBar_C_Get_UI_Border_Color_Params Parms{};

	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Vendor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Vendor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Vendor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Crafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Crafting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Crafting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Storage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Storage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Storage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Abilities
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Abilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Abilities");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Map
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Map()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Map");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Quest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Quest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Quest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Inventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Inventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.Switch to Forms
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_UpperUIBar_C::Switch_to_Forms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "Switch to Forms");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_UpperUIBar.WB_UpperUIBar_C.ExecuteUbergraph_WB_UpperUIBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_UpperUIBar_C::ExecuteUbergraph_WB_UpperUIBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_UpperUIBar_C", "ExecuteUbergraph_WB_UpperUIBar");

	Params::UWB_UpperUIBar_C_ExecuteUbergraph_WB_UpperUIBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


