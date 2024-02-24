#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDestructibleRelevance : uint8
{
	DR_GameplayAndNetwork          = 0,
	DR_Gameplay                    = 1,
	DR_None                        = 2,
	DR_MAX                         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GbxDestruction.GbxDestructibleNetBuffer
struct FGbxDestructibleNetBuffer
{
public:
	uint8                                        Pad_E44[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


