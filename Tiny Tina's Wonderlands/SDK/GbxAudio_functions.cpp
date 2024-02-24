#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxAudio.ActiveAmbientLocationChooser
// (None)

class UClass* UActiveAmbientLocationChooser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser");

	return Clss;
}


// ActiveAmbientLocationChooser GbxAudio.Default__ActiveAmbientLocationChooser
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser* UActiveAmbientLocationChooser::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser*>(UActiveAmbientLocationChooser::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientLocationChooser.TransformLevelLocationToWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UActiveAmbientLocationChooser::TransformLevelLocationToWorld(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser", "TransformLevelLocationToWorld");

	Params::UActiveAmbientLocationChooser_TransformLevelLocationToWorld_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAudio.ActiveAmbientLocationChooser_Blueprint
// (None)

class UClass* UActiveAmbientLocationChooser_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_Blueprint");

	return Clss;
}


// ActiveAmbientLocationChooser_Blueprint GbxAudio.Default__ActiveAmbientLocationChooser_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_Blueprint* UActiveAmbientLocationChooser_Blueprint::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_Blueprint*>(UActiveAmbientLocationChooser_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.NominateSoundLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Out_Location                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Out_Radius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UActiveAmbientLocationChooser_Blueprint::NominateSoundLocation(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector* Out_Location, float Out_Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser_Blueprint", "NominateSoundLocation");

	Params::UActiveAmbientLocationChooser_Blueprint_NominateSoundLocation_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;
	Parms.Out_Radius = Out_Radius;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Location != nullptr)
		*Out_Location = std::move(Parms.Out_Location);

	return Parms.ReturnValue;

}


// Function GbxAudio.ActiveAmbientLocationChooser_Blueprint.InitLocationChooser
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveAmbientLocationChooser_Blueprint::InitLocationChooser(class UActiveAmbientSoundComponent* ActiveAmbientComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser_Blueprint", "InitLocationChooser");

	Params::UActiveAmbientLocationChooser_Blueprint_InitLocationChooser_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithinActor
// (None)

class UClass* UActiveAmbientLocationChooser_RandomWithinActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_RandomWithinActor");

	return Clss;
}


// ActiveAmbientLocationChooser_RandomWithinActor GbxAudio.Default__ActiveAmbientLocationChooser_RandomWithinActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_RandomWithinActor* UActiveAmbientLocationChooser_RandomWithinActor::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_RandomWithinActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_RandomWithinActor*>(UActiveAmbientLocationChooser_RandomWithinActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationChooser_RandomWithTrace
// (None)

class UClass* UActiveAmbientLocationChooser_RandomWithTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_RandomWithTrace");

	return Clss;
}


// ActiveAmbientLocationChooser_RandomWithTrace GbxAudio.Default__ActiveAmbientLocationChooser_RandomWithTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_RandomWithTrace* UActiveAmbientLocationChooser_RandomWithTrace::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_RandomWithTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_RandomWithTrace*>(UActiveAmbientLocationChooser_RandomWithTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnCeiling
// (None)

class UClass* UActiveAmbientLocationChooser_RandomOnCeiling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_RandomOnCeiling");

	return Clss;
}


// ActiveAmbientLocationChooser_RandomOnCeiling GbxAudio.Default__ActiveAmbientLocationChooser_RandomOnCeiling
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_RandomOnCeiling* UActiveAmbientLocationChooser_RandomOnCeiling::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_RandomOnCeiling* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_RandomOnCeiling*>(UActiveAmbientLocationChooser_RandomOnCeiling::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationChooser_RandomOnFloor
// (None)

class UClass* UActiveAmbientLocationChooser_RandomOnFloor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_RandomOnFloor");

	return Clss;
}


// ActiveAmbientLocationChooser_RandomOnFloor GbxAudio.Default__ActiveAmbientLocationChooser_RandomOnFloor
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_RandomOnFloor* UActiveAmbientLocationChooser_RandomOnFloor::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_RandomOnFloor* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_RandomOnFloor*>(UActiveAmbientLocationChooser_RandomOnFloor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation
// (None)

class UClass* UActiveAmbientLocationChooser_PreselectedLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_PreselectedLocation");

	return Clss;
}


// ActiveAmbientLocationChooser_PreselectedLocation GbxAudio.Default__ActiveAmbientLocationChooser_PreselectedLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_PreselectedLocation* UActiveAmbientLocationChooser_PreselectedLocation::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_PreselectedLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_PreselectedLocation*>(UActiveAmbientLocationChooser_PreselectedLocation::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.UpdateLocations
// (Final, Native, Public)
// Parameters:

void UActiveAmbientLocationChooser_PreselectedLocation::UpdateLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser_PreselectedLocation", "UpdateLocations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.DrawLocations
// (Final, Native, Public)
// Parameters:

void UActiveAmbientLocationChooser_PreselectedLocation::DrawLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser_PreselectedLocation", "DrawLocations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.ActiveAmbientLocationChooser_PreselectedLocation.AddLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLocation                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UActiveAmbientLocationChooser_PreselectedLocation::AddLocation(struct FVector& InLocation, float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationChooser_PreselectedLocation", "AddLocation");

	Params::UActiveAmbientLocationChooser_PreselectedLocation_AddLocation_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.InRadius = InRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAudio.ActiveAmbientLocationChooser_Party
// (None)

class UClass* UActiveAmbientLocationChooser_Party::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationChooser_Party");

	return Clss;
}


