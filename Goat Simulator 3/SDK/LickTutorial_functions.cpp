#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LickTutorial.LickTutorial_C
// (Actor)

class UClass* ALickTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LickTutorial_C");

	return Clss;
}


// LickTutorial_C LickTutorial.Default__LickTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALickTutorial_C* ALickTutorial_C::GetDefaultObj()
{
	static class ALickTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALickTutorial_C*>(ALickTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LickTutorial.LickTutorial_C.GetStepOverrideDescriptionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<class FText> ALickTutorial_C::GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "GetStepOverrideDescriptionArray");

	Params::ALickTutorial_C_GetStepOverrideDescriptionArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LickTutorial.LickTutorial_C.GetStepCompletionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<bool> ALickTutorial_C::GetStepCompletionArray(bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<bool>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "GetStepCompletionArray");

	Params::ALickTutorial_C_GetStepCompletionArray_Params Parms{};

	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LickTutorial.LickTutorial_C.GoatLickedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatLicking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALickTutorial_C::GoatLickedActor(class AGGGoat* GoatLicking, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "GoatLickedActor");

	Params::ALickTutorial_C_GoatLickedActor_Params Parms{};

	Parms.GoatLicking = GoatLicking;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LickTutorial.LickTutorial_C.CheckIfAllBasicMechanicsAreCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALickTutorial_C::CheckIfAllBasicMechanicsAreCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "CheckIfAllBasicMechanicsAreCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LickTutorial.LickTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALickTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "OnTutorialActivated");

	Params::ALickTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LickTutorial.LickTutorial_C.CheckDragging
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALickTutorial_C::CheckDragging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "CheckDragging");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LickTutorial.LickTutorial_C.GoatDroppedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatLicking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALickTutorial_C::GoatDroppedActor(class AGGGoat* GoatLicking, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "GoatDroppedActor");

	Params::ALickTutorial_C_GoatDroppedActor_Params Parms{};

	Parms.GoatLicking = GoatLicking;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LickTutorial.LickTutorial_C.ExecuteUbergraph_LickTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLickedObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_GoatLicking_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LickedActor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_GoatLicking                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LickedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ALickTutorial_C::ExecuteUbergraph_LickTutorial(int32 EntryPoint, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, class AActor* CallFunc_GetLickedObject_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_Square_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AGGGoat* K2Node_CustomEvent_GoatLicking_1, class AActor* K2Node_CustomEvent_LickedActor_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGGoat* K2Node_CustomEvent_GoatLicking, class AActor* K2Node_CustomEvent_LickedActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LickTutorial_C", "ExecuteUbergraph_LickTutorial");

	Params::ALickTutorial_C_ExecuteUbergraph_LickTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetControlledGoat_ReturnValue = CallFunc_GetControlledGoat_ReturnValue;
	Parms.CallFunc_GetLickedObject_ReturnValue = CallFunc_GetLickedObject_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_GoatLicking_1 = K2Node_CustomEvent_GoatLicking_1;
	Parms.K2Node_CustomEvent_LickedActor_1 = K2Node_CustomEvent_LickedActor_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_GoatLicking = K2Node_CustomEvent_GoatLicking;
	Parms.K2Node_CustomEvent_LickedActor = K2Node_CustomEvent_LickedActor;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


