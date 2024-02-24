#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESubstanceInputType : uint8
{
	SIT_Float                      = 0,
	SIT_Float2                     = 1,
	SIT_Float3                     = 2,
	SIT_Float4                     = 3,
	SIT_Integer                    = 4,
	SIT_Image                      = 5,
	SIT_Unused_6                   = 6,
	SIT_Unused_7                   = 7,
	SIT_Integer2                   = 8,
	SIT_Integer3                   = 9,
	SIT_Integer4                   = 10,
	SIT_MAX                        = 11,
};

enum class ESubstanceGenerationMode : uint8
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6,
};

enum class EDefaultSubstanceTextureSize : uint8
{
	Size_0                         = 0,
	Size_16                        = 4,
	Size_32                        = 5,
	Size_64                        = 6,
	Size_128                       = 7,
	Size_256                       = 8,
	Size_512                       = 9,
	Size_1024                      = 10,
	Size_2048                      = 11,
	Size_4096                      = 12,
	Size_MAX                       = 13,
};

enum class ESubstanceEngineType : uint8
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2,
};

enum class ESubstanceTextureSize : uint8
{
	ERL_16                         = 0,
	ERL_32                         = 1,
	ERL_64                         = 2,
	ERL_128                        = 3,
	ERL_256                        = 4,
	ERL_512                        = 5,
	ERL_1024                       = 6,
	ERL_2048                       = 7,
	ERL_4096                       = 8,
	ERL_8192                       = 9,
	ERL_MAX                        = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct SubstanceCore.SubstanceInputDesc
struct FSubstanceInputDesc
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESubstanceInputType               Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SubstanceCore.SubstanceInstanceDesc
struct FSubstanceInstanceDesc
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubstanceInputDesc>           Inputs;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc
{
public:
	TArray<float>                                Min;                                               // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                Max;                                               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<float>                                Default;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct SubstanceCore.SubstanceIntInputDesc
struct FSubstanceIntInputDesc : public FSubstanceInputDesc
{
public:
	TArray<int32>                                Min;                                               // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                Max;                                               // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<int32>                                Default;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct SubstanceCore.SubstanceGraphDesc
struct FSubstanceGraphDesc
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Category;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Keywords;                                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Author;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuthorUrl;                                         // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserTag;                                           // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SubstanceCore.SubstanceConnection
struct FSubstanceConnection
{
public:
	class FString                                OutputIdentifier;                                  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InputImageIdentifier;                              // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


