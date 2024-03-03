#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WorldDirectorPRO.NpcDataProComponent
// (None)

class UClass* UNpcDataProComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NpcDataProComponent");

	return Clss;
}


// NpcDataProComponent WorldDirectorPRO.Default__NpcDataProComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UNpcDataProComponent* UNpcDataProComponent::GetDefaultObj()
{
	static class UNpcDataProComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UNpcDataProComponent*>(UNpcDataProComponent::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction WorldDirectorPRO.NpcDataProComponent.RecoveryFromOptimization__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UNpcDataProComponent::RecoveryFromOptimization__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "RecoveryFromOptimization__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorldDirectorPRO.NpcDataProComponent.RecoveryFromOptimization
// (Event, Public, BlueprintEvent)
// Parameters:

void UNpcDataProComponent::RecoveryFromOptimization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "RecoveryFromOptimization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WorldDirectorPRO.NpcDataProComponent.PrepareForOptimizationBP
// (Event, Public, BlueprintEvent)
// Parameters:

void UNpcDataProComponent::PrepareForOptimizationBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "PrepareForOptimizationBP");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction WorldDirectorPRO.NpcDataProComponent.PrepareForOptimization__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UNpcDataProComponent::PrepareForOptimization__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "PrepareForOptimization__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction WorldDirectorPRO.NpcDataProComponent.OnInCameraFOV__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UNpcDataProComponent::OnInCameraFOV__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "OnInCameraFOV__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction WorldDirectorPRO.NpcDataProComponent.OnBehindCameraFOV__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UNpcDataProComponent::OnBehindCameraFOV__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NpcDataProComponent", "OnBehindCameraFOV__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Class WorldDirectorPRO.WorldDirectorNpcPRO
// (Actor)

class UClass* AWorldDirectorNpcPRO::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldDirectorNpcPRO");

	return Clss;
}


// WorldDirectorNpcPRO WorldDirectorPRO.Default__WorldDirectorNpcPRO
// (Public, ClassDefaultObject, ArchetypeObject)

class AWorldDirectorNpcPRO* AWorldDirectorNpcPRO::GetDefaultObj()
{
	static class AWorldDirectorNpcPRO* Default = nullptr;

	if (!Default)
		Default = static_cast<AWorldDirectorNpcPRO*>(AWorldDirectorNpcPRO::StaticClass()->DefaultObject);

	return Default;
}


// Function WorldDirectorPRO.WorldDirectorNpcPRO.RestoreNPC_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              IndexNpc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ActorRef                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWorldDirectorNpcPRO::RestoreNPC_BP(int32 IndexNpc, class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldDirectorNpcPRO", "RestoreNPC_BP");

	Params::AWorldDirectorNpcPRO_RestoreNPC_BP_Params Parms{};

	Parms.IndexNpc = IndexNpc;
	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorldDirectorPRO.WorldDirectorNpcPRO.InsertNPCInBackground_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AWorldDirectorNpcPRO::InsertNPCInBackground_BP(class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldDirectorNpcPRO", "InsertNPCInBackground_BP");

	Params::AWorldDirectorNpcPRO_InsertNPCInBackground_BP_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WorldDirectorPRO.WorldDirectorNpcPRO.GetBackgroundNpcCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 AWorldDirectorNpcPRO::GetBackgroundNpcCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WorldDirectorNpcPRO", "GetBackgroundNpcCount");

	Params::AWorldDirectorNpcPRO_GetBackgroundNpcCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


