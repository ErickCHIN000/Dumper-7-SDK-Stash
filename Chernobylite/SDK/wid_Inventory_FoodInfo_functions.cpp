#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C
// (None)

class UClass* UWid_Inventory_FoodInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_FoodInfo_C");

	return Clss;
}


// wid_Inventory_FoodInfo_C wid_Inventory_FoodInfo.Default__wid_Inventory_FoodInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_FoodInfo_C* UWid_Inventory_FoodInfo_C::GetDefaultObj()
{
	static class UWid_Inventory_FoodInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_FoodInfo_C*>(UWid_Inventory_FoodInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_FoodInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_FoodInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C.UpdateValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_FoodInfo_C::UpdateValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_FoodInfo_C", "UpdateValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C.InventoryUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Inventory_FoodInfo_C::InventoryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_FoodInfo_C", "InventoryUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_FoodInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_FoodInfo_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_FoodInfo.wid_Inventory_FoodInfo_C.ExecuteUbergraph_wid_Inventory_FoodInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_Count_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_FoodInfo_C::ExecuteUbergraph_wid_Inventory_FoodInfo(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_Count_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Count_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_FoodInfo_C", "ExecuteUbergraph_wid_Inventory_FoodInfo");

	Params::UWid_Inventory_FoodInfo_C_ExecuteUbergraph_wid_Inventory_FoodInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Count_ReturnValue_1 = CallFunc_Count_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;

	UObject::ProcessEvent(Func, &Parms);

}

}


