#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C
// (None)

class UClass* UBP_TEMP_ToolbarSlotObject_InventoryItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TEMP_ToolbarSlotObject_InventoryItem_C");

	return Clss;
}


// BP_TEMP_ToolbarSlotObject_InventoryItem_C BP_TEMP_ToolbarSlotObject_InventoryItem.Default__BP_TEMP_ToolbarSlotObject_InventoryItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* UBP_TEMP_ToolbarSlotObject_InventoryItem_C::GetDefaultObj()
{
	static class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TEMP_ToolbarSlotObject_InventoryItem_C*>(UBP_TEMP_ToolbarSlotObject_InventoryItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.GetDragAndDropOperation_BP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconTexture_ReturnValue                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// int32                              CallFunc_GetSlotIndex_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GridItem_Draggable_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UDragDropOperation* UBP_TEMP_ToolbarSlotObject_InventoryItem_C::GetDragAndDropOperation_BP(class UDragOperation_Item_C* CallFunc_CreateDragDropOperation_ReturnValue, class UTexture2D* CallFunc_GetIconTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, int32 CallFunc_GetSlotIndex_ReturnValue, class APlayerController* CallFunc_GetOwningController_ReturnValue, class UWBP_GridItem_Draggable_C* CallFunc_Create_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TEMP_ToolbarSlotObject_InventoryItem_C", "GetDragAndDropOperation_BP");

	Params::UBP_TEMP_ToolbarSlotObject_InventoryItem_C_GetDragAndDropOperation_BP_Params Parms{};

	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_GetIconTexture_ReturnValue = CallFunc_GetIconTexture_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_GetSlotIndex_ReturnValue = CallFunc_GetSlotIndex_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.GetTooltipWidget_BP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// class APlayerController*           CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UBP_TEMP_ToolbarSlotObject_InventoryItem_C::GetTooltipWidget_BP(const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, class APlayerController* CallFunc_GetOwningController_ReturnValue, class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TEMP_ToolbarSlotObject_InventoryItem_C", "GetTooltipWidget_BP");

	Params::UBP_TEMP_ToolbarSlotObject_InventoryItem_C_GetTooltipWidget_BP_Params Parms{};

	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.IsSameInventoryEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGuid                       OtherItemInstanceId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSameInventoryEntry                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TEMP_ToolbarSlotObject_InventoryItem_C::IsSameInventoryEntry(const struct FGuid& OtherItemInstanceId, bool* IsSameInventoryEntry, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TEMP_ToolbarSlotObject_InventoryItem_C", "IsSameInventoryEntry");

	Params::UBP_TEMP_ToolbarSlotObject_InventoryItem_C_IsSameInventoryEntry_Params Parms{};

	Parms.OtherItemInstanceId = OtherItemInstanceId;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSameInventoryEntry != nullptr)
		*IsSameInventoryEntry = Parms.IsSameInventoryEntry;

}

}


