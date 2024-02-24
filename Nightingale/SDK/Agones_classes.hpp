#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x110 - 0xA0)
// Class Agones.AgonesComponent
class UAgonesComponent : public UActorComponent
{
public:
	class FString                                HttpPort;                                          // 0xA0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthRateSeconds;                                 // 0xB0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableAutoConnect;                               // 0xB4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ConnectedDelegate;                                 // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FE[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAgonesComponent* GetDefaultObj();

	void WatchGameServer(FDelegateProperty_ WatchDelegate);
	void Shutdown(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void SetPlayerCapacity(int64 Count, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void SetLabel(class FString* Key, class FString* Value, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void SetAnnotation(class FString* Key, class FString* Value, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void Reserve(int64 Seconds, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void Ready(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void PlayerDisconnect(const class FString& PlayerId, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void PlayerConnect(const class FString& PlayerId, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void IsPlayerConnected(const class FString& PlayerId, FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void HealthPing(float RateSeconds);
	void Health(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void GetPlayerCount(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void GetPlayerCapacity(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void GetConnectedPlayers(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void GameServer(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
	void ConnectSuccess(const struct FGameServerResponse& GameServerResponse);
	void Connect();
	void Allocate(FDelegateProperty_ SuccessDelegate, FDelegateProperty_ ErrorDelegate);
};

}


