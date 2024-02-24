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
// Function ItemRuntime.EquippableItem.SetInvisibleState
struct AEquippableItem_SetInvisibleState_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ItemRuntime.EquippableItem.RequiresLightweightItem
struct AEquippableItem_RequiresLightweightItem_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function ItemRuntime.EquippableItem.OnItemEntryUpdated
struct AEquippableItem_OnItemEntryUpdated_Params
{
public:
	struct FInventoryEntry                       OldEntry;                                          // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function ItemRuntime.EquippableItem.OnInventoryEntryUpdated
struct AEquippableItem_OnInventoryEntryUpdated_Params
{
public:
	struct FInventoryEntry                       UpdatedEntry;                                      // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ItemRuntime.EquippableItem.IsTwoHanded
struct AEquippableItem_IsTwoHanded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ItemRuntime.EquippableItem.IsEquipped
struct AEquippableItem_IsEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ItemRuntime.EquippableItem.GetRootMesh
struct AEquippableItem_GetRootMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ItemRuntime.EquippableItem.GetItemType
struct AEquippableItem_GetItemType_Params
{
public:
	enum class EItemType                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ItemRuntime.EquippableItem.GetItemID
struct AEquippableItem_GetItemID_Params
{
public:
	struct FItemDataReference                    OutItemReference;                                  // 0x0(0x80)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function ItemRuntime.EquippableItem.GetInventoryEntry
struct AEquippableItem_GetInventoryEntry_Params
{
public:
	struct FInventoryEntry                       ReturnValue;                                       // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ItemRuntime.EquippableItem.GetInstanceID
struct AEquippableItem_GetInstanceID_Params
{
public:
	struct FGuid                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ItemRuntime.EquippableItem.GetEquippedTag
struct AEquippableItem_GetEquippedTag_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ItemRuntime.EquippableItem.GetAttachSocket
struct AEquippableItem_GetAttachSocket_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ItemRuntime.EquippableItem.ClearItemEffectsFromActor
struct AEquippableItem_ClearItemEffectsFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ItemRuntime.EquippableItemUtilityInterface.DestroyEquippedItem
struct IEquippableItemUtilityInterface_DestroyEquippedItem_Params
{
public:
	class AEquippableItem*                       Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumToDestroy;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDestroyAll;                                       // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x300 (0x300 - 0x0)
// Function ItemRuntime.ItemConstraintBehavior.IsConstraintMet
struct UItemConstraintBehavior_IsConstraintMet_Params
{
public:
	struct FInventoryEntry                       Entry;                                             // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2F0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E03[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ItemRuntime.ItemDataAssetRegistryFunctionLibrary.GetAllItemReferences
struct UItemDataAssetRegistryFunctionLibrary_GetAllItemReferences_Params
{
public:
	TArray<struct FItemDataReference>            ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ItemRuntime.ItemDataAssetRegistryFunctionLibrary.GetAllItemReferenceObjects
struct UItemDataAssetRegistryFunctionLibrary_GetAllItemReferenceObjects_Params
{
public:
	TArray<class UObjectWrapper_ItemDataReference*> OutItemReferenceWrappers;                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.TryGetItemData
struct UItemDataReferenceFunctionLibrary_TryGetItemData_Params
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemData                             ItemData;                                          // 0x80(0xD8)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EGetResult                        Branches;                                          // 0x158(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.NotEqual_FItemDataReference
struct UItemDataReferenceFunctionLibrary_NotEqual_FItemDataReference_Params
{
public:
	struct FItemDataReference                    A;                                                 // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemDataReference                    B;                                                 // 0x80(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x100(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE9[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.MakeItemReferfenceFromDataAsset
struct UItemDataReferenceFunctionLibrary_MakeItemReferfenceFromDataAsset_Params
{
public:
	TSoftObjectPtr<class UItemDataAsset>         Asset;                                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F08[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ReturnValue;                                       // 0x30(0x80)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.IsValid
struct UItemDataReferenceFunctionLibrary_IsValid_Params
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2D[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.GetID
struct UItemDataReferenceFunctionLibrary_GetID_Params
{
public:
	struct FItemDataReference                    ItemReference;                                     // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x80(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ItemRuntime.ItemDataReferenceFunctionLibrary.EqualEqual_FItemDataReference
struct UItemDataReferenceFunctionLibrary_EqualEqual_FItemDataReference_Params
{
public:
	struct FItemDataReference                    A;                                                 // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemDataReference                    B;                                                 // 0x80(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x100(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F73[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x140 (0x140 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.TryGetItemPerkData
struct UItemPerkFunctionLibrary_TryGetItemPerkData_Params
{
public:
	struct FItemPerkDataReference                Reference;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FItemPerkData                         OutData;                                           // 0x80(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	enum class EGetResult                        OutBranches;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE0[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.NotEqual_FItemPerkDataReference
struct UItemPerkFunctionLibrary_NotEqual_FItemPerkDataReference_Params
{
public:
	struct FItemPerkDataReference                A;                                                 // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FItemPerkDataReference                B;                                                 // 0x80(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x100(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFD[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.IsValid
struct UItemPerkFunctionLibrary_IsValid_Params
{
public:
	struct FItemPerkDataReference                Reference;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1013[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.GetPerkArchetypeData
struct UItemPerkFunctionLibrary_GetPerkArchetypeData_Params
{
public:
	struct FItemPerkDataReference                Reference;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UItemPerkArchetypeDataAsset> ReturnValue;                                       // 0x80(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1037[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.GetIcon
struct UItemPerkFunctionLibrary_GetIcon_Params
{
public:
	struct FItemPerkDataReference                Reference;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x80(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.GetDisplayName
struct UItemPerkFunctionLibrary_GetDisplayName_Params
{
public:
	struct FItemPerkDataReference                Reference;                                         // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x80(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_1071[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.GetAllItemPerkReferences
struct UItemPerkFunctionLibrary_GetAllItemPerkReferences_Params
{
public:
	TArray<struct FItemPerkDataReference>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.EqualEqual_FItemPerkDataReference
struct UItemPerkFunctionLibrary_EqualEqual_FItemPerkDataReference_Params
{
public:
	struct FItemPerkDataReference                A;                                                 // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FItemPerkDataReference                B;                                                 // 0x80(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x100(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A2[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ItemRuntime.ItemPerkFunctionLibrary.CreatePerkDataAsset
struct UItemPerkFunctionLibrary_CreatePerkDataAsset_Params
{
public:
	class FString                                AssetName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DirectoryPath;                                     // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGetResult                        Branches;                                          // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemPerkDataAsset*                    OutNewItemPerk;                                    // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary.GetGenericReplicatedDataAsItemDataReference
struct UItemsGenericReplicatedDataFunctionLibrary_GetGenericReplicatedDataAsItemDataReference_Params
{
public:
	struct FGenericReplicatedDataHandle          GenericReplicatedData;                             // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasItemDataReference;                             // 0x2C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ItemDataReference;                                 // 0x30(0x80)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemRuntime.ItemsGenericReplicatedDataFunctionLibrary.GenericReplicatedDataFromItemDataReference
struct UItemsGenericReplicatedDataFunctionLibrary_GenericReplicatedDataFromItemDataReference_Params
{
public:
	struct FItemDataReference                    ItemDataReference;                                 // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericReplicatedDataHandle          ReturnValue;                                       // 0x80(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_1173[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


