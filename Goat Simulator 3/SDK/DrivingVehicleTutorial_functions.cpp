#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DrivingVehicleTutorial.DrivingVehicleTutorial_C
// (Actor)

class UClass* ADrivingVehicleTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DrivingVehicleTutorial_C");

	return Clss;
}


// DrivingVehicleTutorial_C DrivingVehicleTutorial.Default__DrivingVehicleTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADrivingVehicleTutorial_C* ADrivingVehicleTutorial_C::GetDefaultObj()
{
	static class ADrivingVehicleTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADrivingVehicleTutorial_C*>(ADrivingVehicleTutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DrivingVehicleTutorial.DrivingVehicleTutorial_C.CheckIfCarHasMoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADrivingVehicleTutorial_C::CheckIfCarHasMoved(float CallFunc_Square_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DrivingVehicleTutorial_C", "CheckIfCarHasMoved");

	Params::ADrivingVehicleTutorial_C_CheckIfCarHasMoved_Params Parms{};

	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetControlledGoat_ReturnValue = CallFunc_GetControlledGoat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DrivingVehicleTutorial.DrivingVehicleTutorial_C.OnTutorialActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrivingVehicleTutorial_C::OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DrivingVehicleTutorial_C", "OnTutorialActivated");

	Params::ADrivingVehicleTutorial_C_OnTutorialActivated_Params Parms{};

	Parms.PC = PC;
	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DrivingVehicleTutorial.DrivingVehicleTutorial_C.ExecuteUbergraph_DrivingVehicleTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTutorialID_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class AGGPlayerController*         K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_Event_Goat                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class AGGGoat*                     CallFunc_GetControlledGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationProperties     CallFunc_MakeNotificationProperties_ReturnValue                  (NoDestructor)
// struct FNotification               CallFunc_MakeNotification_ReturnValue                            (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADrivingVehicleTutorial_C::ExecuteUbergraph_DrivingVehicleTutorial(int32 EntryPoint, const class FString& CallFunc_GetTutorialID_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DrivingVehicleTutorial_C", "ExecuteUbergraph_DrivingVehicleTutorial");

	Params::ADrivingVehicleTutorial_C_ExecuteUbergraph_DrivingVehicleTutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTutorialID_ReturnValue = CallFunc_GetTutorialID_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.K2Node_Event_Goat = K2Node_Event_Goat;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetControlledGoat_ReturnValue = CallFunc_GetControlledGoat_ReturnValue;
	Parms.CallFunc_MakeNotificationProperties_ReturnValue = CallFunc_MakeNotificationProperties_ReturnValue;
	Parms.CallFunc_MakeNotification_ReturnValue = CallFunc_MakeNotification_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


