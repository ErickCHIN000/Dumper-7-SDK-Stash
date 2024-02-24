#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxTwitch.GbxTwitchSettings
// (None)

class UClass* UGbxTwitchSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxTwitchSettings");

	return Clss;
}


// GbxTwitchSettings GbxTwitch.Default__GbxTwitchSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxTwitchSettings* UGbxTwitchSettings::GetDefaultObj()
{
	static class UGbxTwitchSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxTwitchSettings*>(UGbxTwitchSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxTwitch.TwitchAPI
// (None)

class UClass* UTwitchAPI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwitchAPI");

	return Clss;
}


// TwitchAPI GbxTwitch.Default__TwitchAPI
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwitchAPI* UTwitchAPI::GetDefaultObj()
{
	static class UTwitchAPI* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwitchAPI*>(UTwitchAPI::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTwitch.TwitchAPI.RequestTwitchStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              MaxNbStreams                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      GameName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UserLogin                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Language                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 StreamInfoReceivedDelegate                                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UTwitchAPI::RequestTwitchStreams(int32 MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, UDelegateProperty_ StreamInfoReceivedDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchAPI", "RequestTwitchStreams");

	Params::UTwitchAPI_RequestTwitchStreams_Params Parms{};

	Parms.MaxNbStreams = MaxNbStreams;
	Parms.GameName = GameName;
	Parms.UserLogin = UserLogin;
	Parms.Language = Language;
	Parms.StreamInfoReceivedDelegate = StreamInfoReceivedDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxTwitch.TwitchIRCClient
// (None)

class UClass* UTwitchIRCClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwitchIRCClient");

	return Clss;
}


// TwitchIRCClient GbxTwitch.Default__TwitchIRCClient
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwitchIRCClient* UTwitchIRCClient::GetDefaultObj()
{
	static class UTwitchIRCClient* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwitchIRCClient*>(UTwitchIRCClient::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxTwitch.TwitchIRCClient.SendChatMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwitchIRCClient::SendChatMessage(const class FString& ChannelName, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchIRCClient", "SendChatMessage");

	Params::UTwitchIRCClient_SendChatMessage_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.Message = Message;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTwitch.TwitchIRCClient.QuitChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwitchIRCClient::QuitChannel(const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchIRCClient", "QuitChannel");

	Params::UTwitchIRCClient_QuitChannel_Params Parms{};

	Parms.ChannelName = ChannelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTwitch.TwitchIRCClient.JoinChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// UDelegateProperty_                 OnMessageReceived                                                (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UTwitchIRCClient::JoinChannel(const class FString& ChannelName, UDelegateProperty_ OnMessageReceived)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchIRCClient", "JoinChannel");

	Params::UTwitchIRCClient_JoinChannel_Params Parms{};

	Parms.ChannelName = ChannelName;
	Parms.OnMessageReceived = OnMessageReceived;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxTwitch.TwitchIRCClient.InitChatBot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UTwitchIRCClient::InitChatBot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchIRCClient", "InitChatBot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxTwitch.TwitchIRCClient.ExitChatBot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UTwitchIRCClient::ExitChatBot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwitchIRCClient", "ExitChatBot");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


