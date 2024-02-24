#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C
// (None)

class UClass* UUMG_ResourceNetworkPreviewContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ResourceNetworkPreviewContainer_C");

	return Clss;
}


// UMG_ResourceNetworkPreviewContainer_C UMG_ResourceNetworkPreviewContainer.Default__UMG_ResourceNetworkPreviewContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ResourceNetworkPreviewContainer_C* UUMG_ResourceNetworkPreviewContainer_C::GetDefaultObj()
{
	static class UUMG_ResourceNetworkPreviewContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ResourceNetworkPreviewContainer_C*>(UUMG_ResourceNetworkPreviewContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)
// struct FFuelData                   CallFunc_GetFuelStruct_Fuel                                      (None)
// enum class EValid                  CallFunc_GetFuelStruct_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWaterData                  CallFunc_GetWaterStruct_Water                                    (None)
// enum class EValid                  CallFunc_GetWaterStruct_Paths                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnergyData                 CallFunc_GetEnergyStruct_Energy                                  (None)
// enum class EValid                  CallFunc_GetEnergyStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_2                               (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ResourceNetworkPreview_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ResourceNetworkPreview_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ResourceNetworkPreview_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ResourceNetworkPreviewContainer_C::Update(const struct FItemData& Item, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, const struct FFuelData& CallFunc_GetFuelStruct_Fuel, enum class EValid CallFunc_GetFuelStruct_Paths, const struct FWaterData& CallFunc_GetWaterStruct_Water, enum class EValid CallFunc_GetWaterStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FEnergyData& CallFunc_GetEnergyStruct_Energy, enum class EValid CallFunc_GetEnergyStruct_Paths, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UUMG_ResourceNetworkPreview_C* CallFunc_Create_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ResourceNetworkPreviewContainer_C", "Update");

	Params::UUMG_ResourceNetworkPreviewContainer_C_Update_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;
	Parms.CallFunc_GetFuelStruct_Fuel = CallFunc_GetFuelStruct_Fuel;
	Parms.CallFunc_GetFuelStruct_Paths = CallFunc_GetFuelStruct_Paths;
	Parms.CallFunc_GetWaterStruct_Water = CallFunc_GetWaterStruct_Water;
	Parms.CallFunc_GetWaterStruct_Paths = CallFunc_GetWaterStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetEnergyStruct_Energy = CallFunc_GetEnergyStruct_Energy;
	Parms.CallFunc_GetEnergyStruct_Paths = CallFunc_GetEnergyStruct_Paths;
	Parms.K2Node_MakeStruct_SlateChildSize_2 = K2Node_MakeStruct_SlateChildSize_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_1 = CallFunc_AddChildToHorizontalBox_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue_2 = CallFunc_AddChildToHorizontalBox_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ResourceNetworkPreviewContainer.UMG_ResourceNetworkPreviewContainer_C.ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ResourceNetworkPreviewContainer_C::ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ResourceNetworkPreviewContainer_C", "ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer");

	Params::UUMG_ResourceNetworkPreviewContainer_C_ExecuteUbergraph_UMG_ResourceNetworkPreviewContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


