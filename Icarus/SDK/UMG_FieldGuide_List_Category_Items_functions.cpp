#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C
// (None)

class UClass* UUMG_FieldGuide_List_Category_Items_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_List_Category_Items_C");

	return Clss;
}


// UMG_FieldGuide_List_Category_Items_C UMG_FieldGuide_List_Category_Items.Default__UMG_FieldGuide_List_Category_Items_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_List_Category_Items_C* UUMG_FieldGuide_List_Category_Items_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_List_Category_Items_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_List_Category_Items_C*>(UUMG_FieldGuide_List_Category_Items_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C.ClickedInternal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_List_Category_Items_C::ClickedInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Items_C", "ClickedInternal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C.ExecuteUbergraph_UMG_FieldGuide_List_Category_Items
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Items_C::ExecuteUbergraph_UMG_FieldGuide_List_Category_Items(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Items_C", "ExecuteUbergraph_UMG_FieldGuide_List_Category_Items");

	Params::UUMG_FieldGuide_List_Category_Items_C_ExecuteUbergraph_UMG_FieldGuide_List_Category_Items_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C.FilterItems__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_List_Category_Items_C::FilterItems__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_List_Category_Items_C", "FilterItems__DelegateSignature");

	Params::UUMG_FieldGuide_List_Category_Items_C_FilterItems__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


