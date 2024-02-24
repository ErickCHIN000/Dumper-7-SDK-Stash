#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NewQuestObjectiveAvailable.WBP_NewQuestObjectiveAvailable_C
// (None)

class UClass* UWBP_NewQuestObjectiveAvailable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NewQuestObjectiveAvailable_C");

	return Clss;
}


// WBP_NewQuestObjectiveAvailable_C WBP_NewQuestObjectiveAvailable.Default__WBP_NewQuestObjectiveAvailable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NewQuestObjectiveAvailable_C* UWBP_NewQuestObjectiveAvailable_C::GetDefaultObj()
{
	static class UWBP_NewQuestObjectiveAvailable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NewQuestObjectiveAvailable_C*>(UWBP_NewQuestObjectiveAvailable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NewQuestObjectiveAvailable.WBP_NewQuestObjectiveAvailable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NewQuestObjectiveAvailable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestObjectiveAvailable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewQuestObjectiveAvailable.WBP_NewQuestObjectiveAvailable_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NewQuestObjectiveAvailable_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestObjectiveAvailable_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewQuestObjectiveAvailable.WBP_NewQuestObjectiveAvailable_C.ExecuteUbergraph_WBP_NewQuestObjectiveAvailable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQuestType              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)

void UWBP_NewQuestObjectiveAvailable_C::ExecuteUbergraph_WBP_NewQuestObjectiveAvailable(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class FText Temp_text_Variable_5, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestObjectiveAvailable_C", "ExecuteUbergraph_WBP_NewQuestObjectiveAvailable");

	Params::UWBP_NewQuestObjectiveAvailable_C_ExecuteUbergraph_WBP_NewQuestObjectiveAvailable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

