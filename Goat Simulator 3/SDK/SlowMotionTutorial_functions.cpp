#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SlowMotionTutorial.SlowMotionTutorial_C
// (Actor)

class UClass* ASlowMotionTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlowMotionTutorial_C");

	return Clss;
}


// SlowMotionTutorial_C SlowMotionTutorial.Default__SlowMotionTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASlowMotionTutorial_C* ASlowMotionTutorial_C::GetDefaultObj()
{
	static class ASlowMotionTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASlowMotionTutorial_C*>(ASlowMotionTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SlowMotionTutorial.SlowMotionTutorial_C.ShouldCompleteTutorial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASlowMotionTutorial_C::ShouldCompleteTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlowMotionTutorial_C", "ShouldCompleteTutorial");

	Params::ASlowMotionTutorial_C_ShouldCompleteTutorial_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SlowMotionTutorial.SlowMotionTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASlowMotionTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlowMotionTutorial_C", "OnTutorialActivated");

	Params::ASlowMotionTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SlowMotionTutorial.SlowMotionTutorial_C.OnDisableReminder
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASlowMotionTutorial_C::OnDisableReminder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlowMotionTutorial_C", "OnDisableReminder");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SlowMotionTutorial.SlowMotionTutorial_C.ExecuteUbergraph_SlowMotionTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentTimeDilation_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotification               CallFunc_MakeNotification_ReturnValue                            (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ASlowMotionTutorial_C::ExecuteUbergraph_SlowMotionTutorial(int32 EntryPoint, float CallFunc_GetCurrentTimeDilation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlowMotionTutorial_C", "ExecuteUbergraph_SlowMotionTutorial");

	Params::ASlowMotionTutorial_C_ExecuteUbergraph_SlowMotionTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentTimeDilation_ReturnValue = CallFunc_GetCurrentTimeDilation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeNotification_ReturnValue = CallFunc_MakeNotification_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


