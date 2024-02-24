#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MobileAssetPacks.AssetPacksSubsystem
// (None)

class UClass* UAssetPacksSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AssetPacksSubsystem");

	return Clss;
}


// AssetPacksSubsystem MobileAssetPacks.Default__AssetPacksSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAssetPacksSubsystem* UAssetPacksSubsystem::GetDefaultObj()
{
	static class UAssetPacksSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssetPacksSubsystem*>(UAssetPacksSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function MobileAssetPacks.AssetPacksSubsystem.TryResumeNonWifiDownloads
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAssetPacksSubsystem::TryResumeNonWifiDownloads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetPacksSubsystem", "TryResumeNonWifiDownloads");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MobileAssetPacks.AssetPacksSubsystem.GetAllAssetPacks
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UAssetPacksSubsystem::GetAllAssetPacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetPacksSubsystem", "GetAllAssetPacks");

	Params::UAssetPacksSubsystem_GetAllAssetPacks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MobileAssetPacks.AssetPacksSubsystem.FetchStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPack                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetPacksSubsystem::FetchStatus(const class FString& AssetPack, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetPacksSubsystem", "FetchStatus");

	Params::UAssetPacksSubsystem_FetchStatus_Params Parms{};

	Parms.AssetPack = AssetPack;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MobileAssetPacks.AssetPacksSubsystem.DownloadPack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetPack                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAssetPacksSubsystem::DownloadPack(const class FString& AssetPack, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetPacksSubsystem", "DownloadPack");

	Params::UAssetPacksSubsystem_DownloadPack_Params Parms{};

	Parms.AssetPack = AssetPack;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MobileAssetPacks.AssetPacksSubsystem.CancelAllDownloads
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAssetPacksSubsystem::CancelAllDownloads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AssetPacksSubsystem", "CancelAllDownloads");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MobileAssetPacks.MobileAssetPacksSettings
// (None)

class UClass* UMobileAssetPacksSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MobileAssetPacksSettings");

	return Clss;
}


// MobileAssetPacksSettings MobileAssetPacks.Default__MobileAssetPacksSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UMobileAssetPacksSettings* UMobileAssetPacksSettings::GetDefaultObj()
{
	static class UMobileAssetPacksSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobileAssetPacksSettings*>(UMobileAssetPacksSettings::StaticClass()->DefaultObject);

	return Default;
}

}


