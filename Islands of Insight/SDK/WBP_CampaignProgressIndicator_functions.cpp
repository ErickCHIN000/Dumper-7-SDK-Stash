#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CampaignProgressIndicator.WBP_CampaignProgressIndicator_C
// (None)

class UClass* UWBP_CampaignProgressIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CampaignProgressIndicator_C");

	return Clss;
}


// WBP_CampaignProgressIndicator_C WBP_CampaignProgressIndicator.Default__WBP_CampaignProgressIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CampaignProgressIndicator_C* UWBP_CampaignProgressIndicator_C::GetDefaultObj()
{
	static class UWBP_CampaignProgressIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CampaignProgressIndicator_C*>(UWBP_CampaignProgressIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CampaignProgressIndicator.WBP_CampaignProgressIndicator_C.Get_Progress_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_CampaignProgressIndicator_C::Get_Progress_Text_0(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CampaignProgressIndicator_C", "Get_Progress_Text_0");

	Params::UWBP_CampaignProgressIndicator_C_Get_Progress_Text_0_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CampaignProgressIndicator.WBP_CampaignProgressIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CampaignProgressIndicator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CampaignProgressIndicator_C", "PreConstruct");

	Params::UWBP_CampaignProgressIndicator_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CampaignProgressIndicator.WBP_CampaignProgressIndicator_C.ExecuteUbergraph_WBP_CampaignProgressIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CampaignProgressIndicator_C::ExecuteUbergraph_WBP_CampaignProgressIndicator(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CampaignProgressIndicator_C", "ExecuteUbergraph_WBP_CampaignProgressIndicator");

	Params::UWBP_CampaignProgressIndicator_C_ExecuteUbergraph_WBP_CampaignProgressIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


