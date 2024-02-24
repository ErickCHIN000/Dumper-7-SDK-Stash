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

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
struct UInventoryAspectData_K2_OnBeginPlay_Params
{
public:
	class AActor*                                InventoryActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
struct UInventoryAspectData_K2_OnApplyAspect_Params
{
public:
	class AActor*                                InventoryActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
struct UInventoryAspectData_K2_GetFriendlyDescription_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryAspectData.K2_CloneAppearance
struct UInventoryAspectData_K2_CloneAppearance_Params
{
public:
	class AActor*                                CloneActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InventoryActor;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
struct UInventoryBalanceStateComponent_NotifyUnequipped_Params
{
public:
	class APawn*                                 OldInstigator;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
struct UInventoryBalanceStateComponent_NotifyEquipped_Params
{
public:
	class APawn*                                 NewInstigator;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
struct UInventoryBalanceStateComponent_NotifyAttached_Params
{
public:
	class APawn*                                 Instigator;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
struct UInventoryBalanceStateComponent_K2_GetDamageType_Params
{
public:
	TSubclassOf<class UGbxDamageType>            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
struct UInventoryBalanceStateComponent_IsManufactureredBy_Params
{
public:
	class UManufacturerData*                     Manufacturer;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_63D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.IsBeingReRolled
struct UInventoryBalanceStateComponent_IsBeingReRolled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
struct UInventoryBalanceStateComponent_GetReRollCount_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetPartList
struct UInventoryBalanceStateComponent_GetPartList_Params
{
public:
	TArray<class UInventoryPartData*>            ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetOverpowerLevel
struct UInventoryBalanceStateComponent_GetOverpowerLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
struct UInventoryBalanceStateComponent_GetMonetaryValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
struct UInventoryBalanceStateComponent_GetManufacturer_Params
{
public:
	class UManufacturerData*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
struct UInventoryBalanceStateComponent_GetInventoryScoreValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params
{
public:
	class UParticleSystem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
struct UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
struct UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params
{
public:
	class UWwiseEvent*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params
{
public:
	enum class EDropLifeSpanType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
struct UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
struct UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
struct UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
struct UInventoryBalanceStateComponent_GetInventoryRarityData_Params
{
public:
	class UInventoryRarityData*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
struct UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
struct UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
struct UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
struct UInventoryBalanceStateComponent_GetInventoryData_Params
{
public:
	class UInventoryData*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
struct UInventoryBalanceStateComponent_GetInventoryBalanceData_Params
{
public:
	class UInventoryBalanceData*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
struct UInventoryBalanceStateComponent_GetGenericPartList_Params
{
public:
	TArray<class UInventoryGenericPartData*>     ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
struct UInventoryBalanceStateComponent_GetDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
struct UInventoryBalanceStateComponent_GetDamageType_Params
{
public:
	TSubclassOf<class UGbxDamageType>            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
struct UInventoryBalanceStateComponent_GetCustomizationPartList_Params
{
public:
	TArray<class UInventoryCustomizationPartData*> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
struct UInventoryBalanceStateComponent_CloneAppearance_Params
{
public:
	class AActor*                                DestActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ParentComp;                                        // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbsoluteScale;                                    // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_719[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
struct UInventoryData_EnumeratePickupFlyToTargets_Params
{
public:
	TArray<class FName>                          Targets;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.SizeInInventory
struct UInventoryListComponent_SizeInInventory_Params
{
public:
	class AInventoryItemPickup*                  PickupToTest;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerTransferItem
struct UInventoryListComponent_ServerTransferItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_819[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DestinationActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
struct UInventoryListComponent_ServerSetItemUIFlags_Params
{
public:
	struct FInventoryListEntryHandle             Handle;                                            // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlagsMask;                                         // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_823[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
struct UInventoryListComponent_ServerSetItemsUIFlags_Params
{
public:
	class UInventoryCategoryData*                Category;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        FlagsMask;                                         // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_824[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerRemoveItem
struct UInventoryListComponent_ServerRemoveItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
struct UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_830[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryCustomizationPartData*       Part;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function GbxInventory.InventoryListComponent.ServerDropItem
struct UInventoryListComponent_ServerDropItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialLocation;                                   // 0x4(0xC)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InitialRotation;                                   // 0x10(0xC)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerConsumeItem
struct UInventoryListComponent_ServerConsumeItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
struct UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryCustomizationPartData*       Part;                                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryListComponent.IsInventoryFull
struct UInventoryListComponent_IsInventoryFull_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.HasActorInList
struct UInventoryListComponent_HasActorInList_Params
{
public:
	class AActor*                                ItemActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
struct UInventoryListComponent_GetStoredInventoryActor_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
struct UInventoryListComponent_GetSelectedItemQuantity_Params
{
public:
	class UInventoryCategoryData*                ChildTypeToGet;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxQuantity;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
struct UInventoryListComponent_GetMaxInventoryItems_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GbxInventory.InventoryListComponent.GetItem
struct UInventoryListComponent_GetItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_886[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryListEntry                   ListEntry;                                         // 0x8(0x78)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_887[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
struct UInventoryListComponent_GetInventoryListEntryDisplayName_Params
{
public:
	struct FInventoryListEntry                   ListEntry;                                         // 0x0(0x78)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x78(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
struct UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params
{
public:
	struct FInventoryListEntry                   ListEntry;                                         // 0x0(0x78)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x78(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryItemCount
struct UInventoryListComponent_GetInventoryItemCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
struct UInventoryListComponent_GetInventoryHandlesOfType_Params
{
public:
	class UInventoryCategoryData*                ChildTypeToGet;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryListEntryHandle>     ItemHandleList;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
struct UInventoryListComponent_GetInventoryDisplayName_Params
{
public:
	class AActor*                                InventoryActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
struct UInventoryListComponent_GetInventoryDisplayDescription_Params
{
public:
	class AActor*                                InventoryActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
struct UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params
{
public:
	class UInventoryCategoryData*                ChildTypeToGet;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInventoryListEntryHandle>     ItemHandleList;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
struct UInventoryListComponent_GetCategoryItemQuantity_Params
{
public:
	class UInventoryCategoryData*                ItemCategory;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
struct UInventoryListComponent_GetAndConsumeSelected_Params
{
public:
	class UInventoryCategoryData*                TypeToConsume;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.GetAndConsumeItem
struct UInventoryListComponent_GetAndConsumeItem_Params
{
public:
	struct FInventoryListEntryHandle             InventoryItemHandle;                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryListComponent.ClearInventory
struct UInventoryListComponent_ClearInventory_Params
{
public:
	bool                                         DestroyInventory;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.CanUseSelected
struct UInventoryListComponent_CanUseSelected_Params
{
public:
	class UInventoryCategoryData*                ChildTypeToUse;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
struct UInventoryListComponent_CanSwapItemForPickup_Params
{
public:
	class AActor*                                Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AInventoryItemPickup*                  Pickup;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_905[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
struct UInventoryListComponent_AddOrUpdateCategoryOnly_Params
{
public:
	class UInventoryCategoryData*                ItemCategory;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.AddItemFromPickup
struct UInventoryListComponent_AddItemFromPickup_Params
{
public:
	class AInventoryItemPickup*                  PickupActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryListEntryHandle             ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_911[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxInventory.InventoryListComponent.AddExternalItemEx
struct UInventoryListComponent_AddExternalItemEx_Params
{
public:
	class UInventoryCategoryData*                ItemCategory;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorToAdd;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Flags;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConditionalDestroyActor;                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_924[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DesiredSlot;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassInventoryFull;                              // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UIDataFlags;                                       // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_927[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryListEntryHandle             ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxInventory.InventoryListComponent.AddExternalItem
struct UInventoryListComponent_AddExternalItem_Params
{
public:
	class UInventoryCategoryData*                ItemCategory;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorToAdd;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AddedByPickup;                                     // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoEquip;                                        // 0x15(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConditionalDestroyActor;                          // 0x16(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_938[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DesiredSlot;                                       // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBypassInventoryFull;                              // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        UIDataFlags;                                       // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryListEntryHandle             ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_940[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryListComponent.AddCategory
struct UInventoryListComponent_AddCategory_Params
{
public:
	class UInventoryCategoryData*                ItemCategory;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrackQuantity;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_949[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
struct AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params
{
public:
	bool                                         bNewCanOnlyBePickedUpByOwnerController;            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           OwnerController;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryItemPickup.OnUsedBy
struct AInventoryItemPickup_OnUsedBy_Params
{
public:
	struct FUseEvent                             UseEvent;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
struct AInventoryItemPickup_OnPickedUpEvent_Params
{
public:
	class AActor*                                WasPickedUpBy;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
struct AInventoryItemPickup_OnLookedAtByPlayer_Params
{
public:
	class APlayerController*                     InstigatingPlayer;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanInteractWith;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NewUsableComponentImpactPoint;                     // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewUsableDistanceAway;                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryItemPickup.IsPickupInitialized
struct AInventoryItemPickup_IsPickupInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
struct AInventoryItemPickup_GiveInventoryToUser_Params
{
public:
	class AActor*                                Other;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoEquip;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DesiredSlot;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetMeshComponent
struct AInventoryItemPickup_GetMeshComponent_Params
{
public:
	class UMeshComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
struct AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params
{
public:
	class UParticleSystem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
struct AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params
{
public:
	class UWwiseEvent*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
struct AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params
{
public:
	enum class EDropLifeSpanType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
struct AInventoryItemPickup_GetInventoryRarityColorOutline_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
struct AInventoryItemPickup_GetInventoryRarityColorFX_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
struct AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
struct AInventoryItemPickup_GetInventoryBalanceStateComponent_Params
{
public:
	class UInventoryBalanceStateComponent*       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryItemPickup.CanBePickedUp
struct AInventoryItemPickup_CanBePickedUp_Params
{
public:
	class AActor*                                Other;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UsedByOther;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHeld;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForMassPickup;                                    // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
struct ADroppedInventoryItemPickup_OnPickupHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A33[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x28(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
struct ADroppedInventoryItemPickup_OnPhysicsWake_Params
{
public:
	class UPrimitiveComponent*                   WakingComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
struct ADroppedInventoryItemPickup_OnPhysicsSleep_Params
{
public:
	class UPrimitiveComponent*                   WakingComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
struct UInventoryPartData_GetMonetaryValueModifier_Params
{
public:
	struct FAttributeInitializationData          ReturnValue;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRaritySortValue
struct UInventoryRarityData_GetRaritySortValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
struct UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
struct UInventoryRarityData_GetRarityLootBeamOverride_Params
{
public:
	bool                                         bInventoryHasAFoilPart;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInventoryHasOverpowerLevel;                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A81[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
struct UInventoryRarityData_GetRarityLootBeamHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
struct UInventoryRarityData_GetRarityLootAudioStinger_Params
{
public:
	bool                                         bInventoryHasOverpowerLevel;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseEvent*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
struct UInventoryRarityData_GetRarityLifeSpanType_Params
{
public:
	enum class EDropLifeSpanType                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
struct UInventoryRarityData_GetRarityLifeSpan_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityIdentifier
struct UInventoryRarityData_GetRarityIdentifier_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityFrameName
struct UInventoryRarityData_GetRarityFrameName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityDisplayName
struct UInventoryRarityData_GetRarityDisplayName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityColorOutline
struct UInventoryRarityData_GetRarityColorOutline_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryRarityData.GetRarityColorFX
struct UInventoryRarityData_GetRarityColorFX_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
struct UInventoryRarityData_GetItemScoreRarityModifier_Params
{
public:
	struct FAttributeInitializationData          ReturnValue;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
struct UInventoryRarityData_GetDisplayRarityOutline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.LootableComponent.SpawnAndDropLoot
struct ULootableComponent_SpawnAndDropLoot_Params
{
public:
	class FName                                  SelectedConfigurationName;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.LootableComponent.SpawnAndAttachLoot
struct ULootableComponent_SpawnAndAttachLoot_Params
{
public:
	class FName                                  SelectedConfigurationName;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.LootableComponent.SetBalanceContextOverride
struct ULootableComponent_SetBalanceContextOverride_Params
{
public:
	class AActor*                                NewOverrideContext;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUseForGameStage;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B39[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxInventory.LootableComponent.InitializeLootConfigurations
struct ULootableComponent_InitializeLootConfigurations_Params
{
public:
	class ULootableBalanceData*                  LootableBalanceData;                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.LootableComponent.GetAttachedPickups
struct ULootableComponent_GetAttachedPickups_Params
{
public:
	TArray<class ADroppedInventoryItemPickup*>   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
struct UInventoryBlueprintLibrary_GetPossibleGenericParts_Params
{
public:
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bMustHaveAllTags;                                  // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExcludeCurrentlySelectedParts;                    // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C35[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventoryGenericPartData*>     ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
struct UInventoryBlueprintLibrary_GetInventoryBalanceState_Params
{
public:
	class AActor*                                INVENTORY;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInventoryBalanceStateComponent*       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
struct UInventoryBlueprintLibrary_CreateInventory_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatePickup;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnLocation;                                     // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryBalanceStateInitializationData InitData;                                          // 0x18(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
struct UInventoryBlueprintLibrary_CloneInventory_Params
{
public:
	class AActor*                                SourceInventory;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
struct UInventoryBlueprintLibrary_BuildInventory_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreatePickup;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C94[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SpawnLocation;                                     // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryBalanceStateInitializationData InitData;                                          // 0x18(0x68)(Parm, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryExcludersExpansionData.EnumeratePossibleExcluders
struct UInventoryExcludersExpansionData_EnumeratePossibleExcluders_Params
{
public:
	TArray<class UActorPartData*>                OutPartList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryExcludersExpansionData.EnumeratePossibleDependencies
struct UInventoryExcludersExpansionData_EnumeratePossibleDependencies_Params
{
public:
	TArray<class UActorPartData*>                OutPartList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
struct UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params
{
public:
	uint8                                        PartType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                OutPartList;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
struct IInventoryOwnerInterface_AttachedItemPickedUp_Params
{
public:
	class AInventoryItemPickup*                  InventoryItemPickedUp;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PickedUpBy;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.InventoryPartSetExpansionData.EnumeratePartListForPartType
struct UInventoryPartSetExpansionData_EnumeratePartListForPartType_Params
{
public:
	uint8                                        PartType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E72[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                OutPartList;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
struct UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params
{
public:
	uint8                                        PartType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                OutPartList;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
struct ULootFunctionLibrary_SpawnItemsRaw_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UItemPoolListData*>             ItemPoolLists;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FItemPoolInfo>                 ExtraItemPools;                                    // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        GameStage;                                         // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x2C(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x38(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InitialVelocity;                                   // 0x44(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


