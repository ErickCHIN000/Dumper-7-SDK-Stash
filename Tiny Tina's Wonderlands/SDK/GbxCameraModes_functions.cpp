#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxCameraModes.CameraBehavior
// (None)

class UClass* UCameraBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior");

	return Clss;
}


// CameraBehavior GbxCameraModes.Default__CameraBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior* UCameraBehavior::GetDefaultObj()
{
	static class UCameraBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior*>(UCameraBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxCameraModes.CameraBehavior.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraState*                State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraBehavior::Update(float DeltaTime, class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior", "Update");

	Params::UCameraBehavior_Update_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraBehavior.start
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*                State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraBehavior::Start(class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior", "start");

	Params::UCameraBehavior_Start_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraBehavior.End
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UCameraState*                State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraBehavior::End(class UCameraState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior", "End");

	Params::UCameraBehavior_End_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxCameraModes.CameraBehavior_InitialRotation
// (None)

class UClass* UCameraBehavior_InitialRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_InitialRotation");

	return Clss;
}


// CameraBehavior_InitialRotation GbxCameraModes.Default__CameraBehavior_InitialRotation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_InitialRotation* UCameraBehavior_InitialRotation::GetDefaultObj()
{
	static class UCameraBehavior_InitialRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_InitialRotation*>(UCameraBehavior_InitialRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_BlendToFOV
// (None)

class UClass* UCameraBehavior_BlendToFOV::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_BlendToFOV");

	return Clss;
}


// CameraBehavior_BlendToFOV GbxCameraModes.Default__CameraBehavior_BlendToFOV
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_BlendToFOV* UCameraBehavior_BlendToFOV::GetDefaultObj()
{
	static class UCameraBehavior_BlendToFOV* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_BlendToFOV*>(UCameraBehavior_BlendToFOV::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_Look
// (None)

class UClass* UCameraBehavior_Look::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_Look");

	return Clss;
}


// CameraBehavior_Look GbxCameraModes.Default__CameraBehavior_Look
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_Look* UCameraBehavior_Look::GetDefaultObj()
{
	static class UCameraBehavior_Look* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_Look*>(UCameraBehavior_Look::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_FOV
// (None)

class UClass* UCameraBehavior_FOV::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_FOV");

	return Clss;
}


// CameraBehavior_FOV GbxCameraModes.Default__CameraBehavior_FOV
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_FOV* UCameraBehavior_FOV::GetDefaultObj()
{
	static class UCameraBehavior_FOV* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_FOV*>(UCameraBehavior_FOV::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_OffsetViewModel
// (None)

class UClass* UCameraBehavior_OffsetViewModel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_OffsetViewModel");

	return Clss;
}


// CameraBehavior_OffsetViewModel GbxCameraModes.Default__CameraBehavior_OffsetViewModel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_OffsetViewModel* UCameraBehavior_OffsetViewModel::GetDefaultObj()
{
	static class UCameraBehavior_OffsetViewModel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_OffsetViewModel*>(UCameraBehavior_OffsetViewModel::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.PlayerCameraModesManager
// (Actor)

class UClass* APlayerCameraModesManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerCameraModesManager");

	return Clss;
}


// PlayerCameraModesManager GbxCameraModes.Default__PlayerCameraModesManager
// (Public, ClassDefaultObject, ArchetypeObject)

class APlayerCameraModesManager* APlayerCameraModesManager::GetDefaultObj()
{
	static class APlayerCameraModesManager* Default = nullptr;

	if (!Default)
		Default = static_cast<APlayerCameraModesManager*>(APlayerCameraModesManager::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromGbxFeedback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FActiveGbxFeedbackEffect    TrackedFeedback                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void APlayerCameraModesManager::UpdateCameraShakeFromGbxFeedback(struct FActiveGbxFeedbackEffect& TrackedFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCameraModesManager", "UpdateCameraShakeFromGbxFeedback");

	Params::APlayerCameraModesManager_UpdateCameraShakeFromGbxFeedback_Params Parms{};

	Parms.TrackedFeedback = TrackedFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.PlayerCameraModesManager.UpdateCameraShakeFromFeedback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FActiveTrackedFeedback      TrackedFeedback                                                  (Parm, OutParm, NativeAccessSpecifierPublic)

void APlayerCameraModesManager::UpdateCameraShakeFromFeedback(struct FActiveTrackedFeedback* TrackedFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerCameraModesManager", "UpdateCameraShakeFromFeedback");

	Params::APlayerCameraModesManager_UpdateCameraShakeFromFeedback_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TrackedFeedback != nullptr)
		*TrackedFeedback = std::move(Parms.TrackedFeedback);

}


// Class GbxCameraModes.CameraInputs
// (None)

class UClass* UCameraInputs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraInputs");

	return Clss;
}


// CameraInputs GbxCameraModes.Default__CameraInputs
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraInputs* UCameraInputs::GetDefaultObj()
{
	static class UCameraInputs* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraInputs*>(UCameraInputs::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_AnchorToEyeLocation
// (None)

class UClass* UCameraBehavior_AnchorToEyeLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_AnchorToEyeLocation");

	return Clss;
}


// CameraBehavior_AnchorToEyeLocation GbxCameraModes.Default__CameraBehavior_AnchorToEyeLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_AnchorToEyeLocation* UCameraBehavior_AnchorToEyeLocation::GetDefaultObj()
{
	static class UCameraBehavior_AnchorToEyeLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_AnchorToEyeLocation*>(UCameraBehavior_AnchorToEyeLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_AnchorToSocket
// (None)

class UClass* UCameraBehavior_AnchorToSocket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_AnchorToSocket");

	return Clss;
}


// CameraBehavior_AnchorToSocket GbxCameraModes.Default__CameraBehavior_AnchorToSocket
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_AnchorToSocket* UCameraBehavior_AnchorToSocket::GetDefaultObj()
{
	static class UCameraBehavior_AnchorToSocket* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_AnchorToSocket*>(UCameraBehavior_AnchorToSocket::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_AutoFollowRotation
// (None)

class UClass* UCameraBehavior_AutoFollowRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_AutoFollowRotation");

	return Clss;
}


// CameraBehavior_AutoFollowRotation GbxCameraModes.Default__CameraBehavior_AutoFollowRotation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_AutoFollowRotation* UCameraBehavior_AutoFollowRotation::GetDefaultObj()
{
	static class UCameraBehavior_AutoFollowRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_AutoFollowRotation*>(UCameraBehavior_AutoFollowRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_CollisionDetection
// (None)

class UClass* UCameraBehavior_CollisionDetection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_CollisionDetection");

	return Clss;
}


// CameraBehavior_CollisionDetection GbxCameraModes.Default__CameraBehavior_CollisionDetection
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_CollisionDetection* UCameraBehavior_CollisionDetection::GetDefaultObj()
{
	static class UCameraBehavior_CollisionDetection* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_CollisionDetection*>(UCameraBehavior_CollisionDetection::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxCameraModes.CameraBehavior_CollisionDetection.SetIsEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraBehavior_CollisionDetection::SetIsEnable(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraBehavior_CollisionDetection", "SetIsEnable");

	Params::UCameraBehavior_CollisionDetection_SetIsEnable_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxCameraModes.CameraBehavior_CollisionOffsetTrace
// (None)

class UClass* UCameraBehavior_CollisionOffsetTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_CollisionOffsetTrace");

	return Clss;
}


// CameraBehavior_CollisionOffsetTrace GbxCameraModes.Default__CameraBehavior_CollisionOffsetTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_CollisionOffsetTrace* UCameraBehavior_CollisionOffsetTrace::GetDefaultObj()
{
	static class UCameraBehavior_CollisionOffsetTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_CollisionOffsetTrace*>(UCameraBehavior_CollisionOffsetTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_DefaultFOV
// (None)

class UClass* UCameraBehavior_DefaultFOV::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_DefaultFOV");

	return Clss;
}


// CameraBehavior_DefaultFOV GbxCameraModes.Default__CameraBehavior_DefaultFOV
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_DefaultFOV* UCameraBehavior_DefaultFOV::GetDefaultObj()
{
	static class UCameraBehavior_DefaultFOV* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_DefaultFOV*>(UCameraBehavior_DefaultFOV::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_FromAnimation
// (None)

class UClass* UCameraBehavior_FromAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_FromAnimation");

	return Clss;
}


// CameraBehavior_FromAnimation GbxCameraModes.Default__CameraBehavior_FromAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_FromAnimation* UCameraBehavior_FromAnimation::GetDefaultObj()
{
	static class UCameraBehavior_FromAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_FromAnimation*>(UCameraBehavior_FromAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_LimitLook
// (None)

class UClass* UCameraBehavior_LimitLook::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_LimitLook");

	return Clss;
}


// CameraBehavior_LimitLook GbxCameraModes.Default__CameraBehavior_LimitLook
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_LimitLook* UCameraBehavior_LimitLook::GetDefaultObj()
{
	static class UCameraBehavior_LimitLook* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_LimitLook*>(UCameraBehavior_LimitLook::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_LimitPitch
// (None)

class UClass* UCameraBehavior_LimitPitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_LimitPitch");

	return Clss;
}


// CameraBehavior_LimitPitch GbxCameraModes.Default__CameraBehavior_LimitPitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_LimitPitch* UCameraBehavior_LimitPitch::GetDefaultObj()
{
	static class UCameraBehavior_LimitPitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_LimitPitch*>(UCameraBehavior_LimitPitch::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_OffsetAbsolute
// (None)

class UClass* UCameraBehavior_OffsetAbsolute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_OffsetAbsolute");

	return Clss;
}


// CameraBehavior_OffsetAbsolute GbxCameraModes.Default__CameraBehavior_OffsetAbsolute
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_OffsetAbsolute* UCameraBehavior_OffsetAbsolute::GetDefaultObj()
{
	static class UCameraBehavior_OffsetAbsolute* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_OffsetAbsolute*>(UCameraBehavior_OffsetAbsolute::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_OffsetCameraRelative
// (None)

class UClass* UCameraBehavior_OffsetCameraRelative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_OffsetCameraRelative");

	return Clss;
}


// CameraBehavior_OffsetCameraRelative GbxCameraModes.Default__CameraBehavior_OffsetCameraRelative
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_OffsetCameraRelative* UCameraBehavior_OffsetCameraRelative::GetDefaultObj()
{
	static class UCameraBehavior_OffsetCameraRelative* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_OffsetCameraRelative*>(UCameraBehavior_OffsetCameraRelative::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_OffsetCameraRelativeFromInputs
// (None)

class UClass* UCameraBehavior_OffsetCameraRelativeFromInputs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_OffsetCameraRelativeFromInputs");

	return Clss;
}


// CameraBehavior_OffsetCameraRelativeFromInputs GbxCameraModes.Default__CameraBehavior_OffsetCameraRelativeFromInputs
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_OffsetCameraRelativeFromInputs* UCameraBehavior_OffsetCameraRelativeFromInputs::GetDefaultObj()
{
	static class UCameraBehavior_OffsetCameraRelativeFromInputs* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_OffsetCameraRelativeFromInputs*>(UCameraBehavior_OffsetCameraRelativeFromInputs::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_RestoreControllerRotation
// (None)

class UClass* UCameraBehavior_RestoreControllerRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_RestoreControllerRotation");

	return Clss;
}


// CameraBehavior_RestoreControllerRotation GbxCameraModes.Default__CameraBehavior_RestoreControllerRotation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_RestoreControllerRotation* UCameraBehavior_RestoreControllerRotation::GetDefaultObj()
{
	static class UCameraBehavior_RestoreControllerRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_RestoreControllerRotation*>(UCameraBehavior_RestoreControllerRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraBehavior_RestoreStartRotation
// (None)

class UClass* UCameraBehavior_RestoreStartRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_RestoreStartRotation");

	return Clss;
}


// CameraBehavior_RestoreStartRotation GbxCameraModes.Default__CameraBehavior_RestoreStartRotation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraBehavior_RestoreStartRotation* UCameraBehavior_RestoreStartRotation::GetDefaultObj()
{
	static class UCameraBehavior_RestoreStartRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_RestoreStartRotation*>(UCameraBehavior_RestoreStartRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraMode
// (None)

class UClass* UCameraMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraMode");

	return Clss;
}


// CameraMode GbxCameraModes.Default__CameraMode
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraMode* UCameraMode::GetDefaultObj()
{
	static class UCameraMode* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraMode*>(UCameraMode::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraModeData
// (None)

class UClass* UCameraModeData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModeData");

	return Clss;
}


// CameraModeData GbxCameraModes.Default__CameraModeData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraModeData* UCameraModeData::GetDefaultObj()
{
	static class UCameraModeData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModeData*>(UCameraModeData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraModeSet
// (None)

class UClass* UCameraModeSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModeSet");

	return Clss;
}


// CameraModeSet GbxCameraModes.Default__CameraModeSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraModeSet* UCameraModeSet::GetDefaultObj()
{
	static class UCameraModeSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModeSet*>(UCameraModeSet::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraModeSetData
// (None)

class UClass* UCameraModeSetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModeSetData");

	return Clss;
}


// CameraModeSetData GbxCameraModes.Default__CameraModeSetData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraModeSetData* UCameraModeSetData::GetDefaultObj()
{
	static class UCameraModeSetData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModeSetData*>(UCameraModeSetData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraModesFunctionLibrary
// (None)

class UClass* UCameraModesFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModesFunctionLibrary");

	return Clss;
}


// CameraModesFunctionLibrary GbxCameraModes.Default__CameraModesFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraModesFunctionLibrary* UCameraModesFunctionLibrary::GetDefaultObj()
{
	static class UCameraModesFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModesFunctionLibrary*>(UCameraModesFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxCameraModes.CameraModesFunctionLibrary.SetCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ModeName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BlendTimeOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceResetMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::SetCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport, bool bForceResetMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "SetCameraMode");

	Params::UCameraModesFunctionLibrary_SetCameraMode_Params Parms{};

	Parms.Controller = Controller;
	Parms.ModeName = ModeName;
	Parms.BlendTimeOverride = BlendTimeOverride;
	Parms.bTeleport = bTeleport;
	Parms.bForceResetMode = bForceResetMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.ResetCameraRotation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    NewRotation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::ResetCameraRotation(class APlayerController* Controller, struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "ResetCameraRotation");

	Params::UCameraModesFunctionLibrary_ResetCameraRotation_Params Parms{};

	Parms.Controller = Controller;
	Parms.NewRotation = NewRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.RemoveCameraModeSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraModeSetData*          ModeSet                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::RemoveCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "RemoveCameraModeSet");

	Params::UCameraModesFunctionLibrary_RemoveCameraModeSet_Params Parms{};

	Parms.Controller = Controller;
	Parms.ModeSet = ModeSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.PushCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ModeName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BlendTimeOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::PushCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "PushCameraMode");

	Params::UCameraModesFunctionLibrary_PushCameraMode_Params Parms{};

	Parms.Controller = Controller;
	Parms.ModeName = ModeName;
	Parms.BlendTimeOverride = BlendTimeOverride;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.PopCameraMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ModeName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BlendTimeOverride                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::PopCameraMode(class APlayerController* Controller, class FName ModeName, float BlendTimeOverride, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "PopCameraMode");

	Params::UCameraModesFunctionLibrary_PopCameraMode_Params Parms{};

	Parms.Controller = Controller;
	Parms.ModeName = ModeName;
	Parms.BlendTimeOverride = BlendTimeOverride;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.ApplyCameraRotation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DeltaRotation                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::ApplyCameraRotation(class APlayerController* Controller, struct FRotator& DeltaRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "ApplyCameraRotation");

	Params::UCameraModesFunctionLibrary_ApplyCameraRotation_Params Parms{};

	Parms.Controller = Controller;
	Parms.DeltaRotation = DeltaRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraModesFunctionLibrary.AddCameraModeSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraModeSetData*          ModeSet                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraModesFunctionLibrary::AddCameraModeSet(class APlayerController* Controller, class UCameraModeSetData* ModeSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModesFunctionLibrary", "AddCameraModeSet");

	Params::UCameraModesFunctionLibrary_AddCameraModeSet_Params Parms{};

	Parms.Controller = Controller;
	Parms.ModeSet = ModeSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxCameraModes.CameraModesManager
// (None)

class UClass* UCameraModesManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModesManager");

	return Clss;
}


// CameraModesManager GbxCameraModes.Default__CameraModesManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraModesManager* UCameraModesManager::GetDefaultObj()
{
	static class UCameraModesManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModesManager*>(UCameraModesManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxCameraModes.CameraState
// (None)

class UClass* UCameraState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraState");

	return Clss;
}


// CameraState GbxCameraModes.Default__CameraState
// (Public, ClassDefaultObject, ArchetypeObject)

class UCameraState* UCameraState::GetDefaultObj()
{
	static class UCameraState* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraState*>(UCameraState::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxCameraModes.CameraState.SetViewModelFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFOV                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDefault                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraState::SetViewModelFOV(float NewFOV, bool bDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "SetViewModelFOV");

	Params::UCameraState_SetViewModelFOV_Params Parms{};

	Parms.NewFOV = NewFOV;
	Parms.bDefault = bDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraState.SetBaseRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    NewRotation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCameraState::SetBaseRotation(struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "SetBaseRotation");

	Params::UCameraState_SetBaseRotation_Params Parms{};

	Parms.NewRotation = NewRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraState.SetBaseLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     NewLocation                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraState::SetBaseLocation(struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "SetBaseLocation");

	Params::UCameraState_SetBaseLocation_Params Parms{};

	Parms.NewLocation = NewLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraState.SetBaseFOV
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewFOV                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDefault                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraState::SetBaseFOV(float NewFOV, bool bDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "SetBaseFOV");

	Params::UCameraState_SetBaseFOV_Params Parms{};

	Parms.NewFOV = NewFOV;
	Parms.bDefault = bDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxCameraModes.CameraState.GetCollisionResult
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class ECollisionStatusDirectionDirection                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHit                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraState::GetCollisionResult(enum class ECollisionStatusDirection Direction, bool* bHit, struct FVector* HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "GetCollisionResult");

	Params::UCameraState_GetCollisionResult_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHit != nullptr)
		*bHit = Parms.bHit;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

}


// Function GbxCameraModes.CameraState.GetCameraTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCameraState::GetCameraTransform(struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "GetCameraTransform");

	Params::UCameraState_GetCameraTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function GbxCameraModes.CameraState.GetBaseRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UCameraState::GetBaseRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "GetBaseRotation");

	Params::UCameraState_GetBaseRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxCameraModes.CameraState.GetBaseLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UCameraState::GetBaseLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "GetBaseLocation");

	Params::UCameraState_GetBaseLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxCameraModes.CameraState.GetBaseFOV
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCameraState::GetBaseFOV()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "GetBaseFOV");

	Params::UCameraState_GetBaseFOV_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxCameraModes.CameraState.CameraTrace
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Start                                                            (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECollisionChannel       TraceChannel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              IgnoreMask                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCameraState::CameraTrace(const struct FVector& Start, const struct FVector& End, float Radius, enum class ECollisionChannel TraceChannel, uint8 IgnoreMask, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "CameraTrace");

	Params::UCameraState_CameraTrace_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.Radius = Radius;
	Parms.TraceChannel = TraceChannel;
	Parms.IgnoreMask = IgnoreMask;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Function GbxCameraModes.CameraState.AddPostProcessBlend
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              BlendWeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraState::AddPostProcessBlend(struct FPostProcessSettings& Settings, float BlendWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraState", "AddPostProcessBlend");

	Params::UCameraState_AddPostProcessBlend_Params Parms{};

	Parms.Settings = Settings;
	Parms.BlendWeight = BlendWeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxCameraModes.CameraViewTargetInterface
// (None)

class UClass* ICameraViewTargetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraViewTargetInterface");

	return Clss;
}


// CameraViewTargetInterface GbxCameraModes.Default__CameraViewTargetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICameraViewTargetInterface* ICameraViewTargetInterface::GetDefaultObj()
{
	static class ICameraViewTargetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICameraViewTargetInterface*>(ICameraViewTargetInterface::StaticClass()->DefaultObject);

	return Default;
}

}


