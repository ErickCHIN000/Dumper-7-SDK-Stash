#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2Mobile.MobileLODActorLevelData
struct FMobileLODActorLevelData
{
public:
	TArray<class FName>                          SubActorNames;                                     // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2Mobile.MobileLODRedirectorLevelData
struct FMobileLODRedirectorLevelData
{
public:
	TArray<class AActor*>                        SubActors;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Goat2Mobile.SeasonalLevels
struct FSeasonalLevels
{
public:
	TArray<TSoftObjectPtr<class UWorld>>         Levels;                                            // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Goat2Mobile.RegisteredComponentData
struct FRegisteredComponentData
{
public:
	uint8                                        Pad_E8F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


