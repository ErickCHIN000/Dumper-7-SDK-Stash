#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CameraModifier.BP_CameraModifier_C
// (None)

class UClass* UBP_CameraModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CameraModifier_C");

	return Clss;
}


// BP_CameraModifier_C BP_CameraModifier.Default__BP_CameraModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CameraModifier_C* UBP_CameraModifier_C::GetDefaultObj()
{
	static class UBP_CameraModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CameraModifier_C*>(UBP_CameraModifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CameraModifier.BP_CameraModifier_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ViewLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    ViewRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewViewLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewViewRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IICameraInterface_C>K2Node_DynamicCast_AsICamera_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_UpdateCamera_OutLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_UpdateCamera_OutRotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCamera_OutFOV                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCamera_Return                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_CameraModifier_C::BlueprintModifyCamera(float DeltaTime, const struct FVector& ViewLocation, const struct FRotator& ViewRotation, float FOV, struct FVector* NewViewLocation, struct FRotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, TScriptInterface<class IICameraInterface_C> K2Node_DynamicCast_AsICamera_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return, class AActor* CallFunc_GetViewTarget_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CameraModifier_C", "BlueprintModifyCamera");

	Params::UBP_CameraModifier_C_BlueprintModifyCamera_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = ViewLocation;
	Parms.ViewRotation = ViewRotation;
	Parms.FOV = FOV;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsICamera_Interface = K2Node_DynamicCast_AsICamera_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UpdateCamera_OutLocation = CallFunc_UpdateCamera_OutLocation;
	Parms.CallFunc_UpdateCamera_OutRotation = CallFunc_UpdateCamera_OutRotation;
	Parms.CallFunc_UpdateCamera_OutFOV = CallFunc_UpdateCamera_OutFOV;
	Parms.CallFunc_UpdateCamera_Return = CallFunc_UpdateCamera_Return;
	Parms.CallFunc_GetViewTarget_ReturnValue_1 = CallFunc_GetViewTarget_ReturnValue_1;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

}

}


