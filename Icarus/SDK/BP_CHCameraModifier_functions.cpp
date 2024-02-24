#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CHCameraModifier.BP_CHCameraModifier_C
// (None)

class UClass* UBP_CHCameraModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CHCameraModifier_C");

	return Clss;
}


// BP_CHCameraModifier_C BP_CHCameraModifier.Default__BP_CHCameraModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CHCameraModifier_C* UBP_CHCameraModifier_C::GetDefaultObj()
{
	static class UBP_CHCameraModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CHCameraModifier_C*>(UBP_CHCameraModifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CHCameraModifier.BP_CHCameraModifier_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ViewLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ViewRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewViewLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewViewRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IICameraInterface_C>K2Node_DynamicCast_AsICamera_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_UpdateCamera_OutLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_UpdateCamera_OutRotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCamera_OutFOV                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCamera_Return                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CHCameraModifier_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, class UIcarusCriticalHitComponent* CallFunc_GetCriticalHitComponent_ReturnValue, TScriptInterface<class IICameraInterface_C> K2Node_DynamicCast_AsICamera_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CHCameraModifier_C", "BlueprintModifyCamera");

	Params::UBP_CHCameraModifier_C_BlueprintModifyCamera_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = ViewLocation;
	Parms.ViewRotation = ViewRotation;
	Parms.FOV = FOV;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetCriticalHitComponent_ReturnValue = CallFunc_GetCriticalHitComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsICamera_Interface = K2Node_DynamicCast_AsICamera_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_UpdateCamera_OutLocation = CallFunc_UpdateCamera_OutLocation;
	Parms.CallFunc_UpdateCamera_OutRotation = CallFunc_UpdateCamera_OutRotation;
	Parms.CallFunc_UpdateCamera_OutFOV = CallFunc_UpdateCamera_OutFOV;
	Parms.CallFunc_UpdateCamera_Return = CallFunc_UpdateCamera_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

}

}


