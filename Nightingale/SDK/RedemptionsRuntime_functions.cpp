#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RedemptionsRuntime.RedeemableRewardDataAsset
// (None)

class UClass* URedeemableRewardDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedeemableRewardDataAsset");

	return Clss;
}


// RedeemableRewardDataAsset RedemptionsRuntime.Default__RedeemableRewardDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class URedeemableRewardDataAsset* URedeemableRewardDataAsset::GetDefaultObj()
{
	static class URedeemableRewardDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<URedeemableRewardDataAsset*>(URedeemableRewardDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class RedemptionsRuntime.RedemptionComponent
// (None)

class UClass* URedemptionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedemptionComponent");

	return Clss;
}


// RedemptionComponent RedemptionsRuntime.Default__RedemptionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URedemptionComponent* URedemptionComponent::GetDefaultObj()
{
	static class URedemptionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URedemptionComponent*>(URedemptionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function RedemptionsRuntime.RedemptionComponent.Server_RequestRefresh
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void URedemptionComponent::Server_RequestRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "Server_RequestRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RedemptionsRuntime.RedemptionComponent.Server_ClaimRedemption
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class FString                      RedemptionId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionComponent::Server_ClaimRedemption(const class FString& RedemptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "Server_ClaimRedemption");

	Params::URedemptionComponent_Server_ClaimRedemption_Params Parms{};

	Parms.RedemptionId = RedemptionId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RedemptionsRuntime.RedemptionComponent.OnRep_CurrentRedemptions
// (Final, Native, Private, Const)
// Parameters:

void URedemptionComponent::OnRep_CurrentRedemptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "OnRep_CurrentRedemptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RedemptionsRuntime.RedemptionComponent.GetCurrentRedemptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FRedemptionEntry>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FRedemptionEntry> URedemptionComponent::GetCurrentRedemptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "GetCurrentRedemptions");

	Params::URedemptionComponent_GetCurrentRedemptions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RedemptionsRuntime.RedemptionComponent.Client_RedemptionResponse
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RewardName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionComponent::Client_RedemptionResponse(bool bSuccess, const class FString& RewardName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "Client_RedemptionResponse");

	Params::URedemptionComponent_Client_RedemptionResponse_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.RewardName = RewardName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RedemptionsRuntime.RedemptionComponent.CanRedemptionBeClaimed
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRedemptionEntry            Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URedemptionComponent::CanRedemptionBeClaimed(struct FRedemptionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionComponent", "CanRedemptionBeClaimed");

	Params::URedemptionComponent_CanRedemptionBeClaimed_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RedemptionsRuntime.RedemptionEntryFunctionLibrary
// (None)

class UClass* URedemptionEntryFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedemptionEntryFunctionLibrary");

	return Clss;
}


// RedemptionEntryFunctionLibrary RedemptionsRuntime.Default__RedemptionEntryFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class URedemptionEntryFunctionLibrary* URedemptionEntryFunctionLibrary::GetDefaultObj()
{
	static class URedemptionEntryFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<URedemptionEntryFunctionLibrary*>(URedemptionEntryFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.TryGetRedemptionUIData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRedemptionEntry            Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRedeemableRewardUIData     OutData                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EGetResult              OutBranches                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URedemptionEntryFunctionLibrary::TryGetRedemptionUIData(struct FRedemptionEntry& Entry, struct FRedeemableRewardUIData* OutData, enum class EGetResult* OutBranches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionEntryFunctionLibrary", "TryGetRedemptionUIData");

	Params::URedemptionEntryFunctionLibrary_TryGetRedemptionUIData_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

	if (OutBranches != nullptr)
		*OutBranches = Parms.OutBranches;

}


// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.IsRedemptionValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRedemptionEntry            Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool URedemptionEntryFunctionLibrary::IsRedemptionValid(struct FRedemptionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionEntryFunctionLibrary", "IsRedemptionValid");

	Params::URedemptionEntryFunctionLibrary_IsRedemptionValid_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RedemptionsRuntime.RedemptionEntryFunctionLibrary.GetRedemptionId
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRedemptionEntry            Entry                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString URedemptionEntryFunctionLibrary::GetRedemptionId(struct FRedemptionEntry& Entry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedemptionEntryFunctionLibrary", "GetRedemptionId");

	Params::URedemptionEntryFunctionLibrary_GetRedemptionId_Params Parms{};

	Parms.Entry = Entry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


