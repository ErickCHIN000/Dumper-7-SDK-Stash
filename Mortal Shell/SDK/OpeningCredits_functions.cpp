#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OpeningCredits.OpeningCredits_C
// (None)

class UClass* UOpeningCredits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpeningCredits_C");

	return Clss;
}


// OpeningCredits_C OpeningCredits.Default__OpeningCredits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOpeningCredits_C* UOpeningCredits_C::GetDefaultObj()
{
	static class UOpeningCredits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpeningCredits_C*>(UOpeningCredits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OpeningCredits.OpeningCredits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOpeningCredits_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OpeningCredits.OpeningCredits_C.FadeOutBars
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOpeningCredits_C::FadeOutBars()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "FadeOutBars");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OpeningCredits.OpeningCredits_C.FadeInText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOpeningCredits_C::FadeInText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "FadeInText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OpeningCredits.OpeningCredits_C.FadeOutText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOpeningCredits_C::FadeOutText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "FadeOutText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OpeningCredits.OpeningCredits_C.SingleCredit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TextToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UOpeningCredits_C::SingleCredit(class FText TextToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "SingleCredit");

	Params::UOpeningCredits_C_SingleCredit_Params Parms{};

	Parms.TextToDisplay = TextToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OpeningCredits.OpeningCredits_C.CreditLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOpeningCredits_C::CreditLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "CreditLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OpeningCredits.OpeningCredits_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpeningCredits_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "Tick");

	Params::UOpeningCredits_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OpeningCredits.OpeningCredits_C.ExecuteUbergraph_OpeningCredits
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_TextToDisplay                                 (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOpeningCredits_C::ExecuteUbergraph_OpeningCredits(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class FText K2Node_CustomEvent_TextToDisplay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpeningCredits_C", "ExecuteUbergraph_OpeningCredits");

	Params::UOpeningCredits_C_ExecuteUbergraph_OpeningCredits_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CustomEvent_TextToDisplay = K2Node_CustomEvent_TextToDisplay;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


