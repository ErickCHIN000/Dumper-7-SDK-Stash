#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ObjectControlTutorial.ObjectControlTutorial_C
// (Actor)

class UClass* AObjectControlTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectControlTutorial_C");

	return Clss;
}


// ObjectControlTutorial_C ObjectControlTutorial.Default__ObjectControlTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AObjectControlTutorial_C* AObjectControlTutorial_C::GetDefaultObj()
{
	static class AObjectControlTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AObjectControlTutorial_C*>(AObjectControlTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ObjectControlTutorial.ObjectControlTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObjectControlTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectControlTutorial_C", "OnTutorialActivated");

	Params::AObjectControlTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ObjectControlTutorial.ObjectControlTutorial_C.TutorialDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AObjectControlTutorial_C::TutorialDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectControlTutorial_C", "TutorialDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ObjectControlTutorial.ObjectControlTutorial_C.ExecuteUbergraph_ObjectControlTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// class FString                      CallFunc_GetTutorialID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGGTutorialInterface>K2Node_DynamicCast_AsGGTutorial_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTutorialText_ReturnValue                             (None)
// struct FNotification               CallFunc_MakeNotification_ReturnValue                            (None)

void AObjectControlTutorial_C::ExecuteUbergraph_ObjectControlTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTutorialText_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ObjectControlTutorial_C", "ExecuteUbergraph_ObjectControlTutorial");

	Params::AObjectControlTutorial_C_ExecuteUbergraph_ObjectControlTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.CallFunc_GetTutorialID_ReturnValue = CallFunc_GetTutorialID_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGTutorial_Interface = K2Node_DynamicCast_AsGGTutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTutorialText_ReturnValue = CallFunc_GetTutorialText_ReturnValue;
	Parms.CallFunc_MakeNotification_ReturnValue = CallFunc_MakeNotification_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