// ActiveAmbientLocationChooser_Party GbxAudio.Default__ActiveAmbientLocationChooser_Party
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationChooser_Party* UActiveAmbientLocationChooser_Party::GetDefaultObj()
{
	static class UActiveAmbientLocationChooser_Party* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationChooser_Party*>(UActiveAmbientLocationChooser_Party::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationValidator
// (None)

class UClass* UActiveAmbientLocationValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationValidator");

	return Clss;
}


// ActiveAmbientLocationValidator GbxAudio.Default__ActiveAmbientLocationValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationValidator* UActiveAmbientLocationValidator::GetDefaultObj()
{
	static class UActiveAmbientLocationValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationValidator*>(UActiveAmbientLocationValidator::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientLocationValidator_Blueprint
// (None)

class UClass* UActiveAmbientLocationValidator_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationValidator_Blueprint");

	return Clss;
}


// ActiveAmbientLocationValidator_Blueprint GbxAudio.Default__ActiveAmbientLocationValidator_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationValidator_Blueprint* UActiveAmbientLocationValidator_Blueprint::GetDefaultObj()
{
	static class UActiveAmbientLocationValidator_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationValidator_Blueprint*>(UActiveAmbientLocationValidator_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientLocationValidator_Blueprint.IsProposedLocationValid
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UActiveAmbientLocationValidator_Blueprint::IsProposedLocationValid(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationValidator_Blueprint", "IsProposedLocationValid");

	Params::UActiveAmbientLocationValidator_Blueprint_IsProposedLocationValid_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class GbxAudio.ActiveAmbientLocationValidator_DistanceFromListener
// (None)

class UClass* UActiveAmbientLocationValidator_DistanceFromListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationValidator_DistanceFromListener");

	return Clss;
}


// ActiveAmbientLocationValidator_DistanceFromListener GbxAudio.Default__ActiveAmbientLocationValidator_DistanceFromListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationValidator_DistanceFromListener* UActiveAmbientLocationValidator_DistanceFromListener::GetDefaultObj()
{
	static class UActiveAmbientLocationValidator_DistanceFromListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationValidator_DistanceFromListener*>(UActiveAmbientLocationValidator_DistanceFromListener::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientSound
// (Actor)

class UClass* AActiveAmbientSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientSound");

	return Clss;
}


// ActiveAmbientSound GbxAudio.Default__ActiveAmbientSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AActiveAmbientSound* AActiveAmbientSound::GetDefaultObj()
{
	static class AActiveAmbientSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AActiveAmbientSound*>(AActiveAmbientSound::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientSound.EnableSounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AActiveAmbientSound::EnableSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientSound", "EnableSounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.ActiveAmbientSound.DisableSounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AActiveAmbientSound::DisableSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientSound", "DisableSounds");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.ActiveAmbientSoundComponent
// (None)

class UClass* UActiveAmbientSoundComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientSoundComponent");

	return Clss;
}


// ActiveAmbientSoundComponent GbxAudio.Default__ActiveAmbientSoundComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientSoundComponent* UActiveAmbientSoundComponent::GetDefaultObj()
{
	static class UActiveAmbientSoundComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientSoundComponent*>(UActiveAmbientSoundComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientSoundComponent.Startle
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveAmbientSoundComponent::Startle(struct FVector& Location, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientSoundComponent", "Startle");

	Params::UActiveAmbientSoundComponent_Startle_Params Parms{};

	Parms.Location = Location;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.ActiveAmbientUpdater
// (None)

class UClass* UActiveAmbientUpdater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientUpdater");

	return Clss;
}


// ActiveAmbientUpdater GbxAudio.Default__ActiveAmbientUpdater
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientUpdater* UActiveAmbientUpdater::GetDefaultObj()
{
	static class UActiveAmbientUpdater* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientUpdater*>(UActiveAmbientUpdater::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientUpdater_Blueprint
// (None)

class UClass* UActiveAmbientUpdater_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientUpdater_Blueprint");

	return Clss;
}


// ActiveAmbientUpdater_Blueprint GbxAudio.Default__ActiveAmbientUpdater_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientUpdater_Blueprint* UActiveAmbientUpdater_Blueprint::GetDefaultObj()
{
	static class UActiveAmbientUpdater_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientUpdater_Blueprint*>(UActiveAmbientUpdater_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientUpdater_Blueprint.UpdateActiveAmbientInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveAmbientInstance      ActiveAmbientInstance                                            (Parm, OutParm, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveAmbientUpdater_Blueprint::UpdateActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientUpdater_Blueprint", "UpdateActiveAmbientInstance");

	Params::UActiveAmbientUpdater_Blueprint_UpdateActiveAmbientInstance_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveAmbientInstance != nullptr)
		*ActiveAmbientInstance = std::move(Parms.ActiveAmbientInstance);

}


// Function GbxAudio.ActiveAmbientUpdater_Blueprint.InitializeActiveAmbientInstance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveAmbientInstance      ActiveAmbientInstance                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UActiveAmbientUpdater_Blueprint::InitializeActiveAmbientInstance(class UActiveAmbientSoundComponent* ActiveAmbientComponent, struct FActiveAmbientInstance* ActiveAmbientInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientUpdater_Blueprint", "InitializeActiveAmbientInstance");

	Params::UActiveAmbientUpdater_Blueprint_InitializeActiveAmbientInstance_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveAmbientInstance != nullptr)
		*ActiveAmbientInstance = std::move(Parms.ActiveAmbientInstance);

}


// Class GbxAudio.ActiveAmbientUpdater_MoveInRandomDirection
// (None)

class UClass* UActiveAmbientUpdater_MoveInRandomDirection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientUpdater_MoveInRandomDirection");

	return Clss;
}


// ActiveAmbientUpdater_MoveInRandomDirection GbxAudio.Default__ActiveAmbientUpdater_MoveInRandomDirection
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientUpdater_MoveInRandomDirection* UActiveAmbientUpdater_MoveInRandomDirection::GetDefaultObj()
{
	static class UActiveAmbientUpdater_MoveInRandomDirection* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientUpdater_MoveInRandomDirection*>(UActiveAmbientUpdater_MoveInRandomDirection::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ActiveAmbientUpdater_MoveWithWobble
// (None)

class UClass* UActiveAmbientUpdater_MoveWithWobble::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientUpdater_MoveWithWobble");

	return Clss;
}


// ActiveAmbientUpdater_MoveWithWobble GbxAudio.Default__ActiveAmbientUpdater_MoveWithWobble
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientUpdater_MoveWithWobble* UActiveAmbientUpdater_MoveWithWobble::GetDefaultObj()
{
	static class UActiveAmbientUpdater_MoveWithWobble* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientUpdater_MoveWithWobble*>(UActiveAmbientUpdater_MoveWithWobble::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AmbientSoundBox
// (Actor)

class UClass* AAmbientSoundBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientSoundBox");

	return Clss;
}


// AmbientSoundBox GbxAudio.Default__AmbientSoundBox
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientSoundBox* AAmbientSoundBox::GetDefaultObj()
{
	static class AAmbientSoundBox* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientSoundBox*>(AAmbientSoundBox::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AmbientSoundSphere
// (Actor)

class UClass* AAmbientSoundSphere::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientSoundSphere");

	return Clss;
}


// AmbientSoundSphere GbxAudio.Default__AmbientSoundSphere
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientSoundSphere* AAmbientSoundSphere::GetDefaultObj()
{
	static class AAmbientSoundSphere* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientSoundSphere*>(AAmbientSoundSphere::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AmbientSoundSpline
// (Actor)

class UClass* AAmbientSoundSpline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientSoundSpline");

	return Clss;
}


// AmbientSoundSpline GbxAudio.Default__AmbientSoundSpline
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientSoundSpline* AAmbientSoundSpline::GetDefaultObj()
{
	static class AAmbientSoundSpline* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientSoundSpline*>(AAmbientSoundSpline::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AnimNotify_CharacterSound
// (None)

class UClass* UAnimNotify_CharacterSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_CharacterSound");

	return Clss;
}


// AnimNotify_CharacterSound GbxAudio.Default__AnimNotify_CharacterSound
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_CharacterSound* UAnimNotify_CharacterSound::GetDefaultObj()
{
	static class UAnimNotify_CharacterSound* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_CharacterSound*>(UAnimNotify_CharacterSound::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AnimNotify_Foley
// (None)

class UClass* UAnimNotify_Foley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_Foley");

	return Clss;
}


// AnimNotify_Foley GbxAudio.Default__AnimNotify_Foley
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_Foley* UAnimNotify_Foley::GetDefaultObj()
{
	static class UAnimNotify_Foley* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_Foley*>(UAnimNotify_Foley::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AnimNotify_FootFoley
// (None)

class UClass* UAnimNotify_FootFoley::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_FootFoley");

	return Clss;
}


// AnimNotify_FootFoley GbxAudio.Default__AnimNotify_FootFoley
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_FootFoley* UAnimNotify_FootFoley::GetDefaultObj()
{
	static class UAnimNotify_FootFoley* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_FootFoley*>(UAnimNotify_FootFoley::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AnimNotify_WwiseEvent
// (None)

class UClass* UAnimNotify_WwiseEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_WwiseEvent");

	return Clss;
}


// AnimNotify_WwiseEvent GbxAudio.Default__AnimNotify_WwiseEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_WwiseEvent* UAnimNotify_WwiseEvent::GetDefaultObj()
{
	static class UAnimNotify_WwiseEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_WwiseEvent*>(UAnimNotify_WwiseEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AnimNotifyState_LoopingSound
// (None)

class UClass* UAnimNotifyState_LoopingSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_LoopingSound");

	return Clss;
}


// AnimNotifyState_LoopingSound GbxAudio.Default__AnimNotifyState_LoopingSound
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_LoopingSound* UAnimNotifyState_LoopingSound::GetDefaultObj()
{
	static class UAnimNotifyState_LoopingSound* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_LoopingSound*>(UAnimNotifyState_LoopingSound::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioDistanceThresholdSubscriberInterface
// (None)

class UClass* IAudioDistanceThresholdSubscriberInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioDistanceThresholdSubscriberInterface");

	return Clss;
}


// AudioDistanceThresholdSubscriberInterface GbxAudio.Default__AudioDistanceThresholdSubscriberInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioDistanceThresholdSubscriberInterface* IAudioDistanceThresholdSubscriberInterface::GetDefaultObj()
{
	static class IAudioDistanceThresholdSubscriberInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioDistanceThresholdSubscriberInterface*>(IAudioDistanceThresholdSubscriberInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioDistanceThresholdManager
// (None)

class UClass* UAudioDistanceThresholdManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioDistanceThresholdManager");

	return Clss;
}


// AudioDistanceThresholdManager GbxAudio.Default__AudioDistanceThresholdManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioDistanceThresholdManager* UAudioDistanceThresholdManager::GetDefaultObj()
{
	static class UAudioDistanceThresholdManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioDistanceThresholdManager*>(UAudioDistanceThresholdManager::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioOcclusionVoxelDataProvider
// (None)

class UClass* UAudioOcclusionVoxelDataProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioOcclusionVoxelDataProvider");

	return Clss;
}


// AudioOcclusionVoxelDataProvider GbxAudio.Default__AudioOcclusionVoxelDataProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioOcclusionVoxelDataProvider* UAudioOcclusionVoxelDataProvider::GetDefaultObj()
{
	static class UAudioOcclusionVoxelDataProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioOcclusionVoxelDataProvider*>(UAudioOcclusionVoxelDataProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioOcclusionVoxelizerZone
// (Actor)

class UClass* AAudioOcclusionVoxelizerZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioOcclusionVoxelizerZone");

	return Clss;
}


// AudioOcclusionVoxelizerZone GbxAudio.Default__AudioOcclusionVoxelizerZone
// (Public, ClassDefaultObject, ArchetypeObject)

class AAudioOcclusionVoxelizerZone* AAudioOcclusionVoxelizerZone::GetDefaultObj()
{
	static class AAudioOcclusionVoxelizerZone* Default = nullptr;

	if (!Default)
		Default = static_cast<AAudioOcclusionVoxelizerZone*>(AAudioOcclusionVoxelizerZone::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.AudioOcclusionVoxelizerZone.Voxelize
// (Final, Native, Public)
// Parameters:

void AAudioOcclusionVoxelizerZone::Voxelize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioOcclusionVoxelizerZone", "Voxelize");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRLE
// (Final, Native, Public)
// Parameters:

void AAudioOcclusionVoxelizerZone::ExportAsRLE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioOcclusionVoxelizerZone", "ExportAsRLE");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.AudioOcclusionVoxelizerZone.ExportAsRaw
// (Final, Native, Public)
// Parameters:

void AAudioOcclusionVoxelizerZone::ExportAsRaw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioOcclusionVoxelizerZone", "ExportAsRaw");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.AudioPrepLocationConsumer
// (None)

class UClass* IAudioPrepLocationConsumer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationConsumer");

	return Clss;
}


// AudioPrepLocationConsumer GbxAudio.Default__AudioPrepLocationConsumer
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioPrepLocationConsumer* IAudioPrepLocationConsumer::GetDefaultObj()
{
	static class IAudioPrepLocationConsumer* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioPrepLocationConsumer*>(IAudioPrepLocationConsumer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder
// (None)

class UClass* UAudioPrepLocationFinder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder");

	return Clss;
}


// AudioPrepLocationFinder GbxAudio.Default__AudioPrepLocationFinder
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder* UAudioPrepLocationFinder::GetDefaultObj()
{
	static class UAudioPrepLocationFinder* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder*>(UAudioPrepLocationFinder::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_Blueprint
// (None)

class UClass* UAudioPrepLocationFinder_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_Blueprint");

	return Clss;
}


// AudioPrepLocationFinder_Blueprint GbxAudio.Default__AudioPrepLocationFinder_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_Blueprint* UAudioPrepLocationFinder_Blueprint::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_Blueprint*>(UAudioPrepLocationFinder_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioPrepLocationFinder_Blueprint::AddLocation(const struct FVector& Location, const struct FRotator& Rotation, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPrepLocationFinder_Blueprint", "AddLocation");

	Params::UAudioPrepLocationFinder_Blueprint_AddLocation_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.AudioPrepLocationFinder_Blueprint.AddFoundLocations
// (Event, Public, BlueprintEvent)
// Parameters:

void UAudioPrepLocationFinder_Blueprint::AddFoundLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPrepLocationFinder_Blueprint", "AddFoundLocations");



	UObject::ProcessEvent(Func, nullptr);

}


// Class GbxAudio.ActiveAmbientLocationFinder_Blueprint
// (None)

class UClass* UActiveAmbientLocationFinder_Blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActiveAmbientLocationFinder_Blueprint");

	return Clss;
}


// ActiveAmbientLocationFinder_Blueprint GbxAudio.Default__ActiveAmbientLocationFinder_Blueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UActiveAmbientLocationFinder_Blueprint* UActiveAmbientLocationFinder_Blueprint::GetDefaultObj()
{
	static class UActiveAmbientLocationFinder_Blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UActiveAmbientLocationFinder_Blueprint*>(UActiveAmbientLocationFinder_Blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.ActiveAmbientLocationFinder_Blueprint.AddFoundLocations
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActiveAmbientSoundComponent*ActiveAmbientComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActiveAmbientLocationChooser_PreselectedLocation*PreselectedLocationChooser                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UActiveAmbientLocationFinder_Blueprint::AddFoundLocations(class UActiveAmbientSoundComponent* ActiveAmbientComponent, class UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActiveAmbientLocationFinder_Blueprint", "AddFoundLocations");

	Params::UActiveAmbientLocationFinder_Blueprint_AddFoundLocations_Params Parms{};

	Parms.ActiveAmbientComponent = ActiveAmbientComponent;
	Parms.PreselectedLocationChooser = PreselectedLocationChooser;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GbxAudio.AudioPrepLocationFinder_ActorList
// (None)

class UClass* UAudioPrepLocationFinder_ActorList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_ActorList");

	return Clss;
}


// AudioPrepLocationFinder_ActorList GbxAudio.Default__AudioPrepLocationFinder_ActorList
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_ActorList* UAudioPrepLocationFinder_ActorList::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_ActorList* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_ActorList*>(UAudioPrepLocationFinder_ActorList::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_FilteredComponents
// (None)

class UClass* UAudioPrepLocationFinder_FilteredComponents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_FilteredComponents");

	return Clss;
}


// AudioPrepLocationFinder_FilteredComponents GbxAudio.Default__AudioPrepLocationFinder_FilteredComponents
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_FilteredComponents* UAudioPrepLocationFinder_FilteredComponents::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_FilteredComponents* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_FilteredComponents*>(UAudioPrepLocationFinder_FilteredComponents::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_SplineTracer
// (None)

class UClass* UAudioPrepLocationFinder_SplineTracer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_SplineTracer");

	return Clss;
}


// AudioPrepLocationFinder_SplineTracer GbxAudio.Default__AudioPrepLocationFinder_SplineTracer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_SplineTracer* UAudioPrepLocationFinder_SplineTracer::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_SplineTracer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_SplineTracer*>(UAudioPrepLocationFinder_SplineTracer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_PincushionTracer
// (None)

class UClass* UAudioPrepLocationFinder_PincushionTracer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_PincushionTracer");

	return Clss;
}


// AudioPrepLocationFinder_PincushionTracer GbxAudio.Default__AudioPrepLocationFinder_PincushionTracer
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_PincushionTracer* UAudioPrepLocationFinder_PincushionTracer::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_PincushionTracer* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_PincushionTracer*>(UAudioPrepLocationFinder_PincushionTracer::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_TraceDownToActor
// (None)

class UClass* UAudioPrepLocationFinder_TraceDownToActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_TraceDownToActor");

	return Clss;
}


// AudioPrepLocationFinder_TraceDownToActor GbxAudio.Default__AudioPrepLocationFinder_TraceDownToActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_TraceDownToActor* UAudioPrepLocationFinder_TraceDownToActor::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_TraceDownToActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_TraceDownToActor*>(UAudioPrepLocationFinder_TraceDownToActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_FoliageLocations
// (None)

class UClass* UAudioPrepLocationFinder_FoliageLocations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_FoliageLocations");

	return Clss;
}


// AudioPrepLocationFinder_FoliageLocations GbxAudio.Default__AudioPrepLocationFinder_FoliageLocations
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_FoliageLocations* UAudioPrepLocationFinder_FoliageLocations::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_FoliageLocations* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_FoliageLocations*>(UAudioPrepLocationFinder_FoliageLocations::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_LandscapeGrassLocations
// (None)

class UClass* UAudioPrepLocationFinder_LandscapeGrassLocations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_LandscapeGrassLocations");

	return Clss;
}


// AudioPrepLocationFinder_LandscapeGrassLocations GbxAudio.Default__AudioPrepLocationFinder_LandscapeGrassLocations
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_LandscapeGrassLocations* UAudioPrepLocationFinder_LandscapeGrassLocations::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_LandscapeGrassLocations* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_LandscapeGrassLocations*>(UAudioPrepLocationFinder_LandscapeGrassLocations::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_InstanceLocations
// (None)

class UClass* UAudioPrepLocationFinder_InstanceLocations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_InstanceLocations");

	return Clss;
}


// AudioPrepLocationFinder_InstanceLocations GbxAudio.Default__AudioPrepLocationFinder_InstanceLocations
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_InstanceLocations* UAudioPrepLocationFinder_InstanceLocations::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_InstanceLocations* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_InstanceLocations*>(UAudioPrepLocationFinder_InstanceLocations::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_Grid
// (None)

class UClass* UAudioPrepLocationFinder_Grid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_Grid");

	return Clss;
}


// AudioPrepLocationFinder_Grid GbxAudio.Default__AudioPrepLocationFinder_Grid
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_Grid* UAudioPrepLocationFinder_Grid::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_Grid* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_Grid*>(UAudioPrepLocationFinder_Grid::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_TraceGrid
// (None)

class UClass* UAudioPrepLocationFinder_TraceGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_TraceGrid");

	return Clss;
}


// AudioPrepLocationFinder_TraceGrid GbxAudio.Default__AudioPrepLocationFinder_TraceGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_TraceGrid* UAudioPrepLocationFinder_TraceGrid::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_TraceGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_TraceGrid*>(UAudioPrepLocationFinder_TraceGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.AudioPrepLocationFinder_VoxelMaterialBoundary
// (None)

class UClass* UAudioPrepLocationFinder_VoxelMaterialBoundary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPrepLocationFinder_VoxelMaterialBoundary");

	return Clss;
}


// AudioPrepLocationFinder_VoxelMaterialBoundary GbxAudio.Default__AudioPrepLocationFinder_VoxelMaterialBoundary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPrepLocationFinder_VoxelMaterialBoundary* UAudioPrepLocationFinder_VoxelMaterialBoundary::GetDefaultObj()
{
	static class UAudioPrepLocationFinder_VoxelMaterialBoundary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPrepLocationFinder_VoxelMaterialBoundary*>(UAudioPrepLocationFinder_VoxelMaterialBoundary::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.CharacterSoundData
// (None)

class UClass* UCharacterSoundData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterSoundData");

	return Clss;
}


// CharacterSoundData GbxAudio.Default__CharacterSoundData
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterSoundData* UCharacterSoundData::GetDefaultObj()
{
	static class UCharacterSoundData* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterSoundData*>(UCharacterSoundData::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.CharacterSoundData.RefreshAll
// (Final, Native, Public)
// Parameters:

void UCharacterSoundData::RefreshAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterSoundData", "RefreshAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.CharacterSoundInterface
// (None)

class UClass* ICharacterSoundInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterSoundInterface");

	return Clss;
}


// CharacterSoundInterface GbxAudio.Default__CharacterSoundInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ICharacterSoundInterface* ICharacterSoundInterface::GetDefaultObj()
{
	static class ICharacterSoundInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ICharacterSoundInterface*>(ICharacterSoundInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.CharacterSoundLogicComponent
// (None)

class UClass* UCharacterSoundLogicComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterSoundLogicComponent");

	return Clss;
}


// CharacterSoundLogicComponent GbxAudio.Default__CharacterSoundLogicComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterSoundLogicComponent* UCharacterSoundLogicComponent::GetDefaultObj()
{
	static class UCharacterSoundLogicComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterSoundLogicComponent*>(UCharacterSoundLogicComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.CharacterSoundTag
// (None)

class UClass* UCharacterSoundTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterSoundTag");

	return Clss;
}


// CharacterSoundTag GbxAudio.Default__CharacterSoundTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UCharacterSoundTag* UCharacterSoundTag::GetDefaultObj()
{
	static class UCharacterSoundTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterSoundTag*>(UCharacterSoundTag::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.DistributedAmbientSound
// (Actor)

class UClass* ADistributedAmbientSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DistributedAmbientSound");

	return Clss;
}


// DistributedAmbientSound GbxAudio.Default__DistributedAmbientSound
// (Public, ClassDefaultObject, ArchetypeObject)

class ADistributedAmbientSound* ADistributedAmbientSound::GetDefaultObj()
{
	static class ADistributedAmbientSound* Default = nullptr;

	if (!Default)
		Default = static_cast<ADistributedAmbientSound*>(ADistributedAmbientSound::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.DistributedAmbientSound.DoUpdateTree
// (Final, Native, Public)
// Parameters:

void ADistributedAmbientSound::DoUpdateTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DistributedAmbientSound", "DoUpdateTree");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.DistributedAmbientSound.DoFindNewLocationsAndRebuild
// (Final, Native, Public)
// Parameters:

void ADistributedAmbientSound::DoFindNewLocationsAndRebuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DistributedAmbientSound", "DoFindNewLocationsAndRebuild");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.FluidSimExampleZone
// (Actor)

class UClass* AFluidSimExampleZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FluidSimExampleZone");

	return Clss;
}


// FluidSimExampleZone GbxAudio.Default__FluidSimExampleZone
// (Public, ClassDefaultObject, ArchetypeObject)

class AFluidSimExampleZone* AFluidSimExampleZone::GetDefaultObj()
{
	static class AFluidSimExampleZone* Default = nullptr;

	if (!Default)
		Default = static_cast<AFluidSimExampleZone*>(AFluidSimExampleZone::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.FluidSimExampleZone.UpdateVisualization
// (Final, Native, Public)
// Parameters:

void AFluidSimExampleZone::UpdateVisualization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FluidSimExampleZone", "UpdateVisualization");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.FluidSimExampleZone.ExportVectorField
// (Final, Native, Public)
// Parameters:

void AFluidSimExampleZone::ExportVectorField()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FluidSimExampleZone", "ExportVectorField");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.FluidSimExampleZone.ApplyToOtherSim
// (Final, Native, Public)
// Parameters:

void AFluidSimExampleZone::ApplyToOtherSim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FluidSimExampleZone", "ApplyToOtherSim");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.FoleyAccessoryComponent
// (SceneComponent)

class UClass* UFoleyAccessoryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyAccessoryComponent");

	return Clss;
}


// FoleyAccessoryComponent GbxAudio.Default__FoleyAccessoryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoleyAccessoryComponent* UFoleyAccessoryComponent::GetDefaultObj()
{
	static class UFoleyAccessoryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyAccessoryComponent*>(UFoleyAccessoryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.FoleyImplementerInterface
// (None)

class UClass* IFoleyImplementerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyImplementerInterface");

	return Clss;
}


// FoleyImplementerInterface GbxAudio.Default__FoleyImplementerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IFoleyImplementerInterface* IFoleyImplementerInterface::GetDefaultObj()
{
	static class IFoleyImplementerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IFoleyImplementerInterface*>(IFoleyImplementerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.FoleyMainComponent
// (None)

class UClass* UFoleyMainComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoleyMainComponent");

	return Clss;
}


// FoleyMainComponent GbxAudio.Default__FoleyMainComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFoleyMainComponent* UFoleyMainComponent::GetDefaultObj()
{
	static class UFoleyMainComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoleyMainComponent*>(UFoleyMainComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.FoleyMainComponent.SetSurfaceModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 PlayEvent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FootstepVolumeMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFoleyMainComponent::SetSurfaceModifier(class UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoleyMainComponent", "SetSurfaceModifier");

	Params::UFoleyMainComponent_SetSurfaceModifier_Params Parms{};

	Parms.PlayEvent = PlayEvent;
	Parms.Volume = Volume;
	Parms.FootstepVolumeMultiplier = FootstepVolumeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.FoleyMainComponent.PlayFootstepEvent
// (Final, Native, Public)
// Parameters:
// struct FFoleyEventParams           EventParams                                                      (Parm, NativeAccessSpecifierPublic)

void UFoleyMainComponent::PlayFootstepEvent(const struct FFoleyEventParams& EventParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoleyMainComponent", "PlayFootstepEvent");

	Params::UFoleyMainComponent_PlayFootstepEvent_Params Parms{};

	Parms.EventParams = EventParams;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.FoleyMainComponent.PlayFootstep
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FootstepLocation                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FootstepRotation                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UWwiseSwitch*                MaterialSwitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VolumeAdjustment                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PitchAdjustment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 ConfigureEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreview                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFoleyMainComponent::PlayFootstep(const struct FVector& FootstepLocation, const struct FRotator& FootstepRotation, class UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, class UWwiseEvent* ConfigureEvent, bool bPreview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoleyMainComponent", "PlayFootstep");

	Params::UFoleyMainComponent_PlayFootstep_Params Parms{};

	Parms.FootstepLocation = FootstepLocation;
	Parms.FootstepRotation = FootstepRotation;
	Parms.MaterialSwitch = MaterialSwitch;
	Parms.VolumeAdjustment = VolumeAdjustment;
	Parms.PitchAdjustment = PitchAdjustment;
	Parms.ConfigureEvent = ConfigureEvent;
	Parms.bPreview = bPreview;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.GbxAudioBlueprintLibrary
// (None)

class UClass* UGbxAudioBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAudioBlueprintLibrary");

	return Clss;
}


// GbxAudioBlueprintLibrary GbxAudio.Default__GbxAudioBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAudioBlueprintLibrary* UGbxAudioBlueprintLibrary::GetDefaultObj()
{
	static class UGbxAudioBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAudioBlueprintLibrary*>(UGbxAudioBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.GbxAudioBlueprintLibrary.TriggerCharacterSound
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCharacterSoundTag*          SoundTag                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAudioBlueprintLibrary::TriggerCharacterSound(class AActor* Character, class UCharacterSoundTag* SoundTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAudioBlueprintLibrary", "TriggerCharacterSound");

	Params::UGbxAudioBlueprintLibrary_TriggerCharacterSound_Params Parms{};

	Parms.Character = Character;
	Parms.SoundTag = SoundTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.GbxAudioBlueprintLibrary.RemoveListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAuxBus*                Efx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAudioBlueprintLibrary::RemoveListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAudioBlueprintLibrary", "RemoveListenerAudioEffect");

	Params::UGbxAudioBlueprintLibrary_RemoveListenerAudioEffect_Params Parms{};

	Parms.Character = Character;
	Parms.Efx = Efx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationHitFilter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FAudioPrepHitResultFilter   Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAudioBlueprintLibrary::PassesAudioPreparationHitFilter(const struct FHitResult& Hit, struct FAudioPrepHitResultFilter& Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAudioBlueprintLibrary", "PassesAudioPreparationHitFilter");

	Params::UGbxAudioBlueprintLibrary_PassesAudioPreparationHitFilter_Params Parms{};

	Parms.Hit = Hit;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAudio.GbxAudioBlueprintLibrary.PassesAudioPreparationComponentFilter
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*         Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAudioPrepComponentFilter   Filter                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxAudioBlueprintLibrary::PassesAudioPreparationComponentFilter(class UPrimitiveComponent* Component, struct FAudioPrepComponentFilter& Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAudioBlueprintLibrary", "PassesAudioPreparationComponentFilter");

	Params::UGbxAudioBlueprintLibrary_PassesAudioPreparationComponentFilter_Params Parms{};

	Parms.Component = Component;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAudio.GbxAudioBlueprintLibrary.ApplyListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAuxBus*                Efx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DryVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxAudioBlueprintLibrary::ApplyListenerAudioEffect(class AActor* Character, class UWwiseAuxBus* Efx, float WetVolume, float DryVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxAudioBlueprintLibrary", "ApplyListenerAudioEffect");

	Params::UGbxAudioBlueprintLibrary_ApplyListenerAudioEffect_Params Parms{};

	Parms.Character = Character;
	Parms.Efx = Efx;
	Parms.WetVolume = WetVolume;
	Parms.DryVolume = DryVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxAudio.GbxAudioGlobalsData
// (None)

class UClass* UGbxAudioGlobalsData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAudioGlobalsData");

	return Clss;
}


// GbxAudioGlobalsData GbxAudio.Default__GbxAudioGlobalsData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAudioGlobalsData* UGbxAudioGlobalsData::GetDefaultObj()
{
	static class UGbxAudioGlobalsData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAudioGlobalsData*>(UGbxAudioGlobalsData::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.GbxAudioSettings
// (None)

class UClass* UGbxAudioSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxAudioSettings");

	return Clss;
}


// GbxAudioSettings GbxAudio.Default__GbxAudioSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxAudioSettings* UGbxAudioSettings::GetDefaultObj()
{
	static class UGbxAudioSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxAudioSettings*>(UGbxAudioSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.LightAudioComponent
// (SceneComponent)

class UClass* ULightAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightAudioComponent");

	return Clss;
}


// LightAudioComponent GbxAudio.Default__LightAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULightAudioComponent* ULightAudioComponent::GetDefaultObj()
{
	static class ULightAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightAudioComponent*>(ULightAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.LightAudioComponent.SetRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*                  GameParameter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPersistent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ValueChangeDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULightAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, bool bPersistent, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightAudioComponent", "SetRTPCValue");

	Params::ULightAudioComponent_SetRTPCValue_Params Parms{};

	Parms.GameParameter = GameParameter;
	Parms.Value = Value;
	Parms.bPersistent = bPersistent;
	Parms.ValueChangeDuration = ValueChangeDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.LightAudioComponent.PostWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWwisePlaybackInstance      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWwisePlaybackInstance ULightAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightAudioComponent", "PostWwiseEvent");

	Params::ULightAudioComponent_PostWwiseEvent_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAudio.MusicSequencerComponent
// (None)

class UClass* UMusicSequencerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MusicSequencerComponent");

	return Clss;
}


// MusicSequencerComponent GbxAudio.Default__MusicSequencerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMusicSequencerComponent* UMusicSequencerComponent::GetDefaultObj()
{
	static class UMusicSequencerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMusicSequencerComponent*>(UMusicSequencerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.MusicSequencerComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusicSequencerComponent::StopSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "StopSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.MusicSequencerComponent.PostSequenceEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAudioComponent*        WwiseComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Note                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartBeat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMusicSequencerComponent::PostSequenceEvent(class UWwiseAudioComponent* WwiseComponent, class UWwiseEvent* WwiseEvent, int32 Note, int32 Velocity, int32 Channel, float StartBeat, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "PostSequenceEvent");

	Params::UMusicSequencerComponent_PostSequenceEvent_Params Parms{};

	Parms.WwiseComponent = WwiseComponent;
	Parms.WwiseEvent = WwiseEvent;
	Parms.Note = Note;
	Parms.Velocity = Velocity;
	Parms.Channel = Channel;
	Parms.StartBeat = StartBeat;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.MusicSequencerComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusicSequencerComponent::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "PlaySequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.MusicSequencerComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMusicSequencerComponent::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "PauseSequence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.MusicSequencerComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMusicSequencerComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "IsPlaying");

	Params::UMusicSequencerComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAudio.MusicSequencerComponent.GetRealTimeUntilBeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Beat                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMusicSequencerComponent::GetRealTimeUntilBeat(float Beat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "GetRealTimeUntilBeat");

	Params::UMusicSequencerComponent_GetRealTimeUntilBeat_Params Parms{};

	Parms.Beat = Beat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxAudio.MusicSequencerComponent.GetCurrentBeat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMusicSequencerComponent::GetCurrentBeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MusicSequencerComponent", "GetCurrentBeat");

	Params::UMusicSequencerComponent_GetCurrentBeat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxAudio.ParticleModuleGbxAudioBase
// (None)

class UClass* UParticleModuleGbxAudioBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleGbxAudioBase");

	return Clss;
}


// ParticleModuleGbxAudioBase GbxAudio.Default__ParticleModuleGbxAudioBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleGbxAudioBase* UParticleModuleGbxAudioBase::GetDefaultObj()
{
	static class UParticleModuleGbxAudioBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleGbxAudioBase*>(UParticleModuleGbxAudioBase::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ParticleModuleGbxAudioLoop
// (None)

class UClass* UParticleModuleGbxAudioLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleGbxAudioLoop");

	return Clss;
}


// ParticleModuleGbxAudioLoop GbxAudio.Default__ParticleModuleGbxAudioLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleGbxAudioLoop* UParticleModuleGbxAudioLoop::GetDefaultObj()
{
	static class UParticleModuleGbxAudioLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleGbxAudioLoop*>(UParticleModuleGbxAudioLoop::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.ParticleModuleGbxAudioPool
// (None)

class UClass* UParticleModuleGbxAudioPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleModuleGbxAudioPool");

	return Clss;
}


// ParticleModuleGbxAudioPool GbxAudio.Default__ParticleModuleGbxAudioPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleModuleGbxAudioPool* UParticleModuleGbxAudioPool::GetDefaultObj()
{
	static class UParticleModuleGbxAudioPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleModuleGbxAudioPool*>(UParticleModuleGbxAudioPool::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.WindAudioLoopComponent
// (SceneComponent)

class UClass* UWindAudioLoopComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindAudioLoopComponent");

	return Clss;
}


// WindAudioLoopComponent GbxAudio.Default__WindAudioLoopComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindAudioLoopComponent* UWindAudioLoopComponent::GetDefaultObj()
{
	static class UWindAudioLoopComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindAudioLoopComponent*>(UWindAudioLoopComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxAudio.WwiseListenerEffectComponent
// (None)

class UClass* UWwiseListenerEffectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseListenerEffectComponent");

	return Clss;
}


// WwiseListenerEffectComponent GbxAudio.Default__WwiseListenerEffectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseListenerEffectComponent* UWwiseListenerEffectComponent::GetDefaultObj()
{
	static class UWwiseListenerEffectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseListenerEffectComponent*>(UWwiseListenerEffectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxAudio.WwiseListenerEffectComponent.RemoveAudioEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*                Efx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseListenerEffectComponent::RemoveAudioEffect(class UWwiseAuxBus* Efx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerEffectComponent", "RemoveAudioEffect");

	Params::UWwiseListenerEffectComponent_RemoveAudioEffect_Params Parms{};

	Parms.Efx = Efx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.WwiseListenerEffectComponent.RemoveAllAudioEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWwiseListenerEffectComponent::RemoveAllAudioEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerEffectComponent", "RemoveAllAudioEffects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxAudio.WwiseListenerEffectComponent.ApplyAudioEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*                Efx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetPercent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DryPercent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseListenerEffectComponent::ApplyAudioEffect(class UWwiseAuxBus* Efx, float WetPercent, float DryPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerEffectComponent", "ApplyAudioEffect");

	Params::UWwiseListenerEffectComponent_ApplyAudioEffect_Params Parms{};

	Parms.Efx = Efx;
	Parms.WetPercent = WetPercent;
	Parms.DryPercent = DryPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


