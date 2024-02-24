#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ReplicatedTimers.ReplicatedTimersComponent
// (None)

class UClass* UReplicatedTimersComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicatedTimersComponent");

	return Clss;
}


// ReplicatedTimersComponent ReplicatedTimers.Default__ReplicatedTimersComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicatedTimersComponent* UReplicatedTimersComponent::GetDefaultObj()
{
	static class UReplicatedTimersComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicatedTimersComponent*>(UReplicatedTimersComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ReplicatedTimers.ReplicatedTimersComponent.StartTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::StartTimer(class FName& TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "StartTimer");

	Params::UReplicatedTimersComponent_StartTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.SetTimerServerEvaluationRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewServerEvaluationRate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::SetTimerServerEvaluationRate(class FName& TimerName, float NewServerEvaluationRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "SetTimerServerEvaluationRate");

	Params::UReplicatedTimersComponent_SetTimerServerEvaluationRate_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.NewServerEvaluationRate = NewServerEvaluationRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.SetTimerClientEvaluationRate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewClientEvaluationRate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::SetTimerClientEvaluationRate(class FName& TimerName, float NewClientEvaluationRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "SetTimerClientEvaluationRate");

	Params::UReplicatedTimersComponent_SetTimerClientEvaluationRate_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.NewClientEvaluationRate = NewClientEvaluationRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.ResetTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::ResetTimer(class FName& TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "ResetTimer");

	Params::UReplicatedTimersComponent_ResetTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveTimer(class FName& TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveTimer");

	Params::UReplicatedTimersComponent_RemoveTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerRemovedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerRemovedBP(struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerRemovedBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerRemovedBP_Params Parms{};

	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerEvaluatedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerEvaluatedBP(class FName& TimerName, struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerEvaluatedBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerEvaluatedBP_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerCompleteBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerCompleteBP(class FName& TimerName, struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerCompleteBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerCompleteBP_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerCheckpointRemovedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerCheckpointRemovedBP(struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerCheckpointRemovedBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerCheckpointRemovedBP_Params Parms{};

	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerCheckpointAddedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerCheckpointAddedBP(struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerCheckpointAddedBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerCheckpointAddedBP_Params Parms{};

	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnTimerAddedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnTimerAddedBP(struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnTimerAddedBP");

	Params::UReplicatedTimersComponent_RemoveOnTimerAddedBP_Params Parms{};

	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveOnCheckpointReachedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CheckpointName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    DelegateHandle                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveOnCheckpointReachedBP(class FName& TimerName, class FName& CheckpointName, struct FBlueprintDelegateHandle& DelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveOnCheckpointReachedBP");

	Params::UReplicatedTimersComponent_RemoveOnCheckpointReachedBP_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.CheckpointName = CheckpointName;
	Parms.DelegateHandle = DelegateHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.RemoveCheckpointFromTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CheckpointName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::RemoveCheckpointFromTimer(class FName& TimerName, class FName& CheckpointName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "RemoveCheckpointFromTimer");

	Params::UReplicatedTimersComponent_RemoveCheckpointFromTimer_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.CheckpointName = CheckpointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.PauseTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::PauseTimer(class FName& TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "PauseTimer");

	Params::UReplicatedTimersComponent_PauseTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerRemovedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerRemovedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerRemovedBP");

	Params::UReplicatedTimersComponent_OnTimerRemovedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerEvaluatedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerEvaluatedBP(class UObject* ContextObject, class FName& TimerName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerEvaluatedBP");

	Params::UReplicatedTimersComponent_OnTimerEvaluatedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.TimerName = TimerName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerCompleteBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerCompleteBP(class UObject* ContextObject, class FName& TimerName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerCompleteBP");

	Params::UReplicatedTimersComponent_OnTimerCompleteBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.TimerName = TimerName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerCheckpointRemovedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerCheckpointRemovedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerCheckpointRemovedBP");

	Params::UReplicatedTimersComponent_OnTimerCheckpointRemovedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerCheckpointAddedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerCheckpointAddedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerCheckpointAddedBP");

	Params::UReplicatedTimersComponent_OnTimerCheckpointAddedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnTimerAddedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnTimerAddedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnTimerAddedBP");

	Params::UReplicatedTimersComponent_OnTimerAddedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnEvaluationTimerComplete
// (Final, Native, Private)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnEvaluationTimerComplete(class FName TimerName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnEvaluationTimerComplete");

	Params::UReplicatedTimersComponent_OnEvaluationTimerComplete_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.OnCheckpointReachedBP
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     ContextObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CheckpointName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintDelegateHandle    OutDelegateHandle                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::OnCheckpointReachedBP(class UObject* ContextObject, class FName& TimerName, class FName& CheckpointName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "OnCheckpointReachedBP");

	Params::UReplicatedTimersComponent_OnCheckpointReachedBP_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.TimerName = TimerName;
	Parms.CheckpointName = CheckpointName;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDelegateHandle != nullptr)
		*OutDelegateHandle = std::move(Parms.OutDelegateHandle);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.ListTimers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                OutTimerNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::ListTimers(TArray<class FName>* OutTimerNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "ListTimers");

	Params::UReplicatedTimersComponent_ListTimers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTimerNames != nullptr)
		*OutTimerNames = std::move(Parms.OutTimerNames);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.ListCheckpointsForTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                OutCheckpointNames                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::ListCheckpointsForTimer(class FName& TimerName, TArray<class FName>* OutCheckpointNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "ListCheckpointsForTimer");

	Params::UReplicatedTimersComponent_ListCheckpointsForTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCheckpointNames != nullptr)
		*OutCheckpointNames = std::move(Parms.OutCheckpointNames);

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerDataRemoved
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerData        RemovedTimerData                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerDataRemoved(struct FReplicatedTimerData* RemovedTimerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerDataRemoved");

	Params::UReplicatedTimersComponent_HandleTimerDataRemoved_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RemovedTimerData != nullptr)
		*RemovedTimerData = std::move(Parms.RemovedTimerData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerDataChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerData        ChangedTimerData                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerDataChanged(struct FReplicatedTimerData* ChangedTimerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerDataChanged");

	Params::UReplicatedTimersComponent_HandleTimerDataChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChangedTimerData != nullptr)
		*ChangedTimerData = std::move(Parms.ChangedTimerData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerDataAdded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerData        AddedTimerData                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerDataAdded(struct FReplicatedTimerData* AddedTimerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerDataAdded");

	Params::UReplicatedTimersComponent_HandleTimerDataAdded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AddedTimerData != nullptr)
		*AddedTimerData = std::move(Parms.AddedTimerData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerCheckpointDataRemoved
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerCheckpointDataRemovedTimerCheckpointData                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerCheckpointDataRemoved(struct FReplicatedTimerCheckpointData* RemovedTimerCheckpointData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerCheckpointDataRemoved");

	Params::UReplicatedTimersComponent_HandleTimerCheckpointDataRemoved_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RemovedTimerCheckpointData != nullptr)
		*RemovedTimerCheckpointData = std::move(Parms.RemovedTimerCheckpointData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerCheckpointDataChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerCheckpointDataChangedTimerCheckpointData                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerCheckpointDataChanged(struct FReplicatedTimerCheckpointData* ChangedTimerCheckpointData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerCheckpointDataChanged");

	Params::UReplicatedTimersComponent_HandleTimerCheckpointDataChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ChangedTimerCheckpointData != nullptr)
		*ChangedTimerCheckpointData = std::move(Parms.ChangedTimerCheckpointData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.HandleTimerCheckpointDataAdded
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FReplicatedTimerCheckpointDataAddedTimerCheckpointData                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UReplicatedTimersComponent::HandleTimerCheckpointDataAdded(struct FReplicatedTimerCheckpointData* AddedTimerCheckpointData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "HandleTimerCheckpointDataAdded");

	Params::UReplicatedTimersComponent_HandleTimerCheckpointDataAdded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AddedTimerCheckpointData != nullptr)
		*AddedTimerCheckpointData = std::move(Parms.AddedTimerCheckpointData);

}


// Function ReplicatedTimers.ReplicatedTimersComponent.GetRemainingTimeForTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutRemainingTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::GetRemainingTimeForTimer(class FName& TimerName, float* OutRemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "GetRemainingTimeForTimer");

	Params::UReplicatedTimersComponent_GetRemainingTimeForTimer_Params Parms{};

	Parms.TimerName = TimerName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRemainingTime != nullptr)
		*OutRemainingTime = Parms.OutRemainingTime;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.AddTimeToTimer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   TimeToAdd                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::AddTimeToTimer(class FName& TimerName, struct FTimespan& TimeToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "AddTimeToTimer");

	Params::UReplicatedTimersComponent_AddTimeToTimer_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.TimeToAdd = TimeToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.AddTimer
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   InitialTimespan                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::AddTimer(class FName& TimerName, struct FTimespan& InitialTimespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "AddTimer");

	Params::UReplicatedTimersComponent_AddTimer_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.InitialTimespan = InitialTimespan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ReplicatedTimers.ReplicatedTimersComponent.AddCheckpointToTimer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TimerName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CheckpointName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AtPercentile                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReplicatedTimersComponent::AddCheckpointToTimer(class FName& TimerName, class FName& CheckpointName, float AtPercentile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedTimersComponent", "AddCheckpointToTimer");

	Params::UReplicatedTimersComponent_AddCheckpointToTimer_Params Parms{};

	Parms.TimerName = TimerName;
	Parms.CheckpointName = CheckpointName;
	Parms.AtPercentile = AtPercentile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


