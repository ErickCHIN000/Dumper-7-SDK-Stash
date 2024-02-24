#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C
// (Actor)

class UClass* ASpaceStation_PlayerCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpaceStation_PlayerCameraManager_C");

	return Clss;
}


// SpaceStation_PlayerCameraManager_C SpaceStation_PlayerCameraManager.Default__SpaceStation_PlayerCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpaceStation_PlayerCameraManager_C* ASpaceStation_PlayerCameraManager_C::GetDefaultObj()
{
	static class ASpaceStation_PlayerCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpaceStation_PlayerCameraManager_C*>(ASpaceStation_PlayerCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C.InteractionChangedCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InteractionComponentBase_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_InteractionSceneBase_C*  CallFunc_GetCurrentInteraction_CurrentInteraction                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void ASpaceStation_PlayerCameraManager_C::InteractionChangedCheck(class UBP_InteractionComponentBase_C* CallFunc_GetComponentByClass_ReturnValue, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_InteractionSceneBase_C* CallFunc_GetCurrentInteraction_CurrentInteraction, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_PlayerCameraManager_C", "InteractionChangedCheck");

	Params::ASpaceStation_PlayerCameraManager_C_InteractionChangedCheck_Params Parms{};

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentInteraction_CurrentInteraction = CallFunc_GetCurrentInteraction_CurrentInteraction;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpaceStation_PlayerCameraManager.SpaceStation_PlayerCameraManager_C.BlueprintUpdateCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CameraTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewCameraLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewCameraRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewCameraFOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  NewTransform                                                     (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// bool                               InteractionChanged                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSpace* K2Node_DynamicCast_AsIcarus_Player_Character_Space               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraComponent*            CallFunc_GetFirstPersonCamera_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInteractionBlendSpeed_BlendSpeed                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetFirstPersonCamera_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ASpaceStation_PlayerCameraManager_C::BlueprintUpdateCamera(class AActor* CameraTarget, struct FVector* NewCameraLocation, struct FRotator* NewCameraRotation, float* NewCameraFOV, const struct FTransform& NewTransform, bool InteractionChanged, class AIcarusPlayerCharacterSpace* K2Node_DynamicCast_AsIcarus_Player_Character_Space, bool K2Node_DynamicCast_bSuccess, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UCameraComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetInteractionBlendSpeed_BlendSpeed, class UCameraComponent* CallFunc_GetFirstPersonCamera_ReturnValue_1, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpaceStation_PlayerCameraManager_C", "BlueprintUpdateCamera");

	Params::ASpaceStation_PlayerCameraManager_C_BlueprintUpdateCamera_Params Parms{};

	Parms.CameraTarget = CameraTarget;
	Parms.NewTransform = NewTransform;
	Parms.InteractionChanged = InteractionChanged;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Space = K2Node_DynamicCast_AsIcarus_Player_Character_Space;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFirstPersonCamera_ReturnValue = CallFunc_GetFirstPersonCamera_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInteractionBlendSpeed_BlendSpeed = CallFunc_GetInteractionBlendSpeed_BlendSpeed;
	Parms.CallFunc_GetFirstPersonCamera_ReturnValue_1 = CallFunc_GetFirstPersonCamera_ReturnValue_1;
	Parms.CallFunc_TLerp_ReturnValue = CallFunc_TLerp_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewCameraLocation != nullptr)
		*NewCameraLocation = std::move(Parms.NewCameraLocation);

	if (NewCameraRotation != nullptr)
		*NewCameraRotation = std::move(Parms.NewCameraRotation);

	if (NewCameraFOV != nullptr)
		*NewCameraFOV = Parms.NewCameraFOV;

	return Parms.ReturnValue;

}

}


