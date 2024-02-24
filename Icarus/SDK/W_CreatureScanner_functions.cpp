#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CreatureScanner.W_CreatureScanner_C
// (None)

class UClass* UW_CreatureScanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CreatureScanner_C");

	return Clss;
}


// W_CreatureScanner_C W_CreatureScanner.Default__W_CreatureScanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CreatureScanner_C* UW_CreatureScanner_C::GetDefaultObj()
{
	static class UW_CreatureScanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CreatureScanner_C*>(UW_CreatureScanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CreatureScanner.W_CreatureScanner_C.SequenceEvent__ENTRYPOINTW_CreatureScanner_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      ScanningLine                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::SequenceEvent__ENTRYPOINTW_CreatureScanner_0(class UImage* ScanningLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "SequenceEvent__ENTRYPOINTW_CreatureScanner_0");

	Params::UW_CreatureScanner_C_SequenceEvent__ENTRYPOINTW_CreatureScanner_0_Params Parms{};

	Parms.ScanningLine = ScanningLine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.TriggerRecalibration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Total                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_CreatureEntryGrid_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::TriggerRecalibration(int32 Total, class UW_CreatureEntryGrid_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "TriggerRecalibration");

	Params::UW_CreatureScanner_C_TriggerRecalibration_Params Parms{};

	Parms.Total = Total;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Total                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::UpdateDisplay(int32 Total)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "UpdateDisplay");

	Params::UW_CreatureScanner_C_UpdateDisplay_Params Parms{};

	Parms.Total = Total;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.ScanningLine_PlayAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      ScanningLine                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::ScanningLine_PlayAudio(class UImage* ScanningLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "ScanningLine_PlayAudio");

	Params::UW_CreatureScanner_C_ScanningLine_PlayAudio_Params Parms{};

	Parms.ScanningLine = ScanningLine;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_CreatureScanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CreatureScanner.W_CreatureScanner_C.Recalibrate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CreatureScanner_C::Recalibrate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "Recalibrate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CreatureScanner.W_CreatureScanner_C.UpdateScannedAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAISetupRowHandle           AI                                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::UpdateScannedAI(const struct FAISetupRowHandle& AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "UpdateScannedAI");

	Params::UW_CreatureScanner_C_UpdateScannedAI_Params Parms{};

	Parms.AI = AI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.UpdateScanning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Scanning                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CreatureScanner_C::UpdateScanning(bool Scanning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "UpdateScanning");

	Params::UW_CreatureScanner_C_UpdateScanning_Params Parms{};

	Parms.Scanning = Scanning;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.ExecuteUbergraph_W_CreatureScanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_CustomEvent_ScanningLine                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           K2Node_CustomEvent_AI                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Scanning                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreatureScanner_C::ExecuteUbergraph_W_CreatureScanner(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UImage* K2Node_CustomEvent_ScanningLine, const struct FAISetupRowHandle& K2Node_CustomEvent_AI, bool CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue, bool K2Node_CustomEvent_Scanning, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, class FText K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "ExecuteUbergraph_W_CreatureScanner");

	Params::UW_CreatureScanner_C_ExecuteUbergraph_W_CreatureScanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_ScanningLine = K2Node_CustomEvent_ScanningLine;
	Parms.K2Node_CustomEvent_AI = K2Node_CustomEvent_AI;
	Parms.CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue = CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue;
	Parms.K2Node_CustomEvent_Scanning = K2Node_CustomEvent_Scanning;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreatureScanner.W_CreatureScanner_C.FishFinderFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CreatureScanner_C::FishFinderFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "FishFinderFinish__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_CreatureScanner.W_CreatureScanner_C.OnSonarAudioEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_CreatureScanner_C::OnSonarAudioEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreatureScanner_C", "OnSonarAudioEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


