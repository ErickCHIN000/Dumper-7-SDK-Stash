#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VehiclePassengerTutorial.VehiclePassengerTutorial_C
// (Actor)

class UClass* AVehiclePassengerTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehiclePassengerTutorial_C");

	return Clss;
}


// VehiclePassengerTutorial_C VehiclePassengerTutorial.Default__VehiclePassengerTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVehiclePassengerTutorial_C* AVehiclePassengerTutorial_C::GetDefaultObj()
{
	static class AVehiclePassengerTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVehiclePassengerTutorial_C*>(AVehiclePassengerTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVehiclePassengerTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePassengerTutorial_C", "OnTutorialActivated");

	Params::AVehiclePassengerTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.OnAutomaticCompletion
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AVehiclePassengerTutorial_C::OnAutomaticCompletion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePassengerTutorial_C", "OnAutomaticCompletion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.OnVehicleAbilityActivated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGVehicle*                  Vehicle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       AbilityTags                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AVehiclePassengerTutorial_C::OnVehicleAbilityActivated_Event_0(class AGGVehicle* Vehicle, const struct FGameplayTagContainer& AbilityTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePassengerTutorial_C", "OnVehicleAbilityActivated_Event_0");

	Params::AVehiclePassengerTutorial_C_OnVehicleAbilityActivated_Event_0_Params Parms{};

	Parms.Vehicle = Vehicle;
	Parms.AbilityTags = AbilityTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehiclePassengerTutorial.VehiclePassengerTutorial_C.ExecuteUbergraph_VehiclePassengerTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_DynamicCast_AsGGVehicle                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTutorialID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class AGGVehicle*                  K2Node_CustomEvent_Vehicle                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_AbilityTags                                   (None)
// TArray<struct FGameplayTag>        K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class AGGVehicle*                  K2Node_DynamicCast_AsGGVehicle_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue_1                (NoDestructor)
// class FString                      CallFunc_GetTutorialID_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FNotification               CallFunc_MakeNotification_ReturnValue                            (None)
// struct FNotification               CallFunc_MakeNotification_ReturnValue_1                          (None)

void AVehiclePassengerTutorial_C::ExecuteUbergraph_VehiclePassengerTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, class AGGVehicle* K2Node_CustomEvent_Vehicle, const struct FGameplayTagContainer& K2Node_CustomEvent_AbilityTags, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue_1, const class FString& CallFunc_GetTutorialID_ReturnValue_1, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehiclePassengerTutorial_C", "ExecuteUbergraph_VehiclePassengerTutorial");

	Params::AVehiclePassengerTutorial_C_ExecuteUbergraph_VehiclePassengerTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_DynamicCast_AsGGVehicle = K2Node_DynamicCast_AsGGVehicle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetTutorialID_ReturnValue = CallFunc_GetTutorialID_ReturnValue;
	Parms.K2Node_CustomEvent_Vehicle = K2Node_CustomEvent_Vehicle;
	Parms.K2Node_CustomEvent_AbilityTags = K2Node_CustomEvent_AbilityTags;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsGGVehicle_1 = K2Node_DynamicCast_AsGGVehicle_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue_1 = CallFunc_MakeNotificationProperties_ReturnValue_1;
	Parms.CallFunc_GetTutorialID_ReturnValue_1 = CallFunc_GetTutorialID_ReturnValue_1;
	Parms.CallFunc_MakeNotification_ReturnValue = CallFunc_MakeNotification_ReturnValue;
	Parms.CallFunc_MakeNotification_ReturnValue_1 = CallFunc_MakeNotification_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


