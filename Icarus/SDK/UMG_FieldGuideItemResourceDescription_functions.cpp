#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C
// (None)

class UClass* UUMG_FieldGuideItemResourceDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemResourceDescription_C");

	return Clss;
}


// UMG_FieldGuideItemResourceDescription_C UMG_FieldGuideItemResourceDescription.Default__UMG_FieldGuideItemResourceDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemResourceDescription_C* UUMG_FieldGuideItemResourceDescription_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemResourceDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemResourceDescription_C*>(UUMG_FieldGuideItemResourceDescription_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemResourceDescription_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemResourceDescription_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C.ExecuteUbergraph_UMG_FieldGuideItemResourceDescription
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Icon_or_Missing_Output                              (HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Icon_or_Missing_Output_1                            (HasGetValueTypeHash)

void UUMG_FieldGuideItemResourceDescription_C::ExecuteUbergraph_UMG_FieldGuideItemResourceDescription(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Icon_or_Missing_Output, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Icon_or_Missing_Output_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemResourceDescription_C", "ExecuteUbergraph_UMG_FieldGuideItemResourceDescription");

	Params::UUMG_FieldGuideItemResourceDescription_C_ExecuteUbergraph_UMG_FieldGuideItemResourceDescription_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Get_Icon_or_Missing_Output = CallFunc_Get_Icon_or_Missing_Output;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Get_Icon_or_Missing_Output_1 = CallFunc_Get_Icon_or_Missing_Output_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C.FilterItems__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemResourceDescription_C::FilterItems__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& Category, const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemResourceDescription_C", "FilterItems__DelegateSignature");

	Params::UUMG_FieldGuideItemResourceDescription_C_FilterItems__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


