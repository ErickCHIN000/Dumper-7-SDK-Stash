#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C
// (None)

class UClass* UUMG_FieldGuideItemAttachmentsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemAttachmentsPage_C");

	return Clss;
}


// UMG_FieldGuideItemAttachmentsPage_C UMG_FieldGuideItemAttachmentsPage.Default__UMG_FieldGuideItemAttachmentsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemAttachmentsPage_C* UUMG_FieldGuideItemAttachmentsPage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemAttachmentsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemAttachmentsPage_C*>(UUMG_FieldGuideItemAttachmentsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemAttachmentsPage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemAttachmentsPage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemAttachmentsPage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemAttachmentsPage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.PopulateAttachmentDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>AttachmentItems                                                  (Edit, BlueprintVisible)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetItemsForAttachment_ReturnValue                       (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemAttachmentsPage_C::PopulateAttachmentDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FItemsStaticRowHandle>& AttachmentItems, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, TArray<struct FItemsStaticRowHandle>& CallFunc_GetItemsForAttachment_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "PopulateAttachmentDetail");

	Params::UUMG_FieldGuideItemAttachmentsPage_C_PopulateAttachmentDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.AttachmentItems = AttachmentItems;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItemsForAttachment_ReturnValue = CallFunc_GetItemsForAttachment_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemAttachmentsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemAttachmentsPage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemAttachmentsPage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemAttachmentsPage.UMG_FieldGuideItemAttachmentsPage_C.ExecuteUbergraph_UMG_FieldGuideItemAttachmentsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemAttachmentsPage_C::ExecuteUbergraph_UMG_FieldGuideItemAttachmentsPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemAttachmentsPage_C", "ExecuteUbergraph_UMG_FieldGuideItemAttachmentsPage");

	Params::UUMG_FieldGuideItemAttachmentsPage_C_ExecuteUbergraph_UMG_FieldGuideItemAttachmentsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


