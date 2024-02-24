#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemEOS.AchievementsUnlockProxy
// (None)

class UClass* UAchievementsUnlockProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AchievementsUnlockProxy");

	return Clss;
}


// AchievementsUnlockProxy OnlineSubsystemEOS.Default__AchievementsUnlockProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAchievementsUnlockProxy* UAchievementsUnlockProxy::GetDefaultObj()
{
	static class UAchievementsUnlockProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAchievementsUnlockProxy*>(UAchievementsUnlockProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.AchievementsUnlockProxy.UnlockAchievements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              AchievementIds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UAchievementsUnlockProxy*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAchievementsUnlockProxy* UAchievementsUnlockProxy::UnlockAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<class FString>& AchievementIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AchievementsUnlockProxy", "UnlockAchievements");

	Params::UAchievementsUnlockProxy_UnlockAchievements_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementIds = AchievementIds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.EOSNetConnection
// (None)

class UClass* UEOSNetConnection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetConnection");

	return Clss;
}


// EOSNetConnection OnlineSubsystemEOS.Default__EOSNetConnection
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetConnection* UEOSNetConnection::GetDefaultObj()
{
	static class UEOSNetConnection* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetConnection*>(UEOSNetConnection::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.EOSNetDriver
// (None)

class UClass* UEOSNetDriver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EOSNetDriver");

	return Clss;
}


// EOSNetDriver OnlineSubsystemEOS.Default__EOSNetDriver
// (Public, ClassDefaultObject, ArchetypeObject)

class UEOSNetDriver* UEOSNetDriver::GetDefaultObj()
{
	static class UEOSNetDriver* Default = nullptr;

	if (!Default)
		Default = static_cast<UEOSNetDriver*>(UEOSNetDriver::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.GetStatsCallbackProxy
// (None)

class UClass* UGetStatsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GetStatsCallbackProxy");

	return Clss;
}


// GetStatsCallbackProxy OnlineSubsystemEOS.Default__GetStatsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGetStatsCallbackProxy* UGetStatsCallbackProxy::GetDefaultObj()
{
	static class UGetStatsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UGetStatsCallbackProxy*>(UGetStatsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.GetStatsCallbackProxy.GetStats
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProductUserId              ProductUserId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              StatsName                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UGetStatsCallbackProxy*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGetStatsCallbackProxy* UGetStatsCallbackProxy::GetStats(struct FProductUserId& ProductUserId, TArray<class FString>& StatsName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GetStatsCallbackProxy", "GetStats");

	Params::UGetStatsCallbackProxy_GetStats_Params Parms{};

	Parms.ProductUserId = ProductUserId;
	Parms.StatsName = StatsName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy
// (None)

class UClass* ULeaderboardQueryDefinitionProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardQueryDefinitionProxy");

	return Clss;
}


// LeaderboardQueryDefinitionProxy OnlineSubsystemEOS.Default__LeaderboardQueryDefinitionProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULeaderboardQueryDefinitionProxy* ULeaderboardQueryDefinitionProxy::GetDefaultObj()
{
	static class ULeaderboardQueryDefinitionProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardQueryDefinitionProxy*>(ULeaderboardQueryDefinitionProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy.QueryLeaderboardDefinitions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULeaderboardQueryDefinitionProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULeaderboardQueryDefinitionProxy* ULeaderboardQueryDefinitionProxy::QueryLeaderboardDefinitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardQueryDefinitionProxy", "QueryLeaderboardDefinitions");

	Params::ULeaderboardQueryDefinitionProxy_QueryLeaderboardDefinitions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy
// (None)

class UClass* ULeaderboardQueryRecordsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardQueryRecordsCallbackProxy");

	return Clss;
}


// LeaderboardQueryRecordsCallbackProxy OnlineSubsystemEOS.Default__LeaderboardQueryRecordsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULeaderboardQueryRecordsCallbackProxy* ULeaderboardQueryRecordsCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardQueryRecordsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardQueryRecordsCallbackProxy*>(ULeaderboardQueryRecordsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy.QueryLeaderboardRecords
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        LeaderboarId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryRecordsCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULeaderboardQueryRecordsCallbackProxy* ULeaderboardQueryRecordsCallbackProxy::QueryLeaderboardRecords(class FName LeaderboarId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardQueryRecordsCallbackProxy", "QueryLeaderboardRecords");

	Params::ULeaderboardQueryRecordsCallbackProxy_QueryLeaderboardRecords_Params Parms{};

	Parms.LeaderboarId = LeaderboarId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy
// (None)

class UClass* ULeaderboardQueryScoresCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardQueryScoresCallbackProxy");

	return Clss;
}


// LeaderboardQueryScoresCallbackProxy OnlineSubsystemEOS.Default__LeaderboardQueryScoresCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class ULeaderboardQueryScoresCallbackProxy* ULeaderboardQueryScoresCallbackProxy::GetDefaultObj()
{
	static class ULeaderboardQueryScoresCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardQueryScoresCallbackProxy*>(ULeaderboardQueryScoresCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy.QueryLeaderboardScore
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FProductUserId>      ProductUserIds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        LeaderboarId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULeaderboardQueryScoresCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULeaderboardQueryScoresCallbackProxy* ULeaderboardQueryScoresCallbackProxy::QueryLeaderboardScore(TArray<struct FProductUserId>& ProductUserIds, class FName LeaderboarId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardQueryScoresCallbackProxy", "QueryLeaderboardScore");

	Params::ULeaderboardQueryScoresCallbackProxy_QueryLeaderboardScore_Params Parms{};

	Parms.ProductUserIds = ProductUserIds;
	Parms.LeaderboarId = LeaderboarId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.OnlineSubsystemEOSConfig
// (None)

class UClass* UOnlineSubsystemEOSConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSubsystemEOSConfig");

	return Clss;
}


// OnlineSubsystemEOSConfig OnlineSubsystemEOS.Default__OnlineSubsystemEOSConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSubsystemEOSConfig* UOnlineSubsystemEOSConfig::GetDefaultObj()
{
	static class UOnlineSubsystemEOSConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSubsystemEOSConfig*>(UOnlineSubsystemEOSConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary
// (None)

class UClass* UOnlineSubsystemEOSFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnlineSubsystemEOSFunctionLibrary");

	return Clss;
}


// OnlineSubsystemEOSFunctionLibrary OnlineSubsystemEOS.Default__OnlineSubsystemEOSFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOnlineSubsystemEOSFunctionLibrary* UOnlineSubsystemEOSFunctionLibrary::GetDefaultObj()
{
	static class UOnlineSubsystemEOSFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnlineSubsystemEOSFunctionLibrary*>(UOnlineSubsystemEOSFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FProductUserId              ProductUserId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemEOSFunctionLibrary::ProductUserIdToString(struct FProductUserId& ProductUserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "ProductUserIdToString");

	Params::UOnlineSubsystemEOSFunctionLibrary_ProductUserIdToString_Params Parms{};

	Parms.ProductUserId = ProductUserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AccountId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FProductUserId              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FProductUserId UOnlineSubsystemEOSFunctionLibrary::ProductUserIdFromString(const class FString& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "ProductUserIdFromString");

	Params::UOnlineSubsystemEOSFunctionLibrary_ProductUserIdFromString_Params Parms{};

	Parms.AccountId = AccountId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.IsAuthorised
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemEOSFunctionLibrary::IsAuthorised()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "IsAuthorised");

	Params::UOnlineSubsystemEOSFunctionLibrary_IsAuthorised_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetProductUserId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FProductUserId              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FProductUserId UOnlineSubsystemEOSFunctionLibrary::GetProductUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "GetProductUserId");

	Params::UOnlineSubsystemEOSFunctionLibrary_GetProductUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FPlayerAchievementData>OutAchievements                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemEOSFunctionLibrary::GetCachedEOSAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, TArray<struct FPlayerAchievementData>* OutAchievements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "GetCachedEOSAchievements");

	Params::UOnlineSubsystemEOSFunctionLibrary_GetCachedEOSAchievements_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAchievements != nullptr)
		*OutAchievements = std::move(Parms.OutAchievements);

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievement
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AchievementId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlayerAchievementData      OutAchievement                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOnlineSubsystemEOSFunctionLibrary::GetCachedEOSAchievement(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& AchievementId, struct FPlayerAchievementData* OutAchievement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "GetCachedEOSAchievement");

	Params::UOnlineSubsystemEOSFunctionLibrary_GetCachedEOSAchievement_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerController = PlayerController;
	Parms.AchievementId = AchievementId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAchievement != nullptr)
		*OutAchievement = std::move(Parms.OutAchievement);

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAchivementsDefinition
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAchievementsDef>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAchievementsDef> UOnlineSubsystemEOSFunctionLibrary::GetAchivementsDefinition(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "GetAchivementsDefinition");

	Params::UOnlineSubsystemEOSFunctionLibrary_GetAchivementsDefinition_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAccountId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAccountId                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAccountId UOnlineSubsystemEOSFunctionLibrary::GetAccountId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "GetAccountId");

	Params::UOnlineSubsystemEOSFunctionLibrary_GetAccountId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAccountId                  AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UOnlineSubsystemEOSFunctionLibrary::EpicAccountIdToString(struct FAccountId& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "EpicAccountIdToString");

	Params::UOnlineSubsystemEOSFunctionLibrary_EpicAccountIdToString_Params Parms{};

	Parms.AccountId = AccountId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdFromString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      AccountId                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAccountId                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAccountId UOnlineSubsystemEOSFunctionLibrary::EpicAccountIdFromString(const class FString& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnlineSubsystemEOSFunctionLibrary", "EpicAccountIdFromString");

	Params::UOnlineSubsystemEOSFunctionLibrary_EpicAccountIdFromString_Params Parms{};

	Parms.AccountId = AccountId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemEOS.UpdateStatsCallbackProxy
// (None)

class UClass* UUpdateStatsCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpdateStatsCallbackProxy");

	return Clss;
}


// UpdateStatsCallbackProxy OnlineSubsystemEOS.Default__UpdateStatsCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UUpdateStatsCallbackProxy* UUpdateStatsCallbackProxy::GetDefaultObj()
{
	static class UUpdateStatsCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UUpdateStatsCallbackProxy*>(UUpdateStatsCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemEOS.UpdateStatsCallbackProxy.UpdateStats
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProductUserId              ProductUserId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FStatData>           Stats                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UUpdateStatsCallbackProxy*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUpdateStatsCallbackProxy* UUpdateStatsCallbackProxy::UpdateStats(struct FProductUserId& ProductUserId, TArray<struct FStatData>& Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpdateStatsCallbackProxy", "UpdateStats");

	Params::UUpdateStatsCallbackProxy_UpdateStats_Params Parms{};

	Parms.ProductUserId = ProductUserId;
	Parms.Stats = Stats;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


