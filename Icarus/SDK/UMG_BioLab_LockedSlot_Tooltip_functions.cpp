#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C
// (None)

class UClass* UUMG_BioLab_LockedSlot_Tooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_LockedSlot_Tooltip_C");

	return Clss;
}


// UMG_BioLab_LockedSlot_Tooltip_C UMG_BioLab_LockedSlot_Tooltip.Default__UMG_BioLab_LockedSlot_Tooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_LockedSlot_Tooltip_C* UUMG_BioLab_LockedSlot_Tooltip_C::GetDefaultObj()
{
	static class UUMG_BioLab_LockedSlot_Tooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_LockedSlot_Tooltip_C*>(UUMG_BioLab_LockedSlot_Tooltip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_LockedSlot_Tooltip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_LockedSlot_Tooltip_C", "PreConstruct");

	Params::UUMG_BioLab_LockedSlot_Tooltip_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_LockedSlot_Tooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_LockedSlot_Tooltip_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_LockedSlot_Tooltip.UMG_BioLab_LockedSlot_Tooltip_C.ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FChallenge                  CallFunc_GetChallengesStruct_Challenges                          (None)
// enum class EValid                  CallFunc_GetChallengesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_BioLab_LockedSlot_Tooltip_C::ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_LockedSlot_Tooltip_C", "ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip");

	Params::UUMG_BioLab_LockedSlot_Tooltip_C_ExecuteUbergraph_UMG_BioLab_LockedSlot_Tooltip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetChallengesStruct_Challenges = CallFunc_GetChallengesStruct_Challenges;
	Parms.CallFunc_GetChallengesStruct_Paths = CallFunc_GetChallengesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


