#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C
// (Actor)

class UClass* ABP_IcarusPlayerCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusPlayerCameraManager_C");

	return Clss;
}


// BP_IcarusPlayerCameraManager_C BP_IcarusPlayerCameraManager.Default__BP_IcarusPlayerCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusPlayerCameraManager_C* ABP_IcarusPlayerCameraManager_C::GetDefaultObj()
{
	static class ABP_IcarusPlayerCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusPlayerCameraManager_C*>(ABP_IcarusPlayerCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.GetThirdPerson
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ThirdPerson                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCameraManager_C::GetThirdPerson(bool* ThirdPerson, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsThirdPerson_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCameraManager_C", "GetThirdPerson");

	Params::ABP_IcarusPlayerCameraManager_C_GetThirdPerson_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ThirdPerson != nullptr)
		*ThirdPerson = Parms.ThirdPerson;

}


// Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CameraTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewCameraLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewCameraRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewCameraFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UMeshComponent*              TargetMesh                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ThirdPersonUpdated                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UProjectileMovementComponent*ProjectileComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_IcarusPlayerCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, class UMeshComponent* TargetMesh, bool ThirdPersonUpdated, class UProjectileMovementComponent* ProjectileComponent, class ABP_IcarusPlayerCharacterSurvival_C* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCameraManager_C", "BlueprintUpdateCamera");

	Params::ABP_IcarusPlayerCameraManager_C_BlueprintUpdateCamera_Params Parms{};

	Parms.CameraTarget = CameraTarget;
	Parms.TargetMesh = TargetMesh;
	Parms.ThirdPersonUpdated = ThirdPersonUpdated;
	Parms.ProjectileComponent = ProjectileComponent;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = std::move(Parms.NewCameraLocation);

	if (NewCameraRotation != nullptr)
		*NewCameraRotation = std::move(Parms.NewCameraRotation);

	if (NewCameraFOV != nullptr)
		*NewCameraFOV = Parms.NewCameraFOV;

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.UpdateRotationLimits
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCameraManager_C::UpdateRotationLimits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCameraManager_C", "UpdateRotationLimits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCameraManager.BP_IcarusPlayerCameraManager_C.ExecuteUbergraph_BP_IcarusPlayerCameraManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetThirdPerson_ThirdPerson                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCameraManager_C::ExecuteUbergraph_BP_IcarusPlayerCameraManager(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetThirdPerson_ThirdPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCameraManager_C", "ExecuteUbergraph_BP_IcarusPlayerCameraManager");

	Params::ABP_IcarusPlayerCameraManager_C_ExecuteUbergraph_BP_IcarusPlayerCameraManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetThirdPerson_ThirdPerson = CallFunc_GetThirdPerson_ThirdPerson;

	UObject::ProcessEvent(Func, &Parms);

}

}


