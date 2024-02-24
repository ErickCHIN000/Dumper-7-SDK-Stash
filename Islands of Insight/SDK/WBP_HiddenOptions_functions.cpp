#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HiddenOptions.WBP_HiddenOptions_C
// (None)

class UClass* UWBP_HiddenOptions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HiddenOptions_C");

	return Clss;
}


// WBP_HiddenOptions_C WBP_HiddenOptions.Default__WBP_HiddenOptions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HiddenOptions_C* UWBP_HiddenOptions_C::GetDefaultObj()
{
	static class UWBP_HiddenOptions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HiddenOptions_C*>(UWBP_HiddenOptions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HiddenOptions.WBP_HiddenOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_HiddenOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenOptions_C", "PreConstruct");

	Params::UWBP_HiddenOptions_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HiddenOptions.WBP_HiddenOptions_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenOptions_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenOptions_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenOptions.WBP_HiddenOptions_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HiddenOptions_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenOptions_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenOptions.WBP_HiddenOptions_C.BndEvt__WBP_HiddenOptions_Button_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HiddenOptions_C::BndEvt__WBP_HiddenOptions_Button_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenOptions_C", "BndEvt__WBP_HiddenOptions_Button_47_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HiddenOptions.WBP_HiddenOptions_C.ExecuteUbergraph_WBP_HiddenOptions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HiddenOptions_C::ExecuteUbergraph_WBP_HiddenOptions(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HiddenOptions_C", "ExecuteUbergraph_WBP_HiddenOptions");

	Params::UWBP_HiddenOptions_C_ExecuteUbergraph_WBP_HiddenOptions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


