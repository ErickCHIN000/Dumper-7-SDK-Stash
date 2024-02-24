#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMetaSoundMessageLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	EMetaSoundMessageLevel_MAX     = 3,
};

enum class EMetaSoundOutputAudioFormat : uint8
{
	Mono                           = 0,
	Stereo                         = 1,
	Quad                           = 2,
	FiveDotOne                     = 3,
	SevenDotOne                    = 4,
	COUNT                          = 5,
	EMetaSoundOutputAudioFormat_MAX = 6,
};

enum class EMetaSoundBuilderResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	EMetaSoundBuilderResult_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x10 - 0x8)
// ScriptStruct MetasoundEngine.MetaSoundOutput
struct FMetaSoundOutput : public FSoundGeneratorOutput
{
public:
	uint8                                        Pad_1029[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
public:
	struct FSoftObjectPath                       Metasound;                                         // 0x0(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
struct FMetaSoundAssetDirectory
{
public:
	struct FDirectoryPath                        Directory;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
struct FMetaSoundAsyncAssetDependencies
{
public:
	uint8                                        Pad_1038[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Metasound;                                         // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeInputHandle
struct FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeOutputHandle
struct FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundNodeHandle
struct FMetaSoundNodeHandle
{
public:
	struct FGuid                                 NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundBuilderOptions
struct FMetaSoundBuilderOptions
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUniqueClassName;                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToRegistry;                                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1044[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IMetaSoundDocumentInterface> ExistingMetaSound;                                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


