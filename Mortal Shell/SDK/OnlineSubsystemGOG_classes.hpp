#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA8 - 0x30)
// Class OnlineSubsystemGOG.GOGLoginCallbackProxy
class UGOGLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_131[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGOGLoginCallbackProxy* GetDefaultObj();

	class UGOGLoginCallbackProxy* Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& AuthType, const class FString& UserID, const class FString& UserToken);
};

// 0x28 (0x1A58 - 0x1A30)
// Class OnlineSubsystemGOG.NetConnectionGOG
class UNetConnectionGOG : public UNetConnection
{
public:
	uint8                                        Pad_13B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetConnectionGOG* GetDefaultObj();

};

// 0x1018 (0x1760 - 0x748)
// Class OnlineSubsystemGOG.NetDriverGOG
class UNetDriverGOG : public UNetDriver
{
public:
	uint8                                        Pad_148[0x1018];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetDriverGOG* GetDefaultObj();

};

}


