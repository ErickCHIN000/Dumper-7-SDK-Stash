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
	uint8                                        Pad_255[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGOGLoginCallbackProxy* GetDefaultObj();

	class UGOGLoginCallbackProxy* Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& AuthType, const class FString& UserID, const class FString& UserToken);
};

// 0x28 (0x1B18 - 0x1AF0)
// Class OnlineSubsystemGOG.NetConnectionGOG
class UNetConnectionGOG : public UNetConnection
{
public:
	uint8                                        Pad_260[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetConnectionGOG* GetDefaultObj();

};

// 0x1018 (0x1760 - 0x748)
// Class OnlineSubsystemGOG.NetDriverGOG
class UNetDriverGOG : public UNetDriver
{
public:
	uint8                                        Pad_269[0x1018];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNetDriverGOG* GetDefaultObj();

};

}


