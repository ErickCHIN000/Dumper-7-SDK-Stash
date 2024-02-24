#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModularGameplay.GameFrameworkComponent
// (None)

class UClass* UGameFrameworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFrameworkComponent");

	return Clss;
}


// GameFrameworkComponent ModularGameplay.Default__GameFrameworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFrameworkComponent* UGameFrameworkComponent::GetDefaultObj()
{
	static class UGameFrameworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFrameworkComponent*>(UGameFrameworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.ControllerComponent
// (None)

class UClass* UControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerComponent");

	return Clss;
}


// ControllerComponent ModularGameplay.Default__ControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControllerComponent* UControllerComponent::GetDefaultObj()
{
	static class UControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerComponent*>(UControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.GameFrameworkComponentManager
// (None)

class UClass* UGameFrameworkComponentManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFrameworkComponentManager");

	return Clss;
}


// GameFrameworkComponentManager ModularGameplay.Default__GameFrameworkComponentManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameFrameworkComponentManager* UGameFrameworkComponentManager::GetDefaultObj()
{
	static class UGameFrameworkComponentManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFrameworkComponentManager*>(UGameFrameworkComponentManager::StaticClass()->DefaultObject);

	return Default;
}


// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Receiver                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::RemoveReceiver(class AActor* Receiver)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "RemoveReceiver");

	Params::UGameFrameworkComponentManager_RemoveReceiver_Params Parms{};

	Parms.Receiver = Receiver;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Receiver                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddOnlyInGameWorlds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFrameworkComponentManager::AddReceiver(class AActor* Receiver, bool bAddOnlyInGameWorlds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFrameworkComponentManager", "AddReceiver");

	Params::UGameFrameworkComponentManager_AddReceiver_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.bAddOnlyInGameWorlds = bAddOnlyInGameWorlds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModularGameplay.GameStateComponent
// (None)

class UClass* UGameStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameStateComponent");

	return Clss;
}


// GameStateComponent ModularGameplay.Default__GameStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameStateComponent* UGameStateComponent::GetDefaultObj()
{
	static class UGameStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameStateComponent*>(UGameStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.PawnComponent
// (None)

class UClass* UPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PawnComponent");

	return Clss;
}


// PawnComponent ModularGameplay.Default__PawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPawnComponent* UPawnComponent::GetDefaultObj()
{
	static class UPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPawnComponent*>(UPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class ModularGameplay.PlayerStateComponent
// (None)

class UClass* UPlayerStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerStateComponent");

	return Clss;
}


// PlayerStateComponent ModularGameplay.Default__PlayerStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerStateComponent* UPlayerStateComponent::GetDefaultObj()
{
	static class UPlayerStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerStateComponent*>(UPlayerStateComponent::StaticClass()->DefaultObject);

	return Default;
}

}


