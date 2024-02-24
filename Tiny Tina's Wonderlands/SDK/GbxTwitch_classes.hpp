#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class GbxTwitch.GbxTwitchSettings
class UGbxTwitchSettings : public UObject
{
public:
	class FString                                AppClientID;                                       // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppClientID_Stable;                                // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppClientID_Cert;                                  // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExtensionID;                                       // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameID;                                            // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxTwitchSettings* GetDefaultObj();

};

// 0x110 (0x138 - 0x28)
// Class GbxTwitch.TwitchAPI
class UTwitchAPI : public UObject
{
public:
	uint8                                        Pad_2A6[0x110];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwitchAPI* GetDefaultObj();

	void RequestTwitchStreams(int32 MaxNbStreams, const class FString& GameName, const class FString& UserLogin, const class FString& Language, UDelegateProperty_ StreamInfoReceivedDelegate);
};

// 0x70 (0x98 - 0x28)
// Class GbxTwitch.TwitchIRCClient
class UTwitchIRCClient : public UObject
{
public:
	uint8                                        Pad_2E3[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTwitchChannel>                PendingChannels;                                   // 0x58(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTwitchChannel>                ConnectedChannels;                                 // 0x68(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        IRCCommandsMessages;                               // 0x78(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2E6[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTwitchIRCClient* GetDefaultObj();

	void SendChatMessage(const class FString& ChannelName, const class FString& Message);
	void QuitChannel(const class FString& ChannelName);
	void JoinChannel(const class FString& ChannelName, UDelegateProperty_ OnMessageReceived);
	void InitChatBot();
	void ExitChatBot();
};

}


