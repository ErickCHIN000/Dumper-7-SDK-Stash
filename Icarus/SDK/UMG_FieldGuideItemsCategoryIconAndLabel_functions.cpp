#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C
// (None)

class UClass* UUMG_FieldGuideItemsCategoryIconAndLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemsCategoryIconAndLabel_C");

	return Clss;
}


// UMG_FieldGuideItemsCategoryIconAndLabel_C UMG_FieldGuideItemsCategoryIconAndLabel.Default__UMG_FieldGuideItemsCategoryIconAndLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemsCategoryIconAndLabel_C* UUMG_FieldGuideItemsCategoryIconAndLabel_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemsCategoryIconAndLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemsCategoryIconAndLabel_C*>(UUMG_FieldGuideItemsCategoryIconAndLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemsCategoryIconAndLabel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemsCategoryIconAndLabel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.BndEvt__UMG_FieldGuideItemsCategoryIconAndLabel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemsCategoryIconAndLabel_C::BndEvt__UMG_FieldGuideItemsCategoryIconAndLabel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemsCategoryIconAndLabel_C", "BndEvt__UMG_FieldGuideItemsCategoryIconAndLabel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategories       CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories      (None)
// enum class EValid                  CallFunc_GetFieldGuideCategoriesStruct_Paths                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Icon_or_Missing_Output                              (HasGetValueTypeHash)

void UUMG_FieldGuideItemsCategoryIconAndLabel_C::ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel(int32 EntryPoint, const struct FFieldGuideCategories& CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories, enum class EValid CallFunc_GetFieldGuideCategoriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Icon_or_Missing_Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemsCategoryIconAndLabel_C", "ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel");

	Params::UUMG_FieldGuideItemsCategoryIconAndLabel_C_ExecuteUbergraph_UMG_FieldGuideItemsCategoryIconAndLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories = CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_Paths = CallFunc_GetFieldGuideCategoriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Icon_or_Missing_Output = CallFunc_Get_Icon_or_Missing_Output;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemsCategoryIconAndLabel.UMG_FieldGuideItemsCategoryIconAndLabel_C.FilterItems__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemsCategoryIconAndLabel_C::FilterItems__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemsCategoryIconAndLabel_C", "FilterItems__DelegateSignature");

	Params::UUMG_FieldGuideItemsCategoryIconAndLabel_C_FilterItems__DelegateSignature_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}

}


