#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AIOptimizer.AIOBPLibrary
// (None)

class UClass* UAIOBPLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIOBPLibrary");

	return Clss;
}


// AIOBPLibrary AIOptimizer.Default__AIOBPLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIOBPLibrary* UAIOBPLibrary::GetDefaultObj()
{
	static class UAIOBPLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIOBPLibrary*>(UAIOBPLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AIOptimizer.AIOBPLibrary.SetCharacterMovementEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOBPLibrary::SetCharacterMovementEnabled(class ACharacter* Character, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "SetCharacterMovementEnabled");

	Params::UAIOBPLibrary_SetCharacterMovementEnabled_Params Parms{};

	Parms.Character = Character;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOBPLibrary.SetAILogicEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOBPLibrary::SetAILogicEnabled(class AActor* Actor, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "SetAILogicEnabled");

	Params::UAIOBPLibrary_SetAILogicEnabled_Params Parms{};

	Parms.Actor = Actor;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOBPLibrary.RemoveHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAIOSubjectHandle>   Array                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAIOSubjectHandle           Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOBPLibrary::RemoveHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "RemoveHandle");

	Params::UAIOBPLibrary_RemoveHandle_Params Parms{};

	Parms.Array = Array;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.IsHandleValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIOSubjectHandle           Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOBPLibrary::IsHandleValid(struct FAIOSubjectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "IsHandleValid");

	Params::UAIOBPLibrary_IsHandleValid_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.GetSubjectTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAIOBPLibrary::GetSubjectTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "GetSubjectTag");

	Params::UAIOBPLibrary_GetSubjectTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.GetString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIOSubjectHandle           Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIOBPLibrary::GetString(struct FAIOSubjectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "GetString");

	Params::UAIOBPLibrary_GetString_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.GetInvokerTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAIOBPLibrary::GetInvokerTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "GetInvokerTag");

	Params::UAIOBPLibrary_GetInvokerTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.FindHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAIOSubjectHandle>   Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAIOSubjectHandle           HandleToFind                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOBPLibrary::FindHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& HandleToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "FindHandle");

	Params::UAIOBPLibrary_FindHandle_Params Parms{};

	Parms.Array = Array;
	Parms.HandleToFind = HandleToFind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOBPLibrary.DebugAIOptimizer
// (Final, Native, Static, Public)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebug                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOBPLibrary::DebugAIOptimizer(class UWorld* World, bool bDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "DebugAIOptimizer");

	Params::UAIOBPLibrary_DebugAIOptimizer_Params Parms{};

	Parms.World = World;
	Parms.bDebug = bDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOBPLibrary.AddUniqueHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAIOSubjectHandle>   Array                                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAIOSubjectHandle           Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOBPLibrary::AddUniqueHandle(TArray<struct FAIOSubjectHandle>& Array, struct FAIOSubjectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOBPLibrary", "AddUniqueHandle");

	Params::UAIOBPLibrary_AddUniqueHandle_Params Parms{};

	Parms.Array = Array;
	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIOptimizer.AIOData_Base
// (None)

class UClass* UAIOData_Base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIOData_Base");

	return Clss;
}


// AIOData_Base AIOptimizer.Default__AIOData_Base
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIOData_Base* UAIOData_Base::GetDefaultObj()
{
	static class UAIOData_Base* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIOData_Base*>(UAIOData_Base::StaticClass()->DefaultObject);

	return Default;
}


// Class AIOptimizer.AIODeveloperSettings
// (None)

class UClass* UAIODeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIODeveloperSettings");

	return Clss;
}


