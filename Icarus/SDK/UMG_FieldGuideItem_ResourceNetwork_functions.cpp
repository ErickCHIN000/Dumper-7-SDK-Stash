#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C
// (None)

class UClass* UUMG_FieldGuideItem_ResourceNetwork_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItem_ResourceNetwork_C");

	return Clss;
}


// UMG_FieldGuideItem_ResourceNetwork_C UMG_FieldGuideItem_ResourceNetwork.Default__UMG_FieldGuideItem_ResourceNetwork_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItem_ResourceNetwork_C* UUMG_FieldGuideItem_ResourceNetwork_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItem_ResourceNetwork_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItem_ResourceNetwork_C*>(UUMG_FieldGuideItem_ResourceNetwork_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C.PopulateResourceNetworkDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AnyChildrenVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AnyChildrenVisible_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItem_ResourceNetwork_Item_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeneratorData              CallFunc_GetGeneratorStruct_Generator                            (None)
// enum class EValid                  CallFunc_GetGeneratorStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItem_ResourceNetwork_Item_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuideItem_ResourceNetwork_Item_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusResourceType     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItem_ResourceNetwork_Item_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuideItem_ResourceNetwork_Item_C*CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic_1                      (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFuelData                   CallFunc_GetFuelStruct_Fuel                                      (None)
// enum class EValid                  CallFunc_GetFuelStruct_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOxygenData                 CallFunc_GetOxygenStruct_Oxygen                                  (None)
// enum class EValid                  CallFunc_GetOxygenStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBox*              K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterData                  CallFunc_GetWaterStruct_Water                                    (None)
// enum class EValid                  CallFunc_GetWaterStruct_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnergyData                 CallFunc_GetEnergyStruct_Energy                                  (None)
// enum class EValid                  CallFunc_GetEnergyStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBox*              K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_4                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_ResourceNetwork_C::PopulateResourceNetworkDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, bool CallFunc_AnyChildrenVisible_ReturnValue, bool CallFunc_AnyChildrenVisible_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, int32 Temp_int_Loop_Counter_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue, const struct FGeneratorData& CallFunc_GetGeneratorStruct_Generator, enum class EValid CallFunc_GetGeneratorStruct_Paths, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_2, enum class EIcarusResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UUMG_FieldGuideItem_ResourceNetwork_Item_C* CallFunc_Create_ReturnValue_4, bool Temp_bool_Variable_3, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic_1, enum class EValid CallFunc_GetItemsStaticStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFuelData& CallFunc_GetFuelStruct_Fuel, enum class EValid CallFunc_GetFuelStruct_Paths, const struct FOxygenData& CallFunc_GetOxygenStruct_Oxygen, enum class EValid CallFunc_GetOxygenStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, class UHorizontalBox* K2Node_Select_Default, class UHorizontalBox* K2Node_Select_Default_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FWaterData& CallFunc_GetWaterStruct_Water, enum class EValid CallFunc_GetWaterStruct_Paths, const struct FEnergyData& CallFunc_GetEnergyStruct_Energy, enum class EValid CallFunc_GetEnergyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, class UHorizontalBox* K2Node_Select_Default_2, class UHorizontalBox* K2Node_Select_Default_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_ResourceNetwork_C", "PopulateResourceNetworkDetail");

	Params::UUMG_FieldGuideItem_ResourceNetwork_C_PopulateResourceNetworkDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.CallFunc_AnyChildrenVisible_ReturnValue = CallFunc_AnyChildrenVisible_ReturnValue;
	Parms.CallFunc_AnyChildrenVisible_ReturnValue_1 = CallFunc_AnyChildrenVisible_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGeneratorStruct_Generator = CallFunc_GetGeneratorStruct_Generator;
	Parms.CallFunc_GetGeneratorStruct_Paths = CallFunc_GetGeneratorStruct_Paths;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic_1 = CallFunc_GetItemsStaticStruct_ItemsStatic_1;
	Parms.CallFunc_GetItemsStaticStruct_Paths_1 = CallFunc_GetItemsStaticStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetFuelStruct_Fuel = CallFunc_GetFuelStruct_Fuel;
	Parms.CallFunc_GetFuelStruct_Paths = CallFunc_GetFuelStruct_Paths;
	Parms.CallFunc_GetOxygenStruct_Oxygen = CallFunc_GetOxygenStruct_Oxygen;
	Parms.CallFunc_GetOxygenStruct_Paths = CallFunc_GetOxygenStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_GetWaterStruct_Water = CallFunc_GetWaterStruct_Water;
	Parms.CallFunc_GetWaterStruct_Paths = CallFunc_GetWaterStruct_Paths;
	Parms.CallFunc_GetEnergyStruct_Energy = CallFunc_GetEnergyStruct_Energy;
	Parms.CallFunc_GetEnergyStruct_Paths = CallFunc_GetEnergyStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_4 = CallFunc_AddChild_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_ResourceNetwork_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_ResourceNetwork_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItem_ResourceNetwork_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C.ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_ResourceNetwork_C::ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_ResourceNetwork_C", "ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork");

	Params::UUMG_FieldGuideItem_ResourceNetwork_C_ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


