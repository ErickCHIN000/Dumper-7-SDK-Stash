#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Dungeonhaven.CertDialog
// (None)

class UClass* UCertDialog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CertDialog");

	return Clss;
}


// CertDialog Dungeonhaven.Default__CertDialog
// (Public, ClassDefaultObject, ArchetypeObject)

class UCertDialog* UCertDialog::GetDefaultObj()
{
	static class UCertDialog* Default = nullptr;

	if (!Default)
		Default = static_cast<UCertDialog*>(UCertDialog::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.CertDialog.UpdateConfirmAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Body                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCertDialog::UpdateConfirmAction(bool bActive, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog", "UpdateConfirmAction");

	Params::UCertDialog_UpdateConfirmAction_Params Parms{};

	Parms.bActive = bActive;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.CertDialog.UpdateCancelAction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Body                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCertDialog::UpdateCancelAction(bool bActive, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog", "UpdateCancelAction");

	Params::UCertDialog_UpdateCancelAction_Params Parms{};

	Parms.bActive = bActive;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.CertDialog.OnActionConfirm
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCertDialog::OnActionConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog", "OnActionConfirm");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.CertDialog.OnActionCancel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCertDialog::OnActionCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CertDialog", "OnActionCancel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.ConsoleBlueprintLibrary
// (None)

class UClass* UConsoleBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConsoleBlueprintLibrary");

	return Clss;
}


// ConsoleBlueprintLibrary Dungeonhaven.Default__ConsoleBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UConsoleBlueprintLibrary* UConsoleBlueprintLibrary::GetDefaultObj()
{
	static class UConsoleBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UConsoleBlueprintLibrary*>(UConsoleBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.ConsoleBlueprintLibrary.IsGamepadAttached
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleBlueprintLibrary::IsGamepadAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "IsGamepadAttached");

	Params::UConsoleBlueprintLibrary_IsGamepadAttached_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.IsConsole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UConsoleBlueprintLibrary::IsConsole(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "IsConsole");

	Params::UConsoleBlueprintLibrary_IsConsole_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.IfPlatform
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlatform               OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleBlueprintLibrary::IfPlatform(class UObject* WorldContextObject, enum class EPlatform* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "IfPlatform");

	Params::UConsoleBlueprintLibrary_IfPlatform_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.IfMobile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBoolean                OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleBlueprintLibrary::IfMobile(class UObject* WorldContextObject, enum class EBoolean* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "IfMobile");

	Params::UConsoleBlueprintLibrary_IfMobile_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.IfConsole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBoolean                OutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UConsoleBlueprintLibrary::IfConsole(class UObject* WorldContextObject, enum class EBoolean* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "IfConsole");

	Params::UConsoleBlueprintLibrary_IfConsole_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.GetPlatformGamepadType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPlatformGamepadType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlatformGamepadType UConsoleBlueprintLibrary::GetPlatformGamepadType(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "GetPlatformGamepadType");

	Params::UConsoleBlueprintLibrary_GetPlatformGamepadType_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.GetPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EPlatform               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlatform UConsoleBlueprintLibrary::GetPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "GetPlatform");

	Params::UConsoleBlueprintLibrary_GetPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.ConsoleBlueprintLibrary.GetCompressedKeyString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UConsoleBlueprintLibrary::GetCompressedKeyString(struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConsoleBlueprintLibrary", "GetCompressedKeyString");

	Params::UConsoleBlueprintLibrary_GetCompressedKeyString_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHAchievementSaveGame
// (None)

class UClass* UDHAchievementSaveGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAchievementSaveGame");

	return Clss;
}


// DHAchievementSaveGame Dungeonhaven.Default__DHAchievementSaveGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAchievementSaveGame* UDHAchievementSaveGame::GetDefaultObj()
{
	static class UDHAchievementSaveGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAchievementSaveGame*>(UDHAchievementSaveGame::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHAchievementSystem
// (None)

class UClass* UDHAchievementSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAchievementSystem");

	return Clss;
}


// DHAchievementSystem Dungeonhaven.Default__DHAchievementSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAchievementSystem* UDHAchievementSystem::GetDefaultObj()
{
	static class UDHAchievementSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAchievementSystem*>(UDHAchievementSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHAchievementSystem.SaveAchievementProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHAchievementSystem::SaveAchievementProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHAchievementSystem", "SaveAchievementProgress");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHAchievementSystem.LoadAchievementProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHAchievementSystem::LoadAchievementProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHAchievementSystem", "LoadAchievementProgress");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHAchievementSystem.IncrementAchievementProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDHAchievement          EDHAchievement                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NCount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHAchievementSystem::IncrementAchievementProgress(enum class EDHAchievement EDHAchievement, int32 NCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHAchievementSystem", "IncrementAchievementProgress");

	Params::UDHAchievementSystem_IncrementAchievementProgress_Params Parms{};

	Parms.EDHAchievement = EDHAchievement;
	Parms.NCount = NCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHAchievementSystem.GetDHAchievementSystem
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDHAchievementSystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDHAchievementSystem* UDHAchievementSystem::GetDHAchievementSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHAchievementSystem", "GetDHAchievementSystem");

	Params::UDHAchievementSystem_GetDHAchievementSystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHAnimNotify_ActivateComponent
// (None)

class UClass* UDHAnimNotify_ActivateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotify_ActivateComponent");

	return Clss;
}


// DHAnimNotify_ActivateComponent Dungeonhaven.Default__DHAnimNotify_ActivateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotify_ActivateComponent* UDHAnimNotify_ActivateComponent::GetDefaultObj()
{
	static class UDHAnimNotify_ActivateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotify_ActivateComponent*>(UDHAnimNotify_ActivateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHAnimNotify_ActivateComponentAudio
// (None)

class UClass* UDHAnimNotify_ActivateComponentAudio::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotify_ActivateComponentAudio");

	return Clss;
}


// DHAnimNotify_ActivateComponentAudio Dungeonhaven.Default__DHAnimNotify_ActivateComponentAudio
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotify_ActivateComponentAudio* UDHAnimNotify_ActivateComponentAudio::GetDefaultObj()
{
	static class UDHAnimNotify_ActivateComponentAudio* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotify_ActivateComponentAudio*>(UDHAnimNotify_ActivateComponentAudio::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHAnimNotify_PlayParticleEffectIfBool
// (None)

class UClass* UDHAnimNotify_PlayParticleEffectIfBool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotify_PlayParticleEffectIfBool");

	return Clss;
}


// DHAnimNotify_PlayParticleEffectIfBool Dungeonhaven.Default__DHAnimNotify_PlayParticleEffectIfBool
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotify_PlayParticleEffectIfBool* UDHAnimNotify_PlayParticleEffectIfBool::GetDefaultObj()
{
	static class UDHAnimNotify_PlayParticleEffectIfBool* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotify_PlayParticleEffectIfBool*>(UDHAnimNotify_PlayParticleEffectIfBool::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHAnimNotify_PlaySoundAndRegister
// (None)

class UClass* UDHAnimNotify_PlaySoundAndRegister::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotify_PlaySoundAndRegister");

	return Clss;
}


// DHAnimNotify_PlaySoundAndRegister Dungeonhaven.Default__DHAnimNotify_PlaySoundAndRegister
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotify_PlaySoundAndRegister* UDHAnimNotify_PlaySoundAndRegister::GetDefaultObj()
{
	static class UDHAnimNotify_PlaySoundAndRegister* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotify_PlaySoundAndRegister*>(UDHAnimNotify_PlaySoundAndRegister::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHAnimNotify_PlaySoundAndRegister.OnSoundSpawned
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioComponent*             Spawned                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHAnimNotify_PlaySoundAndRegister::OnSoundSpawned(class USkeletalMeshComponent* MeshComp, class UAudioComponent* Spawned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHAnimNotify_PlaySoundAndRegister", "OnSoundSpawned");

	Params::UDHAnimNotify_PlaySoundAndRegister_OnSoundSpawned_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Spawned = Spawned;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Dungeonhaven.DHAnimNotify_PlayParticleEffect
// (None)

class UClass* UDHAnimNotify_PlayParticleEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotify_PlayParticleEffect");

	return Clss;
}


// DHAnimNotify_PlayParticleEffect Dungeonhaven.Default__DHAnimNotify_PlayParticleEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotify_PlayParticleEffect* UDHAnimNotify_PlayParticleEffect::GetDefaultObj()
{
	static class UDHAnimNotify_PlayParticleEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotify_PlayParticleEffect*>(UDHAnimNotify_PlayParticleEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHAnimNotifyState_TrailIf
// (None)

class UClass* UDHAnimNotifyState_TrailIf::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHAnimNotifyState_TrailIf");

	return Clss;
}


// DHAnimNotifyState_TrailIf Dungeonhaven.Default__DHAnimNotifyState_TrailIf
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHAnimNotifyState_TrailIf* UDHAnimNotifyState_TrailIf::GetDefaultObj()
{
	static class UDHAnimNotifyState_TrailIf* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHAnimNotifyState_TrailIf*>(UDHAnimNotifyState_TrailIf::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHCharacter
// (Actor, Pawn)

class UClass* ADHCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHCharacter");

	return Clss;
}


// DHCharacter Dungeonhaven.Default__DHCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class ADHCharacter* ADHCharacter::GetDefaultObj()
{
	static class ADHCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<ADHCharacter*>(ADHCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHCharacter.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHCharacter::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHCharacter", "SetSignificanceBP");

	Params::ADHCharacter_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.DHCharacter.FadeOutAudio
// (Event, Public, BlueprintEvent)
// Parameters:

void ADHCharacter::FadeOutAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHCharacter", "FadeOutAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHCharacter.FadeInAudio
// (Event, Public, BlueprintEvent)
// Parameters:

void ADHCharacter::FadeInAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHCharacter", "FadeInAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Class Dungeonhaven.DHCharacterMovementComponent
// (None)

class UClass* UDHCharacterMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHCharacterMovementComponent");

	return Clss;
}


// DHCharacterMovementComponent Dungeonhaven.Default__DHCharacterMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHCharacterMovementComponent* UDHCharacterMovementComponent::GetDefaultObj()
{
	static class UDHCharacterMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHCharacterMovementComponent*>(UDHCharacterMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHCharacterMovementComponent.SwitchToOrientToMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHCharacterMovementComponent::SwitchToOrientToMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHCharacterMovementComponent", "SwitchToOrientToMovement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHCharacterMovementComponent.SwitchToControllerRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHCharacterMovementComponent::SwitchToControllerRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHCharacterMovementComponent", "SwitchToControllerRotation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHConsoleExtensionComponent
// (None)

class UClass* UDHConsoleExtensionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHConsoleExtensionComponent");

	return Clss;
}


// DHConsoleExtensionComponent Dungeonhaven.Default__DHConsoleExtensionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHConsoleExtensionComponent* UDHConsoleExtensionComponent::GetDefaultObj()
{
	static class UDHConsoleExtensionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHConsoleExtensionComponent*>(UDHConsoleExtensionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHFrogBase
// (Actor)

class UClass* ADHFrogBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHFrogBase");

	return Clss;
}


// DHFrogBase Dungeonhaven.Default__DHFrogBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ADHFrogBase* ADHFrogBase::GetDefaultObj()
{
	static class ADHFrogBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ADHFrogBase*>(ADHFrogBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHFunctionLibrary
// (None)

class UClass* UDHFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHFunctionLibrary");

	return Clss;
}


// DHFunctionLibrary Dungeonhaven.Default__DHFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHFunctionLibrary* UDHFunctionLibrary::GetDefaultObj()
{
	static class UDHFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHFunctionLibrary*>(UDHFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHFunctionLibrary.UpdateVFXLocationsAlongSplineFromEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InitialVFXDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VFXDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UParticleSystemComponent*>VFXList                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             PS                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::UpdateVFXLocationsAlongSplineFromEnd(class USplineComponent* Spline, float InitialVFXDistance, float VFXDistance, TArray<class UParticleSystemComponent*>& VFXList, class UParticleSystem* PS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "UpdateVFXLocationsAlongSplineFromEnd");

	Params::UDHFunctionLibrary_UpdateVFXLocationsAlongSplineFromEnd_Params Parms{};

	Parms.Spline = Spline;
	Parms.InitialVFXDistance = InitialVFXDistance;
	Parms.VFXDistance = VFXDistance;
	Parms.VFXList = VFXList;
	Parms.PS = PS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.UpdateOverlapsOnComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::UpdateOverlapsOnComponent(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "UpdateOverlapsOnComponent");

	Params::UDHFunctionLibrary_UpdateOverlapsOnComponent_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.UnpauseTimerByHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                Handle                                                           (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::UnpauseTimerByHandle(class AActor* Actor, struct FTimerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "UnpauseTimerByHandle");

	Params::UDHFunctionLibrary_UnpauseTimerByHandle_Params Parms{};

	Parms.Actor = Actor;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.TryToLaunchURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCopyURLToClipboard                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::TryToLaunchURL(const class FString& URL, bool bCopyURLToClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "TryToLaunchURL");

	Params::UDHFunctionLibrary_TryToLaunchURL_Params Parms{};

	Parms.URL = URL;
	Parms.bCopyURLToClipboard = bCopyURLToClipboard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.SpawnVFXAlongSplineFromEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartDistance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DistanceBetweenSpawns                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             PS                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SpawnVFXAlongSplineFromEnd(class USplineComponent* Spline, float StartDistance, float DistanceBetweenSpawns, class UParticleSystem* PS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SpawnVFXAlongSplineFromEnd");

	Params::UDHFunctionLibrary_SpawnVFXAlongSplineFromEnd_Params Parms{};

	Parms.Spline = Spline;
	Parms.StartDistance = StartDistance;
	Parms.DistanceBetweenSpawns = DistanceBetweenSpawns;
	Parms.PS = PS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SmoothSpline
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Points                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SmoothSpline(class USplineComponent* Spline, TArray<struct FVector>& Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SmoothSpline");

	Params::UDHFunctionLibrary_SmoothSpline_Params Parms{};

	Parms.Spline = Spline;
	Parms.Points = Points;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SimulateVFXMovementAlongSplineFromEnd
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InitialVFXDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VFXDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Acceleration                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxVelocity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UParticleSystemComponent*>VFXList                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      CurrentVelocityList                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             PS                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SimulateVFXMovementAlongSplineFromEnd(class USplineComponent* Spline, float DeltaSeconds, float InitialVFXDistance, float VFXDistance, float Acceleration, float MaxVelocity, TArray<class UParticleSystemComponent*>& VFXList, TArray<float>& CurrentVelocityList, class UParticleSystem* PS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SimulateVFXMovementAlongSplineFromEnd");

	Params::UDHFunctionLibrary_SimulateVFXMovementAlongSplineFromEnd_Params Parms{};

	Parms.Spline = Spline;
	Parms.DeltaSeconds = DeltaSeconds;
	Parms.InitialVFXDistance = InitialVFXDistance;
	Parms.VFXDistance = VFXDistance;
	Parms.Acceleration = Acceleration;
	Parms.MaxVelocity = MaxVelocity;
	Parms.VFXList = VFXList;
	Parms.CurrentVelocityList = CurrentVelocityList;
	Parms.PS = PS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SimulateClickOnInputKeySelector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputKeySelector*           Selector                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SimulateClickOnInputKeySelector(class UInputKeySelector* Selector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SimulateClickOnInputKeySelector");

	Params::UDHFunctionLibrary_SimulateClickOnInputKeySelector_Params Parms{};

	Parms.Selector = Selector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SetWidgetNavigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               AllowAnalog                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowKey                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AllowTab                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SetWidgetNavigation(bool AllowAnalog, bool AllowKey, bool AllowTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SetWidgetNavigation");

	Params::UDHFunctionLibrary_SetWidgetNavigation_Params Parms{};

	Parms.AllowAnalog = AllowAnalog;
	Parms.AllowKey = AllowKey;
	Parms.AllowTab = AllowTab;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SetRootMotionTranslationScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ScaleValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SetRootMotionTranslationScale(class ACharacter* Character, float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SetRootMotionTranslationScale");

	Params::UDHFunctionLibrary_SetRootMotionTranslationScale_Params Parms{};

	Parms.Character = Character;
	Parms.ScaleValue = ScaleValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SetForceFeedbackScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ScaleValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveToConfig                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SetForceFeedbackScale(class UObject* WorldContextObject, float ScaleValue, bool bSaveToConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SetForceFeedbackScale");

	Params::UDHFunctionLibrary_SetForceFeedbackScale_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScaleValue = ScaleValue;
	Parms.bSaveToConfig = bSaveToConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SetCameraMoveableWhenPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewIsMoveable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SetCameraMoveableWhenPaused(class UObject* WorldContextObject, bool bNewIsMoveable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SetCameraMoveableWhenPaused");

	Params::UDHFunctionLibrary_SetCameraMoveableWhenPaused_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bNewIsMoveable = bNewIsMoveable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.SetAllUsersFocusToWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     PWidget                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::SetAllUsersFocusToWidget(class UWidget* PWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "SetAllUsersFocusToWidget");

	Params::UDHFunctionLibrary_SetAllUsersFocusToWidget_Params Parms{};

	Parms.PWidget = PWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.RowName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDHDataTableID              ID                                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UDHFunctionLibrary::RowName(struct FDHDataTableID& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "RowName");

	Params::UDHFunctionLibrary_RowName_Params Parms{};

	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.RemoveDisabledEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UParticleSystem*             ParticleSystem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::RemoveDisabledEmitters(class UParticleSystem* ParticleSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "RemoveDisabledEmitters");

	Params::UDHFunctionLibrary_RemoveDisabledEmitters_Params Parms{};

	Parms.ParticleSystem = ParticleSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.RebuildNavMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationSystemV1*         NavSystem                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::RebuildNavMesh(class UObject* WorldContextObject, class UNavigationSystemV1* NavSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "RebuildNavMesh");

	Params::UDHFunctionLibrary_RebuildNavMesh_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.NavSystem = NavSystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.PauseTimerByHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                Handle                                                           (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::PauseTimerByHandle(class AActor* Actor, struct FTimerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "PauseTimerByHandle");

	Params::UDHFunctionLibrary_PauseTimerByHandle_Params Parms{};

	Parms.Actor = Actor;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.IsTimerActiveByHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                Handle                                                           (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::IsTimerActiveByHandle(class AActor* Actor, struct FTimerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "IsTimerActiveByHandle");

	Params::UDHFunctionLibrary_IsTimerActiveByHandle_Params Parms{};

	Parms.Actor = Actor;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.IsGOGBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::IsGOGBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "IsGOGBuild");

	Params::UDHFunctionLibrary_IsGOGBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.InterpolateDeceleration
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              A                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              B                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              T                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::InterpolateDeceleration(float A, float B, float T)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "InterpolateDeceleration");

	Params::UDHFunctionLibrary_InterpolateDeceleration_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.T = T;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetTimeSeconds
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetTimeSeconds(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetTimeSeconds");

	Params::UDHFunctionLibrary_GetTimeSeconds_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetTimerRemainingTimebyHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                Handle                                                           (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetTimerRemainingTimebyHandle(class AActor* Actor, struct FTimerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetTimerRemainingTimebyHandle");

	Params::UDHFunctionLibrary_GetTimerRemainingTimebyHandle_Params Parms{};

	Parms.Actor = Actor;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetScaledPlayRate
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetScaledPlayRate(class UAnimInstance* AnimInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetScaledPlayRate");

	Params::UDHFunctionLibrary_GetScaledPlayRate_Params Parms{};

	Parms.AnimInstance = AnimInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionVelocity
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCharacterMovementComponent* CharMovement                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDHFunctionLibrary::GetRootMotionVelocity(class UCharacterMovementComponent* CharMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetRootMotionVelocity");

	Params::UDHFunctionLibrary_GetRootMotionVelocity_Params Parms{};

	Parms.CharMovement = CharMovement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionForwardDeltaFromSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetRootMotionForwardDeltaFromSlot(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage, class FName SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetRootMotionForwardDeltaFromSlot");

	Params::UDHFunctionLibrary_GetRootMotionForwardDeltaFromSlot_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;
	Parms.Montage = Montage;
	Parms.SlotName = SlotName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetRootMotionForwardDeltaFromAnimation
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimSequence*               Sequence                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetRootMotionForwardDeltaFromAnimation(class UAnimSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetRootMotionForwardDeltaFromAnimation");

	Params::UDHFunctionLibrary_GetRootMotionForwardDeltaFromAnimation_Params Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetOnlineSubsystemID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDHFunctionLibrary::GetOnlineSubsystemID(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetOnlineSubsystemID");

	Params::UDHFunctionLibrary_GetOnlineSubsystemID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetForceFeedbackScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetForceFeedbackScale(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetForceFeedbackScale");

	Params::UDHFunctionLibrary_GetForceFeedbackScale_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetDefaultObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UDHFunctionLibrary::GetDefaultObject(class UClass* Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetDefaultObject");

	Params::UDHFunctionLibrary_GetDefaultObject_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetCurrentStreamingLevelName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ReferenceActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDHFunctionLibrary::GetCurrentStreamingLevelName(class AActor* ReferenceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetCurrentStreamingLevelName");

	Params::UDHFunctionLibrary_GetCurrentStreamingLevelName_Params Parms{};

	Parms.ReferenceActor = ReferenceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetCurrentPersistentLevelName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UDHFunctionLibrary::GetCurrentPersistentLevelName(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetCurrentPersistentLevelName");

	Params::UDHFunctionLibrary_GetCurrentPersistentLevelName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetCurrentPersistentLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevel*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevel* UDHFunctionLibrary::GetCurrentPersistentLevel(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetCurrentPersistentLevel");

	Params::UDHFunctionLibrary_GetCurrentPersistentLevel_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetClosestHitLocationToPointAllBones
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutBoneName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::GetClosestHitLocationToPointAllBones(class USkeletalMeshComponent* Mesh, struct FVector& SourceLocation, struct FVector* OutLocation, class FName* OutBoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetClosestHitLocationToPointAllBones");

	Params::UDHFunctionLibrary_GetClosestHitLocationToPointAllBones_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.SourceLocation = SourceLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutBoneName != nullptr)
		*OutBoneName = Parms.OutBoneName;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetClosestHitLocationToPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                PossibleBoneNames                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OutBoneName                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::GetClosestHitLocationToPoint(class USkeletalMeshComponent* Mesh, struct FVector& SourceLocation, const TArray<class FName>& PossibleBoneNames, struct FVector* OutLocation, class FName* OutBoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetClosestHitLocationToPoint");

	Params::UDHFunctionLibrary_GetClosestHitLocationToPoint_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.SourceLocation = SourceLocation;
	Parms.PossibleBoneNames = PossibleBoneNames;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutBoneName != nullptr)
		*OutBoneName = Parms.OutBoneName;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetBoneNameFromBodyIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BodyIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UDHFunctionLibrary::GetBoneNameFromBodyIndex(class USkeletalMeshComponent* SkeletalMeshComponent, int32 BodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetBoneNameFromBodyIndex");

	Params::UDHFunctionLibrary_GetBoneNameFromBodyIndex_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.BodyIndex = BodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetAllRootMotionForwardDeltaFromMontage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UDHFunctionLibrary::GetAllRootMotionForwardDeltaFromMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetAllRootMotionForwardDeltaFromMontage");

	Params::UDHFunctionLibrary_GetAllRootMotionForwardDeltaFromMontage_Params Parms{};

	Parms.Montage = Montage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetActorNameStr
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDHFunctionLibrary::GetActorNameStr(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetActorNameStr");

	Params::UDHFunctionLibrary_GetActorNameStr_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetActorName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UDHFunctionLibrary::GetActorName(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetActorName");

	Params::UDHFunctionLibrary_GetActorName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.GetActiveMontage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMesh                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UDHFunctionLibrary::GetActiveMontage(class USkeletalMeshComponent* SkeletalMesh, float* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "GetActiveMontage");

	Params::UDHFunctionLibrary_GetActiveMontage_Params Parms{};

	Parms.SkeletalMesh = SkeletalMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPosition != nullptr)
		*OutPosition = Parms.OutPosition;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.DrawSpline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SegmentLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::DrawSpline(class USplineComponent* Spline, float SegmentLength, struct FLinearColor& Color, float Thickness, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "DrawSpline");

	Params::UDHFunctionLibrary_DrawSpline_Params Parms{};

	Parms.Spline = Spline;
	Parms.SegmentLength = SegmentLength;
	Parms.Color = Color;
	Parms.Thickness = Thickness;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.DrawRangeAttackPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetPos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VelocitySize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GravityScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreferLargeArc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Precision                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeTime                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::DrawRangeAttackPath(class UObject* WorldContextObject, struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float GravityScale, bool bPreferLargeArc, int32 Precision, float LifeTime, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "DrawRangeAttackPath");

	Params::UDHFunctionLibrary_DrawRangeAttackPath_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.StartPos = StartPos;
	Parms.TargetPos = TargetPos;
	Parms.VelocitySize = VelocitySize;
	Parms.GravityScale = GravityScale;
	Parms.bPreferLargeArc = bPreferLargeArc;
	Parms.Precision = Precision;
	Parms.LifeTime = LifeTime;
	Parms.Thickness = Thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.CopyMeshComponentVertextColors
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        SourceMesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        DstMesh                                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::CopyMeshComponentVertextColors(class UStaticMeshComponent* SourceMesh, class UStaticMeshComponent* DstMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CopyMeshComponentVertextColors");

	Params::UDHFunctionLibrary_CopyMeshComponentVertextColors_Params Parms{};

	Parms.SourceMesh = SourceMesh;
	Parms.DstMesh = DstMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.ClearAndInvalidateTimer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimerHandle                Handle                                                           (Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHFunctionLibrary::ClearAndInvalidateTimer(class AActor* Actor, struct FTimerHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "ClearAndInvalidateTimer");

	Params::UDHFunctionLibrary_ClearAndInvalidateTimer_Params Parms{};

	Parms.Actor = Actor;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHFunctionLibrary.CircleCircleIntersection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   P0                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              R0                                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   P1                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              R1                                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Result0                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Result1                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHFunctionLibrary::CircleCircleIntersection(struct FVector2D& P0, float R0, struct FVector2D& P1, float R1, struct FVector2D* Result0, struct FVector2D* Result1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CircleCircleIntersection");

	Params::UDHFunctionLibrary_CircleCircleIntersection_Params Parms{};

	Parms.P0 = P0;
	Parms.R0 = R0;
	Parms.P1 = P1;
	Parms.R1 = R1;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result0 != nullptr)
		*Result0 = std::move(Parms.Result0);

	if (Result1 != nullptr)
		*Result1 = std::move(Parms.Result1);

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.CheckProperties
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class FName> UDHFunctionLibrary::CheckProperties(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CheckProperties");

	Params::UDHFunctionLibrary_CheckProperties_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackVelocityFlexible
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     StartPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetPos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VelocitySize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxVelocity                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GravityScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreferLargeArc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDHFunctionLibrary::CalcRangeAttackVelocityFlexible(struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float MaxVelocity, float GravityScale, bool bPreferLargeArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CalcRangeAttackVelocityFlexible");

	Params::UDHFunctionLibrary_CalcRangeAttackVelocityFlexible_Params Parms{};

	Parms.StartPos = StartPos;
	Parms.TargetPos = TargetPos;
	Parms.VelocitySize = VelocitySize;
	Parms.MaxVelocity = MaxVelocity;
	Parms.GravityScale = GravityScale;
	Parms.bPreferLargeArc = bPreferLargeArc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackVelocity
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     StartPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetPos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VelocitySize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GravityScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreferLargeArc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDHFunctionLibrary::CalcRangeAttackVelocity(struct FVector& StartPos, struct FVector& TargetPos, float VelocitySize, float GravityScale, bool bPreferLargeArc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CalcRangeAttackVelocity");

	Params::UDHFunctionLibrary_CalcRangeAttackVelocity_Params Parms{};

	Parms.StartPos = StartPos;
	Parms.TargetPos = TargetPos;
	Parms.VelocitySize = VelocitySize;
	Parms.GravityScale = GravityScale;
	Parms.bPreferLargeArc = bPreferLargeArc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.CalcRangeAttackTargetLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     StartPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetPos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetVel                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              VelocitySize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDHFunctionLibrary::CalcRangeAttackTargetLocation(struct FVector& StartPos, struct FVector& TargetPos, struct FVector& TargetVel, float VelocitySize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CalcRangeAttackTargetLocation");

	Params::UDHFunctionLibrary_CalcRangeAttackTargetLocation_Params Parms{};

	Parms.StartPos = StartPos;
	Parms.TargetPos = TargetPos;
	Parms.TargetVel = TargetVel;
	Parms.VelocitySize = VelocitySize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHFunctionLibrary.CalcCryptBossThrowEndLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BossStartPos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SwordPos                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SwordLocalDistance2D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SwordAngle2DDeg                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawDebug                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UDHFunctionLibrary::CalcCryptBossThrowEndLocation(class UObject* WorldContextObject, struct FVector& BossStartPos, struct FVector& SwordPos, float SwordLocalDistance2D, float SwordAngle2DDeg, bool bDrawDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHFunctionLibrary", "CalcCryptBossThrowEndLocation");

	Params::UDHFunctionLibrary_CalcCryptBossThrowEndLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.BossStartPos = BossStartPos;
	Parms.SwordPos = SwordPos;
	Parms.SwordLocalDistance2D = SwordLocalDistance2D;
	Parms.SwordAngle2DDeg = SwordAngle2DDeg;
	Parms.bDrawDebug = bDrawDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHGameEngine
// (None)

class UClass* UDHGameEngine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHGameEngine");

	return Clss;
}


// DHGameEngine Dungeonhaven.Default__DHGameEngine
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHGameEngine* UDHGameEngine::GetDefaultObj()
{
	static class UDHGameEngine* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHGameEngine*>(UDHGameEngine::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHGameInstance
// (None)

class UClass* UDHGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHGameInstance");

	return Clss;
}


// DHGameInstance Dungeonhaven.Default__DHGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHGameInstance* UDHGameInstance::GetDefaultObj()
{
	static class UDHGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHGameInstance*>(UDHGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHGameInstance.WelcomeScreenEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::WelcomeScreenEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "WelcomeScreenEnabled");

	Params::UDHGameInstance_WelcomeScreenEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.UserHasStormModeDLC
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::UserHasStormModeDLC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "UserHasStormModeDLC");

	Params::UDHGameInstance_UserHasStormModeDLC_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.UpdateStormModeDLCEntitlement
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDHGameInstance::UpdateStormModeDLCEntitlement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "UpdateStormModeDLCEntitlement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHGameInstance.UpdateStormModeActivitiyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NProgress                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::UpdateStormModeActivitiyState(int32 NProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "UpdateStormModeActivitiyState");

	Params::UDHGameInstance_UpdateStormModeActivitiyState_Params Parms{};

	Parms.NProgress = NProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.UpdateCampaignActivitiyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NProgress                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::UpdateCampaignActivitiyState(int32 NProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "UpdateCampaignActivitiyState");

	Params::UDHGameInstance_UpdateCampaignActivitiyState_Params Parms{};

	Parms.NProgress = NProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.TestSeriesS30FPS
// (Final, Exec, Native, Public)
// Parameters:
// bool                               CapAt30FPS                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::TestSeriesS30FPS(bool CapAt30FPS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "TestSeriesS30FPS");

	Params::UDHGameInstance_TestSeriesS30FPS_Params Parms{};

	Parms.CapAt30FPS = CapAt30FPS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.TestMusicFromDLC
// (Final, Exec, Native, Public)
// Parameters:
// class FName                        MusicName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::TestMusicFromDLC(class FName MusicName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "TestMusicFromDLC");

	Params::UDHGameInstance_TestMusicFromDLC_Params Parms{};

	Parms.MusicName = MusicName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.TestControllerDisconnect
// (Final, Exec, Native, Protected)
// Parameters:

void UDHGameInstance::TestControllerDisconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "TestControllerDisconnect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.TestChangeProfile
// (Final, Exec, Native, Protected)
// Parameters:

void UDHGameInstance::TestChangeProfile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "TestChangeProfile");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.TestAdvancedTrigger
// (Final, Exec, Native, Protected)
// Parameters:

void UDHGameInstance::TestAdvancedTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "TestAdvancedTrigger");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.SmokeTest_Stop
// (Final, Exec, Native, Public)
// Parameters:

void UDHGameInstance::SmokeTest_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SmokeTest_Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.SmokeTest_Start
// (Final, Exec, Native, Public)
// Parameters:

void UDHGameInstance::SmokeTest_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SmokeTest_Start");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.ShowStorePage_MusicDLC
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHGameInstance::ShowStorePage_MusicDLC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ShowStorePage_MusicDLC");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.ShouldForcePS4Icons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::ShouldForcePS4Icons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ShouldForcePS4Icons");

	Params::UDHGameInstance_ShouldForcePS4Icons_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.SetSeriesS60FPS
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHGameInstance::SetSeriesS60FPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SetSeriesS60FPS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.SetSeriesS30FPS
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHGameInstance::SetSeriesS30FPS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SetSeriesS30FPS");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.SetRichPresenceText
// (Final, Exec, Native, Protected)
// Parameters:
// class FString                      PresenceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::SetRichPresenceText(const class FString& PresenceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SetRichPresenceText");

	Params::UDHGameInstance_SetRichPresenceText_Params Parms{};

	Parms.PresenceID = PresenceID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.SaveGame
// (Event, Public, BlueprintEvent)
// Parameters:

void UDHGameInstance::SaveGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "SaveGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHGameInstance.ReturnRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::ReturnRenderTarget(class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ReturnRenderTarget");

	Params::UDHGameInstance_ReturnRenderTarget_Params Parms{};

	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.RefreshPlatformLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CurrentLanguage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::RefreshPlatformLanguage(const class FString& CurrentLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "RefreshPlatformLanguage");

	Params::UDHGameInstance_RefreshPlatformLanguage_Params Parms{};

	Parms.CurrentLanguage = CurrentLanguage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.RefreshMapList
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDHGameInstance::RefreshMapList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "RefreshMapList");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.QueryTwitchEntitlements
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDHGameInstance::QueryTwitchEntitlements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "QueryTwitchEntitlements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.OnWorldCleanup
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSessionEnded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCleanupResources                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::OnWorldCleanup(class UWorld* World, bool bSessionEnded, bool bCleanupResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnWorldCleanup");

	Params::UDHGameInstance_OnWorldCleanup_Params Parms{};

	Parms.World = World;
	Parms.bSessionEnded = bSessionEnded;
	Parms.bCleanupResources = bCleanupResources;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.OnUnprocessedTwitchDropsUpdatedBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UDHGameInstance::OnUnprocessedTwitchDropsUpdatedBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnUnprocessedTwitchDropsUpdatedBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHGameInstance.OnLogosComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHGameInstance::OnLogosComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnLogosComplete");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.OnIdealLanguageDetermined
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      CultureDetermined                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::OnIdealLanguageDetermined(const class FString& CultureDetermined)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnIdealLanguageDetermined");

	Params::UDHGameInstance_OnIdealLanguageDetermined_Params Parms{};

	Parms.CultureDetermined = CultureDetermined;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.DHGameInstance.OnChangeProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              EventUserIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::OnChangeProfile(int32 EventUserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnChangeProfile");

	Params::UDHGameInstance_OnChangeProfile_Params Parms{};

	Parms.EventUserIndex = EventUserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.OnApplicationWillEnterBackground
// (Event, Public, BlueprintEvent)
// Parameters:

void UDHGameInstance::OnApplicationWillEnterBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "OnApplicationWillEnterBackground");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHGameInstance.LoadMusicFromDLC
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        MusicName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USoundBase* UDHGameInstance::LoadMusicFromDLC(class FName MusicName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "LoadMusicFromDLC");

	Params::UDHGameInstance_LoadMusicFromDLC_Params Parms{};

	Parms.MusicName = MusicName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.LoadDHMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MapName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::LoadDHMap(class UObject* WorldContextObject, class FName MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "LoadDHMap");

	Params::UDHGameInstance_LoadDHMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.IsXboxOneSeriesS
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsXboxOneSeriesS()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsXboxOneSeriesS");

	Params::UDHGameInstance_IsXboxOneSeriesS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsShippingBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsShippingBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsShippingBuild");

	Params::UDHGameInstance_IsShippingBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsMusicDLCOwned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsMusicDLCOwned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsMusicDLCOwned");

	Params::UDHGameInstance_IsMusicDLCOwned_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsMusicDLCInstalled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsMusicDLCInstalled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsMusicDLCInstalled");

	Params::UDHGameInstance_IsMusicDLCInstalled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsMusicDLCAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsMusicDLCAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsMusicDLCAvailable");

	Params::UDHGameInstance_IsMusicDLCAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsInKeyboardMode
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsInKeyboardMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsInKeyboardMode");

	Params::UDHGameInstance_IsInKeyboardMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.IsEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::IsEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "IsEditor");

	Params::UDHGameInstance_IsEditor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetUnitedTwitchDropList
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FDHTwitchDrop>       Drops                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FDHTwitchDrop>       OutDrops                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::GetUnitedTwitchDropList(TArray<struct FDHTwitchDrop>& Drops, TArray<struct FDHTwitchDrop>* OutDrops)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetUnitedTwitchDropList");

	Params::UDHGameInstance_GetUnitedTwitchDropList_Params Parms{};

	Parms.Drops = Drops;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDrops != nullptr)
		*OutDrops = std::move(Parms.OutDrops);

}


// Function Dungeonhaven.DHGameInstance.GetRayTracingSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDHRayTracing*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDHRayTracing* UDHGameInstance::GetRayTracingSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetRayTracingSettings");

	Params::UDHGameInstance_GetRayTracingSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetPrimaryUserIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UDHGameInstance::GetPrimaryUserIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetPrimaryUserIndex");

	Params::UDHGameInstance_GetPrimaryUserIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetPrimaryControllerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UDHGameInstance::GetPrimaryControllerIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetPrimaryControllerIndex");

	Params::UDHGameInstance_GetPrimaryControllerIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetPlatformSKU
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EPlatformSKU            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPlatformSKU UDHGameInstance::GetPlatformSKU()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetPlatformSKU");

	Params::UDHGameInstance_GetPlatformSKU_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetPathForMap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        MapName                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDHGameInstance::GetPathForMap(class UObject* WorldContextObject, class FName MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetPathForMap");

	Params::UDHGameInstance_GetPathForMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetNewUnprocessedTwitchDrops
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FDHTwitchDrop>       ProcessedDrops                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FDHTwitchDrop>       OutDrops                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::GetNewUnprocessedTwitchDrops(TArray<struct FDHTwitchDrop>& ProcessedDrops, TArray<struct FDHTwitchDrop>* OutDrops)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetNewUnprocessedTwitchDrops");

	Params::UDHGameInstance_GetNewUnprocessedTwitchDrops_Params Parms{};

	Parms.ProcessedDrops = ProcessedDrops;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDrops != nullptr)
		*OutDrops = std::move(Parms.OutDrops);

}


// Function Dungeonhaven.DHGameInstance.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDHGameInstance*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDHGameInstance* UDHGameInstance::GetInstance(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetInstance");

	Params::UDHGameInstance_GetInstance_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.GetBuildVersionString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDHGameInstance::GetBuildVersionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "GetBuildVersionString");

	Params::UDHGameInstance_GetBuildVersionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.ForceSaveBackup
// (Final, Exec, Native, Public)
// Parameters:
// int32                              NSlotNumber                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::ForceSaveBackup(int32 NSlotNumber, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ForceSaveBackup");

	Params::UDHGameInstance_ForceSaveBackup_Params Parms{};

	Parms.NSlotNumber = NSlotNumber;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DetermineIdealLanguage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              SupportedLanguages                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DetermineIdealLanguage(TArray<class FString>& SupportedLanguages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DetermineIdealLanguage");

	Params::UDHGameInstance_DetermineIdealLanguage_Params Parms{};

	Parms.SupportedLanguages = SupportedLanguages;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugShowStorePage
// (Final, Exec, Native, Public)
// Parameters:

void UDHGameInstance::DebugShowStorePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugShowStorePage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugShowAchievementProgress
// (Final, Exec, Native, Protected)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugShowAchievementProgress(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugShowAchievementProgress");

	Params::UDHGameInstance_DebugShowAchievementProgress_Params Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugSetAchievementProgress
// (Final, Exec, Native, Protected)
// Parameters:
// enum class EDHAchievement          EAchievement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NProgress                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugSetAchievementProgress(enum class EDHAchievement EAchievement, int32 NProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugSetAchievementProgress");

	Params::UDHGameInstance_DebugSetAchievementProgress_Params Parms{};

	Parms.EAchievement = EAchievement;
	Parms.NProgress = NProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugIncrementAchievementProgress
// (Final, Exec, Native, Protected)
// Parameters:
// enum class EDHAchievement          EAchievement                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NCount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugIncrementAchievementProgress(enum class EDHAchievement EAchievement, int32 NCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugIncrementAchievementProgress");

	Params::UDHGameInstance_DebugIncrementAchievementProgress_Params Parms{};

	Parms.EAchievement = EAchievement;
	Parms.NCount = NCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugClearAchievements
// (Final, Exec, Native, Protected)
// Parameters:

void UDHGameInstance::DebugClearAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugClearAchievements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugActivity_Start
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugActivity_Start(const class FString& ActivityId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugActivity_Start");

	Params::UDHGameInstance_DebugActivity_Start_Params Parms{};

	Parms.ActivityId = ActivityId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugActivity_Resume
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             NProgress                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugActivity_Resume(const class FString& ActivityId, uint32 NProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugActivity_Resume");

	Params::UDHGameInstance_DebugActivity_Resume_Params Parms{};

	Parms.ActivityId = ActivityId;
	Parms.NProgress = NProgress;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugActivity_ResetAll
// (Final, Exec, Native, Public)
// Parameters:

void UDHGameInstance::DebugActivity_ResetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugActivity_ResetAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugActivity_End
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugActivity_End(const class FString& ActivityId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugActivity_End");

	Params::UDHGameInstance_DebugActivity_End_Params Parms{};

	Parms.ActivityId = ActivityId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.DebugActivity_Availability
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      ActivityId                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::DebugActivity_Availability(const class FString& ActivityId, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "DebugActivity_Availability");

	Params::UDHGameInstance_DebugActivity_Availability_Params Parms{};

	Parms.ActivityId = ActivityId;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.ClearQueuedActivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHGameInstance::ClearQueuedActivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ClearQueuedActivity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.ClaimRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextureRenderTargetFormatFormat                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UDHGameInstance::ClaimRenderTarget(int32 Width, int32 Height, enum class ETextureRenderTargetFormat Format)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ClaimRenderTarget");

	Params::UDHGameInstance_ClaimRenderTarget_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.Format = Format;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.CheckDLCEntitlementWithNamespace
// (Final, Exec, Native, Protected)
// Parameters:
// class FString                      CatalogID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Namespace                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::CheckDLCEntitlementWithNamespace(const class FString& CatalogID, const class FString& Namespace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "CheckDLCEntitlementWithNamespace");

	Params::UDHGameInstance_CheckDLCEntitlementWithNamespace_Params Parms{};

	Parms.CatalogID = CatalogID;
	Parms.Namespace = Namespace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.CheckDLCEntitlement
// (Final, Exec, Native, Protected)
// Parameters:
// class FString                      CatalogID                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::CheckDLCEntitlement(const class FString& CatalogID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "CheckDLCEntitlement");

	Params::UDHGameInstance_CheckDLCEntitlement_Params Parms{};

	Parms.CatalogID = CatalogID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.ChangePermanentRichPresenceTextOverride
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      PresenceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSet                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::ChangePermanentRichPresenceTextOverride(const class FString& PresenceID, bool bSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "ChangePermanentRichPresenceTextOverride");

	Params::UDHGameInstance_ChangePermanentRichPresenceTextOverride_Params Parms{};

	Parms.PresenceID = PresenceID;
	Parms.bSet = bSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameInstance.AreConsoleCheatsEnabled
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHGameInstance::AreConsoleCheatsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "AreConsoleCheatsEnabled");

	Params::UDHGameInstance_AreConsoleCheatsEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameInstance.AddTemporaryRichPresenceTextOverride
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FString                      PresenceID                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DurationSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHGameInstance::AddTemporaryRichPresenceTextOverride(const class FString& PresenceID, float DurationSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameInstance", "AddTemporaryRichPresenceTextOverride");

	Params::UDHGameInstance_AddTemporaryRichPresenceTextOverride_Params Parms{};

	Parms.PresenceID = PresenceID;
	Parms.DurationSeconds = DurationSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHGameMode
// (Actor)

class UClass* ADHGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHGameMode");

	return Clss;
}


// DHGameMode Dungeonhaven.Default__DHGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class ADHGameMode* ADHGameMode::GetDefaultObj()
{
	static class ADHGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<ADHGameMode*>(ADHGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHGameMode.SetMyNamedInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::SetMyNamedInt(class UObject* WorldContextObject, class FName VariableName, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "SetMyNamedInt");

	Params::ADHGameMode_SetMyNamedInt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.SetMyInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::SetMyInt(class UObject* WorldContextObject, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "SetMyInt");

	Params::ADHGameMode_SetMyInt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.SetMeEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabledByDefault                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::SetMeEnabled(class UObject* WorldContextObject, bool bEnabledByDefault, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "SetMeEnabled");

	Params::ADHGameMode_SetMeEnabled_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bEnabledByDefault = bEnabledByDefault;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.SecretMagic
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      PW                                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::SecretMagic(const class FString& PW)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "SecretMagic");

	Params::ADHGameMode_SecretMagic_Params Parms{};

	Parms.PW = PW;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.RemoveMyNameFromChangedSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::RemoveMyNameFromChangedSet(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "RemoveMyNameFromChangedSet");

	Params::ADHGameMode_RemoveMyNameFromChangedSet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.RemoveActorNameFromChangedSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::RemoveActorNameFromChangedSet(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "RemoveActorNameFromChangedSet");

	Params::ADHGameMode_RemoveActorNameFromChangedSet_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.OnPreBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADHGameMode::OnPreBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "OnPreBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHGameMode.IsMyNameInChangedSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADHGameMode::IsMyNameInChangedSet(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "IsMyNameInChangedSet");

	Params::ADHGameMode_IsMyNameInChangedSet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.IsActorNameInChangedSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADHGameMode::IsActorNameInChangedSet(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "IsActorNameInChangedSet");

	Params::ADHGameMode_IsActorNameInChangedSet_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.GetMyNamedInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ADHGameMode::GetMyNamedInt(class UObject* WorldContextObject, class FName VariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "GetMyNamedInt");

	Params::ADHGameMode_GetMyNamedInt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.VariableName = VariableName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.GetMyInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ADHGameMode::GetMyInt(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "GetMyInt");

	Params::ADHGameMode_GetMyInt_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.GetLevelNameFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ADHGameMode::GetLevelNameFromActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "GetLevelNameFromActor");

	Params::ADHGameMode_GetLevelNameFromActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.GetDHGameMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ADHGameMode*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ADHGameMode* ADHGameMode::GetDHGameMode(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "GetDHGameMode");

	Params::ADHGameMode_GetDHGameMode_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.ConstructNameFromPrefixLevelAndActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PreFix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ADHGameMode::ConstructNameFromPrefixLevelAndActor(class AActor* Actor, const class FString& PreFix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "ConstructNameFromPrefixLevelAndActor");

	Params::ADHGameMode_ConstructNameFromPrefixLevelAndActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.PreFix = PreFix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.CheckInactiveFrogs
// (Final, Native, Protected)
// Parameters:

void ADHGameMode::CheckInactiveFrogs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "CheckInactiveFrogs");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.AmIEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabledByDefault                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADHGameMode::AmIEnabled(class UObject* WorldContextObject, bool bEnabledByDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "AmIEnabled");

	Params::ADHGameMode_AmIEnabled_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bEnabledByDefault = bEnabledByDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHGameMode.AddMyNameToChangedSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::AddMyNameToChangedSet(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "AddMyNameToChangedSet");

	Params::ADHGameMode_AddMyNameToChangedSet_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameMode.AddActorNameToChangedSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameMode::AddActorNameToChangedSet(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameMode", "AddActorNameToChangedSet");

	Params::ADHGameMode_AddActorNameToChangedSet_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHGameState
// (Actor)

class UClass* ADHGameState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHGameState");

	return Clss;
}


// DHGameState Dungeonhaven.Default__DHGameState
// (Public, ClassDefaultObject, ArchetypeObject)

class ADHGameState* ADHGameState::GetDefaultObj()
{
	static class ADHGameState* Default = nullptr;

	if (!Default)
		Default = static_cast<ADHGameState*>(ADHGameState::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHGameState.RemoveSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshCmp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RemoveSkeletalMeshComponent(class USkeletalMeshComponent* SkelMeshCmp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RemoveSkeletalMeshComponent");

	Params::ADHGameState_RemoveSkeletalMeshComponent_Params Parms{};

	Parms.SkelMeshCmp = SkelMeshCmp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameState.RemoveSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*          SkelMeshActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RemoveSkeletalMesh(class ASkeletalMeshActor* SkelMeshActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RemoveSkeletalMesh");

	Params::ADHGameState_RemoveSkeletalMesh_Params Parms{};

	Parms.SkelMeshActor = SkelMeshActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameState.RemoveCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADHCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RemoveCharacter(class ADHCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RemoveCharacter");

	Params::ADHGameState_RemoveCharacter_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameState.RegisterSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshCmp                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RegisterSkeletalMeshComponent(class USkeletalMeshComponent* SkelMeshCmp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RegisterSkeletalMeshComponent");

	Params::ADHGameState_RegisterSkeletalMeshComponent_Params Parms{};

	Parms.SkelMeshCmp = SkelMeshCmp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameState.RegisterSkeletalMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ASkeletalMeshActor*          SkelMeshActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RegisterSkeletalMesh(class ASkeletalMeshActor* SkelMeshActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RegisterSkeletalMesh");

	Params::ADHGameState_RegisterSkeletalMesh_Params Parms{};

	Parms.SkelMeshActor = SkelMeshActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHGameState.RegisterCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ADHCharacter*                Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHGameState::RegisterCharacter(class ADHCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHGameState", "RegisterCharacter");

	Params::ADHGameState_RegisterCharacter_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHGameViewportClient
// (None)

class UClass* UDHGameViewportClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHGameViewportClient");

	return Clss;
}


// DHGameViewportClient Dungeonhaven.Default__DHGameViewportClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHGameViewportClient* UDHGameViewportClient::GetDefaultObj()
{
	static class UDHGameViewportClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHGameViewportClient*>(UDHGameViewportClient::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHItemEffectBase
// (None)

class UClass* UDHItemEffectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHItemEffectBase");

	return Clss;
}


// DHItemEffectBase Dungeonhaven.Default__DHItemEffectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHItemEffectBase* UDHItemEffectBase::GetDefaultObj()
{
	static class UDHItemEffectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHItemEffectBase*>(UDHItemEffectBase::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHItemEffectBase.StartUpdates
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaBetweenUpdates                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::StartUpdates(float Duration, float DeltaBetweenUpdates, class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "StartUpdates");

	Params::UDHItemEffectBase_StartUpdates_Params Parms{};

	Parms.Duration = Duration;
	Parms.DeltaBetweenUpdates = DeltaBetweenUpdates;
	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemEffectBase.RequestOnUpdateOverCall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              CallDelay                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::RequestOnUpdateOverCall(float CallDelay, class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "RequestOnUpdateOverCall");

	Params::UDHItemEffectBase_RequestOnUpdateOverCall_Params Parms{};

	Parms.CallDelay = CallDelay;
	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemEffectBase.PickedUp
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ItemId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PlayerCharacter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::PickedUp(class FName ItemId, class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "PickedUp");

	Params::UDHItemEffectBase_PickedUp_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemEffectBase.OnUpdateOverBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::OnUpdateOverBP(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnUpdateOverBP");

	Params::UDHItemEffectBase_OnUpdateOverBP_Params Parms{};

	Parms.WorldContext = WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.DHItemEffectBase.OnUpdateOver
// (Final, Native, Protected)
// Parameters:

void UDHItemEffectBase::OnUpdateOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnUpdateOver");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemEffectBase.OnUpdateBP
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::OnUpdateBP(class UObject* WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnUpdateBP");

	Params::UDHItemEffectBase_OnUpdateBP_Params Parms{};

	Parms.WorldContext = WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.DHItemEffectBase.OnUpdate
// (Final, Native, Protected)
// Parameters:

void UDHItemEffectBase::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemEffectBase.OnPickUp
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PlayerCharacter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemEffectBase::OnPickUp(class FName ItemId, class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnPickUp");

	Params::UDHItemEffectBase_OnPickUp_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeonhaven.DHItemEffectBase.OnApplied
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PlayerCharacter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHItemEffectBase::OnApplied(class FName ItemId, class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "OnApplied");

	Params::UDHItemEffectBase_OnApplied_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHItemEffectBase.GetUnsafeWorldContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UDHItemEffectBase::GetUnsafeWorldContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "GetUnsafeWorldContext");

	Params::UDHItemEffectBase_GetUnsafeWorldContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHItemEffectBase.AreUpdatesActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHItemEffectBase::AreUpdatesActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "AreUpdatesActive");

	Params::UDHItemEffectBase_AreUpdatesActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHItemEffectBase.Apply
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ItemId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PlayerCharacter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHItemEffectBase::Apply(class FName ItemId, class AActor* PlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemEffectBase", "Apply");

	Params::UDHItemEffectBase_Apply_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.PlayerCharacter = PlayerCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHItemEffects
// (None)

class UClass* UDHItemEffects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHItemEffects");

	return Clss;
}


// DHItemEffects Dungeonhaven.Default__DHItemEffects
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHItemEffects* UDHItemEffects::GetDefaultObj()
{
	static class UDHItemEffects* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHItemEffects*>(UDHItemEffects::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHItemsAsset
// (None)

class UClass* UDHItemsAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHItemsAsset");

	return Clss;
}


// DHItemsAsset Dungeonhaven.Default__DHItemsAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHItemsAsset* UDHItemsAsset::GetDefaultObj()
{
	static class UDHItemsAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHItemsAsset*>(UDHItemsAsset::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHItemsAsset.RemoveEmptyEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHItemsAsset::RemoveEmptyEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemsAsset", "RemoveEmptyEntries");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHItemsAsset.GetEffectCopies
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FName, class UDHItemEffectBase*>OutEffects                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UDHItemsAsset::GetEffectCopies(class UObject* WorldContextObject, TMap<class FName, class UDHItemEffectBase*>* OutEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemsAsset", "GetEffectCopies");

	Params::UDHItemsAsset_GetEffectCopies_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEffects != nullptr)
		*OutEffects = Parms.OutEffects;

}


// Function Dungeonhaven.DHItemsAsset.AddMissingEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FName>                ItemIDList                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHItemsAsset::AddMissingEntries(const TArray<class FName>& ItemIDList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHItemsAsset", "AddMissingEntries");

	Params::UDHItemsAsset_AddMissingEntries_Params Parms{};

	Parms.ItemIDList = ItemIDList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHObjectWithActorOuter
// (None)

class UClass* UDHObjectWithActorOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHObjectWithActorOuter");

	return Clss;
}


// DHObjectWithActorOuter Dungeonhaven.Default__DHObjectWithActorOuter
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHObjectWithActorOuter* UDHObjectWithActorOuter::GetDefaultObj()
{
	static class UDHObjectWithActorOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHObjectWithActorOuter*>(UDHObjectWithActorOuter::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHPlayerController
// (Actor, PlayerController)

class UClass* ADHPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHPlayerController");

	return Clss;
}


// DHPlayerController Dungeonhaven.Default__DHPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class ADHPlayerController* ADHPlayerController::GetDefaultObj()
{
	static class ADHPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<ADHPlayerController*>(ADHPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHPlayerController.SetTriggerWeaponStrength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETrigger                ETrigger                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FireTriggerThreshold                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetTriggerWeaponStrength(enum class ETrigger ETrigger, float FireTriggerThreshold, int32 Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetTriggerWeaponStrength");

	Params::ADHPlayerController_SetTriggerWeaponStrength_Params Parms{};

	Parms.ETrigger = ETrigger;
	Parms.FireTriggerThreshold = FireTriggerThreshold;
	Parms.Strength = Strength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.SetTriggerVibration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETrigger                ETrigger                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Frequency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Amplitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetTriggerVibration(enum class ETrigger ETrigger, int32 Position, int32 Frequency, int32 Amplitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetTriggerVibration");

	Params::ADHPlayerController_SetTriggerVibration_Params Parms{};

	Parms.ETrigger = ETrigger;
	Parms.Position = Position;
	Parms.Frequency = Frequency;
	Parms.Amplitude = Amplitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.SetTriggerModeOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETrigger                ETrigger                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetTriggerModeOff(enum class ETrigger ETrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetTriggerModeOff");

	Params::ADHPlayerController_SetTriggerModeOff_Params Parms{};

	Parms.ETrigger = ETrigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.SetTriggerFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETrigger                ETrigger                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetTriggerFeedback(enum class ETrigger ETrigger, uint8 Position, uint8 Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetTriggerFeedback");

	Params::ADHPlayerController_SetTriggerFeedback_Params Parms{};

	Parms.ETrigger = ETrigger;
	Parms.Position = Position;
	Parms.Strength = Strength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.SetGlobalCameraShakeScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSaveToConfig                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetGlobalCameraShakeScale(float Scale, bool bSaveToConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetGlobalCameraShakeScale");

	Params::ADHPlayerController_SetGlobalCameraShakeScale_Params Parms{};

	Parms.Scale = Scale;
	Parms.bSaveToConfig = bSaveToConfig;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.SetAspectRatioAxisConstraint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAspectRatioAxisConstraintAspectRatioAxisConstraint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ADHPlayerController::SetAspectRatioAxisConstraint(enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "SetAspectRatioAxisConstraint");

	Params::ADHPlayerController_SetAspectRatioAxisConstraint_Params Parms{};

	Parms.AspectRatioAxisConstraint = AspectRatioAxisConstraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHPlayerController.IsInputEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ADHPlayerController::IsInputEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "IsInputEnabled");

	Params::ADHPlayerController_IsInputEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHPlayerController.GetCachedBarbAsPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* ADHPlayerController::GetCachedBarbAsPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "GetCachedBarbAsPawn");

	Params::ADHPlayerController_GetCachedBarbAsPawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHPlayerController.GetAspectRatioAxisConstraint
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAspectRatioAxisConstraintReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAspectRatioAxisConstraint ADHPlayerController::GetAspectRatioAxisConstraint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHPlayerController", "GetAspectRatioAxisConstraint");

	Params::ADHPlayerController_GetAspectRatioAxisConstraint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHRayTracing
// (None)

class UClass* UDHRayTracing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHRayTracing");

	return Clss;
}


// DHRayTracing Dungeonhaven.Default__DHRayTracing
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHRayTracing* UDHRayTracing::GetDefaultObj()
{
	static class UDHRayTracing* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHRayTracing*>(UDHRayTracing::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHRayTracing.SetRayTracingValidForZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValid                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHRayTracing::SetRayTracingValidForZone(bool bValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "SetRayTracingValidForZone");

	Params::UDHRayTracing_SetRayTracingValidForZone_Params Parms{};

	Parms.bValid = bValid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.SetRayTracingDesired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHRayTracing::SetRayTracingDesired(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "SetRayTracingDesired");

	Params::UDHRayTracing_SetRayTracingDesired_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.SetDX12Desired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDesired                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHRayTracing::SetDX12Desired(bool bDesired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "SetDX12Desired");

	Params::UDHRayTracing_SetDX12Desired_Params Parms{};

	Parms.bDesired = bDesired;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.SetDlssMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHRayTracing::SetDlssMode(int32 Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "SetDlssMode");

	Params::UDHRayTracing_SetDlssMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.ReenableDofIfDlssIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHRayTracing::ReenableDofIfDlssIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "ReenableDofIfDlssIsActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.ReapplyLevelSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHRayTracing::ReapplyLevelSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "ReapplyLevelSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.IsRayTracingDesired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHRayTracing::IsRayTracingDesired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "IsRayTracingDesired");

	Params::UDHRayTracing_IsRayTracingDesired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.IsRayTracingCurrentlyActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHRayTracing::IsRayTracingCurrentlyActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "IsRayTracingCurrentlyActive");

	Params::UDHRayTracing_IsRayTracingCurrentlyActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.IsDX12Desired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHRayTracing::IsDX12Desired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "IsDX12Desired");

	Params::UDHRayTracing_IsDX12Desired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.IsDX12Active
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHRayTracing::IsDX12Active()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "IsDX12Active");

	Params::UDHRayTracing_IsDX12Active_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.GetDesiredDlssMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UDHRayTracing::GetDesiredDlssMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "GetDesiredDlssMode");

	Params::UDHRayTracing_GetDesiredDlssMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.DisableDofIfDlssIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHRayTracing::DisableDofIfDlssIsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "DisableDofIfDlssIsActive");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.CanSwitchRHI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHRayTracing::CanSwitchRHI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "CanSwitchRHI");

	Params::UDHRayTracing_CanSwitchRHI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHRayTracing.ApplySettings
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UDHRayTracing::ApplySettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "ApplySettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHRayTracing.ApplyMaterialSettings
// (Event, Public, BlueprintEvent)
// Parameters:

void UDHRayTracing::ApplyMaterialSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "ApplyMaterialSettings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.DHRayTracing.ApplyLevelSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      LevelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHRayTracing::ApplyLevelSettings(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHRayTracing", "ApplyLevelSettings");

	Params::UDHRayTracing_ApplyLevelSettings_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Dungeonhaven.DHReflectionHelper
// (None)

class UClass* UDHReflectionHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHReflectionHelper");

	return Clss;
}


// DHReflectionHelper Dungeonhaven.Default__DHReflectionHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHReflectionHelper* UDHReflectionHelper::GetDefaultObj()
{
	static class UDHReflectionHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHReflectionHelper*>(UDHReflectionHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHReflectionHelper.SetFloatVariable
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHReflectionHelper::SetFloatVariable(class UObject* Object, class FName VariableName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "SetFloatVariable");

	Params::UDHReflectionHelper_SetFloatVariable_Params Parms{};

	Parms.Object = Object;
	Parms.VariableName = VariableName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHReflectionHelper.SetBoolValue
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHReflectionHelper::SetBoolValue(class UObject* Object, class FName VariableName, bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "SetBoolValue");

	Params::UDHReflectionHelper_SetBoolValue_Params Parms{};

	Parms.Object = Object;
	Parms.VariableName = VariableName;
	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHReflectionHelper.ModifyFloatVariable
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        VariableName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Delta                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHReflectionHelper::ModifyFloatVariable(class UObject* Object, class FName VariableName, float Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "ModifyFloatVariable");

	Params::UDHReflectionHelper_ModifyFloatVariable_Params Parms{};

	Parms.Object = Object;
	Parms.VariableName = VariableName;
	Parms.Delta = Delta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHReflectionHelper.IsFunctionBoundToDelegate
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     FunctionContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     DelegateContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DelegateName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHReflectionHelper::IsFunctionBoundToDelegate(class UObject* FunctionContainer, class FName FunctionName, class UObject* DelegateContainer, class FName DelegateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "IsFunctionBoundToDelegate");

	Params::UDHReflectionHelper_IsFunctionBoundToDelegate_Params Parms{};

	Parms.FunctionContainer = FunctionContainer;
	Parms.FunctionName = FunctionName;
	Parms.DelegateContainer = DelegateContainer;
	Parms.DelegateName = DelegateName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHReflectionHelper.CallFunctionByName
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     FunctionContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHReflectionHelper::CallFunctionByName(class UObject* FunctionContainer, class FName FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "CallFunctionByName");

	Params::UDHReflectionHelper_CallFunctionByName_Params Parms{};

	Parms.FunctionContainer = FunctionContainer;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHReflectionHelper.BindFunctionToDelegate
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     FunctionContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     DelegateContainer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        DelegateName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBind                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHReflectionHelper::BindFunctionToDelegate(class UObject* FunctionContainer, class FName FunctionName, class UObject* DelegateContainer, class FName DelegateName, bool bBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHReflectionHelper", "BindFunctionToDelegate");

	Params::UDHReflectionHelper_BindFunctionToDelegate_Params Parms{};

	Parms.FunctionContainer = FunctionContainer;
	Parms.FunctionName = FunctionName;
	Parms.DelegateContainer = DelegateContainer;
	Parms.DelegateName = DelegateName;
	Parms.bBind = bBind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DHRichTextBlockImageDecorator
// (None)

class UClass* UDHRichTextBlockImageDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHRichTextBlockImageDecorator");

	return Clss;
}


// DHRichTextBlockImageDecorator Dungeonhaven.Default__DHRichTextBlockImageDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHRichTextBlockImageDecorator* UDHRichTextBlockImageDecorator::GetDefaultObj()
{
	static class UDHRichTextBlockImageDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHRichTextBlockImageDecorator*>(UDHRichTextBlockImageDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.DHSaveHelper
// (None)

class UClass* UDHSaveHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHSaveHelper");

	return Clss;
}


// DHSaveHelper Dungeonhaven.Default__DHSaveHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHSaveHelper* UDHSaveHelper::GetDefaultObj()
{
	static class UDHSaveHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHSaveHelper*>(UDHSaveHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHSaveHelper.RestoreSaveBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NSlotNumber                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHSaveHelper::RestoreSaveBackup(int32 UserIndex, int32 NSlotNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "RestoreSaveBackup");

	Params::UDHSaveHelper_RestoreSaveBackup_Params Parms{};

	Parms.UserIndex = UserIndex;
	Parms.NSlotNumber = NSlotNumber;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHSaveHelper.QueueSaveBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              NSlotNumber                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHSaveHelper::QueueSaveBackup(int32 NSlotNumber, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "QueueSaveBackup");

	Params::UDHSaveHelper_QueueSaveBackup_Params Parms{};

	Parms.NSlotNumber = NSlotNumber;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHSaveHelper.IsRestoreOperationInProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHSaveHelper::IsRestoreOperationInProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "IsRestoreOperationInProgress");

	Params::UDHSaveHelper_IsRestoreOperationInProgress_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHSaveHelper.ImportLastGenSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDHSaveHelper::ImportLastGenSave(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "ImportLastGenSave");

	Params::UDHSaveHelper_ImportLastGenSave_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.DHSaveHelper.HasSaveBackup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHSaveHelper::HasSaveBackup(const class FString& SlotName, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "HasSaveBackup");

	Params::UDHSaveHelper_HasSaveBackup_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHSaveHelper.DHSaveGameToSlot_Asynch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USaveGame*                   SaveGameObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BackupSave                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDHSaveHelper::DHSaveGameToSlot_Asynch(class USaveGame* SaveGameObject, const class FString& SlotName, int32 UserIndex, bool BackupSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "DHSaveGameToSlot_Asynch");

	Params::UDHSaveHelper_DHSaveGameToSlot_Asynch_Params Parms{};

	Parms.SaveGameObject = SaveGameObject;
	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.BackupSave = BackupSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.DHSaveHelper.DHLoadGameFromSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SlotName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USaveGame*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USaveGame* UDHSaveHelper::DHLoadGameFromSlot(const class FString& SlotName, int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSaveHelper", "DHLoadGameFromSlot");

	Params::UDHSaveHelper_DHLoadGameFromSlot_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.DHSpringArmComponent
// (SceneComponent)

class UClass* UDHSpringArmComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DHSpringArmComponent");

	return Clss;
}


// DHSpringArmComponent Dungeonhaven.Default__DHSpringArmComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDHSpringArmComponent* UDHSpringArmComponent::GetDefaultObj()
{
	static class UDHSpringArmComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDHSpringArmComponent*>(UDHSpringArmComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.DHSpringArmComponent.ForceUpdateWithoutLag
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDHSpringArmComponent::ForceUpdateWithoutLag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DHSpringArmComponent", "ForceUpdateWithoutLag");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.DungeonhavenGameModeBase
// (Actor)

class UClass* ADungeonhavenGameModeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DungeonhavenGameModeBase");

	return Clss;
}


// DungeonhavenGameModeBase Dungeonhaven.Default__DungeonhavenGameModeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ADungeonhavenGameModeBase* ADungeonhavenGameModeBase::GetDefaultObj()
{
	static class ADungeonhavenGameModeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ADungeonhavenGameModeBase*>(ADungeonhavenGameModeBase::StaticClass()->DefaultObject);

	return Default;
}


// Class Dungeonhaven.ExposedCActor
// (Actor)

class UClass* AExposedCActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExposedCActor");

	return Clss;
}


// ExposedCActor Dungeonhaven.Default__ExposedCActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AExposedCActor* AExposedCActor::GetDefaultObj()
{
	static class AExposedCActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AExposedCActor*>(AExposedCActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.ExposedCActor.GetCurrentStreamingLevelName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString AExposedCActor::GetCurrentStreamingLevelName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExposedCActor", "GetCurrentStreamingLevelName");

	Params::AExposedCActor_GetCurrentStreamingLevelName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.KeyBindingUtil
// (None)

class UClass* UKeyBindingUtil::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyBindingUtil");

	return Clss;
}


// KeyBindingUtil Dungeonhaven.Default__KeyBindingUtil
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyBindingUtil* UKeyBindingUtil::GetDefaultObj()
{
	static class UKeyBindingUtil* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyBindingUtil*>(UKeyBindingUtil::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.KeyBindingUtil.RemoveAxisBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAxis                  BindingToRemove                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyBindingUtil::RemoveAxisBinding(const struct FInputAxis& BindingToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "RemoveAxisBinding");

	Params::UKeyBindingUtil_RemoveAxisBinding_Params Parms{};

	Parms.BindingToRemove = BindingToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.RemoveActionBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAction                BindingToRemove                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyBindingUtil::RemoveActionBinding(const struct FInputAction& BindingToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "RemoveActionBinding");

	Params::UKeyBindingUtil_RemoveActionBinding_Params Parms{};

	Parms.BindingToRemove = BindingToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.ReBindAxisKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAxis                  CurrentBinding                                                   (Parm, NativeAccessSpecifierPublic)
// struct FInputAxis                  NewBinding                                                       (Parm, NativeAccessSpecifierPublic)

void UKeyBindingUtil::ReBindAxisKey(const struct FInputAxis& CurrentBinding, const struct FInputAxis& NewBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "ReBindAxisKey");

	Params::UKeyBindingUtil_ReBindAxisKey_Params Parms{};

	Parms.CurrentBinding = CurrentBinding;
	Parms.NewBinding = NewBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.KeyBindingUtil.ReBindActionKey
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAction                CurrentBinding                                                   (Parm, NativeAccessSpecifierPublic)
// struct FInputAction                NewBinding                                                       (Parm, NativeAccessSpecifierPublic)

void UKeyBindingUtil::ReBindActionKey(const struct FInputAction& CurrentBinding, const struct FInputAction& NewBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "ReBindActionKey");

	Params::UKeyBindingUtil_ReBindActionKey_Params Parms{};

	Parms.CurrentBinding = CurrentBinding;
	Parms.NewBinding = NewBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromMouseButtonEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputAxis                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAxis UKeyBindingUtil::GetInputAxisFromMouseButtonEvent(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetInputAxisFromMouseButtonEvent");

	Params::UKeyBindingUtil_GetInputAxisFromMouseButtonEvent_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromMouseAxisEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputAxis                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAxis UKeyBindingUtil::GetInputAxisFromMouseAxisEvent(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetInputAxisFromMouseAxisEvent");

	Params::UKeyBindingUtil_GetInputAxisFromMouseAxisEvent_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.GetInputAxisFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputAxis                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAxis UKeyBindingUtil::GetInputAxisFromKeyEvent(struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetInputAxisFromKeyEvent");

	Params::UKeyBindingUtil_GetInputAxisFromKeyEvent_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.GetInputActionFromMouseButtonEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputAction                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAction UKeyBindingUtil::GetInputActionFromMouseButtonEvent(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetInputActionFromMouseButtonEvent");

	Params::UKeyBindingUtil_GetInputActionFromMouseButtonEvent_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.GetInputActionFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputAction                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputAction UKeyBindingUtil::GetInputActionFromKeyEvent(struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetInputActionFromKeyEvent");

	Params::UKeyBindingUtil_GetInputActionFromKeyEvent_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Dungeonhaven.KeyBindingUtil.GetAllBindedInputAxis
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputAxis>          InputAxis                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyBindingUtil::GetAllBindedInputAxis(TArray<struct FInputAxis>* InputAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetAllBindedInputAxis");

	Params::UKeyBindingUtil_GetAllBindedInputAxis_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InputAxis != nullptr)
		*InputAxis = std::move(Parms.InputAxis);

}


// Function Dungeonhaven.KeyBindingUtil.GetAllBindedInputActions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FInputAction>        Actions                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyBindingUtil::GetAllBindedInputActions(TArray<struct FInputAction>* Actions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "GetAllBindedInputActions");

	Params::UKeyBindingUtil_GetAllBindedInputActions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Actions != nullptr)
		*Actions = std::move(Parms.Actions);

}


// Function Dungeonhaven.KeyBindingUtil.AddAxisBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAxis                  NewBinding                                                       (Parm, NativeAccessSpecifierPublic)
// struct FInputAxis                  CurrentBinding                                                   (Parm, NativeAccessSpecifierPublic)

void UKeyBindingUtil::AddAxisBinding(const struct FInputAxis& NewBinding, const struct FInputAxis& CurrentBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "AddAxisBinding");

	Params::UKeyBindingUtil_AddAxisBinding_Params Parms{};

	Parms.NewBinding = NewBinding;
	Parms.CurrentBinding = CurrentBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Dungeonhaven.KeyBindingUtil.AddActionBinding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputAction                NewBinding                                                       (Parm, NativeAccessSpecifierPublic)
// struct FInputAction                CurrentBinding                                                   (Parm, NativeAccessSpecifierPublic)

void UKeyBindingUtil::AddActionBinding(const struct FInputAction& NewBinding, const struct FInputAction& CurrentBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyBindingUtil", "AddActionBinding");

	Params::UKeyBindingUtil_AddActionBinding_Params Parms{};

	Parms.NewBinding = NewBinding;
	Parms.CurrentBinding = CurrentBinding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.MainMenuActor
// (Actor)

class UClass* AMainMenuActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuActor");

	return Clss;
}


// MainMenuActor Dungeonhaven.Default__MainMenuActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AMainMenuActor* AMainMenuActor::GetDefaultObj()
{
	static class AMainMenuActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuActor*>(AMainMenuActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.MainMenuActor.ShowTitleScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuActor::ShowTitleScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor", "ShowTitleScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.MainMenuActor.ShowStartupLogos
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuActor::ShowStartupLogos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor", "ShowStartupLogos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.MainMenuActor.ShowMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuActor::ShowMainMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor", "ShowMainMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeonhaven.MainMenuActor.CreateControllerDisconnectDialog
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMainMenuActor::CreateControllerDisconnectDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuActor", "CreateControllerDisconnectDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Class Dungeonhaven.SignificanceActor
// (Actor)

class UClass* ASignificanceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SignificanceActor");

	return Clss;
}


// SignificanceActor Dungeonhaven.Default__SignificanceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ASignificanceActor* ASignificanceActor::GetDefaultObj()
{
	static class ASignificanceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ASignificanceActor*>(ASignificanceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.SignificanceActor.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ASignificanceActor::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SignificanceActor", "SetSignificanceBP");

	Params::ASignificanceActor_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Class Dungeonhaven.TitleScreenWidget
// (None)

class UClass* UTitleScreenWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreenWidget");

	return Clss;
}


// TitleScreenWidget Dungeonhaven.Default__TitleScreenWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTitleScreenWidget* UTitleScreenWidget::GetDefaultObj()
{
	static class UTitleScreenWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreenWidget*>(UTitleScreenWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.TitleScreenWidget.OnAdvancePastTileScreenForActivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTitleScreenWidget::OnAdvancePastTileScreenForActivity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenWidget", "OnAdvancePastTileScreenForActivity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Dungeonhaven.UsableIndicatorWidget
// (None)

class UClass* UUsableIndicatorWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsableIndicatorWidget");

	return Clss;
}


// UsableIndicatorWidget Dungeonhaven.Default__UsableIndicatorWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUsableIndicatorWidget* UUsableIndicatorWidget::GetDefaultObj()
{
	static class UUsableIndicatorWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUsableIndicatorWidget*>(UUsableIndicatorWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeonhaven.UsableIndicatorWidget.UpdateIndicatorVisibility
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     VecWorldPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUsableIndicatorWidget::UpdateIndicatorVisibility(struct FVector& VecWorldPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableIndicatorWidget", "UpdateIndicatorVisibility");

	Params::UUsableIndicatorWidget_UpdateIndicatorVisibility_Params Parms{};

	Parms.VecWorldPosition = VecWorldPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Dungeonhaven.UtilitiesActor
// (Actor)

class UClass* AUtilitiesActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UtilitiesActor");

	return Clss;
}


// UtilitiesActor Dungeonhaven.Default__UtilitiesActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AUtilitiesActor* AUtilitiesActor::GetDefaultObj()
{
	static class AUtilitiesActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AUtilitiesActor*>(AUtilitiesActor::StaticClass()->DefaultObject);

	return Default;
}

}


