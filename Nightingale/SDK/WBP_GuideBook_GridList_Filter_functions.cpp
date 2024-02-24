#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_GridList_Filter.WBP_GuideBook_GridList_Filter_C
// (None)

class UClass* UWBP_GuideBook_GridList_Filter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_GridList_Filter_C");

	return Clss;
}


// WBP_GuideBook_GridList_Filter_C WBP_GuideBook_GridList_Filter.Default__WBP_GuideBook_GridList_Filter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_GridList_Filter_C* UWBP_GuideBook_GridList_Filter_C::GetDefaultObj()
{
	static class UWBP_GuideBook_GridList_Filter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_GridList_Filter_C*>(UWBP_GuideBook_GridList_Filter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_GridList_Filter.WBP_GuideBook_GridList_Filter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_GridList_Filter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_Filter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_GridList_Filter.WBP_GuideBook_GridList_Filter_C.BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_GridList_Filter_C::BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_Filter_C", "BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_GuideBook_GridList_Filter_C_BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_GridList_Filter.WBP_GuideBook_GridList_Filter_C.ExecuteUbergraph_WBP_GuideBook_GridList_Filter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_GridList_Filter_C::ExecuteUbergraph_WBP_GuideBook_GridList_Filter(int32 EntryPoint, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, enum class ECheckBoxState K2Node_Select_Default, bool K2Node_ComponentBoundEvent_bIsChecked, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_GridList_Filter_C", "ExecuteUbergraph_WBP_GuideBook_GridList_Filter");

	Params::UWBP_GuideBook_GridList_Filter_C_ExecuteUbergraph_WBP_GuideBook_GridList_Filter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


