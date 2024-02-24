#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// Function AppearanceRuntime.AppearanceComponent.PopulateAppearanceFromMetadata
struct UAppearanceComponent_PopulateAppearanceFromMetadata_Params
{
public:
	TMap<class FString, class FString>           MetaData;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function AppearanceRuntime.AppearanceComponent.GetAppearanceMetadata
struct UAppearanceComponent_GetAppearanceMetadata_Params
{
public:
	TMap<class FString, class FString>           OutMetadata;                                       // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterEyeScale
struct ICharacterFaceMorphInterface_SetCharacterEyeScale_Params
{
public:
	float                                        Scale;                                             // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterEyeOffset
struct ICharacterFaceMorphInterface_SetCharacterEyeOffset_Params
{
public:
	struct FVector                               Offset;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AppearanceRuntime.CharacterFaceMorphInterface.SetCharacterBodyType
struct ICharacterFaceMorphInterface_SetCharacterBodyType_Params
{
public:
	enum class EBodyType                         Type;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.TryGetHairData
struct UHairDataReferenceFunctionLibrary_TryGetHairData_Params
{
public:
	struct FHairDataReference                    Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairData                             OutData;                                           // 0x70(0x158)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGetResult                        OutBranches;                                       // 0x1C8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.NotEqual_FHairDataReference
struct UHairDataReferenceFunctionLibrary_NotEqual_FHairDataReference_Params
{
public:
	struct FHairDataReference                    A;                                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairDataReference                    B;                                                 // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F23[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.MakeFromDataAsset
struct UHairDataReferenceFunctionLibrary_MakeFromDataAsset_Params
{
public:
	TSoftObjectPtr<class UHairDataAsset>         Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHairAssetType                    Type;                                              // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F51[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHairDataReference                    ReturnValue;                                       // 0x30(0x70)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.IsValid
struct UHairDataReferenceFunctionLibrary_IsValid_Params
{
public:
	struct FHairDataReference                    Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F75[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetSoftObjectFromReference
struct UHairDataReferenceFunctionLibrary_GetSoftObjectFromReference_Params
{
public:
	struct FHairDataReference                    HairDataReference;                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UHairDataAsset>         ReturnValue;                                       // 0x70(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F97[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetHairDataId
struct UHairDataReferenceFunctionLibrary_GetHairDataId_Params
{
public:
	struct FHairDataReference                    Reference;                                         // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x70(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.GetAllHairReferences
struct UHairDataReferenceFunctionLibrary_GetAllHairReferences_Params
{
public:
	enum class EHairAssetType                    Type;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHairDataReference>            OutReferences;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function AppearanceRuntime.HairDataReferenceFunctionLibrary.EqualEqual_FHairDataReference
struct UHairDataReferenceFunctionLibrary_EqualEqual_FHairDataReference_Params
{
public:
	struct FHairDataReference                    A;                                                 // 0x0(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairDataReference                    B;                                                 // 0x70(0x70)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE5[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.TryGetVoiceSetData
struct UVoiceSetDataReferenceFunctionLibrary_TryGetVoiceSetData_Params
{
public:
	struct FVoiceSetDataReference                Reference;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVoiceSetData                         OutData;                                           // 0x60(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGetResult                        OutBranches;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1040[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.NotEqual_FVoiceSetDataReference
struct UVoiceSetDataReferenceFunctionLibrary_NotEqual_FVoiceSetDataReference_Params
{
public:
	struct FVoiceSetDataReference                A;                                                 // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVoiceSetDataReference                B;                                                 // 0x60(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.MakeFromDataAsset
struct UVoiceSetDataReferenceFunctionLibrary_MakeFromDataAsset_Params
{
public:
	TSoftObjectPtr<class UVoiceSetDataAsset>     Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1089[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoiceSetDataReference                ReturnValue;                                       // 0x30(0x60)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.IsValid
struct UVoiceSetDataReferenceFunctionLibrary_IsValid_Params
{
public:
	struct FVoiceSetDataReference                Reference;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B3[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.GetUID
struct UVoiceSetDataReferenceFunctionLibrary_GetUID_Params
{
public:
	struct FVoiceSetDataReference                Reference;                                         // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.GetAllVoiceSetDataReferences
struct UVoiceSetDataReferenceFunctionLibrary_GetAllVoiceSetDataReferences_Params
{
public:
	TArray<struct FVoiceSetDataReference>        OutReferences;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function AppearanceRuntime.VoiceSetDataReferenceFunctionLibrary.EqualEqual_FVoiceSetDataReference
struct UVoiceSetDataReferenceFunctionLibrary_EqualEqual_FVoiceSetDataReference_Params
{
public:
	struct FVoiceSetDataReference                A;                                                 // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVoiceSetDataReference                B;                                                 // 0x60(0x60)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


