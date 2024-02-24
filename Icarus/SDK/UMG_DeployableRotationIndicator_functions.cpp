#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C
// (None)

class UClass* UUMG_DeployableRotationIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DeployableRotationIndicator_C");

	return Clss;
}


// UMG_DeployableRotationIndicator_C UMG_DeployableRotationIndicator.Default__UMG_DeployableRotationIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DeployableRotationIndicator_C* UUMG_DeployableRotationIndicator_C::GetDefaultObj()
{
	static class UUMG_DeployableRotationIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DeployableRotationIndicator_C*>(UUMG_DeployableRotationIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DesiredSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowAngleSnap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DeployableRotationIndicator_C::Show(float DesiredSize, bool ShowAngleSnap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DeployableRotationIndicator_C", "Show");

	Params::UUMG_DeployableRotationIndicator_C_Show_Params Parms{};

	Parms.DesiredSize = DesiredSize;
	Parms.ShowAngleSnap = ShowAngleSnap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_DeployableRotationIndicator_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DeployableRotationIndicator_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DeployableRotationIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DeployableRotationIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.ExecuteUbergraph_UMG_DeployableRotationIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DesiredSize                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShowAngleSnap                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DeployableRotationIndicator_C::ExecuteUbergraph_UMG_DeployableRotationIndicator(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_DesiredSize, bool K2Node_CustomEvent_ShowAngleSnap, float CallFunc_Divide_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DeployableRotationIndicator_C", "ExecuteUbergraph_UMG_DeployableRotationIndicator");

	Params::UUMG_DeployableRotationIndicator_C_ExecuteUbergraph_UMG_DeployableRotationIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_DesiredSize = K2Node_CustomEvent_DesiredSize;
	Parms.K2Node_CustomEvent_ShowAngleSnap = K2Node_CustomEvent_ShowAngleSnap;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


