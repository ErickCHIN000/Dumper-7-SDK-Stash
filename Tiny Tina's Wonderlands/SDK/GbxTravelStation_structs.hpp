#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETravelStatus : uint8
{
	None                           = 0,
	Queued                         = 1,
	Cancelled_OpenMenu             = 2,
	Cancelled_DownState            = 3,
	Cancelled_Cinamatic            = 4,
	Cancelled_DLCOwnership         = 5,
	Cancelled_PlayerAction         = 6,
	ETravelStatus_MAX              = 7,
};

enum class EFastTravelDirection : uint8
{
	SendAndReceive                 = 0,
	SendOnly                       = 1,
	ReceiveOnly                    = 2,
	EFastTravelDirection_MAX       = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GbxTravelStation.ActiveFastTravelData
struct FActiveFastTravelData
{
public:
	class UFastTravelStationData*                FastTravelData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighlightDiscovery;                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_546[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxTravelStation.ActiveFastTravelSaveData
struct FActiveFastTravelSaveData
{
public:
	class FString                                FastTravelStationName;                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlacklisted;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0x18 - 0xC)
// ScriptStruct GbxTravelStation.FastTravelStationActiveEntry
struct FFastTravelStationActiveEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_550[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFastTravelStationData*                FastTravelData;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xC8 - 0xB0)
// ScriptStruct GbxTravelStation.FastTravelStationActiveContainer
struct FFastTravelStationActiveContainer : public FFastArraySerializer
{
public:
	TArray<struct FFastTravelStationActiveEntry> ActiveFastTravelStations;                          // 0xB0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	uint8                                        Pad_553[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxTravelStation.AvailableTravelStation
struct FAvailableTravelStation
{
public:
	class FString                                StationToTravelTo;                                 // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFastTravelStationDebugButton*         OptionButton;                                      // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_557[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GbxTravelStation.TravelDataConditional
struct FTravelDataConditional
{
public:
	class FString                                TravelDataSelection;                               // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelTravelStationData*               LevelTravelData;                                   // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MovieToPlayDuringTravelMap;                        // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxCondition*                         ConditionToPlayMovie;                              // 0x20(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxCondition*                         Condition;                                         // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GbxTravelStation.ExternalGraphLevelLinks
struct FExternalGraphLevelLinks
{
public:
	TSoftObjectPtr<class ULevelData>             LevelData;                                         // 0x0(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class ULevelData>>     LinksToOtherLevel;                                 // 0x28(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxTravelStation.SpawnPointTracker
struct FSpawnPointTracker
{
public:
	TScriptInterface<class ITravelStationSpawnPointInterface> SpawnPoint;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        LastSpawnedAtCounter;                              // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_569[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssignedToActor;                                   // 0x18(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxTravelStation.TravelCountdownInfo
struct FTravelCountdownInfo
{
public:
	uint8                                        Pad_56D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTravelStationData*                    TravelStationDestination;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingTime;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETravelStatus                     Status;                                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisallowLocalTravel;                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_573[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}


