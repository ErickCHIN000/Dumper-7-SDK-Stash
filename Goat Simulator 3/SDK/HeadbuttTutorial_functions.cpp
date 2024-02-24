#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeadbuttTutorial.HeadbuttTutorial_C
// (Actor)

class UClass* AHeadbuttTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadbuttTutorial_C");

	return Clss;
}


// HeadbuttTutorial_C HeadbuttTutorial.Default__HeadbuttTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeadbuttTutorial_C* AHeadbuttTutorial_C::GetDefaultObj()
{
	static class AHeadbuttTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeadbuttTutorial_C*>(AHeadbuttTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HeadbuttTutorial.HeadbuttTutorial_C.GetStepOverrideDescriptionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ReferenceParm)

TArray<class FText> AHeadbuttTutorial_C::GetStepOverrideDescriptionArray(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "GetStepOverrideDescriptionArray");

	Params::AHeadbuttTutorial_C_GetStepOverrideDescriptionArray_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeadbuttTutorial.HeadbuttTutorial_C.GetStepCompletionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<bool> AHeadbuttTutorial_C::GetStepCompletionArray(bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<bool>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "GetStepCompletionArray");

	Params::AHeadbuttTutorial_C_GetStepCompletionArray_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function HeadbuttTutorial.HeadbuttTutorial_C.GoatHeadbutted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatHeadbutting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHitSomething                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              HeadbuttedActors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Is_charge_headbutt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeadbuttTutorial_C::GoatHeadbutted(class AGGGoat* GoatHeadbutting, bool bHitSomething, TArray<class AActor*>& HeadbuttedActors, bool Is_charge_headbutt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "GoatHeadbutted");

	Params::AHeadbuttTutorial_C_GoatHeadbutted_Params Parms{};

	Parms.GoatHeadbutting = GoatHeadbutting;
	Parms.bHitSomething = bHitSomething;
	Parms.HeadbuttedActors = HeadbuttedActors;
	Parms.Is_charge_headbutt = Is_charge_headbutt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeadbuttTutorial.HeadbuttTutorial_C.CheckIfAllBasicMechanicsAreCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AHeadbuttTutorial_C::CheckIfAllBasicMechanicsAreCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "CheckIfAllBasicMechanicsAreCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HeadbuttTutorial.HeadbuttTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHeadbuttTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "OnTutorialActivated");

	Params::AHeadbuttTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeadbuttTutorial.HeadbuttTutorial_C.ExecuteUbergraph_HeadbuttTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatHeadbutting                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHitSomething                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_CustomEvent_HeadbuttedActors                              (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_Is_charge_headbutt                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHeadbuttTutorial_C::ExecuteUbergraph_HeadbuttTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatHeadbutting, bool K2Node_CustomEvent_bHitSomething, TArray<class AActor*>& K2Node_CustomEvent_HeadbuttedActors, bool K2Node_CustomEvent_Is_charge_headbutt, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HeadbuttTutorial_C", "ExecuteUbergraph_HeadbuttTutorial");

	Params::AHeadbuttTutorial_C_ExecuteUbergraph_HeadbuttTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GoatHeadbutting = K2Node_CustomEvent_GoatHeadbutting;
	Parms.K2Node_CustomEvent_bHitSomething = K2Node_CustomEvent_bHitSomething;
	Parms.K2Node_CustomEvent_HeadbuttedActors = K2Node_CustomEvent_HeadbuttedActors;
	Parms.K2Node_CustomEvent_Is_charge_headbutt = K2Node_CustomEvent_Is_charge_headbutt;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


