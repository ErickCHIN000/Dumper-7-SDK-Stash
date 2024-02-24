#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Kraken.KrakenAchievementsApi
// (None)

class UClass* UKrakenAchievementsApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenAchievementsApi");

	return Clss;
}


// KrakenAchievementsApi Kraken.Default__KrakenAchievementsApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenAchievementsApi* UKrakenAchievementsApi::GetDefaultObj()
{
	static class UKrakenAchievementsApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenAchievementsApi*>(UKrakenAchievementsApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenAchievementsApi.K2_IncrementMultipleAchievementContribution
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIncrementMultipleAchievementContributionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultipleAchievementContributionResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAchievementsApi::K2_IncrementMultipleAchievementContribution(struct FKrakenIncrementMultipleAchievementContributionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultipleAchievementContributionResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAchievementsApi", "K2_IncrementMultipleAchievementContribution");

	Params::UKrakenAchievementsApi_K2_IncrementMultipleAchievementContribution_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAchievementsApi.K2_IncrementAchievementContribution
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIncrementAchievementContributionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAchievementState     OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAchievementsApi::K2_IncrementAchievementContribution(struct FKrakenIncrementAchievementContributionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAchievementsApi", "K2_IncrementAchievementContribution");

	Params::UKrakenAchievementsApi_K2_IncrementAchievementContribution_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAchievementsApi.K2_GetAchievements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAchievementsStateListOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAchievementsApi::K2_GetAchievements(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementsStateList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAchievementsApi", "K2_GetAchievements");

	Params::UKrakenAchievementsApi_K2_GetAchievements_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAchievementsApi.K2_GetAchievement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAchievementParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAchievementState     OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAchievementsApi::K2_GetAchievement(struct FKrakenGetAchievementParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAchievementsApi", "K2_GetAchievement");

	Params::UKrakenAchievementsApi_K2_GetAchievement_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAchievementsApi.K2_ClaimAchievement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClaimAchievementParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAchievementClaim     OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAchievementsApi::K2_ClaimAchievement(struct FKrakenClaimAchievementParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAchievementClaim* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAchievementsApi", "K2_ClaimAchievement");

	Params::UKrakenAchievementsApi_K2_ClaimAchievement_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenAuthApi
// (None)

class UClass* UKrakenAuthApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenAuthApi");

	return Clss;
}


// KrakenAuthApi Kraken.Default__KrakenAuthApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenAuthApi* UKrakenAuthApi::GetDefaultObj()
{
	static class UKrakenAuthApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenAuthApi*>(UKrakenAuthApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenAuthApi.K2_UnlinkXbox
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkXbox(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkXbox");

	Params::UKrakenAuthApi_K2_UnlinkXbox_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkWeibo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkWeibo(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkWeibo");

	Params::UKrakenAuthApi_K2_UnlinkWeibo_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkTwitch(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkTwitch");

	Params::UKrakenAuthApi_K2_UnlinkTwitch_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkSteam
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkSteam(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkSteam");

	Params::UKrakenAuthApi_K2_UnlinkSteam_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkPsnCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkPsnCode(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkPsnCode");

	Params::UKrakenAuthApi_K2_UnlinkPsnCode_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkPsn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkPsn(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkPsn");

	Params::UKrakenAuthApi_K2_UnlinkPsn_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkNintendoAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkNintendoAccount(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkNintendoAccount");

	Params::UKrakenAuthApi_K2_UnlinkNintendoAccount_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkNintendo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkNintendo(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkNintendo");

	Params::UKrakenAuthApi_K2_UnlinkNintendo_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkHelixTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkHelixTwitch(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkHelixTwitch");

	Params::UKrakenAuthApi_K2_UnlinkHelixTwitch_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkGrdkloginWithGrdk
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkGrdkloginWithGrdk(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkGrdkloginWithGrdk");

	Params::UKrakenAuthApi_K2_UnlinkGrdkloginWithGrdk_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkGoogle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkGoogle(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkGoogle");

	Params::UKrakenAuthApi_K2_UnlinkGoogle_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkFacebook
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkFacebook(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkFacebook");

	Params::UKrakenAuthApi_K2_UnlinkFacebook_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkCognito
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkCognito(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkCognito");

	Params::UKrakenAuthApi_K2_UnlinkCognito_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_UnlinkApple
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_UnlinkApple(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_UnlinkApple");

	Params::UKrakenAuthApi_K2_UnlinkApple_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenAuthApi.K2_ServerLogin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenServerLoginParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAuthToken            OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_ServerLogin(struct FKrakenServerLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_ServerLogin");

	Params::UKrakenAuthApi_K2_ServerLogin_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_PostTwitchOidcToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPostTwitchOidcTokenParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenTwitchOauthTokenResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_PostTwitchOidcToken(struct FKrakenPostTwitchOidcTokenParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTwitchOauthTokenResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_PostTwitchOidcToken");

	Params::UKrakenAuthApi_K2_PostTwitchOidcToken_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithZenaptic
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithZenapticParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithZenaptic(struct FKrakenLoginWithZenapticParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithZenaptic");

	Params::UKrakenAuthApi_K2_LoginWithZenaptic_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithXbox
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithXboxParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithXbox(struct FKrakenLoginWithXboxParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithXbox");

	Params::UKrakenAuthApi_K2_LoginWithXbox_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithWeibo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithWeiboParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithWeibo(struct FKrakenLoginWithWeiboParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithWeibo");

	Params::UKrakenAuthApi_K2_LoginWithWeibo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithTwitchParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithTwitch(struct FKrakenLoginWithTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithTwitch");

	Params::UKrakenAuthApi_K2_LoginWithTwitch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithSteamV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithSteamV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithSteamV2(struct FKrakenLoginWithSteamV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithSteamV2");

	Params::UKrakenAuthApi_K2_LoginWithSteamV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithSteam
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithSteamParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithSteam(struct FKrakenLoginWithSteamParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithSteam");

	Params::UKrakenAuthApi_K2_LoginWithSteam_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithPsnV3
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithPsnV3Params InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithPsnV3(struct FKrakenLoginWithPsnV3Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithPsnV3");

	Params::UKrakenAuthApi_K2_LoginWithPsnV3_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithPsnCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithPsnCodeParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithPsnCode(struct FKrakenLoginWithPsnCodeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithPsnCode");

	Params::UKrakenAuthApi_K2_LoginWithPsnCode_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithPsn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithPsnParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithPsn(struct FKrakenLoginWithPsnParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithPsn");

	Params::UKrakenAuthApi_K2_LoginWithPsn_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithNintendo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithNintendoParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithNintendo(struct FKrakenLoginWithNintendoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithNintendo");

	Params::UKrakenAuthApi_K2_LoginWithNintendo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithKrakenId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithKrakenIdParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLoginWithoutProviderResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithKrakenId(struct FKrakenLoginWithKrakenIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLoginWithoutProviderResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithKrakenId");

	Params::UKrakenAuthApi_K2_LoginWithKrakenId_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithKraken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithKrakenParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithKraken(struct FKrakenLoginWithKrakenParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithKraken");

	Params::UKrakenAuthApi_K2_LoginWithKraken_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithHelixTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithHelixTwitchParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithHelixTwitch(struct FKrakenLoginWithHelixTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithHelixTwitch");

	Params::UKrakenAuthApi_K2_LoginWithHelixTwitch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithGrdk
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithGrdkParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithGrdk(struct FKrakenLoginWithGrdkParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithGrdk");

	Params::UKrakenAuthApi_K2_LoginWithGrdk_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithGoogle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithGoogleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithGoogle(struct FKrakenLoginWithGoogleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithGoogle");

	Params::UKrakenAuthApi_K2_LoginWithGoogle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithFacebook
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithFacebookParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithFacebook(struct FKrakenLoginWithFacebookParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithFacebook");

	Params::UKrakenAuthApi_K2_LoginWithFacebook_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithEgs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithEgsParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithEgs(struct FKrakenLoginWithEgsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithEgs");

	Params::UKrakenAuthApi_K2_LoginWithEgs_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithCognito
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithCognitoParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithCognito(struct FKrakenLoginWithCognitoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithCognito");

	Params::UKrakenAuthApi_K2_LoginWithCognito_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LoginWithApple
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLoginWithAppleParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUserExt              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LoginWithApple(struct FKrakenLoginWithAppleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUserExt* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LoginWithApple");

	Params::UKrakenAuthApi_K2_LoginWithApple_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkXbox
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkXboxParams       InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkXbox(struct FKrakenLinkXboxParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkXbox");

	Params::UKrakenAuthApi_K2_LinkXbox_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkWeibo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkWeiboParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkWeibo(struct FKrakenLinkWeiboParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkWeibo");

	Params::UKrakenAuthApi_K2_LinkWeibo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkTwitchParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkTwitch(struct FKrakenLinkTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkTwitch");

	Params::UKrakenAuthApi_K2_LinkTwitch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkSteamV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkSteamV2Params    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkSteamV2(struct FKrakenLinkSteamV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkSteamV2");

	Params::UKrakenAuthApi_K2_LinkSteamV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkSteam
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkSteamParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkSteam(struct FKrakenLinkSteamParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkSteam");

	Params::UKrakenAuthApi_K2_LinkSteam_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkPsnCode
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkPsnCodeParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkPsnCode(struct FKrakenLinkPsnCodeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkPsnCode");

	Params::UKrakenAuthApi_K2_LinkPsnCode_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkPsn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkPsnParams        InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkPsn(struct FKrakenLinkPsnParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkPsn");

	Params::UKrakenAuthApi_K2_LinkPsn_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkNintendoAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkNintendoAccountParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkNintendoAccount(struct FKrakenLinkNintendoAccountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkNintendoAccount");

	Params::UKrakenAuthApi_K2_LinkNintendoAccount_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkNintendo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkNintendoParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkNintendo(struct FKrakenLinkNintendoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkNintendo");

	Params::UKrakenAuthApi_K2_LinkNintendo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkHelixTwitch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkHelixTwitchParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkHelixTwitch(struct FKrakenLinkHelixTwitchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkHelixTwitch");

	Params::UKrakenAuthApi_K2_LinkHelixTwitch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkGrdkloginWithGrdk
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkGrdkloginWithGrdkParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkGrdkloginWithGrdk(struct FKrakenLinkGrdkloginWithGrdkParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkGrdkloginWithGrdk");

	Params::UKrakenAuthApi_K2_LinkGrdkloginWithGrdk_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkGoogle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkGoogleParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkGoogle(struct FKrakenLinkGoogleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkGoogle");

	Params::UKrakenAuthApi_K2_LinkGoogle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkFacebook
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkFacebookParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkFacebook(struct FKrakenLinkFacebookParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkFacebook");

	Params::UKrakenAuthApi_K2_LinkFacebook_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkCognito
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkCognitoParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkCognito(struct FKrakenLinkCognitoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkCognito");

	Params::UKrakenAuthApi_K2_LinkCognito_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_LinkApple
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenLinkAppleParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountLinkResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_LinkApple(struct FKrakenLinkAppleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountLinkResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_LinkApple");

	Params::UKrakenAuthApi_K2_LinkApple_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_IsUnifiedSteamAccountOnlineV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIsUnifiedSteamAccountOnlineV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountOnlineResponseOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_IsUnifiedSteamAccountOnlineV2(struct FKrakenIsUnifiedSteamAccountOnlineV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_IsUnifiedSteamAccountOnlineV2");

	Params::UKrakenAuthApi_K2_IsUnifiedSteamAccountOnlineV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_IsUnifiedSteamAccountOnline
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIsUnifiedSteamAccountOnlineParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountOnlineResponseOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_IsUnifiedSteamAccountOnline(struct FKrakenIsUnifiedSteamAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_IsUnifiedSteamAccountOnline");

	Params::UKrakenAuthApi_K2_IsUnifiedSteamAccountOnline_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_IsUnifiedNintendoAccountOnline
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIsUnifiedNintendoAccountOnlineParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountOnlineResponseOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_IsUnifiedNintendoAccountOnline(struct FKrakenIsUnifiedNintendoAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_IsUnifiedNintendoAccountOnline");

	Params::UKrakenAuthApi_K2_IsUnifiedNintendoAccountOnline_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_IsUnifiedEgsAccountOnline
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIsUnifiedEgsAccountOnlineParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccountOnlineResponseOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_IsUnifiedEgsAccountOnline(struct FKrakenIsUnifiedEgsAccountOnlineParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccountOnlineResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_IsUnifiedEgsAccountOnline");

	Params::UKrakenAuthApi_K2_IsUnifiedEgsAccountOnline_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GuestToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenGuestToken           OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GuestToken(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenGuestToken* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GuestToken");

	Params::UKrakenAuthApi_K2_GuestToken_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GuestLogin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGuestLoginParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAuthToken            OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GuestLogin(struct FKrakenGuestLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GuestLogin");

	Params::UKrakenAuthApi_K2_GuestLogin_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GetUsersWithXuid
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetUsersWithXuidParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUnifiedAccountJweTokenPayloadOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GetUsersWithXuid(struct FKrakenGetUsersWithXuidParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnifiedAccountJweTokenPayload* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GetUsersWithXuid");

	Params::UKrakenAuthApi_K2_GetUsersWithXuid_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GetTwitchOidcToken
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenTwitchOauthTokenResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GetTwitchOidcToken(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTwitchOauthTokenResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GetTwitchOidcToken");

	Params::UKrakenAuthApi_K2_GetTwitchOidcToken_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GetPublicKeyV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAuthPublicKey        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GetPublicKeyV2(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthPublicKey* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GetPublicKeyV2");

	Params::UKrakenAuthApi_K2_GetPublicKeyV2_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_GetPublicKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_GetPublicKey(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_GetPublicKey");

	Params::UKrakenAuthApi_K2_GetPublicKey_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenAuthApi.K2_CrossAccountLogin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCrossAccountLoginParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAuthToken            OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenAuthApi::K2_CrossAccountLogin(struct FKrakenCrossAccountLoginParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAuthToken* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenAuthApi", "K2_CrossAccountLogin");

	Params::UKrakenAuthApi_K2_CrossAccountLogin_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenConfigApi
// (None)

class UClass* UKrakenConfigApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenConfigApi");

	return Clss;
}


// KrakenConfigApi Kraken.Default__KrakenConfigApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenConfigApi* UKrakenConfigApi::GetDefaultObj()
{
	static class UKrakenConfigApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenConfigApi*>(UKrakenConfigApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenConfigApi.K2_GetConfigItemRaw
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetConfigItemRawParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenConfigApi::K2_GetConfigItemRaw(struct FKrakenGetConfigItemRawParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenConfigApi", "K2_GetConfigItemRaw");

	Params::UKrakenConfigApi_K2_GetConfigItemRaw_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenConfigApi.K2_GetConfigItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetConfigItemParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJsonObjectWrapper          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenConfigApi::K2_GetConfigItem(struct FKrakenGetConfigItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FJsonObjectWrapper* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenConfigApi", "K2_GetConfigItem");

	Params::UKrakenConfigApi_K2_GetConfigItem_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenConfigApi.K2_GetConfig
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenCloudConfig>  OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenConfigApi::K2_GetConfig(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenCloudConfig>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenConfigApi", "K2_GetConfig");

	Params::UKrakenConfigApi_K2_GetConfig_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenContentApi
// (None)

class UClass* UKrakenContentApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenContentApi");

	return Clss;
}


// KrakenContentApi Kraken.Default__KrakenContentApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenContentApi* UKrakenContentApi::GetDefaultObj()
{
	static class UKrakenContentApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenContentApi*>(UKrakenContentApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenContentApi.K2_MultiContentimport
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMultiContentimportParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenContentApi::K2_MultiContentimport(struct FKrakenMultiContentimportParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenContentApi", "K2_MultiContentimport");

	Params::UKrakenContentApi_K2_MultiContentimport_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenContentApi.K2_GetContentUrl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetContentUrlParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenContentUrl           OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenContentApi::K2_GetContentUrl(struct FKrakenGetContentUrlParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenContentUrl* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenContentApi", "K2_GetContentUrl");

	Params::UKrakenContentApi_K2_GetContentUrl_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenContentApi.K2_GetContent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetContentParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FString, struct FKrakenItem>OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenContentApi::K2_GetContent(struct FKrakenGetContentParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TMap<class FString, struct FKrakenItem>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenContentApi", "K2_GetContent");

	Params::UKrakenContentApi_K2_GetContent_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = Parms.OutResult;

}


// Class Kraken.KrakenFeedbackApi
// (None)

class UClass* UKrakenFeedbackApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenFeedbackApi");

	return Clss;
}


// KrakenFeedbackApi Kraken.Default__KrakenFeedbackApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenFeedbackApi* UKrakenFeedbackApi::GetDefaultObj()
{
	static class UKrakenFeedbackApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenFeedbackApi*>(UKrakenFeedbackApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenFeedbackApi.K2_CreateFeedback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreateFeedbackParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFeedback             OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenFeedbackApi::K2_CreateFeedback(struct FKrakenCreateFeedbackParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFeedback* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenFeedbackApi", "K2_CreateFeedback");

	Params::UKrakenFeedbackApi_K2_CreateFeedback_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenFriendsApi
// (None)

class UClass* UKrakenFriendsApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenFriendsApi");

	return Clss;
}


// KrakenFriendsApi Kraken.Default__KrakenFriendsApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenFriendsApi* UKrakenFriendsApi::GetDefaultObj()
{
	static class UKrakenFriendsApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenFriendsApi*>(UKrakenFriendsApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenFriendsApi.K2_FriendsRichPresence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFriendsRichPresenceParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenRichPresenceResponse>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenFriendsApi::K2_FriendsRichPresence(struct FKrakenFriendsRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenRichPresenceResponse>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenFriendsApi", "K2_FriendsRichPresence");

	Params::UKrakenFriendsApi_K2_FriendsRichPresence_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenFriendsApi.K2_FriendRichPresence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFriendRichPresenceParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRichPresenceResponse OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenFriendsApi::K2_FriendRichPresence(struct FKrakenFriendRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRichPresenceResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenFriendsApi", "K2_FriendRichPresence");

	Params::UKrakenFriendsApi_K2_FriendRichPresence_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenGameSessionApi
// (None)

class UClass* UKrakenGameSessionApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenGameSessionApi");

	return Clss;
}


// KrakenGameSessionApi Kraken.Default__KrakenGameSessionApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenGameSessionApi* UKrakenGameSessionApi::GetDefaultObj()
{
	static class UKrakenGameSessionApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenGameSessionApi*>(UKrakenGameSessionApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenGameSessionApi.K2_TerminateGameSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenTerminateGameSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_TerminateGameSession(struct FKrakenTerminateGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_TerminateGameSession");

	Params::UKrakenGameSessionApi_K2_TerminateGameSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_RemovePlayerFromGameSessionQueue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_RemovePlayerFromGameSessionQueue(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_RemovePlayerFromGameSessionQueue");

	Params::UKrakenGameSessionApi_K2_RemovePlayerFromGameSessionQueue_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_RegisterGameSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRegisterGameSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_RegisterGameSession(struct FKrakenRegisterGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_RegisterGameSession");

	Params::UKrakenGameSessionApi_K2_RegisterGameSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_QueueForGameSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenQueueForGameSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_QueueForGameSession(struct FKrakenQueueForGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_QueueForGameSession");

	Params::UKrakenGameSessionApi_K2_QueueForGameSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_JoinPlayerInGameSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenJoinPlayerInGameSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_JoinPlayerInGameSession(struct FKrakenJoinPlayerInGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_JoinPlayerInGameSession");

	Params::UKrakenGameSessionApi_K2_JoinPlayerInGameSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_GetGameSessionNetworkInformationFallback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenGetConnectionInformationMessageFallbackResponseBodyOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_GetGameSessionNetworkInformationFallback(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenGetConnectionInformationMessageFallbackResponseBody* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_GetGameSessionNetworkInformationFallback");

	Params::UKrakenGameSessionApi_K2_GetGameSessionNetworkInformationFallback_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenGameSessionApi.K2_CreateGameSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreateGameSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenCreateGameSessionResponseBodyOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_CreateGameSession(struct FKrakenCreateGameSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenCreateGameSessionResponseBody* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_CreateGameSession");

	Params::UKrakenGameSessionApi_K2_CreateGameSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenGameSessionApi.K2_CompletePlayerSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCompletePlayerSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_CompletePlayerSession(struct FKrakenCompletePlayerSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_CompletePlayerSession");

	Params::UKrakenGameSessionApi_K2_CompletePlayerSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenGameSessionApi.K2_ActivePlayerSession
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenActivePlayerSessionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenGameSessionApi::K2_ActivePlayerSession(struct FKrakenActivePlayerSessionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenGameSessionApi", "K2_ActivePlayerSession");

	Params::UKrakenGameSessionApi_K2_ActivePlayerSession_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenHealthcheckApi
// (None)

class UClass* UKrakenHealthcheckApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenHealthcheckApi");

	return Clss;
}


// KrakenHealthcheckApi Kraken.Default__KrakenHealthcheckApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenHealthcheckApi* UKrakenHealthcheckApi::GetDefaultObj()
{
	static class UKrakenHealthcheckApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenHealthcheckApi*>(UKrakenHealthcheckApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenHealthcheckApi.K2_Checkfull
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFullHealthCheck      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenHealthcheckApi::K2_Checkfull(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFullHealthCheck* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenHealthcheckApi", "K2_Checkfull");

	Params::UKrakenHealthcheckApi_K2_Checkfull_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenHealthcheckApi.K2_Check
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenHealthCheck          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenHealthcheckApi::K2_Check(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenHealthCheck* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenHealthcheckApi", "K2_Check");

	Params::UKrakenHealthcheckApi_K2_Check_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenInventoriesApi
// (None)

class UClass* UKrakenInventoriesApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenInventoriesApi");

	return Clss;
}


// KrakenInventoriesApi Kraken.Default__KrakenInventoriesApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenInventoriesApi* UKrakenInventoriesApi::GetDefaultObj()
{
	static class UKrakenInventoriesApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenInventoriesApi*>(UKrakenInventoriesApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenInventoriesApi.K2_InventoryGet
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenInventoryGetParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryGet         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_InventoryGet(struct FKrakenInventoryGetParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGet* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_InventoryGet");

	Params::UKrakenInventoriesApi_K2_InventoryGet_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenInventoriesApi.K2_GiftInventory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGiftInventoryParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryGift        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_GiftInventory(struct FKrakenGiftInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGift* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_GiftInventory");

	Params::UKrakenInventoriesApi_K2_GiftInventory_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenInventoriesApi.K2_GetInventoryItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetInventoryItemParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryGetByItemId OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_GetInventoryItem(struct FKrakenGetInventoryItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryGetByItemId* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_GetInventoryItem");

	Params::UKrakenInventoriesApi_K2_GetInventoryItem_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenInventoriesApi.K2_DropInventory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDropInventoryParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryDrop        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_DropInventory(struct FKrakenDropInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryDrop* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_DropInventory");

	Params::UKrakenInventoriesApi_K2_DropInventory_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenInventoriesApi.K2_ConsumeInventoryV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenConsumeInventoryV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryConsumeV2   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_ConsumeInventoryV2(struct FKrakenConsumeInventoryV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryConsumeV2* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_ConsumeInventoryV2");

	Params::UKrakenInventoriesApi_K2_ConsumeInventoryV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenInventoriesApi.K2_ConsumeInventory
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenConsumeInventoryParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryConsume     OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenInventoriesApi::K2_ConsumeInventory(struct FKrakenConsumeInventoryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryConsume* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenInventoriesApi", "K2_ConsumeInventory");

	Params::UKrakenInventoriesApi_K2_ConsumeInventory_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenLeaderboardsApi
// (None)

class UClass* UKrakenLeaderboardsApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenLeaderboardsApi");

	return Clss;
}


// KrakenLeaderboardsApi Kraken.Default__KrakenLeaderboardsApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenLeaderboardsApi* UKrakenLeaderboardsApi::GetDefaultObj()
{
	static class UKrakenLeaderboardsApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenLeaderboardsApi*>(UKrakenLeaderboardsApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenLeaderboardsApi.K2_SubmitLeaderboardScore
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSubmitLeaderboardScoreParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerScoreResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_SubmitLeaderboardScore(struct FKrakenSubmitLeaderboardScoreParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerScoreResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_SubmitLeaderboardScore");

	Params::UKrakenLeaderboardsApi_K2_SubmitLeaderboardScore_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_ListWindows
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenListWindowsParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardGetScoresResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_ListWindows(struct FKrakenListWindowsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardGetScoresResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_ListWindows");

	Params::UKrakenLeaderboardsApi_K2_ListWindows_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_ListLeaderboardScores
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenListLeaderboardScoresParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardGetScoresResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_ListLeaderboardScores(struct FKrakenListLeaderboardScoresParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardGetScoresResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_ListLeaderboardScores");

	Params::UKrakenLeaderboardsApi_K2_ListLeaderboardScores_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_ListLeaderboards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenLeaderboardInfo>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_ListLeaderboards(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenLeaderboardInfo>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_ListLeaderboards");

	Params::UKrakenLeaderboardsApi_K2_ListLeaderboards_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboardStates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardStates    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_GetLeaderboardStates(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardStates* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_GetLeaderboardStates");

	Params::UKrakenLeaderboardsApi_K2_GetLeaderboardStates_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboardState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetLeaderboardStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardState     OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_GetLeaderboardState(struct FKrakenGetLeaderboardStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_GetLeaderboardState");

	Params::UKrakenLeaderboardsApi_K2_GetLeaderboardState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_GetLeaderboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetLeaderboardParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardInfo      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_GetLeaderboard(struct FKrakenGetLeaderboardParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardInfo* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_GetLeaderboard");

	Params::UKrakenLeaderboardsApi_K2_GetLeaderboard_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenLeaderboardsApi.K2_ClaimLeaderboardScore
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClaimLeaderboardScoreParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLeaderboardClaim     OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenLeaderboardsApi::K2_ClaimLeaderboardScore(struct FKrakenClaimLeaderboardScoreParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLeaderboardClaim* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenLeaderboardsApi", "K2_ClaimLeaderboardScore");

	Params::UKrakenLeaderboardsApi_K2_ClaimLeaderboardScore_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenMeApi
// (None)

class UClass* UKrakenMeApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenMeApi");

	return Clss;
}


// KrakenMeApi Kraken.Default__KrakenMeApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenMeApi* UKrakenMeApi::GetDefaultObj()
{
	static class UKrakenMeApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenMeApi*>(UKrakenMeApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenMeApi.K2_RichPresence
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRichPresenceParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_RichPresence(struct FKrakenRichPresenceParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_RichPresence");

	Params::UKrakenMeApi_K2_RichPresence_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenMeApi.K2_Reward
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Reward(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Reward");

	Params::UKrakenMeApi_K2_Reward_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenMeApi.K2_Mytime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMytimeParams         InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenTime                 OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Mytime(struct FKrakenMytimeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTime* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Mytime");

	Params::UKrakenMeApi_K2_Mytime_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMeApi.K2_Me
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMe                   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Me(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMe* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Me");

	Params::UKrakenMeApi_K2_Me_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMeApi.K2_Logout
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Logout(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Logout");

	Params::UKrakenMeApi_K2_Logout_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenMeApi.K2_Location
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLocation             OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Location(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLocation* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Location");

	Params::UKrakenMeApi_K2_Location_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMeApi.K2_Heartbeat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_Heartbeat(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_Heartbeat");

	Params::UKrakenMeApi_K2_Heartbeat_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenMeApi.K2_ActivePlayerSubscription
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenPlayerSubscription>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenMeApi::K2_ActivePlayerSubscription(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenPlayerSubscription>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMeApi", "K2_ActivePlayerSubscription");

	Params::UKrakenMeApi_K2_ActivePlayerSubscription_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenMessagesApi
// (None)

class UClass* UKrakenMessagesApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenMessagesApi");

	return Clss;
}


// KrakenMessagesApi Kraken.Default__KrakenMessagesApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenMessagesApi* UKrakenMessagesApi::GetDefaultObj()
{
	static class UKrakenMessagesApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenMessagesApi*>(UKrakenMessagesApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenMessagesApi.K2_SendMessagesWithProvider
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSendMessagesWithProviderParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageSendWithProviderBodyOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_SendMessagesWithProvider(struct FKrakenSendMessagesWithProviderParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageSendWithProviderBody* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_SendMessagesWithProvider");

	Params::UKrakenMessagesApi_K2_SendMessagesWithProvider_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_SendMessages
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSendMessagesParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageSendList      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_SendMessages(struct FKrakenSendMessagesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageSendList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_SendMessages");

	Params::UKrakenMessagesApi_K2_SendMessages_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_RemoveMessagesList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRemoveMessagesListParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageRemoveList    OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_RemoveMessagesList(struct FKrakenRemoveMessagesListParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageRemoveList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_RemoveMessagesList");

	Params::UKrakenMessagesApi_K2_RemoveMessagesList_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_MarkMessagesAsV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMarkMessagesAsV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageMarkAs        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_MarkMessagesAsV2(struct FKrakenMarkMessagesAsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageMarkAs* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_MarkMessagesAsV2");

	Params::UKrakenMessagesApi_K2_MarkMessagesAsV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_MarkMessagesAs
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMarkMessagesAsParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageMarkAs        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_MarkMessagesAs(struct FKrakenMarkMessagesAsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageMarkAs* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_MarkMessagesAs");

	Params::UKrakenMessagesApi_K2_MarkMessagesAs_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_GetMessageV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMessageV2Params   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageGet           OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_GetMessageV2(struct FKrakenGetMessageV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGet* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_GetMessageV2");

	Params::UKrakenMessagesApi_K2_GetMessageV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_GetMessagesListV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMessagesListV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageGetList       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_GetMessagesListV2(struct FKrakenGetMessagesListV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGetList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_GetMessagesListV2");

	Params::UKrakenMessagesApi_K2_GetMessagesListV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_GetMessagesList
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMessagesListParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageGetList       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_GetMessagesList(struct FKrakenGetMessagesListParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGetList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_GetMessagesList");

	Params::UKrakenMessagesApi_K2_GetMessagesList_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_GetMessagesCount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMessagesCountParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessagesCount        OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_GetMessagesCount(struct FKrakenGetMessagesCountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessagesCount* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_GetMessagesCount");

	Params::UKrakenMessagesApi_K2_GetMessagesCount_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_GetMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMessageParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageGet           OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_GetMessage(struct FKrakenGetMessageParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageGet* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_GetMessage");

	Params::UKrakenMessagesApi_K2_GetMessage_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenMessagesApi.K2_ClaimMessageRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClaimMessageRewardsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMessageClaimResponse OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenMessagesApi::K2_ClaimMessageRewards(struct FKrakenClaimMessageRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMessageClaimResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenMessagesApi", "K2_ClaimMessageRewards");

	Params::UKrakenMessagesApi_K2_ClaimMessageRewards_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenPartyApi
// (None)

class UClass* UKrakenPartyApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPartyApi");

	return Clss;
}


// KrakenPartyApi Kraken.Default__KrakenPartyApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPartyApi* UKrakenPartyApi::GetDefaultObj()
{
	static class UKrakenPartyApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPartyApi*>(UKrakenPartyApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPartyApi.K2_UpdateParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUpdatePartyParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_UpdateParty(struct FKrakenUpdatePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_UpdateParty");

	Params::UKrakenPartyApi_K2_UpdateParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_SetPlayerPartyState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetPlayerPartyStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_SetPlayerPartyState(struct FKrakenSetPlayerPartyStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_SetPlayerPartyState");

	Params::UKrakenPartyApi_K2_SetPlayerPartyState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_SendPartyChatMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSendPartyChatMessageParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_SendPartyChatMessage(struct FKrakenSendPartyChatMessageParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_SendPartyChatMessage");

	Params::UKrakenPartyApi_K2_SendPartyChatMessage_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_RequestJoinPlayerV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRequestJoinPlayerV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyJoinRequestDetailsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RequestJoinPlayerV2(struct FKrakenRequestJoinPlayerV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyJoinRequestDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RequestJoinPlayerV2");

	Params::UKrakenPartyApi_K2_RequestJoinPlayerV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_RequestJoinPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRequestJoinPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RequestJoinPlayer(struct FKrakenRequestJoinPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RequestJoinPlayer");

	Params::UKrakenPartyApi_K2_RequestJoinPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_RequestJoinPartyV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRequestJoinPartyV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyJoinRequestDetailsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RequestJoinPartyV2(struct FKrakenRequestJoinPartyV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyJoinRequestDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RequestJoinPartyV2");

	Params::UKrakenPartyApi_K2_RequestJoinPartyV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_RequestJoinParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRequestJoinPartyParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RequestJoinParty(struct FKrakenRequestJoinPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RequestJoinParty");

	Params::UKrakenPartyApi_K2_RequestJoinParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_RejectPartyInvite
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRejectPartyInviteParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RejectPartyInvite(struct FKrakenRejectPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RejectPartyInvite");

	Params::UKrakenPartyApi_K2_RejectPartyInvite_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_RejectJoinRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRejectJoinRequestParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_RejectJoinRequest(struct FKrakenRejectJoinRequestParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_RejectJoinRequest");

	Params::UKrakenPartyApi_K2_RejectJoinRequest_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_PartyLeave
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPartyLeaveParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_PartyLeave(struct FKrakenPartyLeaveParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_PartyLeave");

	Params::UKrakenPartyApi_K2_PartyLeave_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_InviteToParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenInviteToPartyParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerInvitationDetailsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_InviteToParty(struct FKrakenInviteToPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerInvitationDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_InviteToParty");

	Params::UKrakenPartyApi_K2_InviteToParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_GetParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPartyParams       InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_GetParty(struct FKrakenGetPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_GetParty");

	Params::UKrakenPartyApi_K2_GetParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_GetCurrentPartyDetails
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetCurrentPartyDetailsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerPartyDetails   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_GetCurrentPartyDetails(struct FKrakenGetCurrentPartyDetailsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_GetCurrentPartyDetails");

	Params::UKrakenPartyApi_K2_GetCurrentPartyDetails_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_GetCurrentParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetCurrentPartyParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_GetCurrentParty(struct FKrakenGetCurrentPartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_GetCurrentParty");

	Params::UKrakenPartyApi_K2_GetCurrentParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_DelMember
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDelMemberParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_DelMember(struct FKrakenDelMemberParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_DelMember");

	Params::UKrakenPartyApi_K2_DelMember_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_DeleteParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDeletePartyParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_DeleteParty(struct FKrakenDeletePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_DeleteParty");

	Params::UKrakenPartyApi_K2_DeleteParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_CreateParty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreatePartyParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_CreateParty(struct FKrakenCreatePartyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_CreateParty");

	Params::UKrakenPartyApi_K2_CreateParty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_ChangePartyHost
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenChangePartyHostParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_ChangePartyHost(struct FKrakenChangePartyHostParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_ChangePartyHost");

	Params::UKrakenPartyApi_K2_ChangePartyHost_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_CancelRequestJoin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCancelRequestJoinParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_CancelRequestJoin(struct FKrakenCancelRequestJoinParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_CancelRequestJoin");

	Params::UKrakenPartyApi_K2_CancelRequestJoin_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_CancelPartyInvite
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCancelPartyInviteParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_CancelPartyInvite(struct FKrakenCancelPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_CancelPartyInvite");

	Params::UKrakenPartyApi_K2_CancelPartyInvite_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPartyApi.K2_AcceptPartyInvite
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAcceptPartyInviteParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyDetails         OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_AcceptPartyInvite(struct FKrakenAcceptPartyInviteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyDetails* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_AcceptPartyInvite");

	Params::UKrakenPartyApi_K2_AcceptPartyInvite_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPartyApi.K2_AcceptJoinRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAcceptJoinRequestParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPartyApi::K2_AcceptJoinRequest(struct FKrakenAcceptJoinRequestParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPartyApi", "K2_AcceptJoinRequest");

	Params::UKrakenPartyApi_K2_AcceptJoinRequest_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenPlayernameApi
// (None)

class UClass* UKrakenPlayernameApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPlayernameApi");

	return Clss;
}


// KrakenPlayernameApi Kraken.Default__KrakenPlayernameApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPlayernameApi* UKrakenPlayernameApi::GetDefaultObj()
{
	static class UKrakenPlayernameApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPlayernameApi*>(UKrakenPlayernameApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPlayernameApi.K2_SearchProviderPlayerName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSearchProviderPlayerNameParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameSearchResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_SearchProviderPlayerName(struct FKrakenSearchProviderPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameSearchResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_SearchProviderPlayerName");

	Params::UKrakenPlayernameApi_K2_SearchProviderPlayerName_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerNameCrossplatformV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSearchPlayerNameCrossplatformV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameCrossplatformSearchResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_SearchPlayerNameCrossplatformV2(struct FKrakenSearchPlayerNameCrossplatformV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformSearchResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_SearchPlayerNameCrossplatformV2");

	Params::UKrakenPlayernameApi_K2_SearchPlayerNameCrossplatformV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerNameCrossplatform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSearchPlayerNameCrossplatformParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameCrossplatformSearchResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_SearchPlayerNameCrossplatform(struct FKrakenSearchPlayerNameCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformSearchResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_SearchPlayerNameCrossplatform");

	Params::UKrakenPlayernameApi_K2_SearchPlayerNameCrossplatform_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_SearchPlayerName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSearchPlayerNameParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameSearchResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_SearchPlayerName(struct FKrakenSearchPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameSearchResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_SearchPlayerName");

	Params::UKrakenPlayernameApi_K2_SearchPlayerName_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_RegisterProviderPlayerName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRegisterProviderPlayerNameParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameResponse   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_RegisterProviderPlayerName(struct FKrakenRegisterProviderPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_RegisterProviderPlayerName");

	Params::UKrakenPlayernameApi_K2_RegisterProviderPlayerName_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_RegisterPlayerName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRegisterPlayerNameParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameResponse   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_RegisterPlayerName(struct FKrakenRegisterPlayerNameParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_RegisterPlayerName");

	Params::UKrakenPlayernameApi_K2_RegisterPlayerName_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_GetPlayerNameByUserId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPlayerNameByUserIdParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameResponse   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_GetPlayerNameByUserId(struct FKrakenGetPlayerNameByUserIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_GetPlayerNameByUserId");

	Params::UKrakenPlayernameApi_K2_GetPlayerNameByUserId_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_GetPlayerName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameResponse   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_GetPlayerName(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_GetPlayerName");

	Params::UKrakenPlayernameApi_K2_GetPlayerName_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayernameApi.K2_GetAPlayerNameCrossplatform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAPlayerNameCrossplatformParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNameCrossplatformResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayernameApi::K2_GetAPlayerNameCrossplatform(struct FKrakenGetAPlayerNameCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNameCrossplatformResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayernameApi", "K2_GetAPlayerNameCrossplatform");

	Params::UKrakenPlayernameApi_K2_GetAPlayerNameCrossplatform_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenPlayersApi
// (None)

class UClass* UKrakenPlayersApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPlayersApi");

	return Clss;
}


// KrakenPlayersApi Kraken.Default__KrakenPlayersApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPlayersApi* UKrakenPlayersApi::GetDefaultObj()
{
	static class UKrakenPlayersApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPlayersApi*>(UKrakenPlayersApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPlayersApi.K2_UpsertSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUpsertSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUpsertSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_UpsertSplinteredState(struct FKrakenUpsertSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpsertSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_UpsertSplinteredState");

	Params::UKrakenPlayersApi_K2_UpsertSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_UpsertBatchSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUpsertBatchSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUpsertBatchSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_UpsertBatchSplinteredState(struct FKrakenUpsertBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpsertBatchSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_UpsertBatchSplinteredState");

	Params::UKrakenPlayersApi_K2_UpsertBatchSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_UploadStateBatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUploadStateBatchParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerStateBatchResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_UploadStateBatch(struct FKrakenUploadStateBatchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateBatchResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_UploadStateBatch");

	Params::UKrakenPlayersApi_K2_UploadStateBatch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_UploadState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUploadStateParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerStateMetaData  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_UploadState(struct FKrakenUploadStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateMetaData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_UploadState");

	Params::UKrakenPlayersApi_K2_UploadState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_UnblockPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUnblockPlayerParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_UnblockPlayer(struct FKrakenUnblockPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_UnblockPlayer");

	Params::UKrakenPlayersApi_K2_UnblockPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_SyncFriendsV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSyncFriendsV2Params  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFriendsGetList       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_SyncFriendsV2(struct FKrakenSyncFriendsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_SyncFriendsV2");

	Params::UKrakenPlayersApi_K2_SyncFriendsV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_StartSyncFriendsV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenStartSyncFriendsV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFriendsStartSyncResponseOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_StartSyncFriendsV2(struct FKrakenStartSyncFriendsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsStartSyncResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_StartSyncFriendsV2");

	Params::UKrakenPlayersApi_K2_StartSyncFriendsV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_SetFriendInviteAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetFriendInviteAttributesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_SetFriendInviteAttributes(struct FKrakenSetFriendInviteAttributesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_SetFriendInviteAttributes");

	Params::UKrakenPlayersApi_K2_SetFriendInviteAttributes_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_SetFriendFavorite
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetFriendFavoriteParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_SetFriendFavorite(struct FKrakenSetFriendFavoriteParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_SetFriendFavorite");

	Params::UKrakenPlayersApi_K2_SetFriendFavorite_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_SetFriendAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetFriendAttributesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_SetFriendAttributes(struct FKrakenSetFriendAttributesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_SetFriendAttributes");

	Params::UKrakenPlayersApi_K2_SetFriendAttributes_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_ResetHackerCounters
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ResetHackerCounters(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ResetHackerCounters");

	Params::UKrakenPlayersApi_K2_ResetHackerCounters_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_RemoveFriends
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRemoveFriendsParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFriendsGetList       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_RemoveFriends(struct FKrakenRemoveFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_RemoveFriends");

	Params::UKrakenPlayersApi_K2_RemoveFriends_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_PatchState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPatchStateParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerStateMetaData  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_PatchState(struct FKrakenPatchStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerStateMetaData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_PatchState");

	Params::UKrakenPlayersApi_K2_PatchState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_ListPlayerStates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenListPlayerStatesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenState>        OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ListPlayerStates(struct FKrakenListPlayerStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenState>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ListPlayerStates");

	Params::UKrakenPlayersApi_K2_ListPlayerStates_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_IncrementAtomicSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenIncrementAtomicSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenIncrementAtomicSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_IncrementAtomicSplinteredState(struct FKrakenIncrementAtomicSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenIncrementAtomicSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_IncrementAtomicSplinteredState");

	Params::UKrakenPlayersApi_K2_IncrementAtomicSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetSplinteredStates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetSplinteredStatesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSplinteredState      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetSplinteredStates(struct FKrakenGetSplinteredStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSplinteredState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetSplinteredStates");

	Params::UKrakenPlayersApi_K2_GetSplinteredStates_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetRecentlyPlayedWithPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetRecentlyPlayedWithPlayersParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNamesResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetRecentlyPlayedWithPlayers(struct FKrakenGetRecentlyPlayedWithPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNamesResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetRecentlyPlayedWithPlayers");

	Params::UKrakenPlayersApi_K2_GetRecentlyPlayedWithPlayers_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetPlayerStateByKeyBinary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPlayerStateByKeyBinaryParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetPlayerStateByKeyBinary(struct FKrakenGetPlayerStateByKeyBinaryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<uint8>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetPlayerStateByKeyBinary");

	Params::UKrakenPlayersApi_K2_GetPlayerStateByKeyBinary_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetPlayerStateByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPlayerStateByKeyParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenState                OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetPlayerStateByKey(struct FKrakenGetPlayerStateByKeyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetPlayerStateByKey");

	Params::UKrakenPlayersApi_K2_GetPlayerStateByKey_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetPlayerCrossplatform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPlayerCrossplatformParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerCrossplatform  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetPlayerCrossplatform(struct FKrakenGetPlayerCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerCrossplatform* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetPlayerCrossplatform");

	Params::UKrakenPlayersApi_K2_GetPlayerCrossplatform_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPlayerParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayer               OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetPlayer(struct FKrakenGetPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayer* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetPlayer");

	Params::UKrakenPlayersApi_K2_GetPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetPatches
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPatchesParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenPlayerState>  OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetPatches(struct FKrakenGetPatchesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenPlayerState>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetPatches");

	Params::UKrakenPlayersApi_K2_GetPatches_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetFullState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetFullStateParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerState          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetFullState(struct FKrakenGetFullStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetFullState");

	Params::UKrakenPlayersApi_K2_GetFullState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetFriendSuggestionsV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetFriendSuggestionsV2ParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenFriendSuggestionsResponseBody>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetFriendSuggestionsV2(struct FKrakenGetFriendSuggestionsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriendSuggestionsResponseBody>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetFriendSuggestionsV2");

	Params::UKrakenPlayersApi_K2_GetFriendSuggestionsV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetFriendSuggestions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetFriendSuggestionsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerNamesResponse  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetFriendSuggestions(struct FKrakenGetFriendSuggestionsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerNamesResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetFriendSuggestions");

	Params::UKrakenPlayersApi_K2_GetFriendSuggestions_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetFriendInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetFriendInfoParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFriend               OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetFriendInfo(struct FKrakenGetFriendInfoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriend* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetFriendInfo");

	Params::UKrakenPlayersApi_K2_GetFriendInfo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetBatchSplinteredStates
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetBatchSplinteredStatesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSplinteredStateBatch OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetBatchSplinteredStates(struct FKrakenGetBatchSplinteredStatesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSplinteredStateBatch* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetBatchSplinteredStates");

	Params::UKrakenPlayersApi_K2_GetBatchSplinteredStates_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_GetBan
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBanResponse          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_GetBan(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBanResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_GetBan");

	Params::UKrakenPlayersApi_K2_GetBan_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_FriendsCrossplatform
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFriendsCrossplatformParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenFriendCrossplatform>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_FriendsCrossplatform(struct FKrakenFriendsCrossplatformParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriendCrossplatform>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_FriendsCrossplatform");

	Params::UKrakenPlayersApi_K2_FriendsCrossplatform_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_Friends
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFriendsParams        InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenFriend>       OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_Friends(struct FKrakenFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenFriend>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_Friends");

	Params::UKrakenPlayersApi_K2_Friends_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_DeleteState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDeleteStateParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_DeleteState(struct FKrakenDeleteStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_DeleteState");

	Params::UKrakenPlayersApi_K2_DeleteState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_DeleteSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDeleteSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenDeleteSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_DeleteSplinteredState(struct FKrakenDeleteSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_DeleteSplinteredState");

	Params::UKrakenPlayersApi_K2_DeleteSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_DeletePlayerStateByKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDeletePlayerStateByKeyParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_DeletePlayerStateByKey(struct FKrakenDeletePlayerStateByKeyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_DeletePlayerStateByKey");

	Params::UKrakenPlayersApi_K2_DeletePlayerStateByKey_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_DeleteBatchSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenDeleteBatchSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenDeleteBatchSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_DeleteBatchSplinteredState(struct FKrakenDeleteBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteBatchSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_DeleteBatchSplinteredState");

	Params::UKrakenPlayersApi_K2_DeleteBatchSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_ConfirmBanMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBanInfo              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ConfirmBanMessage(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBanInfo* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ConfirmBanMessage");

	Params::UKrakenPlayersApi_K2_ConfirmBanMessage_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_ClearState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClearStateParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ClearState(struct FKrakenClearStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ClearState");

	Params::UKrakenPlayersApi_K2_ClearState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_ClearSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClearSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenDeleteSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ClearSplinteredState(struct FKrakenClearSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ClearSplinteredState");

	Params::UKrakenPlayersApi_K2_ClearSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_ClearBatchSplinteredState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenClearBatchSplinteredStateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenDeleteBatchSplinteredStateResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_ClearBatchSplinteredState(struct FKrakenClearBatchSplinteredStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenDeleteBatchSplinteredStateResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_ClearBatchSplinteredState");

	Params::UKrakenPlayersApi_K2_ClearBatchSplinteredState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_BlockPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenBlockPlayerParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_BlockPlayer(struct FKrakenBlockPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_BlockPlayer");

	Params::UKrakenPlayersApi_K2_BlockPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_BlockedPlayersCompleteData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBlockedPlayersCompleteDataOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_BlockedPlayersCompleteData(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBlockedPlayersCompleteData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_BlockedPlayersCompleteData");

	Params::UKrakenPlayersApi_K2_BlockedPlayersCompleteData_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_BlockedPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBlockedPlayersResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_BlockedPlayers(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBlockedPlayersResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_BlockedPlayers");

	Params::UKrakenPlayersApi_K2_BlockedPlayers_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_AddUserDeviceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddUserDeviceInfoParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddUserDeviceInfo(struct FKrakenAddUserDeviceInfoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddUserDeviceInfo");

	Params::UKrakenPlayersApi_K2_AddUserDeviceInfo_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_AddRecentlyPlayedWithPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddRecentlyPlayedWithPlayersParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddRecentlyPlayedWithPlayers(struct FKrakenAddRecentlyPlayedWithPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddRecentlyPlayedWithPlayers");

	Params::UKrakenPlayersApi_K2_AddRecentlyPlayedWithPlayers_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_AddPlayerStatesBatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddPlayerStatesBatchParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenState>        OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddPlayerStatesBatch(struct FKrakenAddPlayerStatesBatchParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenState>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddPlayerStatesBatch");

	Params::UKrakenPlayersApi_K2_AddPlayerStatesBatch_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_AddPlayerStateBinary
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddPlayerStateBinaryParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenState                OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddPlayerStateBinary(struct FKrakenAddPlayerStateBinaryParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddPlayerStateBinary");

	Params::UKrakenPlayersApi_K2_AddPlayerStateBinary_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_AddPlayerState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddPlayerStateParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenState                OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddPlayerState(struct FKrakenAddPlayerStateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenState* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddPlayerState");

	Params::UKrakenPlayersApi_K2_AddPlayerState_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_AddMultipleAnalyticIds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddMultipleAnalyticIdsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddMultipleAnalyticIds(struct FKrakenAddMultipleAnalyticIdsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddMultipleAnalyticIds");

	Params::UKrakenPlayersApi_K2_AddMultipleAnalyticIds_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPlayersApi.K2_AddFriends
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddFriendsParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFriendsGetList       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddFriends(struct FKrakenAddFriendsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFriendsGetList* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddFriends");

	Params::UKrakenPlayersApi_K2_AddFriends_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPlayersApi.K2_AddAnalyticId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddAnalyticIdParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPlayersApi::K2_AddAnalyticId(struct FKrakenAddAnalyticIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPlayersApi", "K2_AddAnalyticId");

	Params::UKrakenPlayersApi_K2_AddAnalyticId_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenPurchasesApi
// (None)

class UClass* UKrakenPurchasesApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPurchasesApi");

	return Clss;
}


// KrakenPurchasesApi Kraken.Default__KrakenPurchasesApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPurchasesApi* UKrakenPurchasesApi::GetDefaultObj()
{
	static class UKrakenPurchasesApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPurchasesApi*>(UKrakenPurchasesApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPurchasesApi.K2_XboxOnePurchaseCreateTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenXboxOnePurchaseCreateTransactionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_XboxOnePurchaseCreateTransaction(struct FKrakenXboxOnePurchaseCreateTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_XboxOnePurchaseCreateTransaction");

	Params::UKrakenPurchasesApi_K2_XboxOnePurchaseCreateTransaction_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPurchasesApi.K2_XboxOnePurchaseAbortTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenXboxOnePurchaseAbortTransactionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_XboxOnePurchaseAbortTransaction(struct FKrakenXboxOnePurchaseAbortTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_XboxOnePurchaseAbortTransaction");

	Params::UKrakenPurchasesApi_K2_XboxOnePurchaseAbortTransaction_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPurchasesApi.K2_SubscriptionPurchase
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSubscriptionPurchaseParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSubscriptionData     OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_SubscriptionPurchase(struct FKrakenSubscriptionPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSubscriptionData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_SubscriptionPurchase");

	Params::UKrakenPurchasesApi_K2_SubscriptionPurchase_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PurchaseWithConsume
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPurchaseWithConsumeParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchaseWithConsume  OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PurchaseWithConsume(struct FKrakenPurchaseWithConsumeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseWithConsume* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PurchaseWithConsume");

	Params::UKrakenPurchasesApi_K2_PurchaseWithConsume_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PurchaseStatuses
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchaseStatus       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PurchaseStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PurchaseStatuses");

	Params::UKrakenPurchasesApi_K2_PurchaseStatuses_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PurchaseRemaining
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPurchaseRemainingParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchaseRemaining    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PurchaseRemaining(struct FKrakenPurchaseRemainingParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchaseRemaining* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PurchaseRemaining");

	Params::UKrakenPurchasesApi_K2_PurchaseRemaining_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_Purchase
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPurchaseParams       InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchase             OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_Purchase(struct FKrakenPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_Purchase");

	Params::UKrakenPurchasesApi_K2_Purchase_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PremiumXboxOnePurchase
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPremiumXboxOnePurchaseParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchase             OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PremiumXboxOnePurchase(struct FKrakenPremiumXboxOnePurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PremiumXboxOnePurchase");

	Params::UKrakenPurchasesApi_K2_PremiumXboxOnePurchase_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PremiumPurchaseWithConsume
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPremiumPurchaseWithConsumeParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPremiumPurchaseWithConsumeOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PremiumPurchaseWithConsume(struct FKrakenPremiumPurchaseWithConsumeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPremiumPurchaseWithConsume* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PremiumPurchaseWithConsume");

	Params::UKrakenPurchasesApi_K2_PremiumPurchaseWithConsume_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_PremiumPurchase
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPremiumPurchaseParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPremiumPurchaseResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_PremiumPurchase(struct FKrakenPremiumPurchaseParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPremiumPurchaseResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_PremiumPurchase");

	Params::UKrakenPurchasesApi_K2_PremiumPurchase_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_NintendoPurchases
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNintendoPurchasesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKrakenNintendoPurchaseResponse>OutResult                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_NintendoPurchases(struct FKrakenNintendoPurchasesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, TArray<struct FKrakenNintendoPurchaseResponse>* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_NintendoPurchases");

	Params::UKrakenPurchasesApi_K2_NintendoPurchases_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseCreateTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMicrosoftPurchaseCreateTransactionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_MicrosoftPurchaseCreateTransaction(struct FKrakenMicrosoftPurchaseCreateTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_MicrosoftPurchaseCreateTransaction");

	Params::UKrakenPurchasesApi_K2_MicrosoftPurchaseCreateTransaction_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseConcludeTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMicrosoftPurchaseConcludeTransactionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPurchase             OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_MicrosoftPurchaseConcludeTransaction(struct FKrakenMicrosoftPurchaseConcludeTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPurchase* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_MicrosoftPurchaseConcludeTransaction");

	Params::UKrakenPurchasesApi_K2_MicrosoftPurchaseConcludeTransaction_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPurchasesApi.K2_MicrosoftPurchaseAbortTransaction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMicrosoftPurchaseAbortTransactionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPurchasesApi::K2_MicrosoftPurchaseAbortTransaction(struct FKrakenMicrosoftPurchaseAbortTransactionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPurchasesApi", "K2_MicrosoftPurchaseAbortTransaction");

	Params::UKrakenPurchasesApi_K2_MicrosoftPurchaseAbortTransaction_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenPuzzlePerformanceApi
// (None)

class UClass* UKrakenPuzzlePerformanceApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPuzzlePerformanceApi");

	return Clss;
}


// KrakenPuzzlePerformanceApi Kraken.Default__KrakenPuzzlePerformanceApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPuzzlePerformanceApi* UKrakenPuzzlePerformanceApi::GetDefaultObj()
{
	static class UKrakenPuzzlePerformanceApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPuzzlePerformanceApi*>(UKrakenPuzzlePerformanceApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_UpdatePlayerPuzzleStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUpdatePlayerPuzzleStatusParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_UpdatePlayerPuzzleStatus(struct FKrakenUpdatePlayerPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_UpdatePlayerPuzzleStatus");

	Params::UKrakenPuzzlePerformanceApi_K2_UpdatePlayerPuzzleStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_PlayerSolvedPuzzles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPlayerSolvedPuzzlesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSolvedPuzzles        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_PlayerSolvedPuzzles(struct FKrakenPlayerSolvedPuzzlesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSolvedPuzzles* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_PlayerSolvedPuzzles");

	Params::UKrakenPuzzlePerformanceApi_K2_PlayerSolvedPuzzles_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_PlayerPuzzleStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenPlayerPuzzleStatusParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerPuzzleStatusDataOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_PlayerPuzzleStatus(struct FKrakenPlayerPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPuzzleStatusData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_PlayerPuzzleStatus");

	Params::UKrakenPuzzlePerformanceApi_K2_PlayerPuzzleStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_MySolvedPuzzles
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSolvedPuzzles        OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_MySolvedPuzzles(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSolvedPuzzles* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_MySolvedPuzzles");

	Params::UKrakenPuzzlePerformanceApi_K2_MySolvedPuzzles_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_MyPuzzleStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenMyPuzzleStatusParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerPuzzleStatusDataOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_MyPuzzleStatus(struct FKrakenMyPuzzleStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerPuzzleStatusData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_MyPuzzleStatus");

	Params::UKrakenPuzzlePerformanceApi_K2_MyPuzzleStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_AllPuzzleStatusesForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAllPuzzleStatusesForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultiplePlayerPuzzleStatusesOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_AllPuzzleStatusesForPlayer(struct FKrakenAllPuzzleStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPuzzleStatuses* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_AllPuzzleStatusesForPlayer");

	Params::UKrakenPuzzlePerformanceApi_K2_AllPuzzleStatusesForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlePerformanceApi.K2_AllMyPuzzleStatuses
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultiplePlayerPuzzleStatusesOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlePerformanceApi::K2_AllMyPuzzleStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPuzzleStatuses* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlePerformanceApi", "K2_AllMyPuzzleStatuses");

	Params::UKrakenPuzzlePerformanceApi_K2_AllMyPuzzleStatuses_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenPuzzlesApi
// (None)

class UClass* UKrakenPuzzlesApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenPuzzlesApi");

	return Clss;
}


// KrakenPuzzlesApi Kraken.Default__KrakenPuzzlesApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenPuzzlesApi* UKrakenPuzzlesApi::GetDefaultObj()
{
	static class UKrakenPuzzlesApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenPuzzlesApi*>(UKrakenPuzzlesApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenPuzzlesApi.K2_UploadSerializedPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUploadSerializedPuzzleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_UploadSerializedPuzzle(struct FKrakenUploadSerializedPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_UploadSerializedPuzzle");

	Params::UKrakenPuzzlesApi_K2_UploadSerializedPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_UploadBinaryPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUploadBinaryPuzzleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_UploadBinaryPuzzle(struct FKrakenUploadBinaryPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_UploadBinaryPuzzle");

	Params::UKrakenPuzzlesApi_K2_UploadBinaryPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_SetZone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetZoneParams        InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_SetZone(struct FKrakenSetZoneParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_SetZone");

	Params::UKrakenPuzzlesApi_K2_SetZone_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_SetStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetStatusParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_SetStatus(struct FKrakenSetStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_SetStatus");

	Params::UKrakenPuzzlesApi_K2_SetStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_SetDifficulty
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetDifficultyParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_SetDifficulty(struct FKrakenSetDifficultyParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_SetDifficulty");

	Params::UKrakenPuzzlesApi_K2_SetDifficulty_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_SetActiveCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetActiveCacheParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_SetActiveCache(struct FKrakenSetActiveCacheParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_SetActiveCache");

	Params::UKrakenPuzzlesApi_K2_SetActiveCache_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_SetAccessLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetAccessLevelParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_SetAccessLevel(struct FKrakenSetAccessLevelParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_SetAccessLevel");

	Params::UKrakenPuzzlesApi_K2_SetAccessLevel_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_RemoveAccessLevel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRemoveAccessLevelParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_RemoveAccessLevel(struct FKrakenRemoveAccessLevelParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_RemoveAccessLevel");

	Params::UKrakenPuzzlesApi_K2_RemoveAccessLevel_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzleSpawnData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPuzzleSpawnDataParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleSpawnData      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetPuzzleSpawnData(struct FKrakenGetPuzzleSpawnDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpawnData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetPuzzleSpawnData");

	Params::UKrakenPuzzlesApi_K2_GetPuzzleSpawnData_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzleEditorData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultiplePuzzleEditorDataOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetPuzzleEditorData(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePuzzleEditorData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetPuzzleEditorData");

	Params::UKrakenPuzzlesApi_K2_GetPuzzleEditorData_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPuzzleParams      InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenFullPuzzleDatabaseEntryOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetPuzzle(struct FKrakenGetPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenFullPuzzleDatabaseEntry* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetPuzzle");

	Params::UKrakenPuzzlesApi_K2_GetPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetLivePuzzleSpawnData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetLivePuzzleSpawnDataParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultiplePuzzleSpawnDataOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetLivePuzzleSpawnData(struct FKrakenGetLivePuzzleSpawnDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePuzzleSpawnData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetLivePuzzleSpawnData");

	Params::UKrakenPuzzlesApi_K2_GetLivePuzzleSpawnData_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetKrakenIdFromLocalId
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetKrakenIdFromLocalIdParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleSpec           OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetKrakenIdFromLocalId(struct FKrakenGetKrakenIdFromLocalIdParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetKrakenIdFromLocalId");

	Params::UKrakenPuzzlesApi_K2_GetKrakenIdFromLocalId_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_GetAccessLevelDescriptions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAccessLevelDescriptionsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_GetAccessLevelDescriptions(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAccessLevelDescriptions* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_GetAccessLevelDescriptions");

	Params::UKrakenPuzzlesApi_K2_GetAccessLevelDescriptions_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_CreateSerializedPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreateSerializedPuzzleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleSpec           OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_CreateSerializedPuzzle(struct FKrakenCreateSerializedPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_CreateSerializedPuzzle");

	Params::UKrakenPuzzlesApi_K2_CreateSerializedPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_CreatePuzzleDatabaseCache
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreatePuzzleDatabaseCacheParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleCacheInfo      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_CreatePuzzleDatabaseCache(struct FKrakenCreatePuzzleDatabaseCacheParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleCacheInfo* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_CreatePuzzleDatabaseCache");

	Params::UKrakenPuzzlesApi_K2_CreatePuzzleDatabaseCache_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_CreateBlankPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreateBlankPuzzleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleSpec           OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_CreateBlankPuzzle(struct FKrakenCreateBlankPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_CreateBlankPuzzle");

	Params::UKrakenPuzzlesApi_K2_CreateBlankPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_CreateBinaryPuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCreateBinaryPuzzleParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPuzzleSpec           OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_CreateBinaryPuzzle(struct FKrakenCreateBinaryPuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPuzzleSpec* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_CreateBinaryPuzzle");

	Params::UKrakenPuzzlesApi_K2_CreateBinaryPuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenPuzzlesApi.K2_BatchSetNonGridPuzzleAccessLevels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenBatchSetNonGridPuzzleAccessLevelsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_BatchSetNonGridPuzzleAccessLevels(struct FKrakenBatchSetNonGridPuzzleAccessLevelsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_BatchSetNonGridPuzzleAccessLevels");

	Params::UKrakenPuzzlesApi_K2_BatchSetNonGridPuzzleAccessLevels_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenPuzzlesApi.K2_BatchSetGridPuzzleAccessLevels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenBatchSetGridPuzzleAccessLevelsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenPuzzlesApi::K2_BatchSetGridPuzzleAccessLevels(struct FKrakenBatchSetGridPuzzleAccessLevelsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenPuzzlesApi", "K2_BatchSetGridPuzzleAccessLevels");

	Params::UKrakenPuzzlesApi_K2_BatchSetGridPuzzleAccessLevels_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenRealTimeMessagingApi
// (None)

class UClass* UKrakenRealTimeMessagingApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenRealTimeMessagingApi");

	return Clss;
}


// KrakenRealTimeMessagingApi Kraken.Default__KrakenRealTimeMessagingApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenRealTimeMessagingApi* UKrakenRealTimeMessagingApi::GetDefaultObj()
{
	static class UKrakenRealTimeMessagingApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenRealTimeMessagingApi*>(UKrakenRealTimeMessagingApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingRebalanceUser
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenRealTimeMessagingApi::K2_RealTimeMessagingRebalanceUser(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenRealTimeMessagingApi", "K2_RealTimeMessagingRebalanceUser");

	Params::UKrakenRealTimeMessagingApi_K2_RealTimeMessagingRebalanceUser_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingRebalanceInstances
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenRealTimeMessagingRebalanceInstancesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenRealTimeMessagingApi::K2_RealTimeMessagingRebalanceInstances(struct FKrakenRealTimeMessagingRebalanceInstancesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenRealTimeMessagingApi", "K2_RealTimeMessagingRebalanceInstances");

	Params::UKrakenRealTimeMessagingApi_K2_RealTimeMessagingRebalanceInstances_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingGetUrl
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRtmGetUrl            OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenRealTimeMessagingApi::K2_RealTimeMessagingGetUrl(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRtmGetUrl* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenRealTimeMessagingApi", "K2_RealTimeMessagingGetUrl");

	Params::UKrakenRealTimeMessagingApi_K2_RealTimeMessagingGetUrl_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenRealTimeMessagingApi.K2_RealTimeMessagingGetMetrics
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenRealTimeMessagingApi::K2_RealTimeMessagingGetMetrics(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenRealTimeMessagingApi", "K2_RealTimeMessagingGetMetrics");

	Params::UKrakenRealTimeMessagingApi_K2_RealTimeMessagingGetMetrics_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenSdk
// (None)

class UClass* UKrakenSdk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenSdk");

	return Clss;
}


// KrakenSdk Kraken.Default__KrakenSdk
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenSdk* UKrakenSdk::GetDefaultObj()
{
	static class UKrakenSdk* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenSdk*>(UKrakenSdk::StaticClass()->DefaultObject);

	return Default;
}


// Class Kraken.KrakenSophiaAnalyticsApi
// (None)

class UClass* UKrakenSophiaAnalyticsApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenSophiaAnalyticsApi");

	return Clss;
}


// KrakenSophiaAnalyticsApi Kraken.Default__KrakenSophiaAnalyticsApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenSophiaAnalyticsApi* UKrakenSophiaAnalyticsApi::GetDefaultObj()
{
	static class UKrakenSophiaAnalyticsApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenSophiaAnalyticsApi*>(UKrakenSophiaAnalyticsApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenSophiaAnalyticsApi.K2_SendAnalyticsEntitlements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaAnalyticsApi::K2_SendAnalyticsEntitlements(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaAnalyticsApi", "K2_SendAnalyticsEntitlements");

	Params::UKrakenSophiaAnalyticsApi_K2_SendAnalyticsEntitlements_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenSophiaGameplayApi
// (None)

class UClass* UKrakenSophiaGameplayApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenSophiaGameplayApi");

	return Clss;
}


// KrakenSophiaGameplayApi Kraken.Default__KrakenSophiaGameplayApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenSophiaGameplayApi* UKrakenSophiaGameplayApi::GetDefaultObj()
{
	static class UKrakenSophiaGameplayApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenSophiaGameplayApi*>(UKrakenSophiaGameplayApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenSophiaGameplayApi.K2_UpdateQuestSate
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUpdateQuestSateParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_UpdateQuestSate(struct FKrakenUpdateQuestSateParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_UpdateQuestSate");

	Params::UKrakenSophiaGameplayApi_K2_UpdateQuestSate_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_UnlockProgressionRewardsArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUnlockProgressionRewardsArrayParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_UnlockProgressionRewardsArray(struct FKrakenUnlockProgressionRewardsArrayParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_UnlockProgressionRewardsArray");

	Params::UKrakenSophiaGameplayApi_K2_UnlockProgressionRewardsArray_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_UnlockProgressionRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenUnlockProgressionRewardsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_UnlockProgressionRewards(struct FKrakenUnlockProgressionRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_UnlockProgressionRewards");

	Params::UKrakenSophiaGameplayApi_K2_UnlockProgressionRewards_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_SolvePuzzle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSolvePuzzleParams    InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_SolvePuzzle(struct FKrakenSolvePuzzleParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_SolvePuzzle");

	Params::UKrakenSophiaGameplayApi_K2_SolvePuzzle_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_SetServerVerifiedStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetServerVerifiedStatusParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_SetServerVerifiedStatus(struct FKrakenSetServerVerifiedStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_SetServerVerifiedStatus");

	Params::UKrakenSophiaGameplayApi_K2_SetServerVerifiedStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_SetQuestStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetQuestStatusParams InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_SetQuestStatus(struct FKrakenSetQuestStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_SetQuestStatus");

	Params::UKrakenSophiaGameplayApi_K2_SetQuestStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_SetCustomization
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSetCustomizationParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_SetCustomization(struct FKrakenSetCustomizationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_SetCustomization");

	Params::UKrakenSophiaGameplayApi_K2_SetCustomization_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetUpgradesForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetUpgradesForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerUpgrades       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetUpgradesForPlayer(struct FKrakenGetUpgradesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerUpgrades* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetUpgradesForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetUpgradesForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetUnlocksForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetUnlocksForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUnlocksInCategory    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetUnlocksForPlayer(struct FKrakenGetUnlocksForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnlocksInCategory* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetUnlocksForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetUnlocksForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetServerVerifiedStatusForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetServerVerifiedStatusForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerServerVerifiedStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetServerVerifiedStatusForPlayer(struct FKrakenGetServerVerifiedStatusForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerServerVerifiedStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetServerVerifiedStatusForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetServerVerifiedStatusForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetRewardedProgressLevelsForPlayerArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetRewardedProgressLevelsForPlayerArrayParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRewardedProgressLevelsArrayOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetRewardedProgressLevelsForPlayerArray(struct FKrakenGetRewardedProgressLevelsForPlayerArrayParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevelsArray* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetRewardedProgressLevelsForPlayerArray");

	Params::UKrakenSophiaGameplayApi_K2_GetRewardedProgressLevelsForPlayerArray_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetRewardedProgressLevelsForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetRewardedProgressLevelsForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRewardedProgressLevelsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetRewardedProgressLevelsForPlayer(struct FKrakenGetRewardedProgressLevelsForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevels* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetRewardedProgressLevelsForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetRewardedProgressLevelsForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetQuestStatusForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetQuestStatusForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerQuestStatus    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetQuestStatusForPlayer(struct FKrakenGetQuestStatusForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerQuestStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetQuestStatusForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetQuestStatusForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetPartyMemberIdsForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetPartyMemberIdsForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyMemberIds       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetPartyMemberIdsForPlayer(struct FKrakenGetPartyMemberIdsForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyMemberIds* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetPartyMemberIdsForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetPartyMemberIdsForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetPartyMemberIds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPartyMemberIds       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetPartyMemberIds(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPartyMemberIds* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetPartyMemberIds");

	Params::UKrakenSophiaGameplayApi_K2_GetPartyMemberIds_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyUpgrades
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerUpgrades       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyUpgrades(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerUpgrades* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyUpgrades");

	Params::UKrakenSophiaGameplayApi_K2_GetMyUpgrades_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyUnlocks
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMyUnlocksParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUnlocksInCategory    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyUnlocks(struct FKrakenGetMyUnlocksParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUnlocksInCategory* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyUnlocks");

	Params::UKrakenSophiaGameplayApi_K2_GetMyUnlocks_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyServerVerifiedStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMyServerVerifiedStatusParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerServerVerifiedStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyServerVerifiedStatus(struct FKrakenGetMyServerVerifiedStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerServerVerifiedStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyServerVerifiedStatus");

	Params::UKrakenSophiaGameplayApi_K2_GetMyServerVerifiedStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyRewardedProgressLevelsArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRewardedProgressLevelsArrayOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyRewardedProgressLevelsArray(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevelsArray* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyRewardedProgressLevelsArray");

	Params::UKrakenSophiaGameplayApi_K2_GetMyRewardedProgressLevelsArray_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyRewardedProgressLevels
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenRewardedProgressLevelsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyRewardedProgressLevels(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenRewardedProgressLevels* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyRewardedProgressLevels");

	Params::UKrakenSophiaGameplayApi_K2_GetMyRewardedProgressLevels_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetMyQuestStatus
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetMyQuestStatusParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerQuestStatus    OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetMyQuestStatus(struct FKrakenGetMyQuestStatusParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerQuestStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetMyQuestStatus");

	Params::UKrakenSophiaGameplayApi_K2_GetMyQuestStatus_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetIdsForPlayers
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetIdsForPlayersParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenMultiplePlayerPlatformIdsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetIdsForPlayers(struct FKrakenGetIdsForPlayersParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenMultiplePlayerPlatformIds* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetIdsForPlayers");

	Params::UKrakenSophiaGameplayApi_K2_GetIdsForPlayers_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetCustomization
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenCustomizationConfigurationOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetCustomization(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenCustomizationConfiguration* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetCustomization");

	Params::UKrakenSophiaGameplayApi_K2_GetCustomization_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetBasicPlayerData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetBasicPlayerDataParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBasicPlayerData      OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetBasicPlayerData(struct FKrakenGetBasicPlayerDataParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBasicPlayerData* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetBasicPlayerData");

	Params::UKrakenSophiaGameplayApi_K2_GetBasicPlayerData_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllServerVerifiedStatusesForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAllServerVerifiedStatusesForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerMultipleServerVerifiedStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetAllServerVerifiedStatusesForPlayer(struct FKrakenGetAllServerVerifiedStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleServerVerifiedStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetAllServerVerifiedStatusesForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetAllServerVerifiedStatusesForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllQuestStatusesForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAllQuestStatusesForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerMultipleQuestStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetAllQuestStatusesForPlayer(struct FKrakenGetAllQuestStatusesForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleQuestStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetAllQuestStatusesForPlayer");

	Params::UKrakenSophiaGameplayApi_K2_GetAllQuestStatusesForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllMyServerVerifiedStatuses
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerMultipleServerVerifiedStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetAllMyServerVerifiedStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleServerVerifiedStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetAllMyServerVerifiedStatuses");

	Params::UKrakenSophiaGameplayApi_K2_GetAllMyServerVerifiedStatuses_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_GetAllMyQuestStatuses
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenPlayerMultipleQuestStatusOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_GetAllMyQuestStatuses(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenPlayerMultipleQuestStatus* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_GetAllMyQuestStatuses");

	Params::UKrakenSophiaGameplayApi_K2_GetAllMyQuestStatuses_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_CheatBasicRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenCheatBasicRewardsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_CheatBasicRewards(struct FKrakenCheatBasicRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_CheatBasicRewards");

	Params::UKrakenSophiaGameplayApi_K2_CheatBasicRewards_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddUpgrade
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddUpgradeParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenUpgradeBuyResults    OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddUpgrade(struct FKrakenAddUpgradeParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenUpgradeBuyResults* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddUpgrade");

	Params::UKrakenSophiaGameplayApi_K2_AddUpgrade_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddUnlockable
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddUnlockableParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddUnlockable(struct FKrakenAddUnlockableParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddUnlockable");

	Params::UKrakenSophiaGameplayApi_K2_AddUnlockable_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddProgressRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddProgressRewardsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddProgressRewards(struct FKrakenAddProgressRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddProgressRewards");

	Params::UKrakenSophiaGameplayApi_K2_AddProgressRewards_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddMultipleUnlockables
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddMultipleUnlockablesParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddMultipleUnlockables(struct FKrakenAddMultipleUnlockablesParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddMultipleUnlockables");

	Params::UKrakenSophiaGameplayApi_K2_AddMultipleUnlockables_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddItem
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddItemParams        InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddItem(struct FKrakenAddItemParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddItem");

	Params::UKrakenSophiaGameplayApi_K2_AddItem_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenSophiaGameplayApi.K2_AddBasicRewards
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenAddBasicRewardsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenSophiaGameplayApi::K2_AddBasicRewards(struct FKrakenAddBasicRewardsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaGameplayApi", "K2_AddBasicRewards");

	Params::UKrakenSophiaGameplayApi_K2_AddBasicRewards_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Class Kraken.KrakenSophiaServerApi
// (None)

class UClass* UKrakenSophiaServerApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenSophiaServerApi");

	return Clss;
}


// KrakenSophiaServerApi Kraken.Default__KrakenSophiaServerApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenSophiaServerApi* UKrakenSophiaServerApi::GetDefaultObj()
{
	static class UKrakenSophiaServerApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenSophiaServerApi*>(UKrakenSophiaServerApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenSophiaServerApi.K2_GetInventoryForPlayer
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetInventoryForPlayerParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenInventoryForPlayer   OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenSophiaServerApi::K2_GetInventoryForPlayer(struct FKrakenGetInventoryForPlayerParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenInventoryForPlayer* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenSophiaServerApi", "K2_GetInventoryForPlayer");

	Params::UKrakenSophiaServerApi_K2_GetInventoryForPlayer_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenUtilsApi
// (None)

class UClass* UKrakenUtilsApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenUtilsApi");

	return Clss;
}


// KrakenUtilsApi Kraken.Default__KrakenUtilsApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenUtilsApi* UKrakenUtilsApi::GetDefaultObj()
{
	static class UKrakenUtilsApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenUtilsApi*>(UKrakenUtilsApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenUtilsApi.K2_SubscriptionAmazonValidation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenSubscriptionAmazonValidationParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenSubscriptionValidationOutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_SubscriptionAmazonValidation(struct FKrakenSubscriptionAmazonValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenSubscriptionValidation* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_SubscriptionAmazonValidation");

	Params::UKrakenUtilsApi_K2_SubscriptionAmazonValidation_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_QueueMetrics
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_QueueMetrics(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_QueueMetrics");

	Params::UKrakenUtilsApi_K2_QueueMetrics_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_Now
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNowParams            InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenTime                 OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_Now(struct FKrakenNowParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenTime* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_Now");

	Params::UKrakenUtilsApi_K2_Now_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_NotificationSubscriptionValidation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNotificationSubscriptionValidationParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_NotificationSubscriptionValidation(struct FKrakenNotificationSubscriptionValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_NotificationSubscriptionValidation");

	Params::UKrakenUtilsApi_K2_NotificationSubscriptionValidation_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenUtilsApi.K2_NotificationSubscriptionEcho
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNotificationSubscriptionEchoParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_NotificationSubscriptionEcho(struct FKrakenNotificationSubscriptionEchoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_NotificationSubscriptionEcho");

	Params::UKrakenUtilsApi_K2_NotificationSubscriptionEcho_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenUtilsApi.K2_NotificationPaymentValidation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNotificationPaymentValidationParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_NotificationPaymentValidation(struct FKrakenNotificationPaymentValidationParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_NotificationPaymentValidation");

	Params::UKrakenUtilsApi_K2_NotificationPaymentValidation_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenUtilsApi.K2_NotificationPaymentEcho
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenNotificationPaymentEchoParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_NotificationPaymentEcho(struct FKrakenNotificationPaymentEchoParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_NotificationPaymentEcho");

	Params::UKrakenUtilsApi_K2_NotificationPaymentEcho_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

}


// Function Kraken.KrakenUtilsApi.K2_GetLatestSupportedVersion
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetLatestSupportedVersionParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenLatestContentVersion OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_GetLatestSupportedVersion(struct FKrakenGetLatestSupportedVersionParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenLatestContentVersion* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_GetLatestSupportedVersion");

	Params::UKrakenUtilsApi_K2_GetLatestSupportedVersion_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_GetAllAvailableVersions
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAllAvailableVersionsParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenAvailableContentVersionsOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_GetAllAvailableVersions(struct FKrakenGetAllAvailableVersionsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenAvailableContentVersions* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_GetAllAvailableVersions");

	Params::UKrakenUtilsApi_K2_GetAllAvailableVersions_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_FacebookSubscriptionObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFacebookSubscriptionObjectParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_FacebookSubscriptionObject(struct FKrakenFacebookSubscriptionObjectParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_FacebookSubscriptionObject");

	Params::UKrakenUtilsApi_K2_FacebookSubscriptionObject_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_FacebookPaymentObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenFacebookPaymentObjectParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutResult                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_FacebookPaymentObject(struct FKrakenFacebookPaymentObjectParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, class FString* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_FacebookPaymentObject");

	Params::UKrakenUtilsApi_K2_FacebookPaymentObject_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenUtilsApi.K2_ActiveSubscriptionFacebook
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FJsonObjectWrapper          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenUtilsApi::K2_ActiveSubscriptionFacebook(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FJsonObjectWrapper* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenUtilsApi", "K2_ActiveSubscriptionFacebook");

	Params::UKrakenUtilsApi_K2_ActiveSubscriptionFacebook_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Class Kraken.KrakenWalletApi
// (None)

class UClass* UKrakenWalletApi::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KrakenWalletApi");

	return Clss;
}


// KrakenWalletApi Kraken.Default__KrakenWalletApi
// (Public, ClassDefaultObject, ArchetypeObject)

class UKrakenWalletApi* UKrakenWalletApi::GetDefaultObj()
{
	static class UKrakenWalletApi* Default = nullptr;

	if (!Default)
		Default = static_cast<UKrakenWalletApi*>(UKrakenWalletApi::StaticClass()->DefaultObject);

	return Default;
}


// Function Kraken.KrakenWalletApi.K2_WithdrawFunds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenWithdrawFundsParams  InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenBalance              OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_WithdrawFunds(struct FKrakenWithdrawFundsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenBalance* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_WithdrawFunds");

	Params::UKrakenWalletApi_K2_WithdrawFunds_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_GetNextAmountToExpire
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetNextAmountToExpireParamsInParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenWalletCurrencyToExpireResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_GetNextAmountToExpire(struct FKrakenGetNextAmountToExpireParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletCurrencyToExpireResponse* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_GetNextAmountToExpire");

	Params::UKrakenWalletApi_K2_GetNextAmountToExpire_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_GetActiveAccounts
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenWalletAccounts       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_GetActiveAccounts(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletAccounts* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_GetActiveAccounts");

	Params::UKrakenWalletApi_K2_GetActiveAccounts_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_GetAccount
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenGetAccountParams     InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenWalletEntry          OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_GetAccount(struct FKrakenGetAccountParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletEntry* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_GetAccount");

	Params::UKrakenWalletApi_K2_GetAccount_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_ExpireCurrencies
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenWalletAccounts       OutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_ExpireCurrencies(const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletAccounts* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_ExpireCurrencies");

	Params::UKrakenWalletApi_K2_ExpireCurrencies_Params Parms{};

	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_ConvertFundsV2
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenConvertFundsV2Params InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenWalletConvertFundsV2ResponseOutResult                                                        (Parm, OutParm, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_ConvertFundsV2(struct FKrakenConvertFundsV2Params& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenWalletConvertFundsV2Response* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_ConvertFundsV2");

	Params::UKrakenWalletApi_K2_ConvertFundsV2_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}


// Function Kraken.KrakenWalletApi.K2_ConvertFunds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FKrakenConvertFundsParams   InParams                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           InLatentActionInfo                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOnlineStatus               OutOnlineStatus                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKrakenConversionBalance    OutResult                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UKrakenWalletApi::K2_ConvertFunds(struct FKrakenConvertFundsParams& InParams, const struct FLatentActionInfo& InLatentActionInfo, struct FOnlineStatus* OutOnlineStatus, struct FKrakenConversionBalance* OutResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KrakenWalletApi", "K2_ConvertFunds");

	Params::UKrakenWalletApi_K2_ConvertFunds_Params Parms{};

	Parms.InParams = InParams;
	Parms.InLatentActionInfo = InLatentActionInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutOnlineStatus != nullptr)
		*OutOnlineStatus = std::move(Parms.OutOnlineStatus);

	if (OutResult != nullptr)
		*OutResult = std::move(Parms.OutResult);

}

}


