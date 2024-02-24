#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DangerLevel.UMG_DangerLevel_C
// (None)

class UClass* UUMG_DangerLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DangerLevel_C");

	return Clss;
}


// UMG_DangerLevel_C UMG_DangerLevel.Default__UMG_DangerLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DangerLevel_C* UUMG_DangerLevel_C::GetDefaultObj()
{
	static class UUMG_DangerLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DangerLevel_C*>(UUMG_DangerLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DangerLevel.UMG_DangerLevel_C.SetDanger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Danger                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Extreme                                                          (Edit, BlueprintVisible)
// struct FSlateColor                 Selected                                                         (Edit, BlueprintVisible)
// struct FSlateColor                 Hard                                                             (Edit, BlueprintVisible)
// struct FSlateColor                 Medium                                                           (Edit, BlueprintVisible)
// struct FSlateColor                 Easy                                                             (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DangerLevel_C::SetDanger(int32 Danger, const struct FSlateColor& Extreme, const struct FSlateColor& Selected, const struct FSlateColor& Hard, const struct FSlateColor& Medium, const struct FSlateColor& Easy, int32 Temp_int_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DangerLevel_C", "SetDanger");

	Params::UUMG_DangerLevel_C_SetDanger_Params Parms{};

	Parms.Danger = Danger;
	Parms.Extreme = Extreme;
	Parms.Selected = Selected;
	Parms.Hard = Hard;
	Parms.Medium = Medium;
	Parms.Easy = Easy;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DangerLevel.UMG_DangerLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DangerLevel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DangerLevel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DangerLevel.UMG_DangerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DangerLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DangerLevel_C", "PreConstruct");

	Params::UUMG_DangerLevel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DangerLevel.UMG_DangerLevel_C.ExecuteUbergraph_UMG_DangerLevel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UUMG_DangerLevel_C::ExecuteUbergraph_UMG_DangerLevel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TArray<class UImage*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DangerLevel_C", "ExecuteUbergraph_UMG_DangerLevel");

	Params::UUMG_DangerLevel_C_ExecuteUbergraph_UMG_DangerLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


