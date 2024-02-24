#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Shops_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Shops_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Shops_C BP_MenuData_CM_GuideBook_Shops.Default__BP_MenuData_CM_GuideBook_Shops_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Shops_C* UBP_MenuData_CM_GuideBook_Shops_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Shops_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Shops_C*>(UBP_MenuData_CM_GuideBook_Shops_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C.PostInitialize
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FShopDescriptorRegistryEntry>CallFunc_GetAllShopDescriptors_OutShopRegistryEntries            (ReferenceParm)
// struct FShopDescriptorRegistryEntryCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Shops_C::PostInitialize(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FShopDescriptorRegistryEntry>& CallFunc_GetAllShopDescriptors_OutShopRegistryEntries, const struct FShopDescriptorRegistryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Shops_C", "PostInitialize");

	Params::UBP_MenuData_CM_GuideBook_Shops_C_PostInitialize_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllShopDescriptors_OutShopRegistryEntries = CallFunc_GetAllShopDescriptors_OutShopRegistryEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C.CreateAndQuickAddEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopDescriptorRegistryEntryShopRegistryEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryShop*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Shops_C::CreateAndQuickAddEntry(struct FShopDescriptorRegistryEntry& ShopRegistryEntry, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UNWXMenuDataEntryShop* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Shops_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_GuideBook_Shops_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.ShopRegistryEntry = ShopRegistryEntry;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


