#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AlterationBench.UMG_AlterationBench_C
// (None)

class UClass* UUMG_AlterationBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AlterationBench_C");

	return Clss;
}


// UMG_AlterationBench_C UMG_AlterationBench.Default__UMG_AlterationBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AlterationBench_C* UUMG_AlterationBench_C::GetDefaultObj()
{
	static class UUMG_AlterationBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AlterationBench_C*>(UUMG_AlterationBench_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AlterationBench.UMG_AlterationBench_C.GetItemAttachmentQuery
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTagQueriesRowHandle        Query                                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// class UInventory*                  CallFunc_GetAttachmentSlot_Inventory                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlot_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlot_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventorySlot              CallFunc_Array_Get_Item                                          (ContainsInstancedReference)

void UUMG_AlterationBench_C::GetItemAttachmentQuery(struct FTagQueriesRowHandle* Query, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInventorySlot& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "GetItemAttachmentQuery");

	Params::UUMG_AlterationBench_C_GetItemAttachmentQuery_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetAttachmentSlot_Inventory = CallFunc_GetAttachmentSlot_Inventory;
	Parms.CallFunc_GetAttachmentSlot_Slot = CallFunc_GetAttachmentSlot_Slot;
	Parms.CallFunc_GetAttachmentSlot_Paths = CallFunc_GetAttachmentSlot_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Query != nullptr)
		*Query = std::move(Parms.Query);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.GetAttachedAttachment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   Attachment                                                       (Parm, OutParm, ContainsInstancedReference)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetAttachmentSlot_Inventory                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlot_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlot_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)

void UUMG_AlterationBench_C::GetAttachedAttachment(struct FItemData* Attachment, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemData& CallFunc_GetItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "GetAttachedAttachment");

	Params::UUMG_AlterationBench_C_GetAttachedAttachment_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_GetAttachmentSlot_Inventory = CallFunc_GetAttachmentSlot_Inventory;
	Parms.CallFunc_GetAttachmentSlot_Slot = CallFunc_GetAttachmentSlot_Slot;
	Parms.CallFunc_GetAttachmentSlot_Paths = CallFunc_GetAttachmentSlot_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = std::move(Parms.Attachment);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.CanAlterItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Alterable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_GetItemAttachmentQuery_Query                            (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetAttachedAttachment_Attachment                        (ContainsInstancedReference)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationBench_C::CanAlterItem(bool* Alterable, const struct FTagQueriesRowHandle& CallFunc_GetItemAttachmentQuery_Query, const struct FItemData& CallFunc_GetAttachedAttachment_Attachment, bool CallFunc_IsRowHandleValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool CallFunc_ItemMatchesQuery_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EDataValid CallFunc_ItemDataValid_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "CanAlterItem");

	Params::UUMG_AlterationBench_C_CanAlterItem_Params Parms{};

	Parms.CallFunc_GetItemAttachmentQuery_Query = CallFunc_GetItemAttachmentQuery_Query;
	Parms.CallFunc_GetAttachedAttachment_Attachment = CallFunc_GetAttachedAttachment_Attachment;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_ItemDataValid_Paths_2 = CallFunc_ItemDataValid_Paths_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Alterable != nullptr)
		*Alterable = Parms.Alterable;

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.UpdateActionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemData                   Attachment                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FIcarusAttachment           CallFunc_GetItemAttachmentData_Attachment                        (None)
// enum class EDataValid              CallFunc_GetItemAttachmentData_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAlterationsEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_1                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_2                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetAttachedAttachment_Attachment                        (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetAttachedAttachment_Attachment_1                      (ContainsInstancedReference)
// struct FIcarusAttachment           CallFunc_GetItemAttachmentData_Attachment_1                      (None)
// enum class EDataValid              CallFunc_GetItemAttachmentData_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_3                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// struct FAlterationsEnum            CallFunc_RowHandleToStruct_ReturnValue_1                         (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_7                                         (ReferenceParm)
// bool                               CallFunc_CanAlterItem_Alterable                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_7                                    (None)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)

