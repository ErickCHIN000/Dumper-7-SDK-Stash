#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Credits_Person_Entry.wid_Credits_Person_Entry_C
// (None)

class UClass* UWid_Credits_Person_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Credits_Person_Entry_C");

	return Clss;
}


// wid_Credits_Person_Entry_C wid_Credits_Person_Entry.Default__wid_Credits_Person_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Credits_Person_Entry_C* UWid_Credits_Person_Entry_C::GetDefaultObj()
{
	static class UWid_Credits_Person_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Credits_Person_Entry_C*>(UWid_Credits_Person_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Credits_Person_Entry.wid_Credits_Person_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Credits_Person_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Credits_Person_Entry_C", "PreConstruct");

	Params::UWid_Credits_Person_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Credits_Person_Entry.wid_Credits_Person_Entry_C.ExecuteUbergraph_wid_Credits_Person_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWid_Credits_Person_Entry_C::ExecuteUbergraph_wid_Credits_Person_Entry(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Credits_Person_Entry_C", "ExecuteUbergraph_wid_Credits_Person_Entry");

	Params::UWid_Credits_Person_Entry_C_ExecuteUbergraph_wid_Credits_Person_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


