#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WorkshopCost.UMG_WorkshopCost_C
// (None)

class UClass* UUMG_WorkshopCost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WorkshopCost_C");

	return Clss;
}


// UMG_WorkshopCost_C UMG_WorkshopCost.Default__UMG_WorkshopCost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WorkshopCost_C* UUMG_WorkshopCost_C::GetDefaultObj()
{
	static class UUMG_WorkshopCost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WorkshopCost_C*>(UUMG_WorkshopCost_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_WorkshopCost.UMG_WorkshopCost_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_WorkshopCost_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WorkshopCost_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_WorkshopCost.UMG_WorkshopCost_C.UpdateValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WorkshopCost_C::UpdateValue(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WorkshopCost_C", "UpdateValue");

	Params::UUMG_WorkshopCost_C_UpdateValue_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WorkshopCost.UMG_WorkshopCost_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_WorkshopCost_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WorkshopCost_C", "PreConstruct");

	Params::UUMG_WorkshopCost_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WorkshopCost.UMG_WorkshopCost_C.ExecuteUbergraph_UMG_WorkshopCost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMetaCurrency               CallFunc_GetMetaCurrencyStruct_MetaCurrency                      (None)
// enum class EValid                  CallFunc_GetMetaCurrencyStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)

void UUMG_WorkshopCost_C::ExecuteUbergraph_UMG_WorkshopCost(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 K2Node_CustomEvent_Amount, class FText CallFunc_Conv_IntToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WorkshopCost_C", "ExecuteUbergraph_UMG_WorkshopCost");

	Params::UUMG_WorkshopCost_C_ExecuteUbergraph_UMG_WorkshopCost_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetMetaCurrencyStruct_MetaCurrency = CallFunc_GetMetaCurrencyStruct_MetaCurrency;
	Parms.CallFunc_GetMetaCurrencyStruct_Paths = CallFunc_GetMetaCurrencyStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


