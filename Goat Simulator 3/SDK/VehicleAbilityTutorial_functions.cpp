#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehicleAbilityTutorial.VehicleAbilityTutorial_C
// (Actor)

class UClass* AVehicleAbilityTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAbilityTutorial_C");

	return Clss;
}


// VehicleAbilityTutorial_C VehicleAbilityTutorial.Default__VehicleAbilityTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehicleAbilityTutorial_C* AVehicleAbilityTutorial_C::GetDefaultObj()
{
	static class AVehicleAbilityTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehicleAbilityTutorial_C*>(AVehicleAbilityTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVehicleAbilityTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAbilityTutorial_C", "OnTutorialActivated");

	Params::AVehicleAbilityTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.OnAutomaticCompletion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVehicleAbilityTutorial_C::OnAutomaticCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAbilityTutorial_C", "OnAutomaticCompletion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.OnVehicleAbilityActivated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       AbilityTags                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AVehicleAbilityTutorial_C::OnVehicleAbilityActivated_Event_0(class AGGVehicle* Vehicle, const struct FGameplayTagContainer& AbilityTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAbilityTutorial_C", "OnVehicleAbilityActivated_Event_0");

	Params::AVehicleAbilityTutorial_C_OnVehicleAbilityActivated_Event_0_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.AbilityTags = AbilityTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAbilityTutorial.VehicleAbilityTutorial_C.ExecuteUbergraph_VehicleAbilityTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGGTutorialInterface>K2Node_DynamicCast_AsGGTutorial_Interface                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTutorialText_ReturnValue                             (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTutorialID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_CustomEvent_Vehicle                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_AbilityTags                                   (None)
// struct FNotification               CallFunc_MakeNotification_ReturnValue                            (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGVehicle*                  K2Node_DynamicCast_AsGGVehicle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AVehicleAbilityTutorial_C::ExecuteUbergraph_VehicleAbilityTutorial(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTutorialText_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, class AGGVehicle* K2Node_CustomEvent_Vehicle, const struct FGameplayTagContainer& K2Node_CustomEvent_AbilityTags, const struct FNotification& CallFunc_MakeNotification_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAbilityTutorial_C", "ExecuteUbergraph_VehicleAbilityTutorial");

	Params::AVehicleAbilityTutorial_C_ExecuteUbergraph_VehicleAbilityTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_DynamicCast_AsGGTutorial_Interface = K2Node_DynamicCast_AsGGTutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTutorialText_ReturnValue = CallFunc_GetTutorialText_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTutorialID_ReturnValue = CallFunc_GetTutorialID_ReturnValue;
	Parms.K2Node_CustomEvent_Vehicle = K2Node_CustomEvent_Vehicle;
	Parms.K2Node_CustomEvent_AbilityTags = K2Node_CustomEvent_AbilityTags;
	Parms.CallFunc_MakeNotification_ReturnValue = CallFunc_MakeNotification_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGVehicle = K2Node_DynamicCast_AsGGVehicle;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


