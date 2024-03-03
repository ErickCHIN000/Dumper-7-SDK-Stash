#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_piercings_slider.w_piercings_slider_C
// (None)

class UClass* UW_piercings_slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_piercings_slider_C");

	return Clss;
}


// w_piercings_slider_C w_piercings_slider.Default__w_piercings_slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_piercings_slider_C* UW_piercings_slider_C::GetDefaultObj()
{
	static class UW_piercings_slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_piercings_slider_C*>(UW_piercings_slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_piercings_slider.w_piercings_slider_C.BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_piercings_slider_C::BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_piercings_slider_C", "BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_piercings_slider_C_BndEvt__w_morph_slider_Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function w_piercings_slider.w_piercings_slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_piercings_slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_piercings_slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_piercings_slider.w_piercings_slider_C.BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UW_piercings_slider_C::BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_piercings_slider_C", "BndEvt__w_morph_slider_Button_218_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_piercings_slider.w_piercings_slider_C.ExecuteUbergraph_w_piercings_slider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_MPC_Value_Scalar_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Get_MPC_Value_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_MPC_Value_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_2                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_piercings_slider_C::ExecuteUbergraph_w_piercings_slider(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, float CallFunc_GridSnap_Float_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_Get_MPC_Value_Scalar_1, float CallFunc_Get_MPC_Value_ReturnValue, const struct FLinearColor& CallFunc_Get_MPC_Value_ReturnValue1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_piercings_slider_C", "ExecuteUbergraph_w_piercings_slider");

	Params::UW_piercings_slider_C_ExecuteUbergraph_w_piercings_slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_MPC_Value_Scalar_1 = CallFunc_Get_MPC_Value_Scalar_1;
	Parms.CallFunc_Get_MPC_Value_ReturnValue = CallFunc_Get_MPC_Value_ReturnValue;
	Parms.CallFunc_Get_MPC_Value_ReturnValue1 = CallFunc_Get_MPC_Value_ReturnValue1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_2 = CallFunc_Get_AC_Inventory_AC_Inventory_2;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


