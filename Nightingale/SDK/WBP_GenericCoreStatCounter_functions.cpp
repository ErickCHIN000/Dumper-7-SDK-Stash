#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C
// (None)

class UClass* UWBP_GenericCoreStatCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GenericCoreStatCounter_C");

	return Clss;
}


// WBP_GenericCoreStatCounter_C WBP_GenericCoreStatCounter.Default__WBP_GenericCoreStatCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GenericCoreStatCounter_C* UWBP_GenericCoreStatCounter_C::GetDefaultObj()
{
	static class UWBP_GenericCoreStatCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GenericCoreStatCounter_C*>(UWBP_GenericCoreStatCounter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GenericCoreStatCounter_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.GetToolTipWidget_VBTooltip
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GenericCoreStatCounter_C::GetToolTipWidget_VBTooltip(bool CallFunc_TextIsEmpty_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "GetToolTipWidget_VBTooltip");

	Params::UWBP_GenericCoreStatCounter_C_GetToolTipWidget_VBTooltip_Params Parms{};

	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.BP_HandleAttributeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delta                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericCoreStatCounter_C::BP_HandleAttributeChanged(float NewValue, float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "BP_HandleAttributeChanged");

	Params::UWBP_GenericCoreStatCounter_C_BP_HandleAttributeChanged_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.UpdateValue
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// double                             CallFunc_FCeil_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericCoreStatCounter_C::UpdateValue(float CallFunc_GetValue_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_FCeil_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "UpdateValue");

	Params::UWBP_GenericCoreStatCounter_C_UpdateValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_FCeil_A_ImplicitCast = CallFunc_FCeil_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryGetUIDataForAttribute_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttributeUIData    CallFunc_TryGetUIDataForAttribute_OutData                        (None)

void UWBP_GenericCoreStatCounter_C::Initialize(bool CallFunc_TryGetUIDataForAttribute_bSuccess, const struct FGameplayAttributeUIData& CallFunc_TryGetUIDataForAttribute_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "Initialize");

	Params::UWBP_GenericCoreStatCounter_C_Initialize_Params Parms{};

	Parms.CallFunc_TryGetUIDataForAttribute_bSuccess = CallFunc_TryGetUIDataForAttribute_bSuccess;
	Parms.CallFunc_TryGetUIDataForAttribute_OutData = CallFunc_TryGetUIDataForAttribute_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GenericCoreStatCounter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.ExecuteUbergraph_WBP_GenericCoreStatCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericCoreStatCounter_C::ExecuteUbergraph_WBP_GenericCoreStatCounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericCoreStatCounter_C", "ExecuteUbergraph_WBP_GenericCoreStatCounter");

	Params::UWBP_GenericCoreStatCounter_C_ExecuteUbergraph_WBP_GenericCoreStatCounter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


