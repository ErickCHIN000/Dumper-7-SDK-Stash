#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C
// (None)

class UClass* UUMG_FieldGuideItem_Attachments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItem_Attachments_C");

	return Clss;
}


// UMG_FieldGuideItem_Attachments_C UMG_FieldGuideItem_Attachments.Default__UMG_FieldGuideItem_Attachments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItem_Attachments_C* UUMG_FieldGuideItem_Attachments_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItem_Attachments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItem_Attachments_C*>(UUMG_FieldGuideItem_Attachments_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_Attachments_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Attachments_C", "SubItemClicked");

	Params::UUMG_FieldGuideItem_Attachments_C_SubItemClicked_Params Parms{};

	Parms.Category = Category;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.PopulateAttachmentView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetAttachments_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItem_Attachments_C::PopulateAttachmentView(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, TArray<struct FItemsStaticRowHandle>& CallFunc_GetAttachments_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Attachments_C", "PopulateAttachmentView");

	Params::UUMG_FieldGuideItem_Attachments_C_PopulateAttachmentView_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAttachments_ReturnValue = CallFunc_GetAttachments_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_Attachments_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Attachments_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItem_Attachments_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_Attachments.UMG_FieldGuideItem_Attachments_C.ExecuteUbergraph_UMG_FieldGuideItem_Attachments
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_Attachments_C::ExecuteUbergraph_UMG_FieldGuideItem_Attachments(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Attachments_C", "ExecuteUbergraph_UMG_FieldGuideItem_Attachments");

	Params::UUMG_FieldGuideItem_Attachments_C_ExecuteUbergraph_UMG_FieldGuideItem_Attachments_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


