#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAssetPackState : uint8
{
	Error                          = 0,
	NotAvailable                   = 1,
	Downloading                    = 2,
	Installed                      = 3,
	Canceled                       = 4,
	WaitingForWifi                 = 5,
	EAssetPackState_MAX            = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct MobileAssetPacks.AssetPackInProgressData
struct FAssetPackInProgressData
{
public:
	uint8                                        Pad_2AF[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MobileAssetPacks.AssetPack
struct FAssetPack
{
public:
	class FString                                PackName;                                          // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Chunks;                                            // 0x10(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

}


