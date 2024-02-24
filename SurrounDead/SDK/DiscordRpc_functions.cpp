#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DiscordRpc.DiscordRpc
// (None)

class UClass* UDiscordRpc::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DiscordRpc");

	return Clss;
}


// DiscordRpc DiscordRpc.Default__DiscordRpc
// (Public, ClassDefaultObject, ArchetypeObject)

class UDiscordRpc* UDiscordRpc::GetDefaultObj()
{
	static class UDiscordRpc* Default = nullptr;

	if (!Default)
		Default = static_cast<UDiscordRpc*>(UDiscordRpc::StaticClass()->DefaultObject);

	return Default;
}


// Function DiscordRpc.DiscordRpc.UpdatePresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDiscordRpc::UpdatePresence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "UpdatePresence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscordRpc.DiscordRpc.Shutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDiscordRpc::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "Shutdown");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscordRpc.DiscordRpc.RunCallbacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDiscordRpc::RunCallbacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "RunCallbacks");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function DiscordRpc.DiscordRpc.Respond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      UserId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Reply                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordRpc::Respond(const class FString& UserId, int32 Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "Respond");

	Params::UDiscordRpc_Respond_Params Parms{};

	Parms.UserId = UserId;
	Parms.Reply = Reply;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscordRpc.DiscordRpc.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ApplicationId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoRegister                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OptionalSteamId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordRpc::Initialize(const class FString& ApplicationId, bool AutoRegister, const class FString& OptionalSteamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "Initialize");

	Params::UDiscordRpc_Initialize_Params Parms{};

	Parms.ApplicationId = ApplicationId;
	Parms.AutoRegister = AutoRegister;
	Parms.OptionalSteamId = OptionalSteamId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DiscordRpc.DiscordRpc.GetStartTimeStamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UDiscordRpc::GetStartTimeStamp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "GetStartTimeStamp");

	Params::UDiscordRpc_GetStartTimeStamp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DiscordRpc.DiscordRpc.ClearPresence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UDiscordRpc::ClearPresence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DiscordRpc", "ClearPresence");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


