#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C
// (None)

class UClass* UUMG_FarmingPlot_Seed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FarmingPlot_Seed_C");

	return Clss;
}


// UMG_FarmingPlot_Seed_C UMG_FarmingPlot_Seed.Default__UMG_FarmingPlot_Seed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FarmingPlot_Seed_C* UUMG_FarmingPlot_Seed_C::GetDefaultObj()
{
	static class UUMG_FarmingPlot_Seed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FarmingPlot_Seed_C*>(UUMG_FarmingPlot_Seed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.UpdateTitleBarText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Farming_Plot_Base_C*     K2Node_DynamicCast_AsBP_Farming_Plot_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFarmingSeedData            CallFunc_GetFarmingSeedsStruct_FarmingSeeds                      (None)
// enum class EValid                  CallFunc_GetFarmingSeedsStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UUMG_FarmingPlot_Seed_C::UpdateTitleBarText(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, class ABP_Farming_Plot_Base_C* K2Node_DynamicCast_AsBP_Farming_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FarmingPlot_Seed_C", "UpdateTitleBarText");

	Params::UUMG_FarmingPlot_Seed_C_UpdateTitleBarText_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_DynamicCast_AsBP_Farming_Plot_Base = K2Node_DynamicCast_AsBP_Farming_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetFarmingSeedsStruct_FarmingSeeds = CallFunc_GetFarmingSeedsStruct_FarmingSeeds;
	Parms.CallFunc_GetFarmingSeedsStruct_Paths = CallFunc_GetFarmingSeedsStruct_Paths;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.Initialise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FarmingPlot_Seed_C::Initialise(class AActor* LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FarmingPlot_Seed_C", "Initialise");

	Params::UUMG_FarmingPlot_Seed_C_Initialise_Params Parms{};

	Parms.LinkedActor = LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FarmingPlot_Seed_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FarmingPlot_Seed_C", "Tick");

	Params::UUMG_FarmingPlot_Seed_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.OnOutOfFuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FarmingPlot_Seed_C::OnOutOfFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FarmingPlot_Seed_C", "OnOutOfFuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FarmingPlot_Seed.UMG_FarmingPlot_Seed_C.ExecuteUbergraph_UMG_FarmingPlot_Seed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FuelElement_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FuelElement_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LinkedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeneratorData              CallFunc_GetGeneratorData_OutData                                (None)
// bool                               CallFunc_GetGeneratorData_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIcarusResourceType     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemDynamicData>    K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Farming_Plot_Base_C*     K2Node_DynamicCast_AsBP_Farming_Plot_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGeneratorComponent*         CallFunc_GetTrait_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItems_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FarmingPlot_Seed_C::ExecuteUbergraph_UMG_FarmingPlot_Seed(int32 EntryPoint, class UUMG_FuelElement_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUMG_FuelElement_C* CallFunc_Create_ReturnValue_1, class AActor* K2Node_CustomEvent_LinkedActor, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGeneratorData& CallFunc_GetGeneratorData_OutData, bool CallFunc_GetGeneratorData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EIcarusResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TArray<struct FItemDynamicData>& K2Node_MakeArray_Array, const struct FItemData& K2Node_MakeStruct_ItemData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class ABP_Farming_Plot_Base_C* K2Node_DynamicCast_AsBP_Farming_Plot_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class EValid CallFunc_GetTrait_Paths_3, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_HasItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FarmingPlot_Seed_C", "ExecuteUbergraph_UMG_FarmingPlot_Seed");

	Params::UUMG_FarmingPlot_Seed_C_ExecuteUbergraph_UMG_FarmingPlot_Seed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CustomEvent_LinkedActor = K2Node_CustomEvent_LinkedActor;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGeneratorData_OutData = CallFunc_GetGeneratorData_OutData;
	Parms.CallFunc_GetGeneratorData_ReturnValue = CallFunc_GetGeneratorData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsBP_Farming_Plot_Base = K2Node_DynamicCast_AsBP_Farming_Plot_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTrait_Paths_2 = CallFunc_GetTrait_Paths_2;
	Parms.CallFunc_GetTrait_ReturnValue_2 = CallFunc_GetTrait_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetTrait_Paths_3 = CallFunc_GetTrait_Paths_3;
	Parms.CallFunc_GetTrait_ReturnValue_3 = CallFunc_GetTrait_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_HasItems_ReturnValue = CallFunc_HasItems_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


