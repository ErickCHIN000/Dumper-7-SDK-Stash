#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicMechanics2Tutorial.BasicMechanics2Tutorial_C
// (Actor)

class UClass* ABasicMechanics2Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicMechanics2Tutorial_C");

	return Clss;
}


// BasicMechanics2Tutorial_C BasicMechanics2Tutorial.Default__BasicMechanics2Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasicMechanics2Tutorial_C* ABasicMechanics2Tutorial_C::GetDefaultObj()
{
	static class ABasicMechanics2Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasicMechanics2Tutorial_C*>(ABasicMechanics2Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GetStepOverrideDescriptionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<class FText> ABasicMechanics2Tutorial_C::GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "GetStepOverrideDescriptionArray");

	Params::ABasicMechanics2Tutorial_C_GetStepOverrideDescriptionArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GetStepCompletionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<bool> ABasicMechanics2Tutorial_C::GetStepCompletionArray(bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<bool>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "GetStepCompletionArray");

	Params::ABasicMechanics2Tutorial_C_GetStepCompletionArray_Params Parms{};

	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GoatBaa
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatBaaing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanics2Tutorial_C::GoatBaa(class AGGGoat* GoatBaaing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "GoatBaa");

	Params::ABasicMechanics2Tutorial_C_GoatBaa_Params Parms{};

	Parms.GoatBaaing = GoatBaaing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GoatRagdolled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewRagdollState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicMechanics2Tutorial_C::GoatRagdolled(class AGGCharacter* Character, bool NewRagdollState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "GoatRagdolled");

	Params::ABasicMechanics2Tutorial_C_GoatRagdolled_Params Parms{};

	Parms.Character = Character;
	Parms.NewRagdollState = NewRagdollState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.CheckIfBasicMechanics2AreCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicMechanics2Tutorial_C::CheckIfBasicMechanics2AreCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "CheckIfBasicMechanics2AreCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanics2Tutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "OnTutorialActivated");

	Params::ABasicMechanics2Tutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.ExecuteUbergraph_BasicMechanics2Tutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatBaaing                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewRagdollState                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicMechanics2Tutorial_C::ExecuteUbergraph_BasicMechanics2Tutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatBaaing, class AGGCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_NewRagdollState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanics2Tutorial_C", "ExecuteUbergraph_BasicMechanics2Tutorial");

	Params::ABasicMechanics2Tutorial_C_ExecuteUbergraph_BasicMechanics2Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GoatBaaing = K2Node_CustomEvent_GoatBaaing;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_NewRagdollState = K2Node_CustomEvent_NewRagdollState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


