#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class DiscordRpc.DiscordRpc
class UDiscordRpc : public UObject
{
public:
	bool                                         IsConnected;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnConnected;                                       // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDisconnected;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnErrored;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoin;                                            // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpectate;                                        // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinRequest;                                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDiscordRichPresence                  RichPresence;                                      // 0x90(0xC0)(BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDiscordRpc* GetDefaultObj();

	void UpdatePresence();
	void Shutdown();
	void RunCallbacks();
	void Respond(const class FString& UserId, int32 Reply);
	void Initialize(const class FString& ApplicationId, bool AutoRegister, const class FString& OptionalSteamId);
	int64 GetStartTimeStamp();
	void ClearPresence();
};

}


