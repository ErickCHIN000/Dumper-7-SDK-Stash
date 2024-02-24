#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ARigRuntime.RigConstraint
// (Actor)

class UClass* ARigConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigConstraint");

	return Clss;
}


// RigConstraint ARigRuntime.Default__RigConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class ARigConstraint* ARigConstraint::GetDefaultObj()
{
	static class ARigConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<ARigConstraint*>(ARigConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.AimConstraint
// (Actor)

class UClass* AAimConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AimConstraint");

	return Clss;
}


// AimConstraint ARigRuntime.Default__AimConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class AAimConstraint* AAimConstraint::GetDefaultObj()
{
	static class AAimConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<AAimConstraint*>(AAimConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARControllerBase
// (Actor)

class UClass* AARControllerBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerBase");

	return Clss;
}


// ARControllerBase ARigRuntime.Default__ARControllerBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerBase* AARControllerBase::GetDefaultObj()
{
	static class AARControllerBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerBase*>(AARControllerBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARController
// (Actor)

class UClass* AARController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARController");

	return Clss;
}


// ARController ARigRuntime.Default__ARController
// (Public, ClassDefaultObject, ArchetypeObject)

class AARController* AARController::GetDefaultObj()
{
	static class AARController* Default = nullptr;

	if (!Default)
		Default = static_cast<AARController*>(AARController::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARController.LimitTransformations
// (Native, Public, BlueprintCallable)
// Parameters:

void AARController::LimitTransformations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARController", "LimitTransformations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ARigRuntime.AnimOffset
// (Actor)

class UClass* AAnimOffset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimOffset");

	return Clss;
}


// AnimOffset ARigRuntime.Default__AnimOffset
// (Public, ClassDefaultObject, ArchetypeObject)

class AAnimOffset* AAnimOffset::GetDefaultObj()
{
	static class AAnimOffset* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnimOffset*>(AAnimOffset::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.AnimOffset.UpdateAnimOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAnimOffset::UpdateAnimOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimOffset", "UpdateAnimOffset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ARigRuntime.ARControllerFk
// (Actor)

class UClass* AARControllerFk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerFk");

	return Clss;
}


// ARControllerFk ARigRuntime.Default__ARControllerFk
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerFk* AARControllerFk::GetDefaultObj()
{
	static class AARControllerFk* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerFk*>(AARControllerFk::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARControllerFkIk
// (Actor)

class UClass* AARControllerFkIk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerFkIk");

	return Clss;
}


// ARControllerFkIk ARigRuntime.Default__ARControllerFkIk
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerFkIk* AARControllerFkIk::GetDefaultObj()
{
	static class AARControllerFkIk* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerFkIk*>(AARControllerFkIk::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARControllerIk
// (Actor)

class UClass* AARControllerIk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerIk");

	return Clss;
}


// ARControllerIk ARigRuntime.Default__ARControllerIk
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerIk* AARControllerIk::GetDefaultObj()
{
	static class AARControllerIk* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerIk*>(AARControllerIk::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARControllerPv
// (Actor)

class UClass* AARControllerPv::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerPv");

	return Clss;
}


// ARControllerPv ARigRuntime.Default__ARControllerPv
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerPv* AARControllerPv::GetDefaultObj()
{
	static class AARControllerPv* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerPv*>(AARControllerPv::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARControllerSplineIk
// (Actor)

class UClass* AARControllerSplineIk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARControllerSplineIk");

	return Clss;
}


// ARControllerSplineIk ARigRuntime.Default__ARControllerSplineIk
// (Public, ClassDefaultObject, ArchetypeObject)

class AARControllerSplineIk* AARControllerSplineIk::GetDefaultObj()
{
	static class AARControllerSplineIk* Default = nullptr;

	if (!Default)
		Default = static_cast<AARControllerSplineIk*>(AARControllerSplineIk::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARigFunctions
// (None)

class UClass* UARigFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARigFunctions");

	return Clss;
}


// ARigFunctions ARigRuntime.Default__ARigFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UARigFunctions* UARigFunctions::GetDefaultObj()
{
	static class UARigFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UARigFunctions*>(UARigFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*          SkelMeshActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateSkeletalMeshSection(class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SkelMeshActor, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateSkeletalMeshSection");

	Params::UARigFunctions_UpdateSkeletalMeshSection_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.SkelMeshActor = SkelMeshActor;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateSkeletalMeshPose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateSkeletalMeshPose(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateSkeletalMeshPose");

	Params::UARigFunctions_UpdateSkeletalMeshPose_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateSequncerComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection*TransformSection                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             SceneComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateSequncerComponent(class UMovieScene3DTransformSection* TransformSection, class USceneComponent* SceneComponent, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateSequncerComponent");

	Params::UARigFunctions_UpdateSequncerComponent_Params Parms{};

	Parms.TransformSection = TransformSection;
	Parms.SceneComponent = SceneComponent;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateSequncer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateSequncer(class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateSequncer");

	Params::UARigFunctions_UpdateSequncer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateSequencerActorTransform
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateSequencerActorTransform(class ULevelSequence* LevelSequence, class AActor* Actor, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateSequencerActorTransform");

	Params::UARigFunctions_UpdateSequencerActorTransform_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateFloatSectionProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatSection*     FloatSection                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::UpdateFloatSectionProperty(class UMovieSceneFloatSection* FloatSection, class AActor* Actor, class FName PropertyName, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateFloatSectionProperty");

	Params::UARigFunctions_UpdateFloatSectionProperty_Params Parms{};

	Parms.FloatSection = FloatSection;
	Parms.Actor = Actor;
	Parms.PropertyName = PropertyName;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.UpdateAllConstraints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UARigFunctions::UpdateAllConstraints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "UpdateAllConstraints");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.TwoBoneIkOpt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  Effector                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     PoleVector                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InRootPos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UpperLimbLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LowerLimbLength                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchSoftness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PoleVectorLock                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  RootBone                                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  TipBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARigFunctions::TwoBoneIkOpt(const struct FTransform& Effector, const struct FVector& PoleVector, const struct FVector& InRootPos, float UpperLimbLength, float LowerLimbLength, float StretchScale, bool bAutoStretch, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, struct FTransform* RootBone, struct FTransform* MidBone, struct FTransform* TipBone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "TwoBoneIkOpt");

	Params::UARigFunctions_TwoBoneIkOpt_Params Parms{};

	Parms.Effector = Effector;
	Parms.PoleVector = PoleVector;
	Parms.InRootPos = InRootPos;
	Parms.UpperLimbLength = UpperLimbLength;
	Parms.LowerLimbLength = LowerLimbLength;
	Parms.StretchScale = StretchScale;
	Parms.bAutoStretch = bAutoStretch;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchSoftness = StretchSoftness;
	Parms.PoleVectorLock = PoleVectorLock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootBone != nullptr)
		*RootBone = std::move(Parms.RootBone);

	if (MidBone != nullptr)
		*MidBone = std::move(Parms.MidBone);

	if (TipBone != nullptr)
		*TipBone = std::move(Parms.TipBone);

}


// Function ARigRuntime.ARigFunctions.TwoBoneIk
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  EffectorPos                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     PoleVector                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  InUpBone                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBoneLocal                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneLocal                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bUseAimSettings                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                UpAimSettings                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                MidAimSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  UpBone                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARigFunctions::TwoBoneIk(const struct FTransform& EffectorPos, const struct FVector& PoleVector, const struct FTransform& InUpBone, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, bool bUseAimSettings, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "TwoBoneIk");

	Params::UARigFunctions_TwoBoneIk_Params Parms{};

	Parms.EffectorPos = EffectorPos;
	Parms.PoleVector = PoleVector;
	Parms.InUpBone = InUpBone;
	Parms.MidBoneLocal = MidBoneLocal;
	Parms.LowBoneLocal = LowBoneLocal;
	Parms.bUseAimSettings = bUseAimSettings;
	Parms.UpAimSettings = UpAimSettings;
	Parms.MidAimSettings = MidAimSettings;
	Parms.bAllowStretching = bAllowStretching;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchScale = StretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpBone != nullptr)
		*UpBone = std::move(Parms.UpBone);

	if (MidBone != nullptr)
		*MidBone = std::move(Parms.MidBone);

	if (LowBone != nullptr)
		*LowBone = std::move(Parms.LowBone);

}


// Function ARigRuntime.ARigFunctions.StringsToNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Strings                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UARigFunctions::StringsToNames(const TArray<class FString>& Strings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "StringsToNames");

	Params::UARigFunctions_StringsToNames_Params Parms{};

	Parms.Strings = Strings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.ShiftTransformSectionAnim
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection*TransformSection                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ShiftAnim                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::ShiftTransformSectionAnim(class UMovieScene3DTransformSection* TransformSection, float ShiftAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "ShiftTransformSectionAnim");

	Params::UARigFunctions_ShiftTransformSectionAnim_Params Parms{};

	Parms.TransformSection = TransformSection;
	Parms.ShiftAnim = ShiftAnim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SetTransformSectionKey
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*TransformSection                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetTransformSectionKey(class AActor* Actor, class UMovieScene3DTransformSection* TransformSection, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetTransformSectionKey");

	Params::UARigFunctions_SetTransformSectionKey_Params Parms{};

	Parms.Actor = Actor;
	Parms.TransformSection = TransformSection;
	Parms.Transform = Transform;
	Parms.Time = Time;
	Parms.Translation = Translation;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ARigRuntime.ARigFunctions.SetTransformKey
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARigFunctions::SetTransformKey(class ULevelSequence* LevelSequence, class AActor* Actor, const struct FTransform& Transform, float Time, bool Translation, bool Rotation, bool Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetTransformKey");

	Params::UARigFunctions_SetTransformKey_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;
	Parms.Transform = Transform;
	Parms.Time = Time;
	Parms.Translation = Translation;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.SetSelectable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetSelectable(class UPrimitiveComponent* Component, bool bSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetSelectable");

	Params::UARigFunctions_SetSelectable_Params Parms{};

	Parms.Component = Component;
	Parms.bSelectable = bSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SetSectionStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          MovieSceneSection                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetSectionStartTime(class UMovieSceneSection* MovieSceneSection, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetSectionStartTime");

	Params::UARigFunctions_SetSectionStartTime_Params Parms{};

	Parms.MovieSceneSection = MovieSceneSection;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SetSectionEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSection*          MovieSceneSection                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetSectionEndTime(class UMovieSceneSection* MovieSceneSection, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetSectionEndTime");

	Params::UARigFunctions_SetSectionEndTime_Params Parms{};

	Parms.MovieSceneSection = MovieSceneSection;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SetMorphTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TargetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Weight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetMorphTarget(class USkeletalMeshComponent* SkeletalMeshComponent, class FName TargetName, float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetMorphTarget");

	Params::UARigFunctions_SetMorphTarget_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.TargetName = TargetName;
	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SetActorSelectable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelectable                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SetActorSelectable(class AActor* Actor, bool bSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SetActorSelectable");

	Params::UARigFunctions_SetActorSelectable_Params Parms{};

	Parms.Actor = Actor;
	Parms.bSelectable = bSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.SelectActorInEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::SelectActorInEditor(class AActor* Actor, bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "SelectActorInEditor");

	Params::UARigFunctions_SelectActorInEditor_Params Parms{};

	Parms.Actor = Actor;
	Parms.IsSelected = IsSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RenameActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NewName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::RenameActor(class AActor* Actor, class FName NewName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RenameActor");

	Params::UARigFunctions_RenameActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.NewName = NewName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RemoveTrackFromBinding
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMovieSceneTrack>TrackClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::RemoveTrackFromBinding(class ULevelSequence* LevelSequence, TSubclassOf<class UMovieSceneTrack> TrackClass, const struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RemoveTrackFromBinding");

	Params::UARigFunctions_RemoveTrackFromBinding_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.TrackClass = TrackClass;
	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RemoveStaticCurvesForActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bRemoveBinding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::RemoveStaticCurvesForActors(class ULevelSequence* LevelSequence, const TArray<class AActor*>& Actors, bool bRemoveBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RemoveStaticCurvesForActors");

	Params::UARigFunctions_RemoveStaticCurvesForActors_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actors = Actors;
	Parms.bRemoveBinding = bRemoveBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RemoveStaticCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveBinding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::RemoveStaticCurves(class ULevelSequence* LevelSequence, bool bRemoveBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RemoveStaticCurves");

	Params::UARigFunctions_RemoveStaticCurves_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.bRemoveBinding = bRemoveBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RemoveBindingFromSequencer
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::RemoveBindingFromSequencer(class ULevelSequence* LevelSequence, const struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RemoveBindingFromSequencer");

	Params::UARigFunctions_RemoveBindingFromSequencer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.RemapVectorFromAim
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              RollValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InVector                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARigFunctions::RemapVectorFromAim(float RollValue, const struct FVector& InVector, const struct FAimSettings& AimSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "RemapVectorFromAim");

	Params::UARigFunctions_RemapVectorFromAim_Params Parms{};

	Parms.RollValue = RollValue;
	Parms.InVector = InVector;
	Parms.AimSettings = AimSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.PromtDialogue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Title                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Ok                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Cancel                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             Objects                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARigFunctions::PromtDialogue(const class FString& Title, const class FString& Message, const class FString& Ok, const class FString& Cancel, const TArray<class UObject*>& Objects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "PromtDialogue");

	Params::UARigFunctions_PromtDialogue_Params Parms{};

	Parms.Title = Title;
	Parms.Message = Message;
	Parms.Ok = Ok;
	Parms.Cancel = Cancel;
	Parms.Objects = Objects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.PreviewSetAnimPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SequenceIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequenceBase*           InAnimSequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPosition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Weight                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::PreviewSetAnimPosition(class USkeletalMeshComponent* SkelMeshComp, int32 SequenceIndex, class UAnimSequenceBase* InAnimSequence, float InPosition, float Weight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "PreviewSetAnimPosition");

	Params::UARigFunctions_PreviewSetAnimPosition_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.SequenceIndex = SequenceIndex;
	Parms.InAnimSequence = InAnimSequence;
	Parms.InPosition = InPosition;
	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.PostProcessAnimSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::PostProcessAnimSequence(class UAnimSequence* AnimSequence, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "PostProcessAnimSequence");

	Params::UARigFunctions_PostProcessAnimSequence_Params Parms{};

	Parms.AnimSequence = AnimSequence;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.PostEditChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::PostEditChange(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "PostEditChange");

	Params::UARigFunctions_PostEditChange_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.PasteKeysToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*SourceSection                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PasteTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieScene3DTransformSection* UARigFunctions::PasteKeysToActor(class ULevelSequence* LevelSequence, class AActor* Actor, class UMovieScene3DTransformSection* SourceSection, float PasteTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "PasteKeysToActor");

	Params::UARigFunctions_PasteKeysToActor_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;
	Parms.SourceSection = SourceSection;
	Parms.PasteTime = PasteTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.ParentConstraintLerp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  A                                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  B                                                                (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetA                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetB                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARigFunctions::ParentConstraintLerp(const struct FTransform& A, const struct FTransform& B, const struct FTransform& OffsetA, const struct FTransform& OffsetB, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "ParentConstraintLerp");

	Params::UARigFunctions_ParentConstraintLerp_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.OffsetA = OffsetA;
	Parms.OffsetB = OffsetB;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.Parent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Child                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Parent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::Parent(class AActor* Child, class AActor* Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "Parent");

	Params::UARigFunctions_Parent_Params Parms{};

	Parms.Child = Child;
	Parms.Parent = Parent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.OpenEditorForAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::OpenEditorForAsset(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "OpenEditorForAsset");

	Params::UARigFunctions_OpenEditorForAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.NotificationBox
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeIn                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Expire                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FadeOut                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutputLog                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::NotificationBox(const class FString& String, float FadeIn, float Expire, float FadeOut, bool bOutputLog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "NotificationBox");

	Params::UARigFunctions_NotificationBox_Params Parms{};

	Parms.String = String;
	Parms.FadeIn = FadeIn;
	Parms.Expire = Expire;
	Parms.FadeOut = FadeOut;
	Parms.bOutputLog = bOutputLog;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.ModifyObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::ModifyObject(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "ModifyObject");

	Params::UARigFunctions_ModifyObject_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.MatchesWildcard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SourceName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Wildcard                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESearchCase             SearchCase                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARigFunctions::MatchesWildcard(class FName SourceName, class FName Wildcard, enum class ESearchCase SearchCase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "MatchesWildcard");

	Params::UARigFunctions_MatchesWildcard_Params Parms{};

	Parms.SourceName = SourceName;
	Parms.Wildcard = Wildcard;
	Parms.SearchCase = SearchCase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.LerpVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARigFunctions::LerpVector(const struct FVector& A, const struct FVector& B, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "LerpVector");

	Params::UARigFunctions_LerpVector_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.KeyAllActiveCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::KeyAllActiveCurves(class USkeletalMeshComponent* SkelMeshComp, class UAnimSequence* AnimSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "KeyAllActiveCurves");

	Params::UARigFunctions_KeyAllActiveCurves_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.AnimSequence = AnimSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.IsSequencerHasBindingForActor
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARigFunctions::IsSequencerHasBindingForActor(class AActor* Actor, class ULevelSequence* LevelSequence, struct FGuid* Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "IsSequencerHasBindingForActor");

	Params::UARigFunctions_IsSequencerHasBindingForActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.LevelSequence = LevelSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Guid != nullptr)
		*Guid = std::move(Parms.Guid);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GroupController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARigFunctions::GroupController(class AActor* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GroupController");

	Params::UARigFunctions_GroupController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>             Vectors                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Weights                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARigFunctions::GetWeightedAverageVector(const TArray<struct FVector>& Vectors, const TArray<float>& Weights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetWeightedAverageVector");

	Params::UARigFunctions_GetWeightedAverageVector_Params Parms{};

	Parms.Vectors = Vectors;
	Parms.Weights = Weights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FTransform>          Transforms                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Offsets                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Weights                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARigFunctions::GetWeightedAverageTransform(const TArray<struct FTransform>& Transforms, const TArray<struct FTransform>& Offsets, const TArray<float>& Weights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetWeightedAverageTransform");

	Params::UARigFunctions_GetWeightedAverageTransform_Params Parms{};

	Parms.Transforms = Transforms;
	Parms.Offsets = Offsets;
	Parms.Weights = Weights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetWeightedAverageRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FRotator>            Rotators                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      Weights                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UARigFunctions::GetWeightedAverageRotator(const TArray<struct FRotator>& Rotators, const TArray<float>& Weights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetWeightedAverageRotator");

	Params::UARigFunctions_GetWeightedAverageRotator_Params Parms{};

	Parms.Rotators = Rotators;
	Parms.Weights = Weights;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetTransformSectionsForActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UMovieScene3DTransformSection*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMovieScene3DTransformSection*> UARigFunctions::GetTransformSectionsForActors(class ULevelSequence* LevelSequence, const TArray<class AActor*>& Actors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetTransformSectionsForActors");

	Params::UARigFunctions_GetTransformSectionsForActors_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actors = Actors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetTransformSectionFromBinding
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieScene3DTransformSection* UARigFunctions::GetTransformSectionFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetTransformSectionFromBinding");

	Params::UARigFunctions_GetTransformSectionFromBinding_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetTransformSectionFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieScene3DTransformSection* UARigFunctions::GetTransformSectionFromActor(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetTransformSectionFromActor");

	Params::UARigFunctions_GetTransformSectionFromActor_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetSpaceBases
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkinnedMeshComponent*       SkinnedMeshComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          SpaceBases                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARigFunctions::GetSpaceBases(class USkinnedMeshComponent* SkinnedMeshComponent, TArray<struct FTransform>* SpaceBases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSpaceBases");

	Params::UARigFunctions_GetSpaceBases_Params Parms{};

	Parms.SkinnedMeshComponent = SkinnedMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpaceBases != nullptr)
		*SpaceBases = std::move(Parms.SpaceBases);

}


// Function ARigRuntime.ARigFunctions.GetSoftIkStretchDistance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ChainLength                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SoftPoint                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARigFunctions::GetSoftIkStretchDistance(float Distance, float ChainLength, float SoftPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSoftIkStretchDistance");

	Params::UARigFunctions_GetSoftIkStretchDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.ChainLength = ChainLength;
	Parms.SoftPoint = SoftPoint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetSequencersWithActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>              Actors                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UObject*>             LevelSequences                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARigFunctions::GetSequencersWithActors(const TArray<class AActor*>& Actors, TArray<class UObject*>* LevelSequences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSequencersWithActors");

	Params::UARigFunctions_GetSequencersWithActors_Params Parms{};

	Parms.Actors = Actors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LevelSequences != nullptr)
		*LevelSequences = std::move(Parms.LevelSequences);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetSequencerPlaybackRange
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlaybackStart                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlaybackEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::GetSequencerPlaybackRange(class ULevelSequence* LevelSequence, int32* PlaybackStart, int32* PlaybackEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSequencerPlaybackRange");

	Params::UARigFunctions_GetSequencerPlaybackRange_Params Parms{};

	Parms.LevelSequence = LevelSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlaybackStart != nullptr)
		*PlaybackStart = Parms.PlaybackStart;

	if (PlaybackEnd != nullptr)
		*PlaybackEnd = Parms.PlaybackEnd;

}


// Function ARigRuntime.ARigFunctions.GetSequencerFrameRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARigFunctions::GetSequencerFrameRate(class ULevelSequence* LevelSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSequencerFrameRate");

	Params::UARigFunctions_GetSequencerFrameRate_Params Parms{};

	Parms.LevelSequence = LevelSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetSequencerFrameInterval
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARigFunctions::GetSequencerFrameInterval(class ULevelSequence* LevelSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSequencerFrameInterval");

	Params::UARigFunctions_GetSequencerFrameInterval_Params Parms{};

	Parms.LevelSequence = LevelSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetSequencerComponents
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGuid>               Guids                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class USceneComponent*>     SceneComponents                                                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UARigFunctions::GetSequencerComponents(class ULevelSequence* LevelSequence, TArray<struct FGuid>* Guids, TArray<class USceneComponent*>* SceneComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetSequencerComponents");

	Params::UARigFunctions_GetSequencerComponents_Params Parms{};

	Parms.LevelSequence = LevelSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Guids != nullptr)
		*Guids = std::move(Parms.Guids);

	if (SceneComponents != nullptr)
		*SceneComponents = std::move(Parms.SceneComponents);

}


// Function ARigRuntime.ARigFunctions.GetRigMapping
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeleton*                   Skeleton                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                BaseNames                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FName>                RigNames                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARigFunctions::GetRigMapping(class USkeleton* Skeleton, const TArray<class FName>& BaseNames, TArray<class FName>* RigNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetRigMapping");

	Params::UARigFunctions_GetRigMapping_Params Parms{};

	Parms.Skeleton = Skeleton;
	Parms.BaseNames = BaseNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RigNames != nullptr)
		*RigNames = std::move(Parms.RigNames);

}


// Function ARigRuntime.ARigFunctions.GetPoleVectorLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Up                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Multiply                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARigFunctions::GetPoleVectorLocation(const struct FVector& Up, const struct FVector& Mid, const struct FVector& End, float Multiply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetPoleVectorLocation");

	Params::UARigFunctions_GetPoleVectorLocation_Params Parms{};

	Parms.Up = Up;
	Parms.Mid = Mid;
	Parms.End = End;
	Parms.Multiply = Multiply;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetLastRenderTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARigFunctions::GetLastRenderTime(class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetLastRenderTime");

	Params::UARigFunctions_GetLastRenderTime_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetFloatSectionsFromBinding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMovieSceneFloatSection*>FloatSections                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<class FName>                PropertyNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARigFunctions::GetFloatSectionsFromBinding(class ULevelSequence* LevelSequence, const struct FGuid& Guid, TArray<class UMovieSceneFloatSection*>* FloatSections, TArray<class FName>* PropertyNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetFloatSectionsFromBinding");

	Params::UARigFunctions_GetFloatSectionsFromBinding_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FloatSections != nullptr)
		*FloatSections = std::move(Parms.FloatSections);

	if (PropertyNames != nullptr)
		*PropertyNames = std::move(Parms.PropertyNames);

}


// Function ARigRuntime.ARigFunctions.GetControllerByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARigFunctions::GetControllerByName(class FName Name, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetControllerByName");

	Params::UARigFunctions_GetControllerByName_Params Parms{};

	Parms.Name = Name;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetClosestAxis
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     TargetVector                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      FirstAxis                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SecondAxis                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::GetClosestAxis(const struct FVector& TargetVector, const struct FTransform& Transform, class FString* FirstAxis, class FString* SecondAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetClosestAxis");

	Params::UARigFunctions_GetClosestAxis_Params Parms{};

	Parms.TargetVector = TargetVector;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FirstAxis != nullptr)
		*FirstAxis = std::move(Parms.FirstAxis);

	if (SecondAxis != nullptr)
		*SecondAxis = std::move(Parms.SecondAxis);

}


// Function ARigRuntime.ARigFunctions.GetBoneSocketTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARigFunctions::GetBoneSocketTransform(class USkeletalMeshComponent* SkelMeshComp, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetBoneSocketTransform");

	Params::UARigFunctions_GetBoneSocketTransform_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetBonesHierarchy
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RootBone                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UARigFunctions::GetBonesHierarchy(class USkeletalMeshComponent* SkelMeshComp, class FName RootBone, class FName TipBone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetBonesHierarchy");

	Params::UARigFunctions_GetBonesHierarchy_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.RootBone = RootBone;
	Parms.TipBone = TipBone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetAssetWithOpenedEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UARigFunctions::GetAssetWithOpenedEditor(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetAssetWithOpenedEditor");

	Params::UARigFunctions_GetAssetWithOpenedEditor_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetAssetsByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UARigFunctions::GetAssetsByClass(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetAssetsByClass");

	Params::UARigFunctions_GetAssetsByClass_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetAnimSectionsFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UMovieSceneSkeletalAnimationSection*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UMovieSceneSkeletalAnimationSection*> UARigFunctions::GetAnimSectionsFromActor(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetAnimSectionsFromActor");

	Params::UARigFunctions_GetAnimSectionsFromActor_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetAimSettings
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Aim                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Up                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAimSettings UARigFunctions::GetAimSettings(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetAimSettings");

	Params::UARigFunctions_GetAimSettings_Params Parms{};

	Parms.Aim = Aim;
	Parms.Up = Up;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.GetAimAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Aim                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Up                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAimSettings UARigFunctions::GetAimAxis(const struct FVector& Aim, const struct FVector& Up, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "GetAimAxis");

	Params::UARigFunctions_GetAimAxis_Params Parms{};

	Parms.Aim = Aim;
	Parms.Up = Up;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.FilterAimOffsetAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAxisEnum               AimAxis                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UARigFunctions::FilterAimOffsetAxis(enum class EAxisEnum AimAxis, const struct FRotator& Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "FilterAimOffsetAxis");

	Params::UARigFunctions_FilterAimOffsetAxis_Params Parms{};

	Parms.AimAxis = AimAxis;
	Parms.Offset = Offset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.EvaluateTransformSection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection*TransformSection                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARigFunctions::EvaluateTransformSection(class UMovieScene3DTransformSection* TransformSection, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "EvaluateTransformSection");

	Params::UARigFunctions_EvaluateTransformSection_Params Parms{};

	Parms.TransformSection = TransformSection;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.EvaluateFloatSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneFloatSection*     FloatSection                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UARigFunctions::EvaluateFloatSection(class UMovieSceneFloatSection* FloatSection, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "EvaluateFloatSection");

	Params::UARigFunctions_EvaluateFloatSection_Params Parms{};

	Parms.FloatSection = FloatSection;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.CreateEmptyController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARigFunctions::CreateEmptyController(class AActor* Rig, class FName Name, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CreateEmptyController");

	Params::UARigFunctions_CreateEmptyController_Params Parms{};

	Parms.Rig = Rig;
	Parms.Name = Name;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.CreateControllerFromSocket
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Ending                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FControllerShapeData        Shape                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerLimits           Limits                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      Controller                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Group                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Offset                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGroup                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWorldOrientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateOffset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::CreateControllerFromSocket(class UClass* Class, class AActor* Rig, class USkeletalMeshComponent* SkelMeshComp, class FName Name, class FName Ending, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, class AActor** Controller, class AActor** Group, class AActor** Offset, bool bGroup, bool bWorldOrientation, bool bCreateOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CreateControllerFromSocket");

	Params::UARigFunctions_CreateControllerFromSocket_Params Parms{};

	Parms.Class = Class;
	Parms.Rig = Rig;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Name = Name;
	Parms.Ending = Ending;
	Parms.Shape = Shape;
	Parms.Limits = Limits;
	Parms.bGroup = bGroup;
	Parms.bWorldOrientation = bWorldOrientation;
	Parms.bCreateOffset = bCreateOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (Group != nullptr)
		*Group = Parms.Group;

	if (Offset != nullptr)
		*Offset = Parms.Offset;

}


// Function ARigRuntime.ARigFunctions.CreateController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerShapeData        Shape                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FControllerLimits           Limits                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    RelativeRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARigFunctions::CreateController(class UClass* Class, class AActor* Rig, class FName Name, const struct FTransform& Transform, const struct FControllerShapeData& Shape, const struct FControllerLimits& Limits, const struct FRotator& RelativeRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CreateController");

	Params::UARigFunctions_CreateController_Params Parms{};

	Parms.Class = Class;
	Parms.Rig = Rig;
	Parms.Name = Name;
	Parms.Transform = Transform;
	Parms.Shape = Shape;
	Parms.Limits = Limits;
	Parms.RelativeRotation = RelativeRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.CreateConstraint
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Targets                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bVisibility                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      UpActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ARigConstraint*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ARigConstraint* UARigFunctions::CreateConstraint(class UClass* Class, const TArray<class AActor*>& Targets, bool bVisibility, class AActor* UpActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CreateConstraint");

	Params::UARigFunctions_CreateConstraint_Params Parms{};

	Parms.Class = Class;
	Parms.Targets = Targets;
	Parms.bVisibility = bVisibility;
	Parms.UpActor = UpActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.CreateAnimSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               AnimSequence                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::CreateAnimSequence(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence** AnimSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CreateAnimSequence");

	Params::UARigFunctions_CreateAnimSequence_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimSequence != nullptr)
		*AnimSequence = Parms.AnimSequence;

}


// Function ARigRuntime.ARigFunctions.CopyTransformSectionCurve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UMovieScene3DTransformSection*SourceTransformSection                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*TargetTransformSection                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETransformType          TransformType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAxis                   Axis                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::CopyTransformSectionCurve(class UMovieScene3DTransformSection* SourceTransformSection, class UMovieScene3DTransformSection* TargetTransformSection, enum class ETransformType TransformType, enum class EAxis Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CopyTransformSectionCurve");

	Params::UARigFunctions_CopyTransformSectionCurve_Params Parms{};

	Parms.SourceTransformSection = SourceTransformSection;
	Parms.TargetTransformSection = TargetTransformSection;
	Parms.TransformType = TransformType;
	Parms.Axis = Axis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.ConvertTransformToRelativeReverse
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  WorldTransform                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LocalTransform                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARigFunctions::ConvertTransformToRelativeReverse(const struct FTransform& WorldTransform, const struct FTransform& LocalTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "ConvertTransformToRelativeReverse");

	Params::UARigFunctions_ConvertTransformToRelativeReverse_Params Parms{};

	Parms.WorldTransform = WorldTransform;
	Parms.LocalTransform = LocalTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.CloseAllEditorsForAsset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Asset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::CloseAllEditorsForAsset(class UObject* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "CloseAllEditorsForAsset");

	Params::UARigFunctions_CloseAllEditorsForAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.AppendName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UARigFunctions::AppendName(class FName A, class FName B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AppendName");

	Params::UARigFunctions_AppendName_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AimConstraint
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Aim                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Up                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UARigFunctions::AimConstraint(const struct FVector& Aim, const struct FVector& Up, const struct FVector& Target, const struct FAimSettings& AimSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AimConstraint");

	Params::UARigFunctions_AimConstraint_Params Parms{};

	Parms.Aim = Aim;
	Parms.Up = Up;
	Parms.Target = Target;
	Parms.AimSettings = AimSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AddTransformTrack
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndFrame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieScene3DTransformSection*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieScene3DTransformSection* UARigFunctions::AddTransformTrack(class ULevelSequence* LevelSequence, const struct FGuid& Guid, float StartFrame, float EndFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddTransformTrack");

	Params::UARigFunctions_AddTransformTrack_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Guid = Guid;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AddToArrayOfNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        AddName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                InNames                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UARigFunctions::AddToArrayOfNames(class FName AddName, const TArray<class FName>& InNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddToArrayOfNames");

	Params::UARigFunctions_AddToArrayOfNames_Params Parms{};

	Parms.AddName = AddName;
	Parms.InNames = InNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AddToArrayOfActors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      AddActor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              InActors                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UARigFunctions::AddToArrayOfActors(class AActor* AddActor, const TArray<class AActor*>& InActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddToArrayOfActors");

	Params::UARigFunctions_AddToArrayOfActors_Params Parms{};

	Parms.AddActor = AddActor;
	Parms.InActors = InActors;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AddRawKeyFromPose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrameRate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::AddRawKeyFromPose(class USkeletalMeshComponent* SkeletalMeshComponent, class UAnimSequence* AnimSequence, float FrameRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddRawKeyFromPose");

	Params::UARigFunctions_AddRawKeyFromPose_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.AnimSequence = AnimSequence;
	Parms.FrameRate = FrameRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.AddCurveValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::AddCurveValue(class USkeletalMeshComponent* SkelMeshComp, class FName CurveName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddCurveValue");

	Params::UARigFunctions_AddCurveValue_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.CurveName = CurveName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.AddCurveKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TargetName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARigFunctions::AddCurveKey(class UAnimSequence* AnimSequence, class FName TargetName, float Time, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddCurveKey");

	Params::UARigFunctions_AddCurveKey_Params Parms{};

	Parms.AnimSequence = AnimSequence;
	Parms.TargetName = TargetName;
	Parms.Time = Time;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARigFunctions.AddBindingToSequencer
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UARigFunctions::AddBindingToSequencer(class ULevelSequence* LevelSequence, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddBindingToSequencer");

	Params::UARigFunctions_AddBindingToSequencer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARigFunctions.AddAnimTrack
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMovieSceneSkeletalAnimationSection*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSkeletalAnimationSection* UARigFunctions::AddAnimTrack(class ULevelSequence* LevelSequence, class UAnimSequence* AnimSequence, const struct FGuid& Guid, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARigFunctions", "AddAnimTrack");

	Params::UARigFunctions_AddAnimTrack_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.AnimSequence = AnimSequence;
	Parms.Guid = Guid;
	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ARigRuntime.ARCustomCtrl
// (None)

class UClass* UARCustomCtrl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARCustomCtrl");

	return Clss;
}


// ARCustomCtrl ARigRuntime.Default__ARCustomCtrl
// (Public, ClassDefaultObject, ArchetypeObject)

class UARCustomCtrl* UARCustomCtrl::GetDefaultObj()
{
	static class UARCustomCtrl* Default = nullptr;

	if (!Default)
		Default = static_cast<UARCustomCtrl*>(UARCustomCtrl::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARCustomCtrl.UpdateCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData>CustomControllers                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARCustomCtrl::UpdateCustomControllers(const TArray<struct FCustomControllerData>& CustomControllers, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCustomCtrl", "UpdateCustomControllers");

	Params::UARCustomCtrl_UpdateCustomControllers_Params Parms{};

	Parms.CustomControllers = CustomControllers;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARCustomCtrl.PoseCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData>CustomControllers                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARCustomCtrl::PoseCustomControllers(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FCustomControllerData>& CustomControllers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCustomCtrl", "PoseCustomControllers");

	Params::UARCustomCtrl_PoseCustomControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.CustomControllers = CustomControllers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARCustomCtrl.ParentCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData>InCC                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARCustomCtrl::ParentCustomControllers(const TArray<struct FCustomControllerData>& InCC, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCustomCtrl", "ParentCustomControllers");

	Params::UARCustomCtrl_ParentCustomControllers_Params Parms{};

	Parms.InCC = InCC;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARCustomCtrl.KeyCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FCustomControllerData>CustomControllers                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARCustomCtrl::KeyCustomControllers(const TArray<struct FCustomControllerData>& CustomControllers, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCustomCtrl", "KeyCustomControllers");

	Params::UARCustomCtrl_KeyCustomControllers_Params Parms{};

	Parms.CustomControllers = CustomControllers;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARCustomCtrl.CreateCustomControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData>InCC                                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FCustomControllerData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FCustomControllerData> UARCustomCtrl::CreateCustomControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FCustomControllerData>& InCC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARCustomCtrl", "CreateCustomControllers");

	Params::UARCustomCtrl_CreateCustomControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.InCC = InCC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ARigRuntime.ARFace
// (None)

class UClass* UARFace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFace");

	return Clss;
}


// ARFace ARigRuntime.Default__ARFace
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFace* UARFace::GetDefaultObj()
{
	static class UARFace* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFace*>(UARFace::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARFace.UpdateMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARFace::UpdateMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "UpdateMorphTargets");

	Params::UARFace_UpdateMorphTargets_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.UpdateFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFace::UpdateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "UpdateFaceRig");

	Params::UARFace_UpdateFaceRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.UpdateEyes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          EyesTransforms                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFace::UpdateEyes(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, TArray<struct FTransform>* EyesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "UpdateEyes");

	Params::UARFace_UpdateEyes_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EyesTransforms != nullptr)
		*EyesTransforms = std::move(Parms.EyesTransforms);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.UpdateEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          EyesTransforms                                                   (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFace::UpdateEyelids(const struct FFaceSettings& FaceSettings, const struct FBonesTransforms& BonesTransforms, const TArray<struct FTransform>& EyesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "UpdateEyelids");

	Params::UARFace_UpdateEyelids_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.BonesTransforms = BonesTransforms;
	Parms.EyesTransforms = EyesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.PoseMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARFace::PoseMorphTargets(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "PoseMorphTargets");

	Params::UARFace_PoseMorphTargets_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.PoseFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARFace::PoseFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "PoseFaceRig");

	Params::UARFace_PoseFaceRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.PoseEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARFace::PoseEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "PoseEyes");

	Params::UARFace_PoseEyes_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.PoseEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARFace::PoseEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "PoseEyelids");

	Params::UARFace_PoseEyelids_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.KeyMorphTargets
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFace::KeyMorphTargets(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "KeyMorphTargets");

	Params::UARFace_KeyMorphTargets_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.KeyMorphTargetCurves
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class UAnimSequence*               AnimSequence                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateFromSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFace::KeyMorphTargetCurves(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class UAnimSequence* AnimSequence, float Time, bool bUpdateFromSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "KeyMorphTargetCurves");

	Params::UARFace_KeyMorphTargetCurves_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.AnimSequence = AnimSequence;
	Parms.Time = Time;
	Parms.bUpdateFromSource = bUpdateFromSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.KeyFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFace::KeyFaceRig(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "KeyFaceRig");

	Params::UARFace_KeyFaceRig_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.KeyEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFace::KeyEyes(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "KeyEyes");

	Params::UARFace_KeyEyes_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.KeyEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFace::KeyEyelids(const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "KeyEyelids");

	Params::UARFace_KeyEyelids_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFace.InitFaceRigData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::InitFaceRigData(const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "InitFaceRigData");

	Params::UARFace_InitFaceRigData_Params Parms{};

	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.GetEyelidsRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     CtrlPos                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    BoneSpaceR                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              PosMult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Follow                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UARFace::GetEyelidsRotation(const struct FVector& CtrlPos, const struct FRotator& BoneSpaceR, const struct FAimSettings& AimSettings, float PosMult, float Follow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "GetEyelidsRotation");

	Params::UARFace_GetEyelidsRotation_Params Parms{};

	Parms.CtrlPos = CtrlPos;
	Parms.BoneSpaceR = BoneSpaceR;
	Parms.AimSettings = AimSettings;
	Parms.PosMult = PosMult;
	Parms.Follow = Follow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.FaceParentController
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::FaceParentController(const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "FaceParentController");

	Params::UARFace_FaceParentController_Params Parms{};

	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.CreateMorphControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::CreateMorphControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "CreateMorphControllers");

	Params::UARFace_CreateMorphControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.CreateFaceRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::CreateFaceRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "CreateFaceRig");

	Params::UARFace_CreateFaceRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.CreateEyes
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::CreateEyes(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "CreateEyes");

	Params::UARFace_CreateEyes_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.CreateEyelids
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceSettings               ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFaceSettings UARFace::CreateEyelids(class USkeletalMeshComponent* SkelMeshComp, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "CreateEyelids");

	Params::UARFace_CreateEyelids_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFace.ConvertVectorToXZValues
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Vector                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Max                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UARFace::ConvertVectorToXZValues(const struct FVector& Vector, float Max)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFace", "ConvertVectorToXZValues");

	Params::UARFace_ConvertVectorToXZValues_Params Parms{};

	Parms.Vector = Vector;
	Parms.Max = Max;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ARigRuntime.ARFkHierarchy
// (None)

class UClass* UARFkHierarchy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFkHierarchy");

	return Clss;
}


// ARFkHierarchy ARigRuntime.Default__ARFkHierarchy
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFkHierarchy* UARFkHierarchy::GetDefaultObj()
{
	static class UARFkHierarchy* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFkHierarchy*>(UARFkHierarchy::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARFkHierarchy.UpdateFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData>    FkHierarchy                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkHierarchy::UpdateFkHierarchyRigs(const TArray<struct FFkHierarchyData>& FkHierarchy, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "UpdateFkHierarchyRigs");

	Params::UARFkHierarchy_UpdateFkHierarchyRigs_Params Parms{};

	Parms.FkHierarchy = FkHierarchy;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData>    FkHierarchyRigs                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARFkHierarchy::PoseFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkHierarchyData>& FkHierarchyRigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "PoseFkHierarchyRigs");

	Params::UARFkHierarchy_PoseFkHierarchyRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkHierarchyRigs = FkHierarchyRigs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkHierarchy.PoseFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData            FkHierarchyData                                                  (Parm, NativeAccessSpecifierPublic)

void UARFkHierarchy::PoseFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "PoseFkHierarchyRig");

	Params::UARFkHierarchy_PoseFkHierarchyRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkHierarchyData = FkHierarchyData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkHierarchy.ParentFkHierarchyRigs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData>    FkHRigs                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkHierarchy::ParentFkHierarchyRigs(TArray<struct FFkHierarchyData>* FkHRigs, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "ParentFkHierarchyRigs");

	Params::UARFkHierarchy_ParentFkHierarchyRigs_Params Parms{};

	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FkHRigs != nullptr)
		*FkHRigs = std::move(Parms.FkHRigs);

}


// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkHierarchyData>    FkHierarchyRigs                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkHierarchy::KeyFkHierarchyRigs(const TArray<struct FFkHierarchyData>& FkHierarchyRigs, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "KeyFkHierarchyRigs");

	Params::UARFkHierarchy_KeyFkHierarchyRigs_Params Parms{};

	Parms.FkHierarchyRigs = FkHierarchyRigs;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkHierarchy.KeyFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkHierarchyData            FkHierarchyData                                                  (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkHierarchy::KeyFkHierarchyRig(const struct FFkHierarchyData& FkHierarchyData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "KeyFkHierarchyRig");

	Params::UARFkHierarchy_KeyFkHierarchyRig_Params Parms{};

	Parms.FkHierarchyData = FkHierarchyData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData>    FkHRigs                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FFkHierarchyData>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFkHierarchyData> UARFkHierarchy::CreateFkHierarchyRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FFkHierarchyData>& FkHRigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "CreateFkHierarchyRigs");

	Params::UARFkHierarchy_CreateFkHierarchyRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.FkHRigs = FkHRigs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkHierarchy.CreateFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData            FkH                                                              (Parm, NativeAccessSpecifierPublic)
// struct FFkHierarchyData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFkHierarchyData UARFkHierarchy::CreateFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkHierarchyData& FkH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkHierarchy", "CreateFkHierarchyRig");

	Params::UARFkHierarchy_CreateFkHierarchyRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.FkH = FkH;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ARigRuntime.ARFkIk
// (None)

class UClass* UARFkIk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARFkIk");

	return Clss;
}


// ARFkIk ARigRuntime.Default__ARFkIk
// (Public, ClassDefaultObject, ArchetypeObject)

class UARFkIk* UARFkIk::GetDefaultObj()
{
	static class UARFkIk* Default = nullptr;

	if (!Default)
		Default = static_cast<UARFkIk*>(UARFkIk::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARFkIk.UpdateTwoBoneTwistLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          InTransforms                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              FkIk                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateTwoBoneTwistLimb(const struct FFkIkData& FkIkData, const TArray<struct FTransform>& InTransforms, float FkIk, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateTwoBoneTwistLimb");

	Params::UARFkIk_UpdateTwoBoneTwistLimb_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.InTransforms = InTransforms;
	Parms.FkIk = FkIk;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateTwoBoneFkIk
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// float                              FkIk                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchSoftness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PoleVectorLock                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Low                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Mid                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Up                                                               (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::UpdateTwoBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, const struct FVector& CharScale, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateTwoBoneFkIk");

	Params::UARFkIk_UpdateTwoBoneFkIk_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.FkIk = FkIk;
	Parms.bAllowStretching = bAllowStretching;
	Parms.StretchScale = StretchScale;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchSoftness = StretchSoftness;
	Parms.PoleVectorLock = PoleVectorLock;
	Parms.CharScale = CharScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Low != nullptr)
		*Low = std::move(Parms.Low);

	if (Mid != nullptr)
		*Mid = std::move(Parms.Mid);

	if (Up != nullptr)
		*Up = std::move(Parms.Up);

}


// Function ARigRuntime.ARFkIk.UpdateTwistBones
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTwistBonesData             TwistBonesData                                                   (Parm, NativeAccessSpecifierPublic)
// struct FTransform                  UpperT                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowerT                                                           (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARFkIk::UpdateTwistBones(const struct FTwistBonesData& TwistBonesData, const struct FTransform& UpperT, const struct FTransform& LowerT, struct FBonesTransforms* BonesTransforms, const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateTwistBones");

	Params::UARFkIk_UpdateTwistBones_Params Parms{};

	Parms.TwistBonesData = TwistBonesData;
	Parms.UpperT = UpperT;
	Parms.LowerT = LowerT;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesTransforms != nullptr)
		*BonesTransforms = std::move(Parms.BonesTransforms);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateThreeBoneTwistLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          InTransforms                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateThreeBoneTwistLimb(const struct FFkIkData& FkIkData, const TArray<struct FTransform>& InTransforms, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateThreeBoneTwistLimb");

	Params::UARFkIk_UpdateThreeBoneTwistLimb_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.InTransforms = InTransforms;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateThreeBoneFkIk
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// float                              FkIk                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchSoftness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PoleVectorLock                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Bend                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Tip                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Low                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Mid                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Up                                                               (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::UpdateThreeBoneFkIk(const struct FFkIkData& FkIkData, float FkIk, bool bAllowStretching, float StretchScale, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, const struct FVector& CharScale, struct FTransform* Tip, struct FTransform* Low, struct FTransform* Mid, struct FTransform* Up)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateThreeBoneFkIk");

	Params::UARFkIk_UpdateThreeBoneFkIk_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.FkIk = FkIk;
	Parms.bAllowStretching = bAllowStretching;
	Parms.StretchScale = StretchScale;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchSoftness = StretchSoftness;
	Parms.PoleVectorLock = PoleVectorLock;
	Parms.Bend = Bend;
	Parms.CharScale = CharScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tip != nullptr)
		*Tip = std::move(Parms.Tip);

	if (Low != nullptr)
		*Low = std::move(Parms.Low);

	if (Mid != nullptr)
		*Mid = std::move(Parms.Mid);

	if (Up != nullptr)
		*Up = std::move(Parms.Up);

}


// Function ARigRuntime.ARFkIk.UpdateFootRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFootControllersData        FootControllersData                                              (Parm, NativeAccessSpecifierPublic)
// float                              FootRoll                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToeRoll                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HeelTwist                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ToeTwist                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FkIk                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::UpdateFootRig(const struct FFootControllersData& FootControllersData, float FootRoll, float ToeRoll, float HeelTwist, float ToeTwist, float FkIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFootRig");

	Params::UARFkIk_UpdateFootRig_Params Parms{};

	Parms.FootControllersData = FootControllersData;
	Parms.FootRoll = FootRoll;
	Parms.ToeRoll = ToeRoll;
	Parms.HeelTwist = HeelTwist;
	Parms.ToeTwist = ToeTwist;
	Parms.FkIk = FkIk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.UpdateFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateFoot(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFoot");

	Params::UARFkIk_UpdateFoot_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateFkIkRigs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>           FkIkRigs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFkIkRigs");

	Params::UARFkIk_UpdateFkIkRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkRigs = FkIkRigs;
	Parms.CharScale = CharScale;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateFkIkRig
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateFkIkRig(const struct FFkIkData& FkIkData, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFkIkRig");

	Params::UARFkIk_UpdateFkIkRig_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.CharScale = CharScale;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateFingersRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateFingersRig(const struct FFkIkData& FkIkData, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFingersRig");

	Params::UARFkIk_UpdateFingersRig_Params Parms{};

	Parms.FkIkData = FkIkData;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.UpdateFingersGroups
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bEnableFingers                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Curl                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Spread                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Relax                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ThumbCurl                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ThumbRoll                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ThumbPitch                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ThumbYaw                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAxisEnum               FingersAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FRotator>            Offsets                                                          (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARFkIk::UpdateFingersGroups(const struct FFingersData& FingersData, bool bEnableFingers, float Curl, float Spread, float Relax, float ThumbCurl, float ThumbRoll, float ThumbPitch, float ThumbYaw, enum class EAxisEnum FingersAxis, const TArray<struct FRotator>& Offsets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFingersGroups");

	Params::UARFkIk_UpdateFingersGroups_Params Parms{};

	Parms.FingersData = FingersData;
	Parms.bEnableFingers = bEnableFingers;
	Parms.Curl = Curl;
	Parms.Spread = Spread;
	Parms.Relax = Relax;
	Parms.ThumbCurl = ThumbCurl;
	Parms.ThumbRoll = ThumbRoll;
	Parms.ThumbPitch = ThumbPitch;
	Parms.ThumbYaw = ThumbYaw;
	Parms.FingersAxis = FingersAxis;
	Parms.Offsets = Offsets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.UpdateFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARFkIk::UpdateFingers(const struct FFingersData& FingersData, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "UpdateFingers");

	Params::UARFkIk_UpdateFingers_Params Parms{};

	Parms.FingersData = FingersData;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.ThreeBoneIkOpt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  EffectorPos                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  RootPos                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  SecondIkPos                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     UpPV                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LowPV                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              UpLength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MidLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LowLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchSoftness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PoleVectorLock                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Bend                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  UpBone                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  TipBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::ThreeBoneIkOpt(const struct FTransform& EffectorPos, const struct FTransform& RootPos, const struct FTransform& SecondIkPos, const struct FRotator& Roll, const struct FVector& UpPV, const struct FVector& LowPV, float UpLength, float MidLength, float LowLength, float StretchScale, bool bAllowStretching, bool bSoftStretch, float StretchSoftness, float PoleVectorLock, float Bend, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* TipBone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "ThreeBoneIkOpt");

	Params::UARFkIk_ThreeBoneIkOpt_Params Parms{};

	Parms.EffectorPos = EffectorPos;
	Parms.RootPos = RootPos;
	Parms.SecondIkPos = SecondIkPos;
	Parms.Roll = Roll;
	Parms.UpPV = UpPV;
	Parms.LowPV = LowPV;
	Parms.UpLength = UpLength;
	Parms.MidLength = MidLength;
	Parms.LowLength = LowLength;
	Parms.StretchScale = StretchScale;
	Parms.bAllowStretching = bAllowStretching;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchSoftness = StretchSoftness;
	Parms.PoleVectorLock = PoleVectorLock;
	Parms.Bend = Bend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpBone != nullptr)
		*UpBone = std::move(Parms.UpBone);

	if (MidBone != nullptr)
		*MidBone = std::move(Parms.MidBone);

	if (LowBone != nullptr)
		*LowBone = std::move(Parms.LowBone);

	if (TipBone != nullptr)
		*TipBone = std::move(Parms.TipBone);

}


// Function ARigRuntime.ARFkIk.ThreeBoneIk
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  EffectorPos                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     UpPV                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LowPV                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  UpBoneWorld                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBoneLocal                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneLocal                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  TipBoneLocal                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                UpAimSettings                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                MidAimSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                LowAimSettings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bAllowStretching                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSoftStretch                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StretchScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  UpBone                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBone                                                          (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Tip                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::ThreeBoneIk(const struct FTransform& EffectorPos, const struct FVector& UpPV, const struct FVector& LowPV, const struct FTransform& UpBoneWorld, const struct FTransform& MidBoneLocal, const struct FTransform& LowBoneLocal, const struct FTransform& TipBoneLocal, const struct FAimSettings& UpAimSettings, const struct FAimSettings& MidAimSettings, const struct FAimSettings& LowAimSettings, const struct FRotator& Roll, bool bAllowStretching, bool bSoftStretch, float StretchScale, struct FTransform* UpBone, struct FTransform* MidBone, struct FTransform* LowBone, struct FTransform* Tip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "ThreeBoneIk");

	Params::UARFkIk_ThreeBoneIk_Params Parms{};

	Parms.EffectorPos = EffectorPos;
	Parms.UpPV = UpPV;
	Parms.LowPV = LowPV;
	Parms.UpBoneWorld = UpBoneWorld;
	Parms.MidBoneLocal = MidBoneLocal;
	Parms.LowBoneLocal = LowBoneLocal;
	Parms.TipBoneLocal = TipBoneLocal;
	Parms.UpAimSettings = UpAimSettings;
	Parms.MidAimSettings = MidAimSettings;
	Parms.LowAimSettings = LowAimSettings;
	Parms.Roll = Roll;
	Parms.bAllowStretching = bAllowStretching;
	Parms.bSoftStretch = bSoftStretch;
	Parms.StretchScale = StretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpBone != nullptr)
		*UpBone = std::move(Parms.UpBone);

	if (MidBone != nullptr)
		*MidBone = std::move(Parms.MidBone);

	if (LowBone != nullptr)
		*LowBone = std::move(Parms.LowBone);

	if (Tip != nullptr)
		*Tip = std::move(Parms.Tip);

}


// Function ARigRuntime.ARFkIk.SnapTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)

void UARFkIk::SnapTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "SnapTwoBoneIk");

	Params::UARFkIk_SnapTwoBoneIk_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TwoBoneIkData = TwoBoneIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.SnapThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)

void UARFkIk::SnapThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "SnapThreeBoneIk");

	Params::UARFkIk_SnapThreeBoneIk_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TwoBoneIkData = TwoBoneIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.SnapFkIkLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::SnapFkIkLimb(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "SnapFkIkLimb");

	Params::UARFkIk_SnapFkIkLimb_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkData = FkIkData;
	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.SnapFkHierarchyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkHierarchyData            FkHierarchyData                                                  (Parm, NativeAccessSpecifierPublic)

void UARFkIk::SnapFkHierarchyRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkHierarchyData& FkHierarchyData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "SnapFkHierarchyRig");

	Params::UARFkIk_SnapFkHierarchyRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkHierarchyData = FkHierarchyData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.SetFingersProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)
// class AARControllerFkIk*           FkIkController                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      IkController                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::SetFingersProperties(const struct FFingersData& FingersData, class AARControllerFkIk* FkIkController, class AActor* IkController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "SetFingersProperties");

	Params::UARFkIk_SetFingersProperties_Params Parms{};

	Parms.FingersData = FingersData;
	Parms.FkIkController = FkIkController;
	Parms.IkController = IkController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)

void UARFkIk::PoseTwoBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseTwoBoneIk");

	Params::UARFkIk_PoseTwoBoneIk_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TwoBoneIkData = TwoBoneIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseTwistControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwistBonesData             TwistBonesData                                                   (Parm, NativeAccessSpecifierPublic)

void UARFkIk::PoseTwistControllers(class USkeletalMeshComponent* SkelMeshComp, const struct FTwistBonesData& TwistBonesData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseTwistControllers");

	Params::UARFkIk_PoseTwistControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TwistBonesData = TwistBonesData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)

void UARFkIk::PoseThreeBoneIk(class USkeletalMeshComponent* SkelMeshComp, const struct FTwoBoneIkData& TwoBoneIkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseThreeBoneIk");

	Params::UARFkIk_PoseThreeBoneIk_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TwoBoneIkData = TwoBoneIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Toe                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFootControllersData        FootControllersData                                              (Parm, NativeAccessSpecifierPublic)

void UARFkIk::PoseFoot(class USkeletalMeshComponent* SkelMeshComp, class FName Toe, const struct FFootControllersData& FootControllersData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseFoot");

	Params::UARFkIk_PoseFoot_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Toe = Toe;
	Parms.FootControllersData = FootControllersData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>           FkIkRigs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UARFkIk::PoseFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseFkIkRigs");

	Params::UARFkIk_PoseFkIkRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkRigs = FkIkRigs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.PoseFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)

void UARFkIk::PoseFingers(class USkeletalMeshComponent* SkelMeshComp, const struct FFingersData& FingersData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "PoseFingers");

	Params::UARFkIk_PoseFingers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FingersData = FingersData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.ParentFkIkRigs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFkIkData>           FkIkRigs                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::ParentFkIkRigs(TArray<struct FFkIkData>* FkIkRigs, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "ParentFkIkRigs");

	Params::UARFkIk_ParentFkIkRigs_Params Parms{};

	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FkIkRigs != nullptr)
		*FkIkRigs = std::move(Parms.FkIkRigs);

}


// Function ARigRuntime.ARFkIk.KeyTwoBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyTwoBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyTwoBoneIk");

	Params::UARFkIk_KeyTwoBoneIk_Params Parms{};

	Parms.TwoBoneIkData = TwoBoneIkData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyTwistControllers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwistBonesData             TwistBonesData                                                   (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyTwistControllers(const struct FTwistBonesData& TwistBonesData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyTwistControllers");

	Params::UARFkIk_KeyTwistControllers_Params Parms{};

	Parms.TwistBonesData = TwistBonesData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyThreeBoneIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTwoBoneIkData              TwoBoneIkData                                                    (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyThreeBoneIk(const struct FTwoBoneIkData& TwoBoneIkData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyThreeBoneIk");

	Params::UARFkIk_KeyThreeBoneIk_Params Parms{};

	Parms.TwoBoneIkData = TwoBoneIkData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyFoot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFootControllersData        FootControllersData                                              (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyFoot(const struct FFootControllersData& FootControllersData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyFoot");

	Params::UARFkIk_KeyFoot_Params Parms{};

	Parms.FootControllersData = FootControllersData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FFkIkData>           FkIkRigs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyFkIkRigs(const TArray<struct FFkIkData>& FkIkRigs, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyFkIkRigs");

	Params::UARFkIk_KeyFkIkRigs_Params Parms{};

	Parms.FkIkRigs = FkIkRigs;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyFkIkLimb
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              Sequencer                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyFkIkLimb(class ULevelSequence* Sequencer, const struct FFkIkData& FkIkData, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyFkIkLimb");

	Params::UARFkIk_KeyFkIkLimb_Params Parms{};

	Parms.Sequencer = Sequencer;
	Parms.FkIkData = FkIkData;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.KeyFingers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::KeyFingers(const struct FFingersData& FingersData, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "KeyFingers");

	Params::UARFkIk_KeyFingers_Params Parms{};

	Parms.FingersData = FingersData;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.GetTwoBoneIkTwistOffsets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  EffectorT                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  PoleVectorT                                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  IkHelperT                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBoneLocalT                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneLocalT                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bPoleVectorSimple                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                UpAimSettings                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                MidAimSettings                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::GetTwoBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FTransform& PoleVectorT, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FAimSettings& AimSettings, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetTwoBoneIkTwistOffsets");

	Params::UARFkIk_GetTwoBoneIkTwistOffsets_Params Parms{};

	Parms.EffectorT = EffectorT;
	Parms.PoleVectorT = PoleVectorT;
	Parms.IkHelperT = IkHelperT;
	Parms.MidBoneLocalT = MidBoneLocalT;
	Parms.LowBoneLocalT = LowBoneLocalT;
	Parms.AimSettings = AimSettings;
	Parms.bPoleVectorSimple = bPoleVectorSimple;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpAimSettings != nullptr)
		*UpAimSettings = std::move(Parms.UpAimSettings);

	if (MidAimSettings != nullptr)
		*MidAimSettings = std::move(Parms.MidAimSettings);

}


// Function ARigRuntime.ARFkIk.GetTwoBoneIkSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UARFkIk::GetTwoBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetTwoBoneIkSettings");

	Params::UARFkIk_GetTwoBoneIkSettings_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

}


// Function ARigRuntime.ARFkIk.GetTwistLimbSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// struct FTwistBonesData             TwistBonesA                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwistBonesData             TwistBonesB                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwistBonesData             TwistBonesC                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UARFkIk::GetTwistLimbSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FFkIkData& FkIkData, struct FTwistBonesData* TwistBonesA, struct FTwistBonesData* TwistBonesB, struct FTwistBonesData* TwistBonesC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetTwistLimbSettings");

	Params::UARFkIk_GetTwistLimbSettings_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.FkIkData = FkIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwistBonesA != nullptr)
		*TwistBonesA = std::move(Parms.TwistBonesA);

	if (TwistBonesB != nullptr)
		*TwistBonesB = std::move(Parms.TwistBonesB);

	if (TwistBonesC != nullptr)
		*TwistBonesC = std::move(Parms.TwistBonesC);

}


// Function ARigRuntime.ARFkIk.GetTwistBonesSettings
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwistBonesData             TwistBonesData                                                   (Parm, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  UpBoneT                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneT                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTwistBonesData             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FTwistBonesData UARFkIk::GetTwistBonesSettings(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwistBonesData& TwistBonesData, const struct FAimSettings& AimSettings, const struct FTransform& UpBoneT, const struct FTransform& LowBoneT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetTwistBonesSettings");

	Params::UARFkIk_GetTwistBonesSettings_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.TwistBonesData = TwistBonesData;
	Parms.AimSettings = AimSettings;
	Parms.UpBoneT = UpBoneT;
	Parms.LowBoneT = LowBoneT;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.GetThreeBoneIkTwistOffsets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  EffectorT                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     UpPoleVectorV                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LowPoleVectorV                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  IkHelperT                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBoneLocalT                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneLocalT                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  TipBoneLocalT                                                    (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  MidBoneT                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  LowBoneT                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettingsA                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettingsB                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bPoleVectorSimple                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                UpAimSettings                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                MidAimSettings                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                LowAimSettings                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UARFkIk::GetThreeBoneIkTwistOffsets(const struct FTransform& EffectorT, const struct FVector& UpPoleVectorV, const struct FVector& LowPoleVectorV, const struct FTransform& IkHelperT, const struct FTransform& MidBoneLocalT, const struct FTransform& LowBoneLocalT, const struct FTransform& TipBoneLocalT, const struct FTransform& MidBoneT, const struct FTransform& LowBoneT, const struct FAimSettings& AimSettingsA, const struct FAimSettings& AimSettingsB, bool bPoleVectorSimple, struct FAimSettings* UpAimSettings, struct FAimSettings* MidAimSettings, struct FAimSettings* LowAimSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetThreeBoneIkTwistOffsets");

	Params::UARFkIk_GetThreeBoneIkTwistOffsets_Params Parms{};

	Parms.EffectorT = EffectorT;
	Parms.UpPoleVectorV = UpPoleVectorV;
	Parms.LowPoleVectorV = LowPoleVectorV;
	Parms.IkHelperT = IkHelperT;
	Parms.MidBoneLocalT = MidBoneLocalT;
	Parms.LowBoneLocalT = LowBoneLocalT;
	Parms.TipBoneLocalT = TipBoneLocalT;
	Parms.MidBoneT = MidBoneT;
	Parms.LowBoneT = LowBoneT;
	Parms.AimSettingsA = AimSettingsA;
	Parms.AimSettingsB = AimSettingsB;
	Parms.bPoleVectorSimple = bPoleVectorSimple;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpAimSettings != nullptr)
		*UpAimSettings = std::move(Parms.UpAimSettings);

	if (MidAimSettings != nullptr)
		*MidAimSettings = std::move(Parms.MidAimSettings);

	if (LowAimSettings != nullptr)
		*LowAimSettings = std::move(Parms.LowAimSettings);

}


// Function ARigRuntime.ARFkIk.GetThreeBoneIkSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UARFkIk::GetThreeBoneIkSettings(class USkeletalMeshComponent* SkelMeshComp, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetThreeBoneIkSettings");

	Params::UARFkIk_GetThreeBoneIkSettings_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

}


// Function ARigRuntime.ARFkIk.GetPvPosFromMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Multiply                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARFkIk::GetPvPosFromMesh(class USkeletalMeshComponent* SkelMeshComp, class FName TipBone, float Multiply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetPvPosFromMesh");

	Params::UARFkIk_GetPvPosFromMesh_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TipBone = TipBone;
	Parms.Multiply = Multiply;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.GetPvPosFromDir
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Multiply                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bArm                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UARFkIk::GetPvPosFromDir(class USkeletalMeshComponent* SkelMeshComp, class FName TipBone, float Multiply, bool bArm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetPvPosFromDir");

	Params::UARFkIk_GetPvPosFromDir_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.TipBone = TipBone;
	Parms.Multiply = Multiply;
	Parms.bArm = bArm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.GetFingersAxis
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFingersData                FingersData                                                      (Parm, NativeAccessSpecifierPublic)
// class AActor*                      IkController                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAxisEnum               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAxisEnum UARFkIk::GetFingersAxis(const struct FFingersData& FingersData, class AActor* IkController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetFingersAxis");

	Params::UARFkIk_GetFingersAxis_Params Parms{};

	Parms.FingersData = FingersData;
	Parms.IkController = IkController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.GetFingerRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Curl                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Spread                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAxisEnum               FingersAxis                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UARFkIk::GetFingerRotation(float Curl, float Spread, enum class EAxisEnum FingersAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "GetFingerRotation");

	Params::UARFkIk_GetFingerRotation_Params Parms{};

	Parms.Curl = Curl;
	Parms.Spread = Spread;
	Parms.FingersAxis = FingersAxis;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.FkIkVis
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)

void UARFkIk::FkIkVis(const struct FFkIkData& FkIkData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "FkIkVis");

	Params::UARFkIk_FkIkVis_Params Parms{};

	Parms.FkIkData = FkIkData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARFkIk.CreateTwoBoneIkRig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FTwoBoneIkData UARFkIk::CreateTwoBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateTwoBoneIkRig");

	Params::UARFkIk_CreateTwoBoneIkRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateTwoBoneIkControllers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UARFkIk::CreateTwoBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateTwoBoneIkControllers");

	Params::UARFkIk_CreateTwoBoneIkControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

}


// Function ARigRuntime.ARFkIk.CreateThreeBoneIkRig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FTwoBoneIkData UARFkIk::CreateThreeBoneIkRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateThreeBoneIkRig");

	Params::UARFkIk_CreateThreeBoneIkRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateThreeBoneIkControllers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UARFkIk::CreateThreeBoneIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FTwoBoneIkData* TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateThreeBoneIkControllers");

	Params::UARFkIk_CreateThreeBoneIkControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TwoBoneIk != nullptr)
		*TwoBoneIk = std::move(Parms.TwoBoneIk);

}


// Function ARigRuntime.ARFkIk.CreatePoleVectorController
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      IkController                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, NativeAccessSpecifierPublic)
// class FName                        TipBone                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bArm                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Controller                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Group                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::CreatePoleVectorController(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, class AActor* IkController, const struct FTwoBoneIkData& TwoBoneIk, class FName TipBone, bool bArm, class AActor** Controller, class AActor** Group)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreatePoleVectorController");

	Params::UARFkIk_CreatePoleVectorController_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.IkController = IkController;
	Parms.TwoBoneIk = TwoBoneIk;
	Parms.TipBone = TipBone;
	Parms.bArm = bArm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

	if (Group != nullptr)
		*Group = Parms.Group;

}


// Function ARigRuntime.ARFkIk.CreateFootRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFootControllersData        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFootControllersData UARFkIk::CreateFootRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFootRig");

	Params::UARFkIk_CreateFootRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkData = FkIkData;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateFkIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>           FkIkRigs                                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFkIkData>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FFkIkData> UARFkIk::CreateFkIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FFkIkData>& FkIkRigs, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFkIkRigs");

	Params::UARFkIk_CreateFkIkRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkRigs = FkIkRigs;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateFkIkRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFkIkData UARFkIk::CreateFkIkRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFkIkRig");

	Params::UARFkIk_CreateFkIkRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkData = FkIkData;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateFkIkControllerRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTwoBoneIkData              TwoBoneIk                                                        (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARFkIk::CreateFkIkControllerRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FTwoBoneIkData& TwoBoneIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFkIkControllerRig");

	Params::UARFkIk_CreateFkIkControllerRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.TwoBoneIk = TwoBoneIk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateFkIkController
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UARFkIk::CreateFkIkController(class AActor* Rig, class FName Name, const struct FTransform& Transform, const struct FVector& Offset, const struct FLinearColor& Color, float Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFkIkController");

	Params::UARFkIk_CreateFkIkController_Params Parms{};

	Parms.Rig = Rig;
	Parms.Name = Name;
	Parms.Transform = Transform;
	Parms.Offset = Offset;
	Parms.Color = Color;
	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.CreateFingersRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFkIkData                   FkIkData                                                         (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFingersData                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFingersData UARFkIk::CreateFingersRig(class USkeletalMeshComponent* SkelMeshComp, const struct FFkIkData& FkIkData, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "CreateFingersRig");

	Params::UARFkIk_CreateFingersRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.FkIkData = FkIkData;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARFkIk.AimIkControllerToBone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      IkController                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      IkOffset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Bone                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bArms                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARFkIk::AimIkControllerToBone(class USkeletalMeshComponent* SkelMeshComp, class AActor* IkController, class AActor* IkOffset, class FName Bone, bool bArms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARFkIk", "AimIkControllerToBone");

	Params::UARFkIk_AimIkControllerToBone_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.IkController = IkController;
	Parms.IkOffset = IkOffset;
	Parms.Bone = Bone;
	Parms.bArms = bArms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ARigRuntime.ARMFunctions
// (None)

class UClass* UARMFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARMFunctions");

	return Clss;
}


// ARMFunctions ARigRuntime.Default__ARMFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UARMFunctions* UARMFunctions::GetDefaultObj()
{
	static class UARMFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UARMFunctions*>(UARMFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARMFunctions.UpdateRig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            SourceBT                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void UARMFunctions::UpdateRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ASkeletalMeshActor* SourceActor, class AActor* Rig, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "UpdateRig");

	Params::UARMFunctions_UpdateRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;
	Parms.SourceActor = SourceActor;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesTransforms != nullptr)
		*BonesTransforms = std::move(Parms.BonesTransforms);

	if (SourceBT != nullptr)
		*SourceBT = std::move(Parms.SourceBT);

}


// Function ARigRuntime.ARMFunctions.UpdatePoseFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARMFunctions::UpdatePoseFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "UpdatePoseFromSource");

	Params::UARMFunctions_UpdatePoseFromSource_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.ModularRigData = ModularRigData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARMFunctions.UpdateModularRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARMFunctions::UpdateModularRig(class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "UpdateModularRig");

	Params::UARMFunctions_UpdateModularRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARMFunctions.UpdateCurvesFromSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UARMFunctions::UpdateCurvesFromSource(class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, const struct FModularRigData& ModularRigData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "UpdateCurvesFromSource");

	Params::UARMFunctions_UpdateCurvesFromSource_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.ModularRigData = ModularRigData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARMFunctions.PoseRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)

void UARMFunctions::PoseRig(class ASkeletalMeshActor* SourceActor, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "PoseRig");

	Params::UARMFunctions_PoseRig_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARMFunctions.KeyRig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARMFunctions::KeyRig(const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "KeyRig");

	Params::UARMFunctions_KeyRig_Params Parms{};

	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARMFunctions.InitModularRigData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FModularRigData             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FModularRigData UARMFunctions::InitModularRigData(const struct FModularRigData& ModularRigData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "InitModularRigData");

	Params::UARMFunctions_InitModularRigData_Params Parms{};

	Parms.ModularRigData = ModularRigData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARMFunctions.CreateModularRig
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UARMFunctions::CreateModularRig(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FModularRigData* ModularRigData, struct FFaceSettings* FaceSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "CreateModularRig");

	Params::UARMFunctions_CreateModularRig_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ModularRigData != nullptr)
		*ModularRigData = std::move(Parms.ModularRigData);

	if (FaceSettings != nullptr)
		*FaceSettings = std::move(Parms.FaceSettings);

}


// Function ARigRuntime.ARMFunctions.CheckSequencers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>              Controllers                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UARMFunctions::CheckSequencers(const TArray<class AActor*>& Controllers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "CheckSequencers");

	Params::UARMFunctions_CheckSequencers_Params Parms{};

	Parms.Controllers = Controllers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARMFunctions.BakeToAnimAssetInternal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeZero                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FPS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               NewAnimSequence                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateSource                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            SourceBT                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void UARMFunctions::BakeToAnimAssetInternal(float Time, float TimeZero, float FPS, class UAnimSequence* NewAnimSequence, class ULevelSequence* LevelSequence, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "BakeToAnimAssetInternal");

	Params::UARMFunctions_BakeToAnimAssetInternal_Params Parms{};

	Parms.Time = Time;
	Parms.TimeZero = TimeZero;
	Parms.FPS = FPS;
	Parms.NewAnimSequence = NewAnimSequence;
	Parms.LevelSequence = LevelSequence;
	Parms.SourceActor = SourceActor;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.bUpdateSource = bUpdateSource;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesTransforms != nullptr)
		*BonesTransforms = std::move(Parms.BonesTransforms);

	if (SourceBT != nullptr)
		*SourceBT = std::move(Parms.SourceBT);

}


// Function ARigRuntime.ARMFunctions.BakeToAnimAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndFrame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUpdateSource                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            SourceBT                                                         (Parm, OutParm, NativeAccessSpecifierPublic)
// class UAnimSequence*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimSequence* UARMFunctions::BakeToAnimAsset(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, bool bUpdateSource, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "BakeToAnimAsset");

	Params::UARMFunctions_BakeToAnimAsset_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;
	Parms.SourceActor = SourceActor;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.bUpdateSource = bUpdateSource;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesTransforms != nullptr)
		*BonesTransforms = std::move(Parms.BonesTransforms);

	if (SourceBT != nullptr)
		*SourceBT = std::move(Parms.SourceBT);

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARMFunctions.BakeFromSequencer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndFrame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASkeletalMeshActor*          SourceActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularRigData             ModularRigData                                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FFaceSettings               FaceSettings                                                     (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            SourceBT                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void UARMFunctions::BakeFromSequencer(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class ASkeletalMeshActor* SourceActor, class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const struct FModularRigData& ModularRigData, const struct FFaceSettings& FaceSettings, struct FBonesTransforms* BonesTransforms, struct FBonesTransforms* SourceBT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARMFunctions", "BakeFromSequencer");

	Params::UARMFunctions_BakeFromSequencer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;
	Parms.SourceActor = SourceActor;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.ModularRigData = ModularRigData;
	Parms.FaceSettings = FaceSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BonesTransforms != nullptr)
		*BonesTransforms = std::move(Parms.BonesTransforms);

	if (SourceBT != nullptr)
		*SourceBT = std::move(Parms.SourceBT);

}


// Class ARigRuntime.RigModular
// (Actor)

class UClass* ARigModular::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigModular");

	return Clss;
}


// RigModular ARigRuntime.Default__RigModular
// (Public, ClassDefaultObject, ArchetypeObject)

class ARigModular* ARigModular::GetDefaultObj()
{
	static class ARigModular* Default = nullptr;

	if (!Default)
		Default = static_cast<ARigModular*>(ARigModular::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.RigModular.PostUpdateRig
// (Event, Public, BlueprintEvent)
// Parameters:

void ARigModular::PostUpdateRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "PostUpdateRig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ARigRuntime.RigModular.PostCreateRig
// (Event, Public, BlueprintEvent)
// Parameters:

void ARigModular::PostCreateRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "PostCreateRig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ARigRuntime.RigModular.PostBakeToAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndFrame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimSequence*               NewAnimSequence                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARigModular::PostBakeToAnim(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame, class UAnimSequence* NewAnimSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "PostBakeToAnim");

	Params::ARigModular_PostBakeToAnim_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;
	Parms.NewAnimSequence = NewAnimSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ARigRuntime.RigModular.PostBakeFromSequencer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              EndFrame                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ARigModular::PostBakeFromSequencer(class ULevelSequence* LevelSequence, int32 StartFrame, int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "PostBakeFromSequencer");

	Params::ARigModular_PostBakeFromSequencer_Params Parms{};

	Parms.LevelSequence = LevelSequence;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ARigRuntime.RigModular.OnUpdateRig
// (Event, Public, BlueprintEvent)
// Parameters:

void ARigModular::OnUpdateRig()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "OnUpdateRig");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ARigRuntime.RigModular.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:

void ARigModular::EditorTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigModular", "EditorTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Class ARigRuntime.OrientConstraint
// (Actor)

class UClass* AOrientConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrientConstraint");

	return Clss;
}


// OrientConstraint ARigRuntime.Default__OrientConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class AOrientConstraint* AOrientConstraint::GetDefaultObj()
{
	static class AOrientConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<AOrientConstraint*>(AOrientConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ParentConstraint
// (Actor)

class UClass* AParentConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParentConstraint");

	return Clss;
}


// ParentConstraint ARigRuntime.Default__ParentConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class AParentConstraint* AParentConstraint::GetDefaultObj()
{
	static class AParentConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<AParentConstraint*>(AParentConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.PointConstraint
// (Actor)

class UClass* APointConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointConstraint");

	return Clss;
}


// PointConstraint ARigRuntime.Default__PointConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class APointConstraint* APointConstraint::GetDefaultObj()
{
	static class APointConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<APointConstraint*>(APointConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ScaleConstraint
// (Actor)

class UClass* AScaleConstraint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleConstraint");

	return Clss;
}


// ScaleConstraint ARigRuntime.Default__ScaleConstraint
// (Public, ClassDefaultObject, ArchetypeObject)

class AScaleConstraint* AScaleConstraint::GetDefaultObj()
{
	static class AScaleConstraint* Default = nullptr;

	if (!Default)
		Default = static_cast<AScaleConstraint*>(AScaleConstraint::StaticClass()->DefaultObject);

	return Default;
}


// Class ARigRuntime.ARSplineIk
// (None)

class UClass* UARSplineIk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARSplineIk");

	return Clss;
}


// ARSplineIk ARigRuntime.Default__ARSplineIk
// (Public, ClassDefaultObject, ArchetypeObject)

class UARSplineIk* UARSplineIk::GetDefaultObj()
{
	static class UARSplineIk* Default = nullptr;

	if (!Default)
		Default = static_cast<UARSplineIk*>(UARSplineIk::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARSplineIk.UpdateSplineIkRigs
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>       SplineIkRigs                                                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARSplineIk::UpdateSplineIkRigs(const TArray<struct FSplineIkData>& SplineIkRigs, const struct FVector& CharScale, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "UpdateSplineIkRigs");

	Params::UARSplineIk_UpdateSplineIkRigs_Params Parms{};

	Parms.SplineIkRigs = SplineIkRigs;
	Parms.CharScale = CharScale;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARSplineIk.SolveSplinePoints
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*            SplineComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Root                                                             (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Mid                                                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  Tip                                                              (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Curvature                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSolveEnds                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSplineIk::SolveSplinePoints(class USplineComponent* SplineComponent, const struct FTransform& Root, const struct FTransform& Mid, const struct FTransform& Tip, float Curvature, bool bSolveEnds, const struct FAimSettings& AimSettings, const struct FVector& CharScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "SolveSplinePoints");

	Params::UARSplineIk_SolveSplinePoints_Params Parms{};

	Parms.SplineComponent = SplineComponent;
	Parms.Root = Root;
	Parms.Mid = Mid;
	Parms.Tip = Tip;
	Parms.Curvature = Curvature;
	Parms.bSolveEnds = bSolveEnds;
	Parms.AimSettings = AimSettings;
	Parms.CharScale = CharScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARSplineIk.SolveSplineIkComponent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSplineIkData               SplineIkData                                                     (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     CharScale                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSplineIk::SolveSplineIkComponent(const struct FSplineIkData& SplineIkData, const struct FVector& CharScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "SolveSplineIkComponent");

	Params::UARSplineIk_SolveSplineIkComponent_Params Parms{};

	Parms.SplineIkData = SplineIkData;
	Parms.CharScale = CharScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARSplineIk.SolveSplineIkBones
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSplineIkData               SplineIkData                                                     (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FBonesTransforms            BonesTransforms                                                  (Parm, NativeAccessSpecifierPublic)
// struct FBonesTransforms            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBonesTransforms UARSplineIk::SolveSplineIkBones(const struct FSplineIkData& SplineIkData, const struct FBonesTransforms& BonesTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "SolveSplineIkBones");

	Params::UARSplineIk_SolveSplineIkBones_Params Parms{};

	Parms.SplineIkData = SplineIkData;
	Parms.BonesTransforms = BonesTransforms;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARSplineIk.SolveMidSplineIkCtrl
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                      Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Mid                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      MidGrp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EndGrp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetA                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetB                                                          (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  OffsetUp                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MidParent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MidLerp                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               FkIk                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSplineIk::SolveMidSplineIkCtrl(class AActor* Start, class AActor* Mid, class AActor* End, class AActor* MidGrp, class AActor* EndGrp, const struct FTransform& OffsetA, const struct FTransform& OffsetB, const struct FTransform& OffsetUp, const struct FAimSettings& AimSettings, float MidParent, float MidLerp, bool FkIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "SolveMidSplineIkCtrl");

	Params::UARSplineIk_SolveMidSplineIkCtrl_Params Parms{};

	Parms.Start = Start;
	Parms.Mid = Mid;
	Parms.End = End;
	Parms.MidGrp = MidGrp;
	Parms.EndGrp = EndGrp;
	Parms.OffsetA = OffsetA;
	Parms.OffsetB = OffsetB;
	Parms.OffsetUp = OffsetUp;
	Parms.AimSettings = AimSettings;
	Parms.MidParent = MidParent;
	Parms.MidLerp = MidLerp;
	Parms.FkIk = FkIk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARSplineIk.PoseSplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>       SplineIkRigs                                                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UARSplineIk::PoseSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, const TArray<struct FSplineIkData>& SplineIkRigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "PoseSplineIkRigs");

	Params::UARSplineIk_PoseSplineIkRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.SplineIkRigs = SplineIkRigs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARSplineIk.ParentSplineIkRigs
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>       SpIkRigs                                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSplineIk::ParentSplineIkRigs(TArray<struct FSplineIkData>* SpIkRigs, class AActor* Rig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "ParentSplineIkRigs");

	Params::UARSplineIk_ParentSplineIkRigs_Params Parms{};

	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpIkRigs != nullptr)
		*SpIkRigs = std::move(Parms.SpIkRigs);

}


// Function ARigRuntime.ARSplineIk.KeySplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FSplineIkData>       SplineIkRigs                                                     (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UARSplineIk::KeySplineIkRigs(const TArray<struct FSplineIkData>& SplineIkRigs, class ULevelSequence* LevelSequence, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "KeySplineIkRigs");

	Params::UARSplineIk_KeySplineIkRigs_Params Parms{};

	Parms.SplineIkRigs = SplineIkRigs;
	Parms.LevelSequence = LevelSequence;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ARigRuntime.ARSplineIk.GetSplineIkBoneOffsets
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSplineIkData               SpIk                                                             (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTransform> UARSplineIk::GetSplineIkBoneOffsets(class USkeletalMeshComponent* SkelMeshComp, const struct FSplineIkData& SpIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "GetSplineIkBoneOffsets");

	Params::UARSplineIk_GetSplineIkBoneOffsets_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.SpIk = SpIk;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARSplineIk.GetPosOnSpline
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*            SplineComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PosCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAimSettings                AimSettings                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UARSplineIk::GetPosOnSpline(class USplineComponent* SplineComponent, int32 Index, int32 PosCount, const struct FAimSettings& AimSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "GetPosOnSpline");

	Params::UARSplineIk_GetPosOnSpline_Params Parms{};

	Parms.SplineComponent = SplineComponent;
	Parms.Index = Index;
	Parms.PosCount = PosCount;
	Parms.AimSettings = AimSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARSplineIk.CreateSplineIkRigs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>       SpIkRigs                                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FSplineIkData>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FSplineIkData> UARSplineIk::CreateSplineIkRigs(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, const TArray<struct FSplineIkData>& SpIkRigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "CreateSplineIkRigs");

	Params::UARSplineIk_CreateSplineIkRigs_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;
	Parms.SpIkRigs = SpIkRigs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ARigRuntime.ARSplineIk.CreateSplineIkControllers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Rig                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSplineIkData               SpIk                                                             (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UARSplineIk::CreateSplineIkControllers(class USkeletalMeshComponent* SkelMeshComp, class AActor* Rig, struct FSplineIkData* SpIk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARSplineIk", "CreateSplineIkControllers");

	Params::UARSplineIk_CreateSplineIkControllers_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Rig = Rig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpIk != nullptr)
		*SpIk = std::move(Parms.SpIk);

}


// Class ARigRuntime.ARTickableActor
// (Actor)

class UClass* AARTickableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARTickableActor");

	return Clss;
}


// ARTickableActor ARigRuntime.Default__ARTickableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AARTickableActor* AARTickableActor::GetDefaultObj()
{
	static class AARTickableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AARTickableActor*>(AARTickableActor::StaticClass()->DefaultObject);

	return Default;
}


// Function ARigRuntime.ARTickableActor.OnPostEditMove
// (Event, Public, BlueprintEvent)
// Parameters:

void AARTickableActor::OnPostEditMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTickableActor", "OnPostEditMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ARigRuntime.ARTickableActor.EditorTick
// (Event, Public, BlueprintEvent)
// Parameters:

void AARTickableActor::EditorTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ARTickableActor", "EditorTick");



	UObject::ProcessEvent(Func, nullptr);

}

}


