#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CraftingFilter.WBP_CraftingFilter_C
// (None)

class UClass* UWBP_CraftingFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CraftingFilter_C");

	return Clss;
}


// WBP_CraftingFilter_C WBP_CraftingFilter.Default__WBP_CraftingFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CraftingFilter_C* UWBP_CraftingFilter_C::GetDefaultObj()
{
	static class UWBP_CraftingFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CraftingFilter_C*>(UWBP_CraftingFilter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CraftingFilter.WBP_CraftingFilter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CraftingFilter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingFilter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CraftingFilter.WBP_CraftingFilter_C.BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingFilter_C::BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingFilter_C", "BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_CraftingFilter_C_BndEvt__WBP_CraftingFilter_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CraftingFilter.WBP_CraftingFilter_C.ExecuteUbergraph_WBP_CraftingFilter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_CraftingCreationCategoryTag_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheckBoxState          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingFilter_C::ExecuteUbergraph_WBP_CraftingFilter(int32 EntryPoint, const struct FGameplayTag& CallFunc_CraftingCreationCategoryTag_ReturnValue, bool Temp_bool_Variable, enum class ECheckBoxState Temp_byte_Variable, enum class ECheckBoxState Temp_byte_Variable_1, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ECheckBoxState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingFilter_C", "ExecuteUbergraph_WBP_CraftingFilter");

	Params::UWBP_CraftingFilter_C_ExecuteUbergraph_WBP_CraftingFilter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CraftingCreationCategoryTag_ReturnValue = CallFunc_CraftingCreationCategoryTag_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


