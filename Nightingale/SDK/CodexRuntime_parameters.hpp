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

// 0x1 (0x1 - 0x0)
// Function CodexRuntime.CodexActor.ShouldShowHopeEcho
struct ACodexActor_ShouldShowHopeEcho_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.IsValidCodexReference
struct UCodexAssetReferenceFunctionLibrary_IsValidCodexReference_Params
{
public:
	struct FCodexAssetReference                  CodexReference;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.GetCodexReferenceCardImage
struct UCodexAssetReferenceFunctionLibrary_GetCodexReferenceCardImage_Params
{
public:
	struct FCodexAssetReference                  CodexReference;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFoundValidImage;                                  // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             OutCardImage;                                      // 0x18(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.GetCodexAssetUniqueId
struct UCodexAssetReferenceFunctionLibrary_GetCodexAssetUniqueId_Params
{
public:
	class UCodexBaseDataAsset*                   CodexAsset;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 OutUniqueID;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CodexRuntime.CodexAssetReferenceFunctionLibrary.AreCodexReferencesEqual
struct UCodexAssetReferenceFunctionLibrary_AreCodexReferencesEqual_Params
{
public:
	struct FCodexAssetReference                  A;                                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FCodexAssetReference                  B;                                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bExactMatch;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE8[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexComponentInterface.UnbindEventFrom_OnCodexInstanceIDReplicated
struct ICodexComponentInterface_UnbindEventFrom_OnCodexInstanceIDReplicated_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexComponentInterface.SetCodexAssetReference
struct ICodexComponentInterface_SetCodexAssetReference_Params
{
public:
	struct FCodexAssetReference                  InCodexAssetReference;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexComponentInterface.GetCodexComponentID
struct ICodexComponentInterface_GetCodexComponentID_Params
{
public:
	struct FGuid                                 OutID;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexComponentInterface.GetCodexAssetReference
struct ICodexComponentInterface_GetCodexAssetReference_Params
{
public:
	struct FCodexAssetReference                  ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexComponentInterface.BindEventTo_OnCodexInstanceIDReplicated
struct ICodexComponentInterface_BindEventTo_OnCodexInstanceIDReplicated_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CodexRuntime.CodexTrackerComponent.Server_GrantCodexEntry
struct UCodexTrackerComponent_Server_GrantCodexEntry_Params
{
public:
	struct FGuid                                 CodexInstanceID;                                   // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x10(0x10)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.UnbindEventFrom_OnCodexUpdated
struct ICodexTrackerInterface_UnbindEventFrom_OnCodexUpdated_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.UnbindEventFrom_OnCodexGranted
struct ICodexTrackerInterface_UnbindEventFrom_OnCodexGranted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.HasUnlockedAnySubentry
struct ICodexTrackerInterface_HasUnlockedAnySubentry_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutUnlocked;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.GrantCodexEntry
struct ICodexTrackerInterface_GrantCodexEntry_Params
{
public:
	struct FGuid                                 CodexInstanceID;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.GetUnlockedSubentryTags
struct ICodexTrackerInterface_GetUnlockedSubentryTags_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 OutUnlockedSubentryTags;                           // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.GetCodexEntry
struct ICodexTrackerInterface_GetCodexEntry_Params
{
public:
	class UCodexBaseDataAsset*                   CodexDataAsset;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCodexEntry                           OutCodexEntry;                                     // 0x8(0xF0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.CanGrantCodex
struct ICodexTrackerInterface_CanGrantCodex_Params
{
public:
	struct FGuid                                 CodexInstanceID;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCodexAssetReference                  CodexAssetReference;                               // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.BindEventTo_OnCodexUpdated
struct ICodexTrackerInterface_BindEventTo_OnCodexUpdated_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CodexRuntime.CodexTrackerInterface.BindEventTo_OnCodexGranted
struct ICodexTrackerInterface_BindEventTo_OnCodexGranted_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


