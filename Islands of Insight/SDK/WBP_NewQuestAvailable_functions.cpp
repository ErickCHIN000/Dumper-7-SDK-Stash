#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NewQuestAvailable.WBP_NewQuestAvailable_C
// (None)

class UClass* UWBP_NewQuestAvailable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NewQuestAvailable_C");

	return Clss;
}


// WBP_NewQuestAvailable_C WBP_NewQuestAvailable.Default__WBP_NewQuestAvailable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NewQuestAvailable_C* UWBP_NewQuestAvailable_C::GetDefaultObj()
{
	static class UWBP_NewQuestAvailable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NewQuestAvailable_C*>(UWBP_NewQuestAvailable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NewQuestAvailable.WBP_NewQuestAvailable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_NewQuestAvailable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestAvailable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewQuestAvailable.WBP_NewQuestAvailable_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NewQuestAvailable_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestAvailable_C", "CustomEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_NewQuestAvailable.WBP_NewQuestAvailable_C.ExecuteUbergraph_WBP_NewQuestAvailable
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
// class FText                        K2Node_Select_Default                                            (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_NewQuestAvailable_C::ExecuteUbergraph_WBP_NewQuestAvailable(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EQuestType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NewQuestAvailable_C", "ExecuteUbergraph_WBP_NewQuestAvailable");

	Params::UWBP_NewQuestAvailable_C_ExecuteUbergraph_WBP_NewQuestAvailable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

