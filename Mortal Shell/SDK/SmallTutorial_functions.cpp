#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SmallTutorial.SmallTutorial_C
// (None)

class UClass* USmallTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallTutorial_C");

	return Clss;
}


// SmallTutorial_C SmallTutorial.Default__SmallTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallTutorial_C* USmallTutorial_C::GetDefaultObj()
{
	static class USmallTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallTutorial_C*>(USmallTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SmallTutorial.SmallTutorial_C.Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::Preview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "Preview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.SetSmokeBlend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmallTutorial_C::SetSmokeBlend(bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "SetSmokeBlend");

	Params::USmallTutorial_C_SetSmokeBlend_Params Parms{};

	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SmallTutorial.SmallTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USmallTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.ManualPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::ManualPreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "ManualPreConstruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.ResetOverlays
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::ResetOverlays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "ResetOverlays");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USmallTutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "PreConstruct");

	Params::USmallTutorial_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SmallTutorial.SmallTutorial_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.GhostIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::GhostIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "GhostIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.GhostOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::GhostOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "GhostOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.CollapseSelf
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::CollapseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "CollapseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SmallTutorial.SmallTutorial_C.ExecuteUbergraph_SmallTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USmallTutorial_C::ExecuteUbergraph_SmallTutorial(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "ExecuteUbergraph_SmallTutorial");

	Params::USmallTutorial_C_ExecuteUbergraph_SmallTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SmallTutorial.SmallTutorial_C.RetainerBlendAlphaComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USmallTutorial_C::RetainerBlendAlphaComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmallTutorial_C", "RetainerBlendAlphaComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


