#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BasicMechanicsTutorial.BasicMechanicsTutorial_C
// (Actor)

class UClass* ABasicMechanicsTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasicMechanicsTutorial_C");

	return Clss;
}


// BasicMechanicsTutorial_C BasicMechanicsTutorial.Default__BasicMechanicsTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABasicMechanicsTutorial_C* ABasicMechanicsTutorial_C::GetDefaultObj()
{
	static class ABasicMechanicsTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABasicMechanicsTutorial_C*>(ABasicMechanicsTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GetStepCompletionArray
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<bool>                       K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<bool> ABasicMechanicsTutorial_C::GetStepCompletionArray(TArray<bool>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "GetStepCompletionArray");

	Params::ABasicMechanicsTutorial_C_GetStepCompletionArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatHeadbutted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatHeadbutting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHitSomething                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              HeadbuttedActors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Is_charge_headbutt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABasicMechanicsTutorial_C::GoatHeadbutted(class AGGGoat* GoatHeadbutting, bool bHitSomething, TArray<class AActor*>& HeadbuttedActors, bool Is_charge_headbutt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "GoatHeadbutted");

	Params::ABasicMechanicsTutorial_C_GoatHeadbutted_Params Parms{};

	Parms.GoatHeadbutting = GoatHeadbutting;
	Parms.bHitSomething = bHitSomething;
	Parms.HeadbuttedActors = HeadbuttedActors;
	Parms.Is_charge_headbutt = Is_charge_headbutt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatLickedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatLicking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LickedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanicsTutorial_C::GoatLickedActor(class AGGGoat* GoatLicking, class AActor* LickedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "GoatLickedActor");

	Params::ABasicMechanicsTutorial_C_GoatLickedActor_Params Parms{};

	Parms.GoatLicking = GoatLicking;
	Parms.LickedActor = LickedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatLickMissed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     GoatLicking                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanicsTutorial_C::GoatLickMissed(class AGGGoat* GoatLicking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "GoatLickMissed");

	Params::ABasicMechanicsTutorial_C_GoatLickMissed_Params Parms{};

	Parms.GoatLicking = GoatLicking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatJumped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanicsTutorial_C::GoatJumped(class AGGCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "GoatJumped");

	Params::ABasicMechanicsTutorial_C_GoatJumped_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.CheckIfAllBasicMechanicsAreCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABasicMechanicsTutorial_C::CheckIfAllBasicMechanicsAreCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "CheckIfAllBasicMechanicsAreCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanicsTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "OnTutorialActivated");

	Params::ABasicMechanicsTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.ExecuteUbergraph_BasicMechanicsTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatHeadbutting                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bHitSomething                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_CustomEvent_HeadbuttedActors                              (ConstParm, ReferenceParm)
// bool                               K2Node_CustomEvent_Is_charge_headbutt                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_GoatLicking_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LickedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_GoatLicking                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGGCharacter*                K2Node_CustomEvent_Character                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABasicMechanicsTutorial_C::ExecuteUbergraph_BasicMechanicsTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatHeadbutting, bool K2Node_CustomEvent_bHitSomething, TArray<class AActor*>& K2Node_CustomEvent_HeadbuttedActors, bool K2Node_CustomEvent_Is_charge_headbutt, class AGGGoat* K2Node_CustomEvent_GoatLicking_1, class AActor* K2Node_CustomEvent_LickedActor, class AGGGoat* K2Node_CustomEvent_GoatLicking, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGCharacter* K2Node_CustomEvent_Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BasicMechanicsTutorial_C", "ExecuteUbergraph_BasicMechanicsTutorial");

	Params::ABasicMechanicsTutorial_C_ExecuteUbergraph_BasicMechanicsTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_GoatHeadbutting = K2Node_CustomEvent_GoatHeadbutting;
	Parms.K2Node_CustomEvent_bHitSomething = K2Node_CustomEvent_bHitSomething;
	Parms.K2Node_CustomEvent_HeadbuttedActors = K2Node_CustomEvent_HeadbuttedActors;
	Parms.K2Node_CustomEvent_Is_charge_headbutt = K2Node_CustomEvent_Is_charge_headbutt;
	Parms.K2Node_CustomEvent_GoatLicking_1 = K2Node_CustomEvent_GoatLicking_1;
	Parms.K2Node_CustomEvent_LickedActor = K2Node_CustomEvent_LickedActor;
	Parms.K2Node_CustomEvent_GoatLicking = K2Node_CustomEvent_GoatLicking;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