// AIODeveloperSettings AIOptimizer.Default__AIODeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIODeveloperSettings* UAIODeveloperSettings::GetDefaultObj()
{
	static class UAIODeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIODeveloperSettings*>(UAIODeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class AIOptimizer.AIOInvokerComponent
// (None)

class UClass* UAIOInvokerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIOInvokerComponent");

	return Clss;
}


// AIOInvokerComponent AIOptimizer.Default__AIOInvokerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIOInvokerComponent* UAIOInvokerComponent::GetDefaultObj()
{
	static class UAIOInvokerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIOInvokerComponent*>(UAIOInvokerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIOptimizer.AIOInvokerComponent.DebugAIOptimizer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDebug                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOInvokerComponent::DebugAIOptimizer(bool bDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOInvokerComponent", "DebugAIOptimizer");

	Params::UAIOInvokerComponent_DebugAIOptimizer_Params Parms{};

	Parms.bDebug = bDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIOptimizer.AIOptimizerSubsystem
// (None)

class UClass* UAIOptimizerSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIOptimizerSubsystem");

	return Clss;
}


// AIOptimizerSubsystem AIOptimizer.Default__AIOptimizerSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIOptimizerSubsystem* UAIOptimizerSubsystem::GetDefaultObj()
{
	static class UAIOptimizerSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIOptimizerSubsystem*>(UAIOptimizerSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function AIOptimizer.AIOptimizerSubsystem.UnregisterSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOSubjectComponent*        SubjectComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::UnregisterSubject(class UAIOSubjectComponent* SubjectComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "UnregisterSubject");

	Params::UAIOptimizerSubsystem_UnregisterSubject_Params Parms{};

	Parms.SubjectComponent = SubjectComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.UnregisterInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOInvokerComponent*        InvokerComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::UnregisterInvoker(class UAIOInvokerComponent* InvokerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "UnregisterInvoker");

	Params::UAIOptimizerSubsystem_UnregisterInvoker_Params Parms{};

	Parms.InvokerComponent = InvokerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.ShrinkArrays
// (Final, Native, Protected)
// Parameters:

void UAIOptimizerSubsystem::ShrinkArrays()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "ShrinkArrays");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOptimizerSubsystem.SetIsSystemEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOptimizerSubsystem::SetIsSystemEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "SetIsSystemEnabled");

	Params::UAIOptimizerSubsystem_SetIsSystemEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOptimizerSubsystem.RemoveDespawnedSubjectByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIOSubjectHandle           Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::RemoveDespawnedSubjectByHandle(struct FAIOSubjectHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "RemoveDespawnedSubjectByHandle");

	Params::UAIOptimizerSubsystem_RemoveDespawnedSubjectByHandle_Params Parms{};

	Parms.Handle = Handle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.RegisterSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOSubjectComponent*        SubjectComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::RegisterSubject(class UAIOSubjectComponent* SubjectComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "RegisterSubject");

	Params::UAIOptimizerSubsystem_RegisterSubject_Params Parms{};

	Parms.SubjectComponent = SubjectComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.RegisterInvoker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOInvokerComponent*        InvokerComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::RegisterInvoker(class UAIOInvokerComponent* InvokerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "RegisterInvoker");

	Params::UAIOptimizerSubsystem_RegisterInvoker_Params Parms{};

	Parms.InvokerComponent = InvokerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.LoopSubjects
// (Final, Native, Protected)
// Parameters:

void UAIOptimizerSubsystem::LoopSubjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "LoopSubjects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOptimizerSubsystem.LoopPendingSubjects
// (Final, Native, Protected)
// Parameters:

void UAIOptimizerSubsystem::LoopPendingSubjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "LoopPendingSubjects");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOptimizerSubsystem.K2_SpawnSubjectByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EDespawnMethod          Method                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIOSubjectHandle           SubjectHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::K2_SpawnSubjectByHandle(enum class EDespawnMethod Method, struct FAIOSubjectHandle& SubjectHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "K2_SpawnSubjectByHandle");

	Params::UAIOptimizerSubsystem_K2_SpawnSubjectByHandle_Params Parms{};

	Parms.Method = Method;
	Parms.SubjectHandle = SubjectHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.K2_DespawnSubjectByHandle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIOSubjectHandle           SubjectHandle                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EDespawnMethod          Method                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideSpawnRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRespawnOnlyByHandle                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::K2_DespawnSubjectByHandle(struct FAIOSubjectHandle& SubjectHandle, enum class EDespawnMethod Method, float OverrideSpawnRadius, bool bAllowRespawnOnlyByHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "K2_DespawnSubjectByHandle");

	Params::UAIOptimizerSubsystem_K2_DespawnSubjectByHandle_Params Parms{};

	Parms.SubjectHandle = SubjectHandle;
	Parms.Method = Method;
	Parms.OverrideSpawnRadius = OverrideSpawnRadius;
	Parms.bAllowRespawnOnlyByHandle = bAllowRespawnOnlyByHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.K2_DespawnSubject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIOSubjectHandle           SubjectHandle                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EDespawnMethod          Method                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIOSubjectComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OverrideSpawnRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRespawnOnlyByHandle                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOptimizerSubsystem::K2_DespawnSubject(struct FAIOSubjectHandle* SubjectHandle, enum class EDespawnMethod Method, class UAIOSubjectComponent* Component, float OverrideSpawnRadius, bool bAllowRespawnOnlyByHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "K2_DespawnSubject");

	Params::UAIOptimizerSubsystem_K2_DespawnSubject_Params Parms{};

	Parms.Method = Method;
	Parms.Component = Component;
	Parms.OverrideSpawnRadius = OverrideSpawnRadius;
	Parms.bAllowRespawnOnlyByHandle = bAllowRespawnOnlyByHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SubjectHandle != nullptr)
		*SubjectHandle = std::move(Parms.SubjectHandle);

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetSubjectIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOSubjectComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOptimizerSubsystem::GetSubjectIndex(class UAIOSubjectComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetSubjectIndex");

	Params::UAIOptimizerSubsystem_GetSubjectIndex_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetInvokerIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIOInvokerComponent*        Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOptimizerSubsystem::GetInvokerIndex(class UAIOInvokerComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetInvokerIndex");

	Params::UAIOptimizerSubsystem_GetInvokerIndex_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetDistanceToClosestInvokerSquared
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     QuerierLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIOptimizerSubsystem::GetDistanceToClosestInvokerSquared(struct FVector& QuerierLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetDistanceToClosestInvokerSquared");

	Params::UAIOptimizerSubsystem_GetDistanceToClosestInvokerSquared_Params Parms{};

	Parms.QuerierLocation = QuerierLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetDebugSubjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FAIODebugSubjectData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAIODebugSubjectData> UAIOptimizerSubsystem::GetDebugSubjects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetDebugSubjects");

	Params::UAIOptimizerSubsystem_GetDebugSubjects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetClosestInvokerLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     QuerierLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIOptimizerSubsystem::GetClosestInvokerLocation(struct FVector& QuerierLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetClosestInvokerLocation");

	Params::UAIOptimizerSubsystem_GetClosestInvokerLocation_Params Parms{};

	Parms.QuerierLocation = QuerierLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.GetCategorizedDebugSubjects
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAIODebugSubjectData>DebugSubjects                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<enum class EAIODebugGroup, int32>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<enum class EAIODebugGroup, int32> UAIOptimizerSubsystem::GetCategorizedDebugSubjects(TArray<struct FAIODebugSubjectData>& DebugSubjects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "GetCategorizedDebugSubjects");

	Params::UAIOptimizerSubsystem_GetCategorizedDebugSubjects_Params Parms{};

	Parms.DebugSubjects = DebugSubjects;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOptimizerSubsystem.DebugAIOptimizer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDebug                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOptimizerSubsystem::DebugAIOptimizer(bool bDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOptimizerSubsystem", "DebugAIOptimizer");

	Params::UAIOptimizerSubsystem_DebugAIOptimizer_Params Parms{};

	Parms.bDebug = bDebug;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AIOptimizer.AIOSubjectComponent
// (None)

class UClass* UAIOSubjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIOSubjectComponent");

	return Clss;
}


// AIOSubjectComponent AIOptimizer.Default__AIOSubjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIOSubjectComponent* UAIOSubjectComponent::GetDefaultObj()
{
	static class UAIOSubjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIOSubjectComponent*>(UAIOSubjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AIOptimizer.AIOSubjectComponent.UnregisterSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIOSubjectComponent::UnregisterSubject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "UnregisterSubject");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.ShouldBeDespawned
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIOptimizerSubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceUpdateDataToInvokers                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOSubjectComponent::ShouldBeDespawned(class UAIOptimizerSubsystem* Subsystem, bool bForceUpdateDataToInvokers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "ShouldBeDespawned");

	Params::UAIOSubjectComponent_ShouldBeDespawned_Params Parms{};

	Parms.Subsystem = Subsystem;
	Parms.bForceUpdateDataToInvokers = bForceUpdateDataToInvokers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.SetSpawner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISpawnerInterface>NewSpawner                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOSubjectComponent::SetSpawner(TScriptInterface<class ISpawnerInterface> NewSpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "SetSpawner");

	Params::UAIOSubjectComponent_SetSpawner_Params Parms{};

	Parms.NewSpawner = NewSpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.SetCharacterFeatures
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FeaturesToEnable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOSubjectComponent::SetCharacterFeatures(class ACharacter* Character, int32 FeaturesToEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "SetCharacterFeatures");

	Params::UAIOSubjectComponent_SetCharacterFeatures_Params Parms{};

	Parms.Character = Character;
	Parms.FeaturesToEnable = FeaturesToEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.SetCanBeUpdatedBySubsystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanBeUpdated                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIOSubjectComponent::SetCanBeUpdatedBySubsystem(bool bCanBeUpdated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "SetCanBeUpdatedBySubsystem");

	Params::UAIOSubjectComponent_SetCanBeUpdatedBySubsystem_Params Parms{};

	Parms.bCanBeUpdated = bCanBeUpdated;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.ReinitializeOptimizationLayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAIOptimizationLayer>NewOptimizationLayers                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIOSubjectComponent::ReinitializeOptimizationLayers(TArray<struct FAIOptimizationLayer>& NewOptimizationLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "ReinitializeOptimizationLayers");

	Params::UAIOSubjectComponent_ReinitializeOptimizationLayers_Params Parms{};

	Parms.NewOptimizationLayers = NewOptimizationLayers;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.RegisterSubject
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIOSubjectComponent::RegisterSubject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "RegisterSubject");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AIOptimizer.AIOSubjectComponent.IsSeenByAnyInvoker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIOSubjectComponent::IsSeenByAnyInvoker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "IsSeenByAnyInvoker");

	Params::UAIOSubjectComponent_IsSeenByAnyInvoker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.IsDespawning
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOSubjectComponent::IsDespawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "IsDespawning");

	Params::UAIOSubjectComponent_IsDespawning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetSpawnRadiusSquared
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIOptimizerSubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIOSubjectComponent::GetSpawnRadiusSquared(class UAIOptimizerSubsystem* Subsystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetSpawnRadiusSquared");

	Params::UAIOSubjectComponent_GetSpawnRadiusSquared_Params Parms{};

	Parms.Subsystem = Subsystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetOptimizationLayerForCurrentDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOSubjectComponent::GetOptimizationLayerForCurrentDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetOptimizationLayerForCurrentDistance");

	Params::UAIOSubjectComponent_GetOptimizationLayerForCurrentDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetDistanceToClosestInvoker
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIOSubjectComponent::GetDistanceToClosestInvoker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetDistanceToClosestInvoker");

	Params::UAIOSubjectComponent_GetDistanceToClosestInvoker_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetDespawnRadiusSquared
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIOptimizerSubsystem*       Subsystem                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIOSubjectComponent::GetDespawnRadiusSquared(class UAIOptimizerSubsystem* Subsystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetDespawnRadiusSquared");

	Params::UAIOSubjectComponent_GetDespawnRadiusSquared_Params Parms{};

	Parms.Subsystem = Subsystem;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetCurrentOptimizationLayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIOSubjectComponent::GetCurrentOptimizationLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetCurrentOptimizationLayer");

	Params::UAIOSubjectComponent_GetCurrentOptimizationLayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.GetClosestInvokerLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIOSubjectComponent::GetClosestInvokerLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "GetClosestInvokerLocation");

	Params::UAIOSubjectComponent_GetClosestInvokerLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AIOptimizer.AIOSubjectComponent.CanBeUpdatedBySubsystem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIOSubjectComponent::CanBeUpdatedBySubsystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIOSubjectComponent", "CanBeUpdatedBySubsystem");

	Params::UAIOSubjectComponent_CanBeUpdatedBySubsystem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AIOptimizer.SpawnerInterface
// (None)

class UClass* ISpawnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerInterface");

	return Clss;
}


// SpawnerInterface AIOptimizer.Default__SpawnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class ISpawnerInterface* ISpawnerInterface::GetDefaultObj()
{
	static class ISpawnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnerInterface*>(ISpawnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function AIOptimizer.SpawnerInterface.OnSubjectSpawnedByOptimizerSubsystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAIOSubjectComponent*        SpawnedSubjectComponent                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISpawnerInterface::OnSubjectSpawnedByOptimizerSubsystem(class UAIOSubjectComponent* SpawnedSubjectComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerInterface", "OnSubjectSpawnedByOptimizerSubsystem");

	Params::ISpawnerInterface_OnSubjectSpawnedByOptimizerSubsystem_Params Parms{};

	Parms.SpawnedSubjectComponent = SpawnedSubjectComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIOptimizer.SpawnerInterface.OnSubjectDespawnedByOptimizerSubsystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAIOSubjectComponent*        DespawnedSubjectComponent                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ISpawnerInterface::OnSubjectDespawnedByOptimizerSubsystem(class UAIOSubjectComponent* DespawnedSubjectComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerInterface", "OnSubjectDespawnedByOptimizerSubsystem");

	Params::ISpawnerInterface_OnSubjectDespawnedByOptimizerSubsystem_Params Parms{};

	Parms.DespawnedSubjectComponent = DespawnedSubjectComponent;

	UObject::ProcessEvent(Func, &Parms);

}

}