void UUMG_AlterationBench_C::UpdateActionText(const struct FItemData& Item, const struct FItemData& Attachment, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FIcarusAttachment& CallFunc_GetItemAttachmentData_Attachment, enum class EDataValid CallFunc_GetItemAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, class FText CallFunc_Format_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FItemableData& CallFunc_GetItemableData_ItemableData_2, enum class EDataValid CallFunc_GetItemableData_Paths_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, bool K2Node_SwitchEnum_CmpSuccess_3, class FText CallFunc_Format_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, enum class EDataValid CallFunc_ItemDataValid_Paths, class FText CallFunc_Format_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, enum class EDataValid CallFunc_ItemDataValid_Paths_1, class FText CallFunc_Format_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FItemData& CallFunc_GetAttachedAttachment_Attachment, const struct FItemData& CallFunc_GetAttachedAttachment_Attachment_1, const struct FIcarusAttachment& CallFunc_GetItemAttachmentData_Attachment_1, enum class EDataValid CallFunc_GetItemAttachmentData_Paths_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData_3, enum class EDataValid CallFunc_GetItemableData_Paths_3, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_6, enum class EDataValid CallFunc_ItemDataValid_Paths_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, bool K2Node_SwitchEnum_CmpSuccess_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_7, bool CallFunc_CanAlterItem_Alterable, class FText CallFunc_Format_ReturnValue_7, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_9, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "UpdateActionText");

	Params::UUMG_AlterationBench_C_UpdateActionText_Params Parms{};

	Parms.Item = Item;
	Parms.Attachment = Attachment;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetItemAttachmentData_Attachment = CallFunc_GetItemAttachmentData_Attachment;
	Parms.CallFunc_GetItemAttachmentData_Paths = CallFunc_GetItemAttachmentData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetItemableData_ItemableData_1 = CallFunc_GetItemableData_ItemableData_1;
	Parms.CallFunc_GetItemableData_Paths_1 = CallFunc_GetItemableData_Paths_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetItemableData_ItemableData_2 = CallFunc_GetItemableData_ItemableData_2;
	Parms.CallFunc_GetItemableData_Paths_2 = CallFunc_GetItemableData_Paths_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetAttachedAttachment_Attachment = CallFunc_GetAttachedAttachment_Attachment;
	Parms.CallFunc_GetAttachedAttachment_Attachment_1 = CallFunc_GetAttachedAttachment_Attachment_1;
	Parms.CallFunc_GetItemAttachmentData_Attachment_1 = CallFunc_GetItemAttachmentData_Attachment_1;
	Parms.CallFunc_GetItemAttachmentData_Paths_1 = CallFunc_GetItemAttachmentData_Paths_1;
	Parms.CallFunc_GetItemableData_ItemableData_3 = CallFunc_GetItemableData_ItemableData_3;
	Parms.CallFunc_GetItemableData_Paths_3 = CallFunc_GetItemableData_Paths_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_RowHandleToStruct_ReturnValue_1 = CallFunc_RowHandleToStruct_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.CallFunc_ItemDataValid_Paths_2 = CallFunc_ItemDataValid_Paths_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.CallFunc_CanAlterItem_Alterable = CallFunc_CanAlterItem_Alterable;
	Parms.CallFunc_Format_ReturnValue_7 = CallFunc_Format_ReturnValue_7;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_InventoryItemSlow_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AutomaticallyPlaceItem_PlacedLocation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AutomaticallyPlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetAttachmentSlot_Inventory                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlot_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlot_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationBench_C::UpdateState(class UUMG_InventoryItemSlow_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, const struct FItemData& CallFunc_RemoveItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_AutomaticallyPlaceItem_PlacedLocation, bool CallFunc_AutomaticallyPlaceItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EUMGSequencePlayMode K2Node_Select_Default, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UInventory* CallFunc_GetInventory_ReturnValue_2, const struct FItemData& CallFunc_GetItem_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "UpdateState");

	Params::UUMG_AlterationBench_C_UpdateState_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AutomaticallyPlaceItem_PlacedLocation = CallFunc_AutomaticallyPlaceItem_PlacedLocation;
	Parms.CallFunc_AutomaticallyPlaceItem_ReturnValue = CallFunc_AutomaticallyPlaceItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetInventory_ReturnValue_2 = CallFunc_GetInventory_ReturnValue_2;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.CallFunc_GetAttachmentSlot_Inventory = CallFunc_GetAttachmentSlot_Inventory;
	Parms.CallFunc_GetAttachmentSlot_Slot = CallFunc_GetAttachmentSlot_Slot;
	Parms.CallFunc_GetAttachmentSlot_Paths = CallFunc_GetAttachmentSlot_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.UpdateAlterButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   CallFunc_GetAttachedAttachment_Attachment                        (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAlterItem_Alterable                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationBench_C::UpdateAlterButton(const struct FItemData& CallFunc_GetAttachedAttachment_Attachment, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_CanAlterItem_Alterable, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, enum class EDataValid CallFunc_ItemDataValid_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "UpdateAlterButton");

	Params::UUMG_AlterationBench_C_UpdateAlterButton_Params Parms{};

	Parms.CallFunc_GetAttachedAttachment_Attachment = CallFunc_GetAttachedAttachment_Attachment;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_CanAlterItem_Alterable = CallFunc_CanAlterItem_Alterable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.CallFunc_ItemDataValid_Paths_2 = CallFunc_ItemDataValid_Paths_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.LinkedActorDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationBench_C::LinkedActorDestroyed(class AActor* DestroyedActor, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "LinkedActorDestroyed");

	Params::UUMG_AlterationBench_C_LinkedActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.SetupObjectInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  ContainerInventory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationBench_C::SetupObjectInventory(class UInventory* ContainerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "SetupObjectInventory");

	Params::UUMG_AlterationBench_C_SetupObjectInventory_Params Parms{};

	Parms.ContainerInventory = ContainerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AlterationBench_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationBench_C::BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_AlterationBench_C_BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationBench_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "Tick");

	Params::UUMG_AlterationBench_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationBench_C::BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_AlterationBench_C_BndEvt__UMG_AlterationBench_UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.OnInventoryItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AlterationBench_C::OnInventoryItemChanged(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "OnInventoryItemChanged");

	Params::UUMG_AlterationBench_C_OnInventoryItemChanged_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationBench.UMG_AlterationBench_C.ExecuteUbergraph_UMG_AlterationBench
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AlterationBench_C*       K2Node_DynamicCast_AsBP_Alteration_Bench                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationBench_C::ExecuteUbergraph_UMG_AlterationBench(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class ABP_AlterationBench_C* K2Node_DynamicCast_AsBP_Alteration_Bench, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool CallFunc_BooleanOR_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationBench_C", "ExecuteUbergraph_UMG_AlterationBench");

	Params::UUMG_AlterationBench_C_ExecuteUbergraph_UMG_AlterationBench_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_DynamicCast_AsBP_Alteration_Bench = K2Node_DynamicCast_AsBP_Alteration_Bench;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


