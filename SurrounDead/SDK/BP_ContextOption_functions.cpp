#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ContextOption.BP_ContextOption_C
// (None)

class UClass* UBP_ContextOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContextOption_C");

	return Clss;
}


// BP_ContextOption_C BP_ContextOption.Default__BP_ContextOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ContextOption_C* UBP_ContextOption_C::GetDefaultObj()
{
	static class UBP_ContextOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ContextOption_C*>(UBP_ContextOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContextOption.BP_ContextOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextOption_C", "PreConstruct");

	Params::UBP_ContextOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContextOption.BP_ContextOption_C.SetContextOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextOption_C::SetContextOption(bool Active_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextOption_C", "SetContextOption");

	Params::UBP_ContextOption_C_SetContextOption_Params Parms{};

	Parms.Active_ = Active_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContextOption.BP_ContextOption_C.ExecuteUbergraph_BP_ContextOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrushOutlineSettings  K2Node_MakeStruct_SlateBrushOutlineSettings                      (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateBrushOutlineSettings  K2Node_MakeStruct_SlateBrushOutlineSettings_1                    (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Active_                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContextOption_C::ExecuteUbergraph_BP_ContextOption(int32 EntryPoint, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FVector4& CallFunc_MakeVector4_ReturnValue_1, const struct FSlateBrushOutlineSettings& K2Node_MakeStruct_SlateBrushOutlineSettings, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrushOutlineSettings& K2Node_MakeStruct_SlateBrushOutlineSettings_1, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_Active_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContextOption_C", "ExecuteUbergraph_BP_ContextOption");

	Params::UBP_ContextOption_C_ExecuteUbergraph_BP_ContextOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_MakeVector4_ReturnValue_1 = CallFunc_MakeVector4_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrushOutlineSettings = K2Node_MakeStruct_SlateBrushOutlineSettings;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateBrushOutlineSettings_1 = K2Node_MakeStruct_SlateBrushOutlineSettings_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Active_ = K2Node_CustomEvent_Active_;

	UObject::ProcessEvent(Func, &Parms);

}

}


