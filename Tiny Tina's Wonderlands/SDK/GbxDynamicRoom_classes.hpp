#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x88 - 0x30)
// Class GbxDynamicRoom.DynamicRoomBaseData
class UDynamicRoomBaseData : public UGbxDataAsset
{
public:
	class FText                                  DisplayName;                                       // 0x30(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture>               PreviewPicture;                                    // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicRoomBaseData* GetDefaultObj();

};

// 0xC8 (0x520 - 0x458)
// Class GbxDynamicRoom.DynamicRoomBase
class ADynamicRoomBase : public AActor
{
public:
	TArray<class UDynamicRoomBaseData*>          SelectableLevels;                                  // 0x458(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShowRandomRoomOnStartup;                          // 0x468(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRoomLoaded;                                      // 0x470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRoomUnloaded;                                    // 0x480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRoomVisible;                                     // 0x490(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnRoomVisibleForAllPlayers;                        // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDynamicRoomReplicationInfo           RoomInfoToLoad;                                    // 0x4B0(0x20)(Net, RepNotify, NativeAccessSpecifierPublic)
	struct FDynamicRoomInstanceInfo              InstanceInfo;                                      // 0x4D0(0x38)(NativeAccessSpecifierPublic)
	class UBillboardComponent*                   SpriteComponent;                                   // 0x508(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicRoomBaseData*                  CachedRoomDataReference;                           // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_25E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ADynamicRoomBase* GetDefaultObj();

	bool VisibleForAllPlayers();
	void UnloadRoom();
	void SetRoomVisiblity(bool bVisible);
	void SelectedRoomVisible();
	void SelectedRoomLoaded();
	void SelectedRoomClassLoaded();
	void OnRep_RoomInfoToLoad(struct FDynamicRoomReplicationInfo* OldRoomInfoToLoad);
	bool IsRoomSet();
	bool IsRoomLoaded();
	void InstanceRoom(class UDynamicRoomBaseData* RoomToLoad, const class FString& CustomData, bool bInitiallyVisible);
	void InstanceRandomRoom();
	void GetPlayersInLevel(TArray<class AGbxCharacter*>* Players);
	void GetLoadedRoomLevels(TArray<class ULevel*>* Levels);
	class UDynamicRoomBaseData* GetCurrentRoomData();
	void GetAvailableRoomData(TArray<class UDynamicRoomBaseData*>* AvailableRooms);
	void AllPlayerVisibilityTest();
};

// 0x0 (0x458 - 0x458)
// Class GbxDynamicRoom.DynamicRoomActor
class ADynamicRoomActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class ADynamicRoomActor* GetDefaultObj();

};

// 0x18 (0xA0 - 0x88)
// Class GbxDynamicRoom.DynamicRoomActorData
class UDynamicRoomActorData : public UDynamicRoomBaseData
{
public:
	struct FSoftClassPath                        DynamicRoomAssetName;                              // 0x88(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicRoomActorData* GetDefaultObj();

	void HandleDynamicRoomActorSpawned(class AActor* SpawnedActor, int32 InstanceIndex);
};

// 0x18 (0xA0 - 0x88)
// Class GbxDynamicRoom.DynamicRoomLevelData
class UDynamicRoomLevelData : public UDynamicRoomBaseData
{
public:
	struct FSoftObjectPath                       DynamicRoomAssetName;                              // 0x88(0x18)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDynamicRoomLevelData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GbxDynamicRoom.DynamicRoomModuleSettings
class UDynamicRoomModuleSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicRoomModuleSettings* GetDefaultObj();

};

}


