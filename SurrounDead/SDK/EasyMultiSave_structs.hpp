#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENextStepType : uint8
{
	SaveLevel                      = 0,
	FinishSave                     = 1,
	ENextStepType_MAX              = 2,
};

enum class EUpdateActorResult : uint8
{
	RES_Success                    = 0,
	RES_Skip                       = 1,
	RES_ShouldSpawnNewActor        = 2,
	RES_MAX                        = 3,
};

enum class EDataLoadType : uint8
{
	DATA_Level                     = 0,
	DATA_Player                    = 1,
	DATA_Object                    = 2,
	DATA_MAX                       = 3,
};

enum class EActorType : uint8
{
	AT_Runtime                     = 0,
	AT_Placed                      = 1,
	AT_LevelScript                 = 2,
	AT_Player                      = 3,
	AT_GameObject                  = 4,
	AT_Persistent                  = 5,
	AT_MAX                         = 6,
};

enum class ESaveGameMode : uint8
{
	MODE_Player                    = 0,
	MODE_Level                     = 1,
	MODE_All                       = 2,
	MODE_MAX                       = 3,
};

enum class EAsyncCheckType : uint8
{
	CT_Both                        = 0,
	CT_Save                        = 1,
	CT_Load                        = 2,
	CT_MAX                         = 3,
};

enum class ESaveErrorType : uint8
{
	ER_Player                      = 0,
	ER_Level                       = 1,
	ER_MAX                         = 2,
};

enum class ELoadMethod : uint8
{
	LM_Default                     = 0,
	LM_Deferred                    = 1,
	LM_Thread                      = 2,
	LM_MAX                         = 3,
};

enum class EFileSaveMethod : uint8
{
	FM_Desktop                     = 0,
	FM_Console                     = 1,
	FM_MAX                         = 2,
};

enum class ESaveTypeFlags : uint8
{
	SF_Player                      = 0,
	SF_Level                       = 1,
	SF_MAX                         = 2,
};

enum class ELoadTypeFlags : uint8
{
	LF_Player                      = 0,
	LF_Level                       = 1,
	LF_MAX                         = 2,
};

enum class EMultiLevelSaveMethod : uint8
{
	ML_Disabled                    = 0,
	ML_Normal                      = 1,
	ML_Stream                      = 2,
	ML_Full                        = 3,
	ML_MAX                         = 4,
};

enum class ECompressionMethod : uint8
{
	Zlib                           = 0,
	Oodle                          = 1,
	ECompressionMethod_MAX         = 2,
};

enum class EThumbnailImageFormat : uint8
{
	Png                            = 0,
	Jpeg                           = 1,
	EThumbnailImageFormat_MAX      = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct EasyMultiSave.SaveSlotInfo
struct FSaveSlotInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Level;                                             // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Players;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct EasyMultiSave.ComponentSaveData
struct FComponentSaveData
{
public:
	uint8                                        Pad_E90[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EasyMultiSave.GameObjectSaveData
struct FGameObjectSaveData
{
public:
	uint8                                        Pad_E95[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct EasyMultiSave.ActorSaveData
struct FActorSaveData
{
public:
	uint8                                        Pad_E99[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EasyMultiSave.LevelScriptSaveData
struct FLevelScriptSaveData
{
public:
	uint8                                        Pad_E9C[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct EasyMultiSave.LevelArchive
struct FLevelArchive
{
public:
	uint8                                        Pad_E9F[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EasyMultiSave.LevelStackArchive
struct FLevelStackArchive
{
public:
	uint8                                        Pad_EA1[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EasyMultiSave.MultiLevelStreamingData
struct FMultiLevelStreamingData
{
public:
	uint8                                        Pad_EA4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EasyMultiSave.PawnSaveData
struct FPawnSaveData
{
public:
	uint8                                        Pad_EA8[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct EasyMultiSave.ControllerSaveData
struct FControllerSaveData
{
public:
	uint8                                        Pad_EAA[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct EasyMultiSave.PlayerArchive
struct FPlayerArchive
{
public:
	uint8                                        Pad_EB0[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct EasyMultiSave.PlayerPositionArchive
struct FPlayerPositionArchive
{
public:
	uint8                                        Pad_EB3[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// ScriptStruct EasyMultiSave.PlayerStackArchive
struct FPlayerStackArchive
{
public:
	uint8                                        Pad_EB7[0x100];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}


