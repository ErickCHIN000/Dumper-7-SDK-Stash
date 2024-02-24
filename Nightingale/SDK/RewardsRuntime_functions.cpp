#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RewardsRuntime.RewardBehaviour
// (None)

class UClass* URewardBehaviour::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardBehaviour");

	return Clss;
}


// RewardBehaviour RewardsRuntime.Default__RewardBehaviour
// (Public, ClassDefaultObject, ArchetypeObject)

class URewardBehaviour* URewardBehaviour::GetDefaultObj()
{
	static class URewardBehaviour* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardBehaviour*>(URewardBehaviour::StaticClass()->DefaultObject);

	return Default;
}


// Function RewardsRuntime.RewardBehaviour.IsRewardValid
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsValid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        OutInvalidReason                                                 (Parm, OutParm, NativeAccessSpecifierPublic)

void URewardBehaviour::IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardBehaviour", "IsRewardValid");

	Params::URewardBehaviour_IsRewardValid_Params Parms{};

	Parms.PlayerState = PlayerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutInvalidReason != nullptr)
		*OutInvalidReason = Parms.OutInvalidReason;

}


// Function RewardsRuntime.RewardBehaviour.GetDebugDescription
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      OutDescription                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URewardBehaviour::GetDebugDescription(class FString& OutDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardBehaviour", "GetDebugDescription");

	Params::URewardBehaviour_GetDebugDescription_Params Parms{};

	Parms.OutDescription = OutDescription;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RewardsRuntime.RewardBehaviour.ApplyReward
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SenderContextObject                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URewardBehaviour::ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardBehaviour", "ApplyReward");

	Params::URewardBehaviour_ApplyReward_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.SenderContextObject = SenderContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class RewardsRuntime.RewardBehaviour_Multiple
// (None)

class UClass* URewardBehaviour_Multiple::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardBehaviour_Multiple");

	return Clss;
}


// RewardBehaviour_Multiple RewardsRuntime.Default__RewardBehaviour_Multiple
// (Public, ClassDefaultObject, ArchetypeObject)

class URewardBehaviour_Multiple* URewardBehaviour_Multiple::GetDefaultObj()
{
	static class URewardBehaviour_Multiple* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardBehaviour_Multiple*>(URewardBehaviour_Multiple::StaticClass()->DefaultObject);

	return Default;
}

}


